// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FirebaseFeatures/Public/AdMob/RewardedVideo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRewardedVideo() {}
// Cross Module References
	FIREBASEFEATURES_API UFunction* Z_Construct_UDelegateFunction_FirebaseFeatures_AdMobVideoOnPresentationStateChanged__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_FirebaseFeatures();
	FIREBASEFEATURES_API UEnum* Z_Construct_UEnum_FirebaseFeatures_EAdMobPresentationState();
	FIREBASEFEATURES_API UFunction* Z_Construct_UDelegateFunction_FirebaseFeatures_AdMobVideoOnRewarded__DelegateSignature();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_FirebaseFeatures_AdMobVideoOnPresentationStateChanged__DelegateSignature_Statics
	{
		struct _Script_FirebaseFeatures_eventAdMobVideoOnPresentationStateChanged_Parms
		{
			EAdMobPresentationState PresentationState;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PresentationState_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PresentationState_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PresentationState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_FirebaseFeatures_AdMobVideoOnPresentationStateChanged__DelegateSignature_Statics::NewProp_PresentationState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_FirebaseFeatures_AdMobVideoOnPresentationStateChanged__DelegateSignature_Statics::NewProp_PresentationState_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_FirebaseFeatures_AdMobVideoOnPresentationStateChanged__DelegateSignature_Statics::NewProp_PresentationState = { "PresentationState", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_FirebaseFeatures_eventAdMobVideoOnPresentationStateChanged_Parms, PresentationState), Z_Construct_UEnum_FirebaseFeatures_EAdMobPresentationState, METADATA_PARAMS(Z_Construct_UDelegateFunction_FirebaseFeatures_AdMobVideoOnPresentationStateChanged__DelegateSignature_Statics::NewProp_PresentationState_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_FirebaseFeatures_AdMobVideoOnPresentationStateChanged__DelegateSignature_Statics::NewProp_PresentationState_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_FirebaseFeatures_AdMobVideoOnPresentationStateChanged__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_FirebaseFeatures_AdMobVideoOnPresentationStateChanged__DelegateSignature_Statics::NewProp_PresentationState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_FirebaseFeatures_AdMobVideoOnPresentationStateChanged__DelegateSignature_Statics::NewProp_PresentationState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_FirebaseFeatures_AdMobVideoOnPresentationStateChanged__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AdMob/RewardedVideo.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_FirebaseFeatures_AdMobVideoOnPresentationStateChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_FirebaseFeatures, nullptr, "AdMobVideoOnPresentationStateChanged__DelegateSignature", nullptr, nullptr, sizeof(_Script_FirebaseFeatures_eventAdMobVideoOnPresentationStateChanged_Parms), Z_Construct_UDelegateFunction_FirebaseFeatures_AdMobVideoOnPresentationStateChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_FirebaseFeatures_AdMobVideoOnPresentationStateChanged__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_FirebaseFeatures_AdMobVideoOnPresentationStateChanged__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_FirebaseFeatures_AdMobVideoOnPresentationStateChanged__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_FirebaseFeatures_AdMobVideoOnPresentationStateChanged__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_FirebaseFeatures_AdMobVideoOnPresentationStateChanged__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_FirebaseFeatures_AdMobVideoOnRewarded__DelegateSignature_Statics
	{
		struct _Script_FirebaseFeatures_eventAdMobVideoOnRewarded_Parms
		{
			FString RewardType;
			float RewardAmount;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RewardType_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_RewardType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RewardAmount_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RewardAmount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_FirebaseFeatures_AdMobVideoOnRewarded__DelegateSignature_Statics::NewProp_RewardType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_FirebaseFeatures_AdMobVideoOnRewarded__DelegateSignature_Statics::NewProp_RewardType = { "RewardType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_FirebaseFeatures_eventAdMobVideoOnRewarded_Parms, RewardType), METADATA_PARAMS(Z_Construct_UDelegateFunction_FirebaseFeatures_AdMobVideoOnRewarded__DelegateSignature_Statics::NewProp_RewardType_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_FirebaseFeatures_AdMobVideoOnRewarded__DelegateSignature_Statics::NewProp_RewardType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_FirebaseFeatures_AdMobVideoOnRewarded__DelegateSignature_Statics::NewProp_RewardAmount_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_FirebaseFeatures_AdMobVideoOnRewarded__DelegateSignature_Statics::NewProp_RewardAmount = { "RewardAmount", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_FirebaseFeatures_eventAdMobVideoOnRewarded_Parms, RewardAmount), METADATA_PARAMS(Z_Construct_UDelegateFunction_FirebaseFeatures_AdMobVideoOnRewarded__DelegateSignature_Statics::NewProp_RewardAmount_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_FirebaseFeatures_AdMobVideoOnRewarded__DelegateSignature_Statics::NewProp_RewardAmount_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_FirebaseFeatures_AdMobVideoOnRewarded__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_FirebaseFeatures_AdMobVideoOnRewarded__DelegateSignature_Statics::NewProp_RewardType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_FirebaseFeatures_AdMobVideoOnRewarded__DelegateSignature_Statics::NewProp_RewardAmount,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_FirebaseFeatures_AdMobVideoOnRewarded__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AdMob/RewardedVideo.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_FirebaseFeatures_AdMobVideoOnRewarded__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_FirebaseFeatures, nullptr, "AdMobVideoOnRewarded__DelegateSignature", nullptr, nullptr, sizeof(_Script_FirebaseFeatures_eventAdMobVideoOnRewarded_Parms), Z_Construct_UDelegateFunction_FirebaseFeatures_AdMobVideoOnRewarded__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_FirebaseFeatures_AdMobVideoOnRewarded__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_FirebaseFeatures_AdMobVideoOnRewarded__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_FirebaseFeatures_AdMobVideoOnRewarded__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_FirebaseFeatures_AdMobVideoOnRewarded__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_FirebaseFeatures_AdMobVideoOnRewarded__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
