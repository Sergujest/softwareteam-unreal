// Copyright Pandores Marketplace 2021. All Rights Reserved.

#include "FirebaseFeatures.h"

#if WITH_EDITOR
#	include "ISettingsModule.h"
#	include "ISettingsSection.h"
#endif

#if PLATFORM_ANDROID
#	include "Android/AndroidJNI.h"
#	include "Android/AndroidApplication.h"
#endif // PLATFORM_ANDROID

THIRD_PARTY_INCLUDES_START
#	include "firebase/app.h"
#	include "firebase/auth.h"
#	include "firebase/analytics.h"
//#	include "firebase/admob.h"
#	include "firebase/functions.h"
//#	include "firebase/admob/rewarded_video.h"
#	include "firebase/database.h"
#	include "firebase/dynamic_links.h"
#	include "firebase/firestore.h"
#	include "firebase/messaging.h"
#	include "firebase/remote_config.h"
#	include "firebase/storage.h"
THIRD_PARTY_INCLUDES_END

//#include "AdMob/RewardedVideo.h"
#include "FirebaseSdk/FirebaseConfig.h"
#include "Messaging/MessagingLibrary.h"
#include "FirebaseSdk/FirebaseApiConfig.h"

#if FIREBASE_FEATURES_UE_4_25_OR_NEWER
#	include "Analytics/FirebaseAnalyticsProvider.h"
#else // !FIREBASE_FEATURES_UE_4_25_OR_NEWER
#	include "Analytics/FirebaseAnalyticsProvider.h"
#endif // !FIREBASE_FEATURES_UE_4_25_OR_NEWER

#include "Async/Async.h"
#include "Misc/FileHelper.h"
#include "Misc/Paths.h"

#define LOCTEXT_NAMESPACE "FFirebaseFeaturesModule"

DEFINE_LOG_CATEGORY(LogFirebaseSdk);
DEFINE_LOG_CATEGORY(LogFirebaseAuth);
DEFINE_LOG_CATEGORY(LogAdMob);
DEFINE_LOG_CATEGORY(LogFirebaseDatabase);
DEFINE_LOG_CATEGORY(LogFirebaseDynamicLinks);
DEFINE_LOG_CATEGORY(LogFirestore);
DEFINE_LOG_CATEGORY(LogFirebaseFunctions);
DEFINE_LOG_CATEGORY(LogFirebaseMessaging);
DEFINE_LOG_CATEGORY(LogFirebaseRemoteConfig);
DEFINE_LOG_CATEGORY(LogFirebaseStorage);

FOnAuthEvent FFirebaseFeaturesModule::OnAuthStateChangedEvent;
FOnAuthEvent FFirebaseFeaturesModule::OnIdTokenChangedEvent;

FOnDynamicLinkReceived    FFirebaseFeaturesModule::OnDynamicLinkReceivedEvent;
FOnFirebaseSDKInitialized FFirebaseFeaturesModule::OnFirebaseSDKInitialized;

bool FFirebaseFeaturesModule::bIsSDKInitialized = false;

