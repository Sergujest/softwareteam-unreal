// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FIREBASEFEATURES_AdMobTypes_generated_h
#error "AdMobTypes.generated.h already included, missing '#pragma once' in AdMobTypes.h"
#endif
#define FIREBASEFEATURES_AdMobTypes_generated_h

#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Public_AdMob_AdMobTypes_h_130_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAdMobRewardItem_Statics; \
	static class UScriptStruct* StaticStruct();


template<> FIREBASEFEATURES_API UScriptStruct* StaticStruct<struct FAdMobRewardItem>();

#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Public_AdMob_AdMobTypes_h_90_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAdMobAdRequest_Statics; \
	static class UScriptStruct* StaticStruct();


template<> FIREBASEFEATURES_API UScriptStruct* StaticStruct<struct FAdMobAdRequest>();

#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Public_AdMob_AdMobTypes_h_76_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAdSize_Statics; \
	static class UScriptStruct* StaticStruct();


template<> FIREBASEFEATURES_API UScriptStruct* StaticStruct<struct FAdSize>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Public_AdMob_AdMobTypes_h


#define FOREACH_ENUM_EADMOBCHILDDIRECTEDTREATMENTSTATE(op) \
	op(EAdMobChildDirectedTreatmentState::Unknown) \
	op(EAdMobChildDirectedTreatmentState::Tagged) \
	op(EAdMobChildDirectedTreatmentState::NotTagged) 

enum class EAdMobChildDirectedTreatmentState : uint8;
template<> FIREBASEFEATURES_API UEnum* StaticEnum<EAdMobChildDirectedTreatmentState>();

#define FOREACH_ENUM_EADMOBGENDER(op) \
	op(EAdMobGender::Unknown) \
	op(EAdMobGender::Male) \
	op(EAdMobGender::Female) 

enum class EAdMobGender : uint8;
template<> FIREBASEFEATURES_API UEnum* StaticEnum<EAdMobGender>();

#define FOREACH_ENUM_EADMOBPRESENTATIONSTATE(op) \
	op(EAdMobPresentationState::Hidden) \
	op(EAdMobPresentationState::CoveringUI) \
	op(EAdMobPresentationState::VideoHasStarted) \
	op(EAdMobPresentationState::VideoHasCompleted) 

enum class EAdMobPresentationState : uint8;
template<> FIREBASEFEATURES_API UEnum* StaticEnum<EAdMobPresentationState>();

#define FOREACH_ENUM_EADMOBERROR(op) \
	op(EAdMobError::None) \
	op(EAdMobError::Uninitialized) \
	op(EAdMobError::AlreadyInitialized) \
	op(EAdMobError::LoadInProgress) \
	op(EAdMobError::InternalError) \
	op(EAdMobError::InvalidRequest) \
	op(EAdMobError::NetworkError) \
	op(EAdMobError::NoFill) \
	op(EAdMobError::NoWindowToken) 

enum class EAdMobError : uint8;
template<> FIREBASEFEATURES_API UEnum* StaticEnum<EAdMobError>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
