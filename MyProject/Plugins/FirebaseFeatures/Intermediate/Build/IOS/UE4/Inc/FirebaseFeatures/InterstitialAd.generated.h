// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EAdMobInterstitialAdPresentationState : uint8;
#ifdef FIREBASEFEATURES_InterstitialAd_generated_h
#error "InterstitialAd.generated.h already included, missing '#pragma once' in InterstitialAd.h"
#endif
#define FIREBASEFEATURES_InterstitialAd_generated_h

#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Public_AdMob_InterstitialAd_h_26_SPARSE_DATA
#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Public_AdMob_InterstitialAd_h_26_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetPresentationState);


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Public_AdMob_InterstitialAd_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetPresentationState);


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Public_AdMob_InterstitialAd_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInterstitialAd(); \
	friend struct Z_Construct_UClass_UInterstitialAd_Statics; \
public: \
	DECLARE_CLASS(UInterstitialAd, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FirebaseFeatures"), NO_API) \
	DECLARE_SERIALIZER(UInterstitialAd)


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Public_AdMob_InterstitialAd_h_26_INCLASS \
private: \
	static void StaticRegisterNativesUInterstitialAd(); \
	friend struct Z_Construct_UClass_UInterstitialAd_Statics; \
public: \
	DECLARE_CLASS(UInterstitialAd, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FirebaseFeatures"), NO_API) \
	DECLARE_SERIALIZER(UInterstitialAd)


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Public_AdMob_InterstitialAd_h_26_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInterstitialAd(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInterstitialAd) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInterstitialAd); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterstitialAd); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInterstitialAd(UInterstitialAd&&); \
	NO_API UInterstitialAd(const UInterstitialAd&); \
public:


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Public_AdMob_InterstitialAd_h_26_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInterstitialAd(UInterstitialAd&&); \
	NO_API UInterstitialAd(const UInterstitialAd&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInterstitialAd); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterstitialAd); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInterstitialAd)


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Public_AdMob_InterstitialAd_h_26_PRIVATE_PROPERTY_OFFSET
#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Public_AdMob_InterstitialAd_h_23_PROLOG
#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Public_AdMob_InterstitialAd_h_26_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Public_AdMob_InterstitialAd_h_26_PRIVATE_PROPERTY_OFFSET \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Public_AdMob_InterstitialAd_h_26_SPARSE_DATA \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Public_AdMob_InterstitialAd_h_26_RPC_WRAPPERS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Public_AdMob_InterstitialAd_h_26_INCLASS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Public_AdMob_InterstitialAd_h_26_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Public_AdMob_InterstitialAd_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Public_AdMob_InterstitialAd_h_26_PRIVATE_PROPERTY_OFFSET \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Public_AdMob_InterstitialAd_h_26_SPARSE_DATA \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Public_AdMob_InterstitialAd_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Public_AdMob_InterstitialAd_h_26_INCLASS_NO_PURE_DECLS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Public_AdMob_InterstitialAd_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FIREBASEFEATURES_API UClass* StaticClass<class UInterstitialAd>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Public_AdMob_InterstitialAd_h


#define FOREACH_ENUM_EADMOBINTERSTITIALADPRESENTATIONSTATE(op) \
	op(EAdMobInterstitialAdPresentationState::PresentationStateHidden) \
	op(EAdMobInterstitialAdPresentationState::PresentationStateCoveringUI) 

enum class EAdMobInterstitialAdPresentationState : uint8;
template<> FIREBASEFEATURES_API UEnum* StaticEnum<EAdMobInterstitialAdPresentationState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
