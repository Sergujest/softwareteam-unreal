// Copyright Pandores Marketplace 2021. All Rights Reserved.

#include "Analytics/FirebaseAnalyticsLibrary.h"

#include "FirebaseFeatures.h"

#if FIREBASE_FEATURES_UE_4_25_OR_NEWER
#	include "Analytics.h"
#	include "Analytics/FirebaseAnalyticsProvider.h"
#else // !FIREBASE_FEATURES_UE_4_25_OR_NEWER
#	include "Analytics/FirebaseAnalyticsProvider.h"
#endif // !FIREBASE_FEATURES_UE_4_25_OR_NEWER

THIRD_PARTY_INCLUDES_START
#	include "firebase/analytics.h"
THIRD_PARTY_INCLUDES_END

#include "Async/Async.h"

// Prevents crash when trying to access Analytics without having started the session.
#define FIREBASE_ANALYTICS_GUARD_SESSION_STARTED(...) do									\
{																							\
	if (!GetAnalyticsProvider()->HasAnalyticSessionStarted())								\
	{																						\
		UE_LOG(LogFirebaseAnalytics, Error,													\
			TEXT("Firebase Analytics has not been started. Start it before using it."));	\
		return __VA_ARGS__;																	\
	}																						\
} while(0)

TSharedPtr<FFirebaseAnalyticsProvider> UFirebaseAnalyticsLibrary::GetAnalyticsProvider()
{
	return FModuleManager::Get().GetModuleChecked<FFirebaseFeaturesModule>("FirebaseFeatures").AnalyticsProvider;
}

bool UFirebaseAnalyticsLibrary::StartSession()
{
#if FIREBASE_FEATURES_UE_4_25_OR_NEWER
	TSharedPtr<IAnalyticsProvider> Provider = FAnalytics::Get().GetDefaultConfiguredProvider();
#else // !FIREBASE_FEATURES_UE_4_25_OR_NEWER
	TSharedPtr<FFirebaseAnalyticsProvider> Provider = GetAnalyticsProvider();
#endif // !FIREBASE_FEATURES_UE_4_25_OR_NEWER

	if (!Provider.IsValid())
	{
		UE_LOG(LogFirebaseAnalytics, Error, TEXT("Unreal Engine's Analyse Provider is not set. Sets `ProviderModuleName` to `FirebaseAnalytics` in `DefaultEngine.ini`."));
		return false;
	}

	return Provider->StartSession();
}

void UFirebaseAnalyticsLibrary::EndSession()
{
#if FIREBASE_FEATURES_UE_4_25_OR_NEWER
	TSharedPtr<IAnalyticsProvider> Provider = FAnalytics::Get().GetDefaultConfiguredProvider();
#else // !FIREBASE_FEATURES_UE_4_25_OR_NEWER
	TSharedPtr<FFirebaseAnalyticsProvider> Provider = GetAnalyticsProvider();
#endif // !FIREBASE_FEATURES_UE_4_25_OR_NEWER

	if (Provider.IsValid())
	{
		Provider->EndSession();
	}
}

void UFirebaseAnalyticsLibrary::ResetAnalyticsData()
{
	FIREBASE_ANALYTICS_GUARD_SESSION_STARTED();

	firebase::analytics::ResetAnalyticsData();
}

void UFirebaseAnalyticsLibrary::SetAnalyticsCollectionEnabled(const bool bEnabled)
{
	FIREBASE_ANALYTICS_GUARD_SESSION_STARTED();

	firebase::analytics::SetAnalyticsCollectionEnabled(bEnabled);
}

void UFirebaseAnalyticsLibrary::LogEventString(const FString& EventName, const FString& ParameterName, const FString& ParameterValue)
{
	FIREBASE_ANALYTICS_GUARD_SESSION_STARTED();

	firebase::analytics::LogEvent(TCHAR_TO_UTF8(*EventName), TCHAR_TO_UTF8(*ParameterName), TCHAR_TO_UTF8(*ParameterValue));
}

void UFirebaseAnalyticsLibrary::LogEventFloat(const FString& EventName, const FString& ParameterName, const float ParameterValue)
{
	FIREBASE_ANALYTICS_GUARD_SESSION_STARTED();

	firebase::analytics::LogEvent(TCHAR_TO_UTF8(*EventName), TCHAR_TO_UTF8(*ParameterName), ParameterValue);
}

