// Copyright Pandores Marketplace 2021. All Rights Reserved.
#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "FirebaseAnalyticsLibrary.generated.h"

DECLARE_DELEGATE_OneParam(FFirebaseAnalyticsCallback, const int32);
DECLARE_DELEGATE_TwoParams(FFirebaseAnalyticsStringCallback, const int32, const FString&);

UCLASS()
class FIREBASEFEATURES_API UFirebaseAnalyticsLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
public:

	UFUNCTION(BlueprintCallable, Category = "Firebase|Analytics")
	static UPARAM(DisplayName = "Has Started") bool StartSession();

	UFUNCTION(BlueprintCallable, Category = "Firebase|Analytics")
	static void EndSession();

	UFUNCTION(BlueprintCallable, Category = "Firebase|Analytics")
	static void ResetAnalyticsData();

	UFUNCTION(BlueprintCallable, Category = "Firebase|Analytics")
	static void SetAnalyticsCollectionEnabled(const bool bEnabled);

	UFUNCTION(BlueprintCallable, Category = "Firebase|Analytics", DisplayName = "Log Event (String)")
	static void LogEventString(const FString& EventName, const FString& ParameterName, const FString& ParameterValue);

	UFUNCTION(BlueprintCallable, Category = "Firebase|Analytics", DisplayName = "Log Event (Float)")
	static void LogEventFloat(const FString& EventName, const FString& ParameterName, const float ParameterValue);
	
	UFUNCTION(BlueprintCallable, Category = "Firebase|Analytics", DisplayName = "Log Event (Int64)")
	static void LogEventInt64(const FString& EventName, const FString& ParameterName, const int64 ParameterValue);
	
	UFUNCTION(BlueprintCallable, Category = "Firebase|Analytics", DisplayName = "Log Event (Int32)")
	static void LogEventInt32(const FString& EventName, const FString& ParameterName, const int32 ParameterValue);

	UFUNCTION(BlueprintCallable, Category = "Firebase|Analytics", DisplayName = "Log Event")
	static void LogEvent(const FString& EventName);
	
	UFUNCTION(BlueprintCallable, Category = "Firebase|Analytics", DisplayName = "Log Events (String)")
	static void LogEvents(const FString& EventName, const TMap<FString, FString>& Parameters);

	UFUNCTION(BlueprintCallable, Category = "Firebase|Analytics")
	static void SetUserProperty(const FString& Name, const FString& Property);

	UFUNCTION(BlueprintCallable, Category = "Firebase|Analytics")
	static void SetUserId(const FString& UserId);

	UFUNCTION(BlueprintCallable, Category = "Firebase|Analytics")
	static void SetSessionTimeoutDuration(const int64 Milliseconds);

	UFUNCTION(BlueprintCallable, Category = "Firebase|Analytics")
	static void SetCurrentScreen(const FString& ScreenName, const FString& ScreenClass);

	static void GetAnalyticsInstanceId(const FFirebaseAnalyticsStringCallback& Callback);

	static TSharedPtr<class FFirebaseAnalyticsProvider> GetAnalyticsProvider();
};

