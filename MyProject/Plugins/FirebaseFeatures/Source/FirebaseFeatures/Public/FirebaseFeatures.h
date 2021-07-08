// Copright Pandores Marketplace 2021. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "FirebaseSdk/FirebaseErrors.h"
#include "Modules/ModuleManager.h"
#include "Launch/Resources/Version.h"

#define FIREBASE_FEATURES_UE_4_25_OR_NEWER ((ENGINE_MAJOR_VERSION == 4 && ENGINE_MINOR_VERSION >= 25) || ENGINE_MAJOR_VERSION > 4)

// Requires at least UE 4.25
#if FIREBASE_FEATURES_UE_4_25_OR_NEWER
#	include "Interfaces/IAnalyticsProviderModule.h"
#endif // FIREBASE_FEATURES_UE_4_25_OR_NEWER

#if PLATFORM_WINDOWS
#	pragma comment(lib, "Userenv.lib")
#	pragma comment(lib, "psapi.lib")
#endif // PLATFORM_WINDOWS

DECLARE_LOG_CATEGORY_EXTERN(LogFirebaseSdk,			 Log, All);
DECLARE_LOG_CATEGORY_EXTERN(LogAdMob,				 Log, All);
DECLARE_LOG_CATEGORY_EXTERN(LogFirebaseAuth,		 Log, All);
DECLARE_LOG_CATEGORY_EXTERN(LogFirebaseDatabase,	 Log, All);
DECLARE_LOG_CATEGORY_EXTERN(LogFirebaseDynamicLinks, Log, All);
DECLARE_LOG_CATEGORY_EXTERN(LogFirebaseFunctions,	 Log, All);
DECLARE_LOG_CATEGORY_EXTERN(LogFirestore,			 Log, All);
DECLARE_LOG_CATEGORY_EXTERN(LogFirebaseMessaging,	 Log, All);
DECLARE_LOG_CATEGORY_EXTERN(LogFirebaseRemoteConfig, Log, All);
DECLARE_LOG_CATEGORY_EXTERN(LogFirebaseStorage,		 Log, All);

#ifndef WITH_FIREBASE_MESSAGING
#	define WITH_FIREBASE_MESSAGING 0
#endif

#ifndef WITH_FIREBASE_ADMOB
#	define WITH_FIREBASE_ADMOB 0
#endif

#ifndef WITH_FIREBASE_FIRESTORE
#	define WITH_FIREBASE_FIRESTORE 0
#endif

#ifndef WITH_FIREBASE_REMOTE_CONFIG
#	define WITH_FIREBASE_REMOTE_CONFIG 0
#endif

#ifndef WITH_FIREBASE_STORAGE
#	define WITH_FIREBASE_STORAGE 0
#endif

#ifndef WITH_FIREBASE_DYNAMIC_LINKS
#	define WITH_FIREBASE_DYNAMIC_LINKS 0
#endif

#ifdef WITH_FIREBASE_ADMOB
#	if WITH_FIREBASE_ADMOB
		// Force disable AdMob on desktop.
#		undef  WITH_FIREBASE_ADMOB
#		define WITH_FIREBASE_ADMOB (PLATFORM_IOS || PLATFORM_ANDROID)
#	endif
#else
#	define WITH_FIREBASE_ADMOB 0
#endif

// Enum describing the strength of a dynamic links match.
UENUM(BlueprintType)
enum class ELinkMatchStrength : uint8
{
	// No match has been achieved
	NoMatch = 0,

	// The match between the Dynamic Link and device is not perfect.  You should
	// not reveal any personal information related to the Dynamic Link.
	WeakMatch,

	// The match between the Dynamic Link and this device has a high confidence,
	// but there is a small possibility of error.
	StrongMatch,

	// The match between the Dynamic Link and the device is exact.  You may
	// safely reveal any personal information related to this Dynamic Link.
	PerfectMatch
};

DECLARE_MULTICAST_DELEGATE(FOnAuthEvent);
DECLARE_MULTICAST_DELEGATE_TwoParams(FOnDynamicLinkReceived, const FString&, const ELinkMatchStrength);
DECLARE_MULTICAST_DELEGATE(FOnFirebaseSDKInitialized);

namespace firebase { class App; };

class FIREBASEFEATURES_API FFirebaseFeaturesModule 
#if FIREBASE_FEATURES_UE_4_25_OR_NEWER
	: public IAnalyticsProviderModule
#else // !FIREBASE_FEATURES_UE_4_25_OR_NEWER
	: public IModuleInterface
#endif // !FIREBASE_FEATURES_UE_4_25_OR_NEWER
{
private:
	friend class UFirebaseAnalyticsLibrary;

public:
	 FFirebaseFeaturesModule();
	~FFirebaseFeaturesModule();

	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
	
	static FORCEINLINE FOnAuthEvent& OnAuthStateChanged()
	{
		return OnAuthStateChangedEvent;
	}

	static FORCEINLINE FOnAuthEvent& OnIdTokenChanged()
	{
		return OnIdTokenChangedEvent;
	}

	static FORCEINLINE FOnDynamicLinkReceived& OnDynamicLinkReceived()
	{
		return OnDynamicLinkReceivedEvent;
	}

	static FORCEINLINE FOnFirebaseSDKInitialized& OnSDKInitialized()
	{
		return OnFirebaseSDKInitialized;
	}

	static bool IsFirebaseSDKInitialized();

private:
	bool HandleSettingsSaved();

#if FIREBASE_FEATURES_UE_4_25_OR_NEWER
	virtual TSharedPtr<IAnalyticsProvider> CreateAnalyticsProvider(
		const FAnalyticsProviderConfigurationDelegate& GetConfigValue) const override;
#endif // FIREBASE_FEATURES_UE_4_25_OR_NEWER

#if WITH_EDITOR
	bool IsCooking() const;
#endif // WITH_EDITOR

private:
	void InitializeFirebaseComponents();

	void InitAnalytics();
	void InitAdMob();
	void InitAuth();
	void InitDatabase();
	void InitDynamicLinks();
	void InitFirestore();
	void InitFunctions();
	void InitMessaging();
	void InitRemoteConfig();
	void InitStorage();

	static firebase::App* GetApp();
	static void CreateApp();

	static FString GetServicesLocation();

private:
	TUniquePtr<class FAuthStateListener>	AuthListener;
	TUniquePtr<class FIdTokenListener>		IdTokenListener;
	TUniquePtr<class FDynamicLinksListener> DynamicLinkListener;
	TUniquePtr<class FMessagingListener>	MessagingListener;

	TSharedPtr<class FFirebaseAnalyticsProvider> AnalyticsProvider;


	static FOnAuthEvent OnAuthStateChangedEvent;
	static FOnAuthEvent OnIdTokenChangedEvent;

	static FOnDynamicLinkReceived OnDynamicLinkReceivedEvent;

	static FOnFirebaseSDKInitialized OnFirebaseSDKInitialized;

	static bool bIsSDKInitialized;
};