void UFirebaseAnalyticsLibrary::LogEventInt64(const FString& EventName, const FString& ParameterName, const int64 ParameterValue)
{
	FIREBASE_ANALYTICS_GUARD_SESSION_STARTED();

	firebase::analytics::LogEvent(TCHAR_TO_UTF8(*EventName), TCHAR_TO_UTF8(*ParameterName), (int64_t)ParameterValue);
}

void UFirebaseAnalyticsLibrary::LogEventInt32(const FString& EventName, const FString& ParameterName, const int32 ParameterValue)
{
	FIREBASE_ANALYTICS_GUARD_SESSION_STARTED();

	firebase::analytics::LogEvent(TCHAR_TO_UTF8(*EventName), TCHAR_TO_UTF8(*ParameterName), ParameterValue);
}

void UFirebaseAnalyticsLibrary::LogEvent(const FString& EventName)
{
	FIREBASE_ANALYTICS_GUARD_SESSION_STARTED();

	firebase::analytics::LogEvent(TCHAR_TO_UTF8(*EventName));
}

void UFirebaseAnalyticsLibrary::LogEvents(const FString& EventName, const TMap<FString, FString>& Parameters)
{
	FIREBASE_ANALYTICS_GUARD_SESSION_STARTED();

	const int32 ParametersCount = Parameters.Num();

	if (ParametersCount <= 0)
	{
		return;
	}

	firebase::analytics::Parameter* const RawParameters = new firebase::analytics::Parameter[ParametersCount];

	TArray<FTCHARToUTF8> Converters;

	{
		int32 i = 0;

		for (const auto& Parameter : Parameters)
		{
			Converters.Emplace(FTCHARToUTF8((const TCHAR*)*Parameter.Key));
			Converters.Emplace(FTCHARToUTF8((const TCHAR*)*Parameter.Value));

			RawParameters[i] = firebase::analytics::Parameter
			(
				Converters[2 * i    ].Get(),
				Converters[2 * i + 1].Get()
			);

			++i;
		}
	}

	firebase::analytics::LogEvent(TCHAR_TO_UTF8(*EventName), RawParameters, ParametersCount);

	delete[] RawParameters;
}

void UFirebaseAnalyticsLibrary::SetUserProperty(const FString& Name, const FString& Property)
{
	FIREBASE_ANALYTICS_GUARD_SESSION_STARTED();

	firebase::analytics::SetUserProperty(TCHAR_TO_UTF8(*Name), TCHAR_TO_UTF8(*Property));
}

void UFirebaseAnalyticsLibrary::SetUserId(const FString& UserId)
{
	FIREBASE_ANALYTICS_GUARD_SESSION_STARTED();

	firebase::analytics::SetUserId(TCHAR_TO_UTF8(*UserId));
}

void UFirebaseAnalyticsLibrary::SetSessionTimeoutDuration(const int64 Milliseconds)
{
	FIREBASE_ANALYTICS_GUARD_SESSION_STARTED();

	firebase::analytics::SetSessionTimeoutDuration(Milliseconds);
}

void UFirebaseAnalyticsLibrary::SetCurrentScreen(const FString& ScreenName, const FString& ScreenClass)
{
	FIREBASE_ANALYTICS_GUARD_SESSION_STARTED();

	firebase::analytics::SetCurrentScreen(TCHAR_TO_UTF8(*ScreenName), TCHAR_TO_UTF8(*ScreenClass));
}

void UFirebaseAnalyticsLibrary::GetAnalyticsInstanceId(const FFirebaseAnalyticsStringCallback& Callback)
{
	FIREBASE_ANALYTICS_GUARD_SESSION_STARTED((void)Callback.ExecuteIfBound(0, TEXT("")));

	firebase::analytics::GetAnalyticsInstanceId()
	
	.OnCompletion([Callback](const firebase::Future<std::string>& _Future) -> void
	{
		FString InstanceId;

		const int32 Error = _Future.error();

		if (Error)
		{
			UE_LOG(LogFirebaseAnalytics, Error, TEXT("Failed to get analytics instance ID. Reason: %s"), TCHAR_TO_UTF8(_Future.error_message()));
		}
		else if (_Future.result())
		{
			InstanceId = UTF8_TO_TCHAR(_Future.result()->c_str());
		}

		AsyncTask(ENamedThreads::GameThread, [Callback, _InstanceId = MoveTemp(InstanceId), Error]() -> void
		{
			Callback.ExecuteIfBound(Error, _InstanceId);
		});
	});
}


#undef FIREBASE_ANALYTICS_GUARD_SESSION_STARTED
