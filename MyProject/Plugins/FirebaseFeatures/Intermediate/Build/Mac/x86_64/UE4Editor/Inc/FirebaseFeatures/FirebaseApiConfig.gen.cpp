// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FirebaseFeatures/Private/FirebaseSdk/FirebaseApiConfig.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFirebaseApiConfig() {}
// Cross Module References
	FIREBASEFEATURES_API UClass* Z_Construct_UClass_UFirebaseApiConfig_NoRegister();
	FIREBASEFEATURES_API UClass* Z_Construct_UClass_UFirebaseApiConfig();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_FirebaseFeatures();
// End Cross Module References
	void UFirebaseApiConfig::StaticRegisterNativesUFirebaseApiConfig()
	{
	}
	UClass* Z_Construct_UClass_UFirebaseApiConfig_NoRegister()
	{
		return UFirebaseApiConfig::StaticClass();
	}
	struct Z_Construct_UClass_UFirebaseApiConfig_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GoogleServicesJson_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_GoogleServicesJson;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFirebaseApiConfig_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_FirebaseFeatures,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFirebaseApiConfig_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FirebaseSdk/FirebaseApiConfig.h" },
		{ "ModuleRelativePath", "Private/FirebaseSdk/FirebaseApiConfig.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFirebaseApiConfig_Statics::NewProp_GoogleServicesJson_MetaData[] = {
		{ "ModuleRelativePath", "Private/FirebaseSdk/FirebaseApiConfig.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UFirebaseApiConfig_Statics::NewProp_GoogleServicesJson = { "GoogleServicesJson", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFirebaseApiConfig, GoogleServicesJson), METADATA_PARAMS(Z_Construct_UClass_UFirebaseApiConfig_Statics::NewProp_GoogleServicesJson_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFirebaseApiConfig_Statics::NewProp_GoogleServicesJson_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFirebaseApiConfig_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFirebaseApiConfig_Statics::NewProp_GoogleServicesJson,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFirebaseApiConfig_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFirebaseApiConfig>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFirebaseApiConfig_Statics::ClassParams = {
		&UFirebaseApiConfig::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UFirebaseApiConfig_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UFirebaseApiConfig_Statics::PropPointers),
		0,
		0x000000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UFirebaseApiConfig_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFirebaseApiConfig_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFirebaseApiConfig()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFirebaseApiConfig_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFirebaseApiConfig, 3090121730);
	template<> FIREBASEFEATURES_API UClass* StaticClass<UFirebaseApiConfig>()
	{
		return UFirebaseApiConfig::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFirebaseApiConfig(Z_Construct_UClass_UFirebaseApiConfig, &UFirebaseApiConfig::StaticClass, TEXT("/Script/FirebaseFeatures"), TEXT("UFirebaseApiConfig"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFirebaseApiConfig);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
