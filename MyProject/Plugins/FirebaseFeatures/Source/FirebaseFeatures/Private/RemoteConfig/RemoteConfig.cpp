// Copyright Pandores Marketplace 2021. All Rights Reserved.


#include "RemoteConfig/RemoteConfig.h"

THIRD_PARTY_INCLUDES_START
#	include "firebase/remote_config.h"
THIRD_PARTY_INCLUDES_END

#include "FirebaseFeatures.h"

#include "Async/Async.h"

void UFirebaseRemoteConfig::Terminate()
{
	firebase::remote_config::Terminate();
}

#if PLATFORM_ANDROID
void UFirebaseRemoteConfig::SetDefaults(const int32 DefaultsResourceId)
{
	firebase::remote_config::SetDefaults(DefaultsResourceId);
}
#endif // PLATFORM_ANDROID

void UFirebaseRemoteConfig::SetDefaultsWithVariant(const TArray<FFirebaseConfigKeyValueVariant>& Defaults)
{
	TArray<firebase::remote_config::ConfigKeyValueVariant> RawDefaults;
	RawDefaults.AddUninitialized(Defaults.Num());

	// These should outlive SetDefaults call. TCHAR_TO_UTF8 macro can't achieve that.
	TArray<FTCHARToUTF8> Converters;
	Converters.Reserve(Defaults.Num());

	for (int32 i = 0; i < Defaults.Num(); ++i)
	{
		RawDefaults[i].key = Converters.Add_GetRef(FTCHARToUTF8(*Defaults[i].Key)).Get();
		RawDefaults[i].value = Defaults[i].Value;
	}

	firebase::remote_config::SetDefaults(RawDefaults.GetData(), RawDefaults.Num());
}

void UFirebaseRemoteConfig::SetDefaults(const TArray<FFirebaseConfigKeyValue>& Defaults)
{
	TArray<firebase::remote_config::ConfigKeyValue> RawDefaults;
	RawDefaults.AddUninitialized(Defaults.Num());

	// These should outlive SetDefaults call. TCHAR_TO_UTF8 macro can't achieve that.
	TArray<FTCHARToUTF8> Converters;
	Converters.Reserve(Defaults.Num() * 2);

	for (int32 i = 0; i < Defaults.Num(); ++i)
	{
		RawDefaults[i].key   = Converters.Add_GetRef(FTCHARToUTF8(*Defaults[i].Key)).Get();
		RawDefaults[i].value = Converters.Add_GetRef(FTCHARToUTF8(*Defaults[i].Value)).Get();
	}

	firebase::remote_config::SetDefaults(RawDefaults.GetData(), RawDefaults.Num());
}

FString UFirebaseRemoteConfig::GetConfigSetting(EFirebaseConfigSetting Setting)
{
	return UTF8_TO_TCHAR(firebase::remote_config::GetConfigSetting((firebase::remote_config::ConfigSetting)Setting).c_str());
}

void UFirebaseRemoteConfig::SetConfigSetting(EFirebaseConfigSetting setting, const FString& Value)
{
	firebase::remote_config::SetConfigSetting(
		(firebase::remote_config::ConfigSetting)setting, TCHAR_TO_UTF8(*Value));
}

bool UFirebaseRemoteConfig::GetBoolean(const FString& Key)
{
	return firebase::remote_config::GetBoolean(TCHAR_TO_UTF8(*Key));
}

bool UFirebaseRemoteConfig::GetBooleanWithInfo(const FString& Key, FFirebaseValueInfo& Info)
{
	firebase::remote_config::ValueInfo RawInfo;

	RawInfo.conversion_successful	= Info.bConversionSuccessful;
	RawInfo.source					= (firebase::remote_config::ValueSource)Info.Source;

	return firebase::remote_config::GetBoolean(TCHAR_TO_UTF8(*Key), &RawInfo);
}

uint8 UFirebaseRemoteConfig::GetByte(const FString& Key)
{
	return (uint8)GetInt64(Key);
}

int32 UFirebaseRemoteConfig::GetInt32(const FString& Key)
{
	return (int32)GetInt64(Key);
}

int64 UFirebaseRemoteConfig::GetInt64(const FString& Key)
{
	return firebase::remote_config::GetLong(TCHAR_TO_UTF8(*Key));
}

int64 UFirebaseRemoteConfig::GetInt64WithInfo(const FString& Key, FFirebaseValueInfo& Info)
{
	firebase::remote_config::ValueInfo RawInfo;

	RawInfo.conversion_successful = Info.bConversionSuccessful;
	RawInfo.source = (firebase::remote_config::ValueSource)Info.Source;

	return firebase::remote_config::GetLong(TCHAR_TO_UTF8(*Key), &RawInfo);
}

float UFirebaseRemoteConfig::GetFloat(const FString& Key)
{
	return (float)firebase::remote_config::GetDouble(TCHAR_TO_UTF8(*Key));
}

