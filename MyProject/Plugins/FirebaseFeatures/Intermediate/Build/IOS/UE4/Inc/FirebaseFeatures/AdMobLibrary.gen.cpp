// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FirebaseFeatures/Public/AdMob/AdMobLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAdMobLibrary() {}
// Cross Module References
	FIREBASEFEATURES_API UClass* Z_Construct_UClass_UAdMobLibrary_NoRegister();
	FIREBASEFEATURES_API UClass* Z_Construct_UClass_UAdMobLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_FirebaseFeatures();
	FIREBASEFEATURES_API UFunction* Z_Construct_UDelegateFunction_FirebaseFeatures_AdMobVideoOnRewarded__DelegateSignature();
	FIREBASEFEATURES_API UFunction* Z_Construct_UDelegateFunction_FirebaseFeatures_AdMobVideoOnPresentationStateChanged__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(UAdMobLibrary::execBlueprint_RewardedVideoEvents)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnReward);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnPresentationStateChanged);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAdMobLibrary::Blueprint_RewardedVideoEvents(FAdMobVideoOnRewarded(Z_Param_Out_OnReward),FAdMobVideoOnPresentationStateChanged(Z_Param_Out_OnPresentationStateChanged));
		P_NATIVE_END;
	}
	void UAdMobLibrary::StaticRegisterNativesUAdMobLibrary()
	{
		UClass* Class = UAdMobLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Blueprint_RewardedVideoEvents", &UAdMobLibrary::execBlueprint_RewardedVideoEvents },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAdMobLibrary_Blueprint_RewardedVideoEvents_Statics
	{
		struct AdMobLibrary_eventBlueprint_RewardedVideoEvents_Parms
		{
			FScriptDelegate OnReward;
			FScriptDelegate OnPresentationStateChanged;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnReward_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnReward;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnPresentationStateChanged_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnPresentationStateChanged;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdMobLibrary_Blueprint_RewardedVideoEvents_Statics::NewProp_OnReward_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UAdMobLibrary_Blueprint_RewardedVideoEvents_Statics::NewProp_OnReward = { "OnReward", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdMobLibrary_eventBlueprint_RewardedVideoEvents_Parms, OnReward), Z_Construct_UDelegateFunction_FirebaseFeatures_AdMobVideoOnRewarded__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UAdMobLibrary_Blueprint_RewardedVideoEvents_Statics::NewProp_OnReward_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdMobLibrary_Blueprint_RewardedVideoEvents_Statics::NewProp_OnReward_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdMobLibrary_Blueprint_RewardedVideoEvents_Statics::NewProp_OnPresentationStateChanged_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UAdMobLibrary_Blueprint_RewardedVideoEvents_Statics::NewProp_OnPresentationStateChanged = { "OnPresentationStateChanged", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AdMobLibrary_eventBlueprint_RewardedVideoEvents_Parms, OnPresentationStateChanged), Z_Construct_UDelegateFunction_FirebaseFeatures_AdMobVideoOnPresentationStateChanged__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UAdMobLibrary_Blueprint_RewardedVideoEvents_Statics::NewProp_OnPresentationStateChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdMobLibrary_Blueprint_RewardedVideoEvents_Statics::NewProp_OnPresentationStateChanged_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAdMobLibrary_Blueprint_RewardedVideoEvents_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdMobLibrary_Blueprint_RewardedVideoEvents_Statics::NewProp_OnReward,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAdMobLibrary_Blueprint_RewardedVideoEvents_Statics::NewProp_OnPresentationStateChanged,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAdMobLibrary_Blueprint_RewardedVideoEvents_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "OnReward, OnPresentationStateChanged" },
		{ "Category", "Firebase|AdMob|Rewarded Video" },
		{ "DisplayName", "Events - Rewarded Video" },
		{ "ModuleRelativePath", "Public/AdMob/AdMobLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAdMobLibrary_Blueprint_RewardedVideoEvents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdMobLibrary, nullptr, "Blueprint_RewardedVideoEvents", nullptr, nullptr, sizeof(AdMobLibrary_eventBlueprint_RewardedVideoEvents_Parms), Z_Construct_UFunction_UAdMobLibrary_Blueprint_RewardedVideoEvents_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdMobLibrary_Blueprint_RewardedVideoEvents_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAdMobLibrary_Blueprint_RewardedVideoEvents_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAdMobLibrary_Blueprint_RewardedVideoEvents_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAdMobLibrary_Blueprint_RewardedVideoEvents()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAdMobLibrary_Blueprint_RewardedVideoEvents_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAdMobLibrary_NoRegister()
	{
		return UAdMobLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UAdMobLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAdMobLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_FirebaseFeatures,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAdMobLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAdMobLibrary_Blueprint_RewardedVideoEvents, "Blueprint_RewardedVideoEvents" }, // 3551641064
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdMobLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AdMob/AdMobLibrary.h" },
		{ "ModuleRelativePath", "Public/AdMob/AdMobLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAdMobLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAdMobLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAdMobLibrary_Statics::ClassParams = {
		&UAdMobLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAdMobLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAdMobLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAdMobLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAdMobLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAdMobLibrary, 840363500);
	template<> FIREBASEFEATURES_API UClass* StaticClass<UAdMobLibrary>()
	{
		return UAdMobLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAdMobLibrary(Z_Construct_UClass_UAdMobLibrary, &UAdMobLibrary::StaticClass, TEXT("/Script/FirebaseFeatures"), TEXT("UAdMobLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAdMobLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
