// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FirebaseFeatures/Public/AdMob/BannerView.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBannerView() {}
// Cross Module References
	FIREBASEFEATURES_API UEnum* Z_Construct_UEnum_FirebaseFeatures_EAdMobBannerViewPosition();
	UPackage* Z_Construct_UPackage__Script_FirebaseFeatures();
	FIREBASEFEATURES_API UClass* Z_Construct_UClass_UBannerView_NoRegister();
	FIREBASEFEATURES_API UClass* Z_Construct_UClass_UBannerView();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
	static UEnum* EAdMobBannerViewPosition_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_FirebaseFeatures_EAdMobBannerViewPosition, Z_Construct_UPackage__Script_FirebaseFeatures(), TEXT("EAdMobBannerViewPosition"));
		}
		return Singleton;
	}
	template<> FIREBASEFEATURES_API UEnum* StaticEnum<EAdMobBannerViewPosition>()
	{
		return EAdMobBannerViewPosition_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAdMobBannerViewPosition(EAdMobBannerViewPosition_StaticEnum, TEXT("/Script/FirebaseFeatures"), TEXT("EAdMobBannerViewPosition"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_FirebaseFeatures_EAdMobBannerViewPosition_Hash() { return 2200300092U; }
	UEnum* Z_Construct_UEnum_FirebaseFeatures_EAdMobBannerViewPosition()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_FirebaseFeatures();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAdMobBannerViewPosition"), 0, Get_Z_Construct_UEnum_FirebaseFeatures_EAdMobBannerViewPosition_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAdMobBannerViewPosition::Top", (int64)EAdMobBannerViewPosition::Top },
				{ "EAdMobBannerViewPosition::Bottom", (int64)EAdMobBannerViewPosition::Bottom },
				{ "EAdMobBannerViewPosition::TopLeft", (int64)EAdMobBannerViewPosition::TopLeft },
				{ "EAdMobBannerViewPosition::TopRight", (int64)EAdMobBannerViewPosition::TopRight },
				{ "EAdMobBannerViewPosition::BottomLeft", (int64)EAdMobBannerViewPosition::BottomLeft },
				{ "EAdMobBannerViewPosition::BottomRight", (int64)EAdMobBannerViewPosition::BottomRight },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Bottom.Comment", "/// Bottom of the screen, horizontally centered.\n" },
				{ "Bottom.Name", "EAdMobBannerViewPosition::Bottom" },
				{ "Bottom.ToolTip", "Bottom of the screen, horizontally centered." },
				{ "BottomLeft.Comment", "/// Bottom-left corner of the screen.\n" },
				{ "BottomLeft.Name", "EAdMobBannerViewPosition::BottomLeft" },
				{ "BottomLeft.ToolTip", "Bottom-left corner of the screen." },
				{ "BottomRight.Comment", "/// Bottom-right corner of the screen.\n" },
				{ "BottomRight.Name", "EAdMobBannerViewPosition::BottomRight" },
				{ "BottomRight.ToolTip", "Bottom-right corner of the screen." },
				{ "ModuleRelativePath", "Public/AdMob/BannerView.h" },
				{ "Top.Comment", "/// Top of the screen, horizontally centered.\n" },
				{ "Top.Name", "EAdMobBannerViewPosition::Top" },
				{ "Top.ToolTip", "Top of the screen, horizontally centered." },
				{ "TopLeft.Comment", "/// Top-left corner of the screen.\n" },
				{ "TopLeft.Name", "EAdMobBannerViewPosition::TopLeft" },
				{ "TopLeft.ToolTip", "Top-left corner of the screen." },
				{ "TopRight.Comment", "/// Top-right corner of the screen.\n" },
				{ "TopRight.Name", "EAdMobBannerViewPosition::TopRight" },
				{ "TopRight.ToolTip", "Top-right corner of the screen." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_FirebaseFeatures,
				nullptr,
				"EAdMobBannerViewPosition",
				"EAdMobBannerViewPosition",
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
	void UBannerView::StaticRegisterNativesUBannerView()
	{
	}
	UClass* Z_Construct_UClass_UBannerView_NoRegister()
	{
		return UBannerView::StaticClass();
	}
	struct Z_Construct_UClass_UBannerView_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBannerView_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_FirebaseFeatures,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBannerView_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "AdMob/BannerView.h" },
		{ "ModuleRelativePath", "Public/AdMob/BannerView.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBannerView_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBannerView>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBannerView_Statics::ClassParams = {
		&UBannerView::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBannerView_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBannerView_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBannerView()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBannerView_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBannerView, 642024642);
	template<> FIREBASEFEATURES_API UClass* StaticClass<UBannerView>()
	{
		return UBannerView::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBannerView(Z_Construct_UClass_UBannerView, &UBannerView::StaticClass, TEXT("/Script/FirebaseFeatures"), TEXT("UBannerView"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBannerView);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
