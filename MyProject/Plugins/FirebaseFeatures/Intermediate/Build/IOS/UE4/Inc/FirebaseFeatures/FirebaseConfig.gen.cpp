// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FirebaseFeatures/Public/FirebaseSdk/FirebaseConfig.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFirebaseConfig() {}
// Cross Module References
	FIREBASEFEATURES_API UClass* Z_Construct_UClass_UFirebaseConfig_NoRegister();
	FIREBASEFEATURES_API UClass* Z_Construct_UClass_UFirebaseConfig();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_FirebaseFeatures();
// End Cross Module References
	void UFirebaseConfig::StaticRegisterNativesUFirebaseConfig()
	{
	}
	UClass* Z_Construct_UClass_UFirebaseConfig_NoRegister()
	{
		return UFirebaseConfig::StaticClass();
	}
	struct Z_Construct_UClass_UFirebaseConfig_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableFirestore_MetaData[];
#endif
		static void NewProp_bEnableFirestore_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableFirestore;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableAdMob_MetaData[];
#endif
		static void NewProp_bEnableAdMob_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableAdMob;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableAnalytics_MetaData[];
#endif
		static void NewProp_bEnableAnalytics_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableAnalytics;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableFunctions_MetaData[];
#endif
		static void NewProp_bEnableFunctions_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableFunctions;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableMessaging_MetaData[];
#endif
		static void NewProp_bEnableMessaging_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableMessaging;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableRemoteConfig_MetaData[];
#endif
		static void NewProp_bEnableRemoteConfig_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableRemoteConfig;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableStorage_MetaData[];
#endif
		static void NewProp_bEnableStorage_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableStorage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FirebaseAnalyticsSessionTimeoutDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_FirebaseAnalyticsSessionTimeoutDuration;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFirebaseConfig_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_FirebaseFeatures,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFirebaseConfig_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FirebaseSdk/FirebaseConfig.h" },
		{ "ModuleRelativePath", "Public/FirebaseSdk/FirebaseConfig.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFirebaseConfig_Statics::NewProp_bEnableFirestore_MetaData[] = {
		{ "Category", "Features" },
		{ "DisplayName", "Enable Firestore" },
		{ "ModuleRelativePath", "Public/FirebaseSdk/FirebaseConfig.h" },
		{ "Tooltip", "If you want to enable Firestore." },
	};