float UFirebaseRemoteConfig::GetFloatWithInfo(const FString& Key, FFirebaseValueInfo& Info)
{
	firebase::remote_config::ValueInfo RawInfo;

	RawInfo.conversion_successful = Info.bConversionSuccessful;
	RawInfo.source = (firebase::remote_config::ValueSource)Info.Source;

	return (float)firebase::remote_config::GetDouble(TCHAR_TO_UTF8(*Key), &RawInfo);
}

FString UFirebaseRemoteConfig::GetString(const FString& Key)
{
	return UTF8_TO_TCHAR(firebase::remote_config::GetString(TCHAR_TO_UTF8(*Key)).c_str());
}

FString UFirebaseRemoteConfig::GetStringWithInfo(const FString& Key, FFirebaseValueInfo& Info)
{
	firebase::remote_config::ValueInfo RawInfo;

	RawInfo.conversion_successful = Info.bConversionSuccessful;
	RawInfo.source = (firebase::remote_config::ValueSource)Info.Source;

	return UTF8_TO_TCHAR(firebase::remote_config::GetString(TCHAR_TO_UTF8(*Key), &RawInfo).c_str());
}

TArray<uint8> UFirebaseRemoteConfig::GetData(const FString& Key)
{
	const auto Data = firebase::remote_config::GetData(TCHAR_TO_UTF8(*Key));

	return TArray<uint8>(Data.data(), Data.size());
}

TArray<uint8> UFirebaseRemoteConfig::GetDataWithInfo(const FString& Key, FFirebaseValueInfo& Info)
{
	firebase::remote_config::ValueInfo RawInfo;

	RawInfo.conversion_successful = Info.bConversionSuccessful;
	RawInfo.source = (firebase::remote_config::ValueSource)Info.Source;

	const auto Data = firebase::remote_config::GetData(TCHAR_TO_UTF8(*Key), &RawInfo);

	return TArray<uint8>(Data.data(), Data.size());
}

TArray<FString> UFirebaseRemoteConfig::GetKeysByPrefix(const FString& Prefix)
{
	const auto RawData = firebase::remote_config::GetKeysByPrefix(TCHAR_TO_UTF8(*Prefix));
	
	TArray<FString> Data;

	Data.Reserve(RawData.size());
	for (const auto& DataElem : RawData)
	{
		Data.Emplace(UTF8_TO_TCHAR(DataElem.c_str()));
	}

	return Data;
}

TArray<FString> UFirebaseRemoteConfig::GetKeys()
{
	const auto RawKeys = firebase::remote_config::GetKeys();

	TArray<FString> Keys;

	Keys.Reserve(RawKeys.size());
	for (const auto& KeyElem : RawKeys)
	{
		Keys.Emplace(UTF8_TO_TCHAR(KeyElem.c_str()));
	}

	return Keys;
}

void UFirebaseRemoteConfig::Fetch(const FRemoteConfigCallback& Callback)
{
	firebase::remote_config::Fetch().OnCompletion([Callback](const firebase::Future<void>& Future) -> void
	{
		if (Future.error() != 0)
		{
			UE_LOG(LogFirebaseRemoteConfig, Error, TEXT("Failed to fetch remote config: %s."),
				UTF8_TO_TCHAR(Future.error_message()));
		}

		if (Callback.IsBound())
		{
			AsyncTask(ENamedThreads::GameThread, [Callback]() -> void
			{
				Callback.ExecuteIfBound();
			});
		}
	});
}

void UFirebaseRemoteConfig::Fetch(const int64 CacheExpirationInSeconds, const FRemoteConfigCallback& Callback)
{
	firebase::remote_config::Fetch(CacheExpirationInSeconds)
		.OnCompletion([Callback](const firebase::Future<void>& Future) -> void
	{
		if (Future.error() != 0)
		{
			UE_LOG(LogFirebaseRemoteConfig, Error, TEXT("Failed to fetch remote config: %s."),
				UTF8_TO_TCHAR(Future.error_message()));
		}

		if (Callback.IsBound())
		{
			AsyncTask(ENamedThreads::GameThread, [Callback]() -> void
			{
				Callback.ExecuteIfBound();
			});
		}
	});
}

bool UFirebaseRemoteConfig::ActivateFetched()
{
	return firebase::remote_config::ActivateFetched();
}

FFirebaseConfigInfo UFirebaseRemoteConfig::GetInfo()
{
	FFirebaseConfigInfo ConfigInfo;

	const auto& RawConfigInfo = firebase::remote_config::GetInfo();

	ConfigInfo.FetchTime				= RawConfigInfo.fetch_time;
	ConfigInfo.LastFetchFailureReason	= (EFirebaseFetchFailureReason)RawConfigInfo.last_fetch_failure_reason;
	ConfigInfo.LastFetchStatus			= (EFirebaseLastFetchStatus)RawConfigInfo.last_fetch_status;
	ConfigInfo.ThrottledEndTime			= RawConfigInfo.throttled_end_time;

	return ConfigInfo;
}
