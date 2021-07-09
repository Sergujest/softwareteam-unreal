// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FirebaseFeatures/Public/AdMob/InterstitialAd.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterstitialAd() {}
// Cross Module References
	FIREBASEFEATURES_API UEnum* Z_Construct_UEnum_FirebaseFeatures_EAdMobInterstitialAdPresentationState();
	UPackage* Z_Construct_UPackage__Script_FirebaseFeatures();
	FIREBASEFEATURES_API UClass* Z_Construct_UClass_UInterstitialAd_NoRegister();
	FIREBASEFEATURES_API UClass* Z_Construct_UClass_UInterstitialAd();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
	static UEnum* EAdMobInterstitialAdPresentationState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_FirebaseFeatures_EAdMobInterstitialAdPresentationState, Z_Construct_UPackage__Script_FirebaseFeatures(), TEXT("EAdMobInterstitialAdPresentationState"));
		}
		return Singleton;
	}
	template<> FIREBASEFEATURES_API UEnum* StaticEnum<EAdMobInterstitialAdPresentationState>()
	{
		return EAdMobInterstitialAdPresentationState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAdMobInterstitialAdPresentationState(EAdMobInterstitialAdPresentationState_StaticEnum, TEXT("/Script/FirebaseFeatures"), TEXT("EAdMobInterstitialAdPresentationState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_FirebaseFeatures_EAdMobInterstitialAdPresentationState_Hash() { return 1187063123U; }
	UEnum* Z_Construct_UEnum_FirebaseFeatures_EAdMobInterstitialAdPresentationState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_FirebaseFeatures();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAdMobInterstitialAdPresentationState"), 0, Get_Z_Construct_UEnum_FirebaseFeatures_EAdMobInterstitialAdPresentationState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAdMobInterstitialAdPresentationState::PresentationStateHidden", (int64)EAdMobInterstitialAdPresentationState::PresentationStateHidden },
				{ "EAdMobInterstitialAdPresentationState::PresentationStateCoveringUI", (int64)EAdMobInterstitialAdPresentationState::PresentationStateCoveringUI },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/AdMob/InterstitialAd.h" },
				{ "PresentationStateCoveringUI.Comment", "/// InterstitialAd is being shown or has caused focus to leave the\n/// application (for example, when opening an external browser during a\n/// clickthrough).\n" },
				{ "PresentationStateCoveringUI.Name", "EAdMobInterstitialAdPresentationState::PresentationStateCoveringUI" },
				{ "PresentationStateCoveringUI.ToolTip", "InterstitialAd is being shown or has caused focus to leave the\napplication (for example, when opening an external browser during a\nclickthrough)." },
				{ "PresentationStateHidden.Comment", "/// InterstitialAd is not currently being shown.\n" },
				{ "PresentationStateHidden.Name", "EAdMobInterstitialAdPresentationState::PresentationStateHidden" },
				{ "PresentationStateHidden.ToolTip", "InterstitialAd is not currently being shown." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_FirebaseFeatures,
				nullptr,
				"EAdMobInterstitialAdPresentationState",
				"EAdMobInterstitialAdPresentationState",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	DEFINE_FUNCTION(UInterstitialAd::execGetPresentationState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EAdMobInterstitialAdPresentationState*)Z_Param__Result=P_THIS->GetPresentationState();
		P_NATIVE_END;
	}
	void UInterstitialAd::StaticRegisterNativesUInterstitialAd()
	{
		UClass* Class = UInterstitialAd::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetPresentationState", &UInterstitialAd::execGetPresentationState },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UInterstitialAd_GetPresentationState_Statics
	{
		struct InterstitialAd_eventGetPresentationState_Parms
		{
			EAdMobInterstitialAdPresentationState ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UInterstitialAd_GetPresentationState_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterstitialAd_GetPresentationState_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Presentation State" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UInterstitialAd_GetPresentationState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InterstitialAd_eventGetPresentationState_Parms, ReturnValue), Z_Construct_UEnum_FirebaseFeatures_EAdMobInterstitialAdPresentationState, METADATA_PARAMS(Z_Construct_UFunction_UInterstitialAd_GetPresentationState_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterstitialAd_GetPresentationState_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterstitialAd_GetPresentationState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterstitialAd_GetPresentationState_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterstitialAd_GetPresentationState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterstitialAd_GetPresentationState_Statics::Function_MetaDataParams[] = {
		{ "Category", "AdMob|InterstitialAd" },
		{ "ModuleRelativePath", "Public/AdMob/InterstitialAd.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterstitialAd_GetPresentationState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterstitialAd, nullptr, "GetPresentationState", nullptr, nullptr, sizeof(InterstitialAd_eventGetPresentationState_Parms), Z_Construct_UFunction_UInterstitialAd_GetPresentationState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterstitialAd_GetPresentationState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterstitialAd_GetPresentationState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterstitialAd_GetPresentationState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterstitialAd_GetPresentationState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInterstitialAd_GetPresentationState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UInterstitialAd_NoRegister()
	{
		return UInterstitialAd::StaticClass();
	}
	struct Z_Construct_UClass_UInterstitialAd_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInterstitialAd_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_FirebaseFeatures,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UInterstitialAd_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UInterstitialAd_GetPresentationState, "GetPresentationState" }, // 1611158551
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterstitialAd_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "AdMob/InterstitialAd.h" },
		{ "ModuleRelativePath", "Public/AdMob/InterstitialAd.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInterstitialAd_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterstitialAd>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UInterstitialAd_Statics::ClassParams = {
		&UInterstitialAd::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UInterstitialAd_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInterstitialAd_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInterstitialAd()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UInterstitialAd_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UInterstitialAd, 868493119);
	template<> FIREBASEFEATURES_API UClass* StaticClass<UInterstitialAd>()
	{
		return UInterstitialAd::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInterstitialAd(Z_Construct_UClass_UInterstitialAd, &UInterstitialAd::StaticClass, TEXT("/Script/FirebaseFeatures"), TEXT("UInterstitialAd"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterstitialAd);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
