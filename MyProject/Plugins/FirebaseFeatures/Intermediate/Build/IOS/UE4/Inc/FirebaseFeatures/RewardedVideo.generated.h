// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EAdMobPresentationState : uint8;
#ifdef FIREBASEFEATURES_RewardedVideo_generated_h
#error "RewardedVideo.generated.h already included, missing '#pragma once' in RewardedVideo.h"
#endif
#define FIREBASEFEATURES_RewardedVideo_generated_h

#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Public_AdMob_RewardedVideo_h_11_DELEGATE \
struct _Script_FirebaseFeatures_eventAdMobVideoOnPresentationStateChanged_Parms \
{ \
	EAdMobPresentationState PresentationState; \
}; \
static inline void FAdMobVideoOnPresentationStateChanged_DelegateWrapper(const FScriptDelegate& AdMobVideoOnPresentationStateChanged, const EAdMobPresentationState PresentationState) \
{ \
	_Script_FirebaseFeatures_eventAdMobVideoOnPresentationStateChanged_Parms Parms; \
	Parms.PresentationState=PresentationState; \
	AdMobVideoOnPresentationStateChanged.ProcessDelegate<UObject>(&Parms); \
}


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Public_AdMob_RewardedVideo_h_9_DELEGATE \
struct _Script_FirebaseFeatures_eventAdMobVideoOnRewarded_Parms \
{ \
	FString RewardType; \
	float RewardAmount; \
}; \
static inline void FAdMobVideoOnRewarded_DelegateWrapper(const FScriptDelegate& AdMobVideoOnRewarded, const FString& RewardType, const float RewardAmount) \
{ \
	_Script_FirebaseFeatures_eventAdMobVideoOnRewarded_Parms Parms; \
	Parms.RewardType=RewardType; \
	Parms.RewardAmount=RewardAmount; \
	AdMobVideoOnRewarded.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Public_AdMob_RewardedVideo_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