#define InitFirebaseModule(ModuleName)											\
	if (Config->bEnable ## ModuleName)											\
	{																			\
		Init ## ModuleName();													\
	}																			\
	else																		\
	{																			\
		UE_LOG(LogFirebaseSdk, Log,												\
			TEXT("Firebase module `%s` is disabled. Skipping initialization."), \
			TEXT(#ModuleName));													\
	}
	

class FDynamicLinksListener final 
#if WITH_FIREBASE_DYNAMIC_LINKS
	: public firebase::dynamic_links::Listener
#endif // WITH_FIREBASE_DYNAMIC_LINKS
{
public:
#if WITH_FIREBASE_DYNAMIC_LINKS
	void OnDynamicLinkReceived(const firebase::dynamic_links::DynamicLink* dynamic_link) override final
	{
		FString URL = UTF8_TO_TCHAR(dynamic_link->url.c_str());
		const ELinkMatchStrength Strength = (ELinkMatchStrength)dynamic_link->match_strength;

		UE_LOG(LogFirebaseDynamicLinks, Log, 
			TEXT("Dynamic link received. URL: %s."), *URL);

		AsyncTask(ENamedThreads::GameThread, [URL = MoveTemp(URL), Strength]() -> void
		{
			FFirebaseFeaturesModule::OnDynamicLinkReceived().Broadcast(URL, Strength);
		});
	}
#endif // WITH_FIREBASE_DYNAMIC_LINKS
};

class FAuthStateListener final : public firebase::auth::AuthStateListener
{
public:
	virtual ~FAuthStateListener()
	{
	}

	virtual void OnAuthStateChanged(firebase::auth::Auth* auth) override
	{
		UE_LOG(LogFirebaseAuth, Log, TEXT("Auth state has changed."));

		AsyncTask(ENamedThreads::GameThread, []() -> void
		{
			FFirebaseFeaturesModule::OnAuthStateChanged().Broadcast();
		});
	}		
};

class FIdTokenListener final : public firebase::auth::IdTokenListener
{
public:
	virtual ~FIdTokenListener()
	{
	}

	virtual void OnIdTokenChanged(firebase::auth::Auth* auth) override
	{
		UE_LOG(LogFirebaseAuth, Log, TEXT("ID token has changed."));

		AsyncTask(ENamedThreads::GameThread, []() -> void
		{
			FFirebaseFeaturesModule::OnIdTokenChanged().Broadcast();
		});
	}
};

class FMessagingListener final 
#if WITH_FIREBASE_MESSAGING
	: public firebase::messaging::Listener 
#endif // WITH_FIREBASE_MESSAGING
{
public:
	virtual ~FMessagingListener()
	{

	}
#if WITH_FIREBASE_MESSAGING
	virtual void OnMessage(const firebase::messaging::Message& message) override
	{
		UE_LOG(LogFirebaseMessaging, Log, TEXT("New message FCM message received."));
		
		AsyncTask(ENamedThreads::GameThread, [Message = FFirebaseMessage(&message)]() mutable -> void
		{
			FFirebaseMessagingLibrary::CachedLastMessage = MoveTemp(Message);
			FFirebaseMessagingLibrary::OnMessage().Broadcast(FFirebaseMessagingLibrary::CachedLastMessage);
		});
	}

	virtual void OnTokenReceived(const char* token) override
	{
		UE_LOG(LogFirebaseMessaging, Log, TEXT("Firebase Cloud Messaging token received."));
		
		AsyncTask(ENamedThreads::GameThread, [Token = FString(UTF8_TO_TCHAR(token))]() -> void
		{
			FFirebaseMessagingLibrary::CachedFirebaseCloudMessagingToken = Token;
			FFirebaseMessagingLibrary::OnTokenReceived().Broadcast(Token);
		});
	}
#endif // WITH_FIREBASE_MESSAGING
};


FFirebaseFeaturesModule::FFirebaseFeaturesModule()
{

}

FFirebaseFeaturesModule::~FFirebaseFeaturesModule()
{

}

void FFirebaseFeaturesModule::StartupModule()
{
#if WITH_EDITOR
	// Register settings
	ISettingsModule* const SettingsModule = FModuleManager::GetModulePtr<ISettingsModule>(TEXT("Settings"));

	if (SettingsModule)
	{
		ISettingsSectionPtr SettingsSection = SettingsModule->RegisterSettings("Project", "Plugins", TEXT("Firebase Features"),
			LOCTEXT("FirebaseFeaturesName", "Firebase Features"),
			LOCTEXT("FirebaseFeaturesSettingsDescription", "Configure the Firebase Features plugin."),
			GetMutableDefault<UFirebaseConfig>()
		);

		if (SettingsSection.IsValid())
		{
			SettingsSection->OnModified().BindRaw(this, &FFirebaseFeaturesModule::HandleSettingsSaved);
		}
	}

#endif // WITH_EDITOR

#if WITH_EDITOR
	{
		const auto RemoveCharFromString = [](FString& String, TCHAR Char)
		{
			const int32 StringLength = String.Len();
			if (StringLength == 0)
			{
				return;
			}

			TCHAR* RawData = String.GetCharArray().GetData();
			int32 CopyToIndex = 0;
			for (int32 CopyFromIndex = 0; CopyFromIndex < StringLength; ++CopyFromIndex)
			{
				if (RawData[CopyFromIndex] != Char)
				{	// Copy any character OTHER than char.
					RawData[CopyToIndex] = RawData[CopyFromIndex];
					++CopyToIndex;
				}
			}

			// Copy null-terminating character.
			if (CopyToIndex <= StringLength)
			{
				RawData[CopyToIndex] = '\0';
				String.GetCharArray().SetNum(CopyToIndex + 1, false);
			}
		};

		const FString ServicesLocation = GetServicesLocation();

		if (FPaths::FileExists(ServicesLocation))
		{
			UFirebaseApiConfig* const Config = GetMutableDefault<UFirebaseApiConfig>();
			FFileHelper::LoadFileToString(Config->GoogleServicesJson, *ServicesLocation);

			RemoveCharFromString(Config->GoogleServicesJson, TEXT(' '));
			RemoveCharFromString(Config->GoogleServicesJson, TEXT('\n'));

			Config->UpdateDefaultConfigFile();
			Config->SaveConfig();

			UE_LOG(LogFirebaseSdk, Log, TEXT("Fetched google-services.json."));
		}
	}
#endif

#if WITH_EDITOR
	if (IsCooking())
	{
		UE_LOG(LogFirebaseSdk, Log, TEXT("Cooking detected. Skipping Firebase initialization."));
	}
	else
#endif
	{
		// We call it directly instead of GetApp() to avoid a call to firebase::app::GetInstance()
		// which logs a warning on some platforms when the app is not created yet.
		CreateApp();

		firebase::App* const FirebaseApp = GetApp();

		ensureMsgf(FirebaseApp != nullptr, TEXT("Failed to create Firebase Application. Make sure the google-services.json file exists and is valid."));

		if (FirebaseApp)
		{
			InitializeFirebaseComponents();
		}
		else
		{
			UE_LOG(LogFirebaseSdk, Error, TEXT("Skipped Firebase initializations as the creation of an app failed."));
		}
	}
}

void FFirebaseFeaturesModule::ShutdownModule()
{
#if WITH_EDITOR
	// Unregister settings
	ISettingsModule* const SettingsModule = FModuleManager::GetModulePtr<ISettingsModule>("Settings");

	if (SettingsModule)
	{
		SettingsModule->UnregisterSettings(TEXT("Project"), TEXT("Plugins"), TEXT("Firebase Features"));
	}
#endif // WITH_EDITOR

#if WITH_EDITOR
	if (IsCooking())
	{
		UE_LOG(LogFirebaseSdk, Log, TEXT("Cooking detected. Skipping Firebase cleanup."));
	}
	else
#endif
	{
#if WITH_FIREBASE_ADMOB && (PLATFORM_ANDROID || PLATFORM_IOS)
		firebase::analytics::Terminate();
		// firebase::admob::rewarded_video::Destroy();
		// firebase::admob::Terminate();
#endif // WITH_FIREBASE_ADMOB

#if WITH_FIREBASE_DYNAMIC_LINKS
		firebase::dynamic_links::Terminate();
#endif // WITH_FIREBASE_DYNAMIC_LINKS

#if WITH_FIREBASE_MESSAGING
		firebase::messaging::Terminate();
#endif // WITH_FIREBASE_MESSAGING

#if WITH_FIREBASE_REMOTE_CONFIG
		firebase::remote_config::Terminate();
#endif // WITH_FIREBASE_REMOTE_CONFIG

		if (firebase::App::GetInstance())
		{
			UE_LOG(LogFirebaseSdk, Log, TEXT("Firebase App destroyed."));
			delete firebase::App::GetInstance();
		}
	}
}


bool FFirebaseFeaturesModule::IsFirebaseSDKInitialized()
{
	return bIsSDKInitialized;
}

bool FFirebaseFeaturesModule::HandleSettingsSaved()
{
	GetMutableDefault<UFirebaseConfig>()->UpdateDefaultConfigFile();
	return true;
}

#if FIREBASE_FEATURES_UE_4_25_OR_NEWER
TSharedPtr<IAnalyticsProvider> FFirebaseFeaturesModule::CreateAnalyticsProvider(const FAnalyticsProviderConfigurationDelegate& GetConfigValue) const
{
	return AnalyticsProvider;
}
#endif // FIREBASE_FEATURES_UE_4_25_OR_NEWER

void FFirebaseFeaturesModule::InitializeFirebaseComponents()
{
	// We use it in each init, so we check it here instead of checking it
	// every time we access it.
	check(firebase::App::GetInstance() != nullptr);

	const UFirebaseConfig* const Config = UFirebaseConfig::Get();

	InitAuth();
	
	InitFirebaseModule(Analytics);
	// InitFirebaseModule(AdMob);
	InitFirebaseModule(Database);
	InitFirebaseModule(Firestore);
	InitFirebaseModule(Messaging);
	InitFirebaseModule(Storage);
	InitFirebaseModule(Functions);
	InitFirebaseModule(RemoteConfig);

	InitDynamicLinks();

	bIsSDKInitialized = true;

	OnFirebaseSDKInitialized.Broadcast();
}

void FFirebaseFeaturesModule::InitStorage()
{
#if WITH_FIREBASE_STORAGE
	using namespace firebase;

	UE_LOG(LogFirebaseStorage, Log, TEXT("Initializing Firebase Storage..."));

	InitResult Result = InitResult::kInitResultFailedMissingDependency;

	storage::Storage::GetInstance(GetApp(), &Result);

	switch (Result)
	{
	case InitResult::kInitResultSuccess:
		UE_LOG(LogFirebaseStorage, Log, TEXT("Firebase Storage initialized."));
		break;
	case InitResult::kInitResultFailedMissingDependency:
		UE_LOG(LogFirebaseStorage, Error, TEXT("Firebase Storage initialization failed: InitResultFailedMisingDependency."));
		break;
	default:
		UE_LOG(LogFirebaseStorage, Warning, TEXT("Firebase Storage initialization unknown result: %d."), (int32)Result);
	};

#endif // WITH_FIREBASE_STORAGE
}

void FFirebaseFeaturesModule::InitRemoteConfig()
{
#if WITH_FIREBASE_REMOTE_CONFIG
	using namespace firebase;
	
	UE_LOG(LogFirebaseRemoteConfig, Log, TEXT("Initializing Firebase Remote Config..."));

	const InitResult Result = firebase::remote_config::Initialize(*GetApp());

	switch (Result)
	{
	case InitResult::kInitResultSuccess:
		UE_LOG(LogFirebaseRemoteConfig, Log, TEXT("Firebase Remote Config initialized."));
		break;
	case InitResult::kInitResultFailedMissingDependency:
		UE_LOG(LogFirebaseRemoteConfig, Error, TEXT("Firebase Remote Config initialization failed: InitResultFailedMisingDependency."));
		break;
	default:
		UE_LOG(LogFirebaseRemoteConfig, Warning, TEXT("Firebase Remote Config initialization unknown result: %d."), (int32)Result);
	};
#endif // WITH_FIREBASE_REMOTE_CONFIG
}

void FFirebaseFeaturesModule::InitMessaging()
{
#if WITH_FIREBASE_MESSAGING
	using namespace firebase;

	UE_LOG(LogFirebaseMessaging, Log, TEXT("Initializing Firebase Messaging..."));

	MessagingListener.Reset(new FMessagingListener());

	messaging::SetTokenRegistrationOnInitEnabled(true);

	const InitResult Result = messaging::Initialize(*GetApp(), MessagingListener.Get());
	
	switch (Result)
	{
	case InitResult::kInitResultSuccess:
		UE_LOG(LogFirebaseMessaging, Log, TEXT("Firebase Messaging initialized."));
		break;
	case InitResult::kInitResultFailedMissingDependency:
		UE_LOG(LogFirebaseMessaging, Error, TEXT("Firebase Messaging initialization failed: InitResultFailedMisingDependency."));
		break;
	default:
		UE_LOG(LogFirebaseMessaging, Warning, TEXT("Firebase Messaging initialization unknown result: %d."), (int32)Result);
	}
#endif // WITH_FIREBASE_MESSAGING
}

void FFirebaseFeaturesModule::InitFunctions()
{
	UE_LOG(LogFirebaseFunctions, Log, TEXT("Initializing Firebase Functions..."));

	firebase::InitResult Result = firebase::InitResult::kInitResultFailedMissingDependency;
	
	firebase::functions::Functions* const Instance = firebase::functions::Functions::GetInstance(GetApp(), &Result);

	switch (Result)
	{
	case firebase::InitResult::kInitResultSuccess:
		UE_LOG(LogFirebaseFunctions, Log, TEXT("Firebase Functions initialized."));
		break;
	case firebase::InitResult::kInitResultFailedMissingDependency:
		UE_LOG(LogFirebaseFunctions, Error, TEXT("Firebase Functions initialization failed: InitResultFailedMisingDependency."));
		break;
	default:
		UE_LOG(LogFirebaseFunctions, Warning, TEXT("Firebase Functions initialization unknown result: %d."), (int32)Result);
	};	
}

void FFirebaseFeaturesModule::InitFirestore()
{
#if WITH_FIREBASE_FIRESTORE
	UE_LOG(LogFirestore, Log, TEXT("Initializing Firestore."));

	firebase::InitResult Result = firebase::InitResult::kInitResultFailedMissingDependency;

	firebase::firestore::Firestore* const Firestore = firebase::firestore::Firestore::GetInstance(GetApp(), &Result);

	switch (Result)
	{
	case firebase::InitResult::kInitResultSuccess:
		UE_LOG(LogFirestore, Log, TEXT("Firestore initialized."));
		break;
	case firebase::InitResult::kInitResultFailedMissingDependency:
		UE_LOG(LogFirestore, Error, TEXT("Firestore initialization failed: InitResultFailedMisingDependency."));
		break;
	default:
		UE_LOG(LogFirestore, Warning, TEXT("Firestore initialization unknown result: %d."), (int32)Result);
	};	
#else
	UE_LOG(LogFirestore, Log, TEXT("Firestore is disabled, skipping initialization."));
#endif // WITH_FIREBASE_FIRESTORE
}

void FFirebaseFeaturesModule::InitAnalytics()
{
	UE_LOG(LogFirebaseAnalytics, Log, TEXT("Initializing Firebase Analytics."));

	firebase::analytics::Initialize(*GetApp());

	AnalyticsProvider = MakeShared<FFirebaseAnalyticsProvider>();

	UE_LOG(LogFirebaseAnalytics, Log, TEXT("Firebase Analytics initialized."));
}

void FFirebaseFeaturesModule::InitAuth()
{
	UE_LOG(LogFirebaseAuth, Log, TEXT("Initializing Firebase Auth..."));

	firebase::InitResult Result = firebase::InitResult::kInitResultFailedMissingDependency;

	firebase::auth::Auth* const Auth = firebase::auth::Auth::GetAuth(GetApp());

	ensureMsgf(Auth != nullptr, TEXT("Failed to create default Auth object."));

	if (Auth != nullptr)
	{
		AuthListener	.Reset(new FAuthStateListener());
		IdTokenListener	.Reset(new FIdTokenListener  ());

		Auth->AddAuthStateListener(AuthListener   .Get());
		Auth->AddIdTokenListener  (IdTokenListener.Get());

		UE_LOG(LogFirebaseAuth, Log, TEXT("Firebase Auth initialized."));
	}
}

// void FFirebaseFeaturesModule::InitAdMob()
// {
// #if WITH_FIREBASE_ADMOB && (PLATFORM_IOS || PLATFORM_ANDROID)
// 	UE_LOG(LogAdMob, Log, TEXT("Initializing AdMob..."));

// 	const firebase::InitResult Result = firebase::admob::Initialize(*GetApp());

// 	switch (Result)
// 	{
// 	case firebase::InitResult::kInitResultSuccess:
// 		UE_LOG(LogAdMob, Log, TEXT("AdMob initialized."));
// 		break;
// 	case firebase::InitResult::kInitResultFailedMissingDependency:
// 		UE_LOG(LogAdMob, Error, TEXT("AdMob initialization failed: InitResultFailedMisingDependency."));
// 		break;
// 	default:
// 		UE_LOG(LogAdMob, Warning, TEXT("AdMob initialization unknown result: %d."), (int32)Result);
// 	};

// 	if (Result == firebase::InitResult::kInitResultSuccess)
// 	{
// 		UE_LOG(LogAdMob, Log, TEXT("Initializing AdMob rewarded video..."));
// 		firebase::admob::rewarded_video::Initialize().OnCompletion
// 		(
// 			[](const firebase::Future<void>& Future) -> void
// 			{
// 				if (Future.error() != firebase::admob::AdMobError::kAdMobErrorNone)
// 				{
// 					UE_LOG(LogAdMob, Error, TEXT("Failed to initialize AdMob rewarded video. Error code: %d."), Future.error());
// 				}
// 				else
// 				{
// 					UE_LOG(LogAdMob, Log, TEXT("AdMob rewarded video initialized."));
// 					FRewardedVideo::SetListener();
// 				}
// 			}
// 		);
// 	}
// #endif // WITH_FIREBASE_ADMOB
// }

void FFirebaseFeaturesModule::InitDynamicLinks()
{
#if WITH_FIREBASE_DYNAMIC_LINKS
	UE_LOG(LogFirebaseDynamicLinks, Log, TEXT("Initializing Firebase Dynamic Links..."));

	DynamicLinkListener.Reset(new FDynamicLinksListener());

	firebase::InitResult Result = firebase::dynamic_links::Initialize(
		*firebase::App::GetInstance(), DynamicLinkListener.Get());

	switch (Result)
	{
	case firebase::InitResult::kInitResultSuccess:
		UE_LOG(LogFirebaseDynamicLinks, Log, TEXT("Firebase Dynamic Links initialized."));
		break;
	default:
		UE_LOG(LogFirebaseDynamicLinks, Warning, TEXT("Failed to initialize Firebase Dynamic Links. Code: %d."), (int32)Result);
	}
#endif // WITH_FIREBASE_DYNAMIC_LINKS
}

void FFirebaseFeaturesModule::InitDatabase()
{
	UE_LOG(LogFirebaseDatabase, Log, TEXT("Initializing Firebase Database..."));

	firebase::InitResult Result = firebase::InitResult::kInitResultFailedMissingDependency;

	firebase::database::Database* const Database =
		firebase::database::Database::GetInstance(GetApp(), &Result);

	switch (Result)
	{
	case firebase::InitResult::kInitResultSuccess:
		Database->set_log_level(firebase::LogLevel::kLogLevelVerbose);
		UE_LOG(LogFirebaseDatabase, Log, TEXT("Firebase Database initialized."));
		break;
	case firebase::InitResult::kInitResultFailedMissingDependency:
		UE_LOG(LogFirebaseDatabase, Error, TEXT("Failed to initialize Firebase Datase. Code: kInitResultFailedMissingDependency."));
		break;
	default:
		UE_LOG(LogFirebaseDatabase, Error, TEXT("Failed to initialize Firebase Datase. Unknown code %d."), (int32)Result);
		break;
	}
}

firebase::App* FFirebaseFeaturesModule::GetApp()
{
	if (!firebase::App::GetInstance())
	{
		CreateApp();
	}

	return firebase::App::GetInstance();
}

void FFirebaseFeaturesModule::CreateApp()
{
#if PLATFORM_ANDROID
	firebase::App::Create(FAndroidApplication::GetJavaEnv(), FJavaWrapper::GameActivityThis);
#elif PLATFORM_IOS
	firebase::App::Create();
#else // Desktop
	FString JsonContent;

	{ // Load it from config file.
		UFirebaseApiConfig* const Config = NewObject<UFirebaseApiConfig>();

		Config->LoadConfig();

		if (!Config->GoogleServicesJson.IsEmpty())
		{
			JsonContent = MoveTemp(Config->GoogleServicesJson);
			UE_LOG(LogFirebaseSdk, Log, TEXT("google-services.json content taken from configuration."));
		}
		else
		{
			UE_LOG(LogFirebaseSdk, Warning, TEXT("google-services.json wasn't loaded. Loading it now."));
		}
	}

	// Wasn't in config file, load it from disk.
	if (JsonContent.IsEmpty())
	{
		const FString ServicesLocation = GetServicesLocation();

		if (!FPaths::FileExists(ServicesLocation))
		{
			UE_LOG(LogFirebaseSdk, Error, TEXT("Failed to find google-services.json with path \"%s\". Firebase app creation failed."),
				*FPaths::ConvertRelativePathToFull(ServicesLocation));
			return;
		}
		if (!FFileHelper::LoadFileToString(JsonContent, *ServicesLocation))
		{
			UE_LOG(LogFirebaseSdk, Error, TEXT("Failed to read google-services.json content with path \"%s\"."),
				*FPaths::ConvertRelativePathToFull(ServicesLocation));
			return;
		}
	}

	firebase::AppOptions Options;
	firebase::AppOptions::LoadFromJsonConfig(TCHAR_TO_UTF8(*JsonContent), &Options);
	firebase::App::Create(Options);

	UE_LOG(LogFirebaseSdk, Log, TEXT("New Firebase app created."));
#endif // !PLATFORM_ANDROID && !PLTAFORM_IOS

	if (firebase::App::GetInstance())
	{
		UE_LOG(LogFirebaseSdk, Log, TEXT("Firebase app created is valid."));
	}
	else
	{
		ensureMsgf(false, TEXT("Firebase app created is invalid. Check your google-services.json."));
	}
}

#if WITH_EDITOR
bool FFirebaseFeaturesModule::IsCooking() const
{
	return /* GIsCookerLoadingPackage && */ IsRunningCommandlet();
}
#endif

FString FFirebaseFeaturesModule::GetServicesLocation()
{
	return FPaths::ProjectDir() / TEXT("Services/google-services.json");
}

#undef LOCTEXT_NAMESPACE
#undef InitFirebaseModule

IMPLEMENT_MODULE(FFirebaseFeaturesModule, FirebaseFeatures)