#endif
	void Z_Construct_UClass_UFirebaseConfig_Statics::NewProp_bEnableFirestore_SetBit(void* Obj)
	{
		((UFirebaseConfig*)Obj)->bEnableFirestore = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFirebaseConfig_Statics::NewProp_bEnableFirestore = { "bEnableFirestore", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UFirebaseConfig), &Z_Construct_UClass_UFirebaseConfig_Statics::NewProp_bEnableFirestore_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFirebaseConfig_Statics::NewProp_bEnableFirestore_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFirebaseConfig_Statics::NewProp_bEnableFirestore_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFirebaseConfig_Statics::NewProp_bEnableAdMob_MetaData[] = {
		{ "Category", "Features" },
		{ "DisplayName", "Enable AdMob" },
		{ "ModuleRelativePath", "Public/FirebaseSdk/FirebaseConfig.h" },
		{ "Tooltip", "If you want to enable AdMob (available only on iOS and Android)." },
	};
#endif
	void Z_Construct_UClass_UFirebaseConfig_Statics::NewProp_bEnableAdMob_SetBit(void* Obj)
	{
		((UFirebaseConfig*)Obj)->bEnableAdMob = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFirebaseConfig_Statics::NewProp_bEnableAdMob = { "bEnableAdMob", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UFirebaseConfig), &Z_Construct_UClass_UFirebaseConfig_Statics::NewProp_bEnableAdMob_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFirebaseConfig_Statics::NewProp_bEnableAdMob_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFirebaseConfig_Statics::NewProp_bEnableAdMob_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFirebaseConfig_Statics::NewProp_bEnableAnalytics_MetaData[] = {
		{ "Category", "Features" },
		{ "DisplayName", "Enable Analytics" },
		{ "ModuleRelativePath", "Public/FirebaseSdk/FirebaseConfig.h" },
		{ "Tooltip", "If you want to enable Firebase Analytics." },
	};
#endif
	void Z_Construct_UClass_UFirebaseConfig_Statics::NewProp_bEnableAnalytics_SetBit(void* Obj)
	{
		((UFirebaseConfig*)Obj)->bEnableAnalytics = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFirebaseConfig_Statics::NewProp_bEnableAnalytics = { "bEnableAnalytics", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UFirebaseConfig), &Z_Construct_UClass_UFirebaseConfig_Statics::NewProp_bEnableAnalytics_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFirebaseConfig_Statics::NewProp_bEnableAnalytics_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFirebaseConfig_Statics::NewProp_bEnableAnalytics_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFirebaseConfig_Statics::NewProp_bEnableFunctions_MetaData[] = {
		{ "Category", "Features" },
		{ "DisplayName", "Enable Firebase Functions" },
		{ "ModuleRelativePath", "Public/FirebaseSdk/FirebaseConfig.h" },
		{ "Tooltip", "If you want to enable Firebase Functions." },
	};
#endif
	void Z_Construct_UClass_UFirebaseConfig_Statics::NewProp_bEnableFunctions_SetBit(void* Obj)
	{
		((UFirebaseConfig*)Obj)->bEnableFunctions = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFirebaseConfig_Statics::NewProp_bEnableFunctions = { "bEnableFunctions", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UFirebaseConfig), &Z_Construct_UClass_UFirebaseConfig_Statics::NewProp_bEnableFunctions_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFirebaseConfig_Statics::NewProp_bEnableFunctions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFirebaseConfig_Statics::NewProp_bEnableFunctions_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFirebaseConfig_Statics::NewProp_bEnableMessaging_MetaData[] = {
		{ "Category", "Features" },
		{ "DisplayName", "Enable Firebase Messaging" },
		{ "ModuleRelativePath", "Public/FirebaseSdk/FirebaseConfig.h" },
		{ "Tooltip", "If you want to enable Messaging." },
	};
#endif
	void Z_Construct_UClass_UFirebaseConfig_Statics::NewProp_bEnableMessaging_SetBit(void* Obj)
	{
		((UFirebaseConfig*)Obj)->bEnableMessaging = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFirebaseConfig_Statics::NewProp_bEnableMessaging = { "bEnableMessaging", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UFirebaseConfig), &Z_Construct_UClass_UFirebaseConfig_Statics::NewProp_bEnableMessaging_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFirebaseConfig_Statics::NewProp_bEnableMessaging_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFirebaseConfig_Statics::NewProp_bEnableMessaging_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFirebaseConfig_Statics::NewProp_bEnableRemoteConfig_MetaData[] = {
		{ "Category", "Features" },
		{ "DisplayName", "Enable Remote Config" },
		{ "ModuleRelativePath", "Public/FirebaseSdk/FirebaseConfig.h" },
		{ "Tooltip", "If you want to enable Messaging." },
	};
#endif
	void Z_Construct_UClass_UFirebaseConfig_Statics::NewProp_bEnableRemoteConfig_SetBit(void* Obj)
	{
		((UFirebaseConfig*)Obj)->bEnableRemoteConfig = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFirebaseConfig_Statics::NewProp_bEnableRemoteConfig = { "bEnableRemoteConfig", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UFirebaseConfig), &Z_Construct_UClass_UFirebaseConfig_Statics::NewProp_bEnableRemoteConfig_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFirebaseConfig_Statics::NewProp_bEnableRemoteConfig_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFirebaseConfig_Statics::NewProp_bEnableRemoteConfig_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFirebaseConfig_Statics::NewProp_bEnableStorage_MetaData[] = {
		{ "Category", "Features" },
		{ "DisplayName", "Enable Firebase Storage" },
		{ "ModuleRelativePath", "Public/FirebaseSdk/FirebaseConfig.h" },
		{ "Tooltip", "If you want to enable Firebase Storage." },
	};
#endif
	void Z_Construct_UClass_UFirebaseConfig_Statics::NewProp_bEnableStorage_SetBit(void* Obj)
	{
		((UFirebaseConfig*)Obj)->bEnableStorage = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFirebaseConfig_Statics::NewProp_bEnableStorage = { "bEnableStorage", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UFirebaseConfig), &Z_Construct_UClass_UFirebaseConfig_Statics::NewProp_bEnableStorage_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFirebaseConfig_Statics::NewProp_bEnableStorage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFirebaseConfig_Statics::NewProp_bEnableStorage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFirebaseConfig_Statics::NewProp_FirebaseAnalyticsSessionTimeoutDuration_MetaData[] = {
		{ "Category", "Analytics" },
		{ "DisplayName", "Analytics Session Timeout (in seconds)" },
		{ "ModuleRelativePath", "Public/FirebaseSdk/FirebaseConfig.h" },
		{ "Tooltip", "The duration of inactivity that terminates the current session." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UFirebaseConfig_Statics::NewProp_FirebaseAnalyticsSessionTimeoutDuration = { "FirebaseAnalyticsSessionTimeoutDuration", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFirebaseConfig, FirebaseAnalyticsSessionTimeoutDuration), METADATA_PARAMS(Z_Construct_UClass_UFirebaseConfig_Statics::NewProp_FirebaseAnalyticsSessionTimeoutDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFirebaseConfig_Statics::NewProp_FirebaseAnalyticsSessionTimeoutDuration_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFirebaseConfig_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFirebaseConfig_Statics::NewProp_bEnableFirestore,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFirebaseConfig_Statics::NewProp_bEnableAdMob,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFirebaseConfig_Statics::NewProp_bEnableAnalytics,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFirebaseConfig_Statics::NewProp_bEnableFunctions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFirebaseConfig_Statics::NewProp_bEnableMessaging,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFirebaseConfig_Statics::NewProp_bEnableRemoteConfig,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFirebaseConfig_Statics::NewProp_bEnableStorage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFirebaseConfig_Statics::NewProp_FirebaseAnalyticsSessionTimeoutDuration,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFirebaseConfig_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFirebaseConfig>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFirebaseConfig_Statics::ClassParams = {
		&UFirebaseConfig::StaticClass,
		"Firebase",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UFirebaseConfig_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UFirebaseConfig_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UFirebaseConfig_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFirebaseConfig_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFirebaseConfig()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFirebaseConfig_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFirebaseConfig, 1691209688);
	template<> FIREBASEFEATURES_API UClass* StaticClass<UFirebaseConfig>()
	{
		return UFirebaseConfig::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFirebaseConfig(Z_Construct_UClass_UFirebaseConfig, &UFirebaseConfig::StaticClass, TEXT("/Script/FirebaseFeatures"), TEXT("UFirebaseConfig"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFirebaseConfig);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
