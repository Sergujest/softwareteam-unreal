// Copyright Pandores Marketplace 2021. All Rights Reserved.
#include "Database/Database.h"

THIRD_PARTY_INCLUDES_START
#	include "firebase/database.h"
THIRD_PARTY_INCLUDES_END

#include "Database/DatabaseReference.h"

#include "FirebaseFeatures.h"

#if !UE_BUILD_SHIPPING && (PLATFORM_WINDOWS || PLATFORM_MAC || PLATFORM_LINUX)
#	include "Misc/FileHelper.h"
#	include "Misc/Paths.h"
#	include "Misc/MessageDialog.h"
#endif

UDatabase::TDatabase* UDatabase::GetDatabase(const FString& Url)
{
	firebase::InitResult Result = firebase::InitResult::kInitResultFailedMissingDependency;

	TDatabase* const Database = Url.IsEmpty() ?
		firebase::database::Database::GetInstance(firebase::App::GetInstance(), &Result) :
		firebase::database::Database::GetInstance(firebase::App::GetInstance(), TCHAR_TO_UTF8(*Url), &Result);
		
	ensureMsgf(Database != nullptr, TEXT("Failed to get a valid Firebase Data object for URL \"%s\"."), *Url);
	ensure(Result == firebase::InitResult::kInitResultSuccess);

	return Database;
}

UDatabaseReference* UDatabase::GetReference() const
{
	TDatabase* const Database = GetDatabase();

	if (!Database)
	{
		UE_LOG(LogFirebaseDatabase, Warning, TEXT("Failed to get database."));
		return nullptr;
	}

	TDatabaseReference RawReference = Database->GetReference();

	UDatabaseReference* const Reference = NewObject<UDatabaseReference>();

	Reference->Reference = RawReference;

	return Reference;
}

UDatabaseReference* UDatabase::GetReferenceFromPath(const FString& Path) const
{
	TDatabase* const Database = GetDatabase();

	if (!Database)
	{
		UE_LOG(LogFirebaseDatabase, Warning, TEXT("Failed to get database."));
		return nullptr;
	}

	UDatabaseReference* const Reference = NewObject<UDatabaseReference>();

	Reference->Reference = Database->GetReference(TCHAR_TO_UTF8(*Path));

	return Reference;
}

UDatabaseReference* UDatabase::GetReferenceFromUrl(const FString& InUrl) const
{
	TDatabase* const Database = GetDatabase();

	if (!Database)
	{
		UE_LOG(LogFirebaseDatabase, Warning, TEXT("Failed to get database."));
		return nullptr;
	}

	UDatabaseReference* const Reference = NewObject<UDatabaseReference>();

	Reference->Reference = Database->GetReferenceFromUrl(TCHAR_TO_UTF8(*InUrl));

	return Reference;
}

UDatabase::TDatabase* UDatabase::GetDatabase() const
{
	return GetDatabase(Url);
}

UDatabase* UDatabase::GetInstance()
{
	// If we use GetInstance() with an out of date google-services.json, the SDK
	// crashes internally as soon as we use it to get or set data. 
	// We make sure that this file contains the correct entry or otherwise, notify
	// the user.
#if !UE_BUILD_SHIPPING && (PLATFORM_WINDOWS || PLATFORM_MAC || PLATFORM_LINUX)

	static enum class EServicesState
	{
		UNKNOWN,
		INVALID,
		VALID
	} ServicesState = EServicesState::UNKNOWN;

	// It's important to note recheck if the test failed.
	// The changes won't take effect until the editor is restarted
	// so checking the actual file is pointless.
	if (ServicesState == EServicesState::UNKNOWN)
	{
		const FString ServicesLocation = FPaths::ConvertRelativePathToFull(FPaths::ProjectDir() / 
			TEXT("Services/google-services.json"));

		FString ServicesContent;
		FFileHelper::LoadFileToString(ServicesContent, *ServicesLocation);

		ServicesState = ServicesContent.Contains(TEXT("\"firebase_url\"")) ? 
			EServicesState::VALID : EServicesState::INVALID;
	}

	if (ServicesState == EServicesState::INVALID)
	{
		const FText AlertTitle = NSLOCTEXT("FirebaseFeatures", "InvalidServicesTitle", "Invalid google-services.json");
		FMessageDialog::Open(EAppMsgType::Ok, NSLOCTEXT("FirebaseFeatures", "InvalidServicesMsg",
			"Your google-services.json is not up to date.\n\n"
			"The Database instance returned from UDatabase::GetInstance() is invalid "
			"and calling any function on it will likely crash your application.\n"
			"Please, update your google-services.json to its latest version or use "
			"UDatabase::GetInstanceFromUrl() with a valid URL.\n\n"
			"You will have to restart the editor after updating the google-services.json "
			"for the changes to have effect.\n\n"
			"This message won't appear in shipping builds and your app will crash."),
			&AlertTitle);

		return nullptr;
	}
#endif

	UDatabase* Database = nullptr;

	TDatabase* RawDatabase = GetDatabase(TEXT(""));
	if (RawDatabase)
	{
		Database = NewObject<UDatabase>();
	}

	return Database;
}

UDatabase* UDatabase::GetInstanceFromUrl(const FString& Url)
{
	UDatabase* Database = nullptr;

	TDatabase* const RawDatabase = GetDatabase(Url);
	if (RawDatabase)
	{
		Database = NewObject<UDatabase>();
		Database->Url = Url;
	}

	return Database;
}

FString UDatabase::GetUrl()
{
	TDatabase* const Database = GetDatabase();
	return Database ? UTF8_TO_TCHAR(GetDatabase()->url()) : TEXT("");
}

void UDatabase::GoOffline()
{
	TDatabase* const Database = GetDatabase();
	if (Database)
	{
		GetDatabase()->GoOffline();
	}
}

void UDatabase::GoOnline()
{
	TDatabase* const Database = GetDatabase();
	if (Database)
	{
		GetDatabase()->GoOnline();
	}
}

void UDatabase::PurgeOutstandingWrites()
{
	TDatabase* const Database = GetDatabase();
	if (Database)
	{
		GetDatabase()->PurgeOutstandingWrites();
	}
}

void UDatabase::SetPersistenceEnabled(const bool bEnabled)
{
	TDatabase* const Database = GetDatabase();
	if (Database)
	{
		GetDatabase()->set_persistence_enabled(bEnabled);
	}
}

void UDatabase::SetLogLevel(const EDatabaseLogLevel DatabaseLogLevel)
{
	TDatabase* const Database = GetDatabase();
	if (Database)
	{
		GetDatabase()->set_log_level((firebase::LogLevel)DatabaseLogLevel);
	}
}
