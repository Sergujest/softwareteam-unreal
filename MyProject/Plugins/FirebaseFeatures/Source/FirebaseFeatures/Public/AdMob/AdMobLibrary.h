// Copyright Pandores Marketplace 2021. All Rights Reserved.
#pragma once

#include "RewardedVideo.h"
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "AdMobLibrary.generated.h"

UCLASS()
class FIREBASEFEATURES_API UAdMobLibrary final : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
public:

	UFUNCTION(BlueprintCallable, Category = "Firebase|AdMob|Rewarded Video", meta = (DisplayName = "Events - Rewarded Video", AutoCreateRefTerm="OnReward, OnPresentationStateChanged"))
	static void Blueprint_RewardedVideoEvents(const FAdMobVideoOnRewarded& OnReward, const FAdMobVideoOnPresentationStateChanged& OnPresentationStateChanged);

};


