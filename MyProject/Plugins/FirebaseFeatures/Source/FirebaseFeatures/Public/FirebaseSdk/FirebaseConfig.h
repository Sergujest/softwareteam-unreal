// Copyright Pandores Marketplace 2021. All Rights Reserved.
#pragma once

#include "CoreMinimal.h"
#include "FirebaseConfig.generated.h"

UCLASS(Config= Firebase, defaultconfig)
class FIREBASEFEATURES_API UFirebaseConfig : public UObject
{
	GENERATED_BODY()
public:
	UFirebaseConfig();

	static const UFirebaseConfig* Get();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, config, Category = "Features", meta = (DisplayName = "Enable Firestore", Tooltip = "If you want to enable Firestore."))
	bool bEnableFirestore = true;

	//UPROPERTY(EditAnywhere, BlueprintReadWrite, config, Category = "Features", meta = (DisplayName = "Enable Realtime Database", Tooltip = "If you want to enable Realtime Database."))
	bool bEnableDatabase = true;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, config, Category = "Features", meta = (DisplayName = "Enable AdMob", Tooltip = "If you want to enable AdMob (available only on iOS and Android)."))
	bool bEnableAdMob = true;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, config, Category = "Features", meta = (DisplayName = "Enable Analytics", Tooltip = "If you want to enable Firebase Analytics."))
	bool bEnableAnalytics = true;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, config, Category = "Features", meta = (DisplayName = "Enable Firebase Functions", Tooltip = "If you want to enable Firebase Functions."))
	bool bEnableFunctions = true;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, config, Category = "Features", meta = (DisplayName = "Enable Firebase Messaging", Tooltip = "If you want to enable Messaging."))
	bool bEnableMessaging = true;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, config, Category = "Features", meta = (DisplayName = "Enable Remote Config", Tooltip = "If you want to enable Messaging."))
	bool bEnableRemoteConfig = true;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, config, Category = "Features", meta = (DisplayName = "Enable Firebase Storage", Tooltip = "If you want to enable Firebase Storage."))
	bool bEnableStorage = true;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, config, Category = "Analytics", meta = (DisplayName = "Analytics Session Timeout (in seconds)", Tooltip = "The duration of inactivity that terminates the current session."))
	int32 FirebaseAnalyticsSessionTimeoutDuration = 1800;
	
};
