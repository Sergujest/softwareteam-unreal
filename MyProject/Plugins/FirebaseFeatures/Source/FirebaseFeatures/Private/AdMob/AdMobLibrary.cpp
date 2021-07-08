// Copyright Pandores Marketplace 2021. All Rights Reserved.

#include "AdMob/AdMobLibrary.h"

void UAdMobLibrary::Blueprint_RewardedVideoEvents(const FAdMobVideoOnRewarded& OnReward, const FAdMobVideoOnPresentationStateChanged& OnPresentationStateChanged)
{
	FRewardedVideo::OnRewarded().operator=(OnReward);
	FRewardedVideo::OnPresentationStateChanged().operator=(OnPresentationStateChanged);
}
