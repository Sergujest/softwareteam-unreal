// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FirebaseFeatures/Public/RemoteConfig/RemoteConfig.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRemoteConfig() {}
// Cross Module References
	FIREBASEFEATURES_API UEnum* Z_Construct_UEnum_FirebaseFeatures_EFirebaseConfigSetting();
	UPackage* Z_Construct_UPackage__Script_FirebaseFeatures();
	FIREBASEFEATURES_API UEnum* Z_Construct_UEnum_FirebaseFeatures_EFirebaseFetchFailureReason();
	FIREBASEFEATURES_API UEnum* Z_Construct_UEnum_FirebaseFeatures_EFirebaseLastFetchStatus();
	FIREBASEFEATURES_API UEnum* Z_Construct_UEnum_FirebaseFeatures_EFirebaseValueSource();
	FIREBASEFEATURES_API UScriptStruct* Z_Construct_UScriptStruct_FFirebaseConfigKeyValueVariant();
	FIREBASEFEATURES_API UScriptStruct* Z_Construct_UScriptStruct_FFirebaseVariant();
	FIREBASEFEATURES_API UScriptStruct* Z_Construct_UScriptStruct_FFirebaseConfigKeyValue();
	FIREBASEFEATURES_API UScriptStruct* Z_Construct_UScriptStruct_FFirebaseValueInfo();
	FIREBASEFEATURES_API UScriptStruct* Z_Construct_UScriptStruct_FFirebaseConfigInfo();
	FIREBASEFEATURES_API UClass* Z_Construct_UClass_UFirebaseRemoteConfig_NoRegister();
	FIREBASEFEATURES_API UClass* Z_Construct_UClass_UFirebaseRemoteConfig();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
// End Cross Module References
	static UEnum* EFirebaseConfigSetting_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_FirebaseFeatures_EFirebaseConfigSetting, Z_Construct_UPackage__Script_FirebaseFeatures(), TEXT("EFirebaseConfigSetting"));
		}
		return Singleton;
	}
	template<> FIREBASEFEATURES_API UEnum* StaticEnum<EFirebaseConfigSetting>()
	{
		return EFirebaseConfigSetting_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EFirebaseConfigSetting(EFirebaseConfigSetting_StaticEnum, TEXT("/Script/FirebaseFeatures"), TEXT("EFirebaseConfigSetting"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_FirebaseFeatures_EFirebaseConfigSetting_Hash() { return 3479597556U; }
	UEnum* Z_Construct_UEnum_FirebaseFeatures_EFirebaseConfigSetting()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_FirebaseFeatures();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EFirebaseConfigSetting"), 0, Get_Z_Construct_UEnum_FirebaseFeatures_EFirebaseConfigSetting_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EFirebaseConfigSetting::SettingDeveloperMode", (int64)EFirebaseConfigSetting::SettingDeveloperMode },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "/// @brief Keys of API settings.\n///\n/// @see SetConfigSetting\n/// @see GetConfigSetting\n" },
				{ "ModuleRelativePath", "Public/RemoteConfig/RemoteConfig.h" },
				{ "SettingDeveloperMode.Comment", "/// Set the value associated with this key to \"1\" to enable developer mode\n/// (i.e disable throttling) and \"0\" to disable.\n" },
				{ "SettingDeveloperMode.Name", "EFirebaseConfigSetting::SettingDeveloperMode" },
				{ "SettingDeveloperMode.ToolTip", "Set the value associated with this key to \"1\" to enable developer mode\n(i.e disable throttling) and \"0\" to disable." },
				{ "ToolTip", "@brief Keys of API settings.\n\n@see SetConfigSetting\n@see GetConfigSetting" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_FirebaseFeatures,
				nullptr,
				"EFirebaseConfigSetting",
				"EFirebaseConfigSetting",
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
	static UEnum* EFirebaseFetchFailureReason_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_FirebaseFeatures_EFirebaseFetchFailureReason, Z_Construct_UPackage__Script_FirebaseFeatures(), TEXT("EFirebaseFetchFailureReason"));
		}
		return Singleton;
	}
	template<> FIREBASEFEATURES_API UEnum* StaticEnum<EFirebaseFetchFailureReason>()
	{
		return EFirebaseFetchFailureReason_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EFirebaseFetchFailureReason(EFirebaseFetchFailureReason_StaticEnum, TEXT("/Script/FirebaseFeatures"), TEXT("EFirebaseFetchFailureReason"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_FirebaseFeatures_EFirebaseFetchFailureReason_Hash() { return 2583279743U; }
	UEnum* Z_Construct_UEnum_FirebaseFeatures_EFirebaseFetchFailureReason()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_FirebaseFeatures();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EFirebaseFetchFailureReason"), 0, Get_Z_Construct_UEnum_FirebaseFeatures_EFirebaseFetchFailureReason_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EFirebaseFetchFailureReason::Invalid", (int64)EFirebaseFetchFailureReason::Invalid },
				{ "EFirebaseFetchFailureReason::Throttled", (int64)EFirebaseFetchFailureReason::Throttled },
				{ "EFirebaseFetchFailureReason::Error", (int64)EFirebaseFetchFailureReason::Error },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "/// @brief Describes the most recent fetch failure.\n" },
				{ "Error.Comment", "/// The most recent fetch failed for an unknown reason.\n" },
				{ "Error.Name", "EFirebaseFetchFailureReason::Error" },
				{ "Error.ToolTip", "The most recent fetch failed for an unknown reason." },
				{ "Invalid.Comment", "/// The fetch has not yet failed.\n" },
				{ "Invalid.Name", "EFirebaseFetchFailureReason::Invalid" },
				{ "Invalid.ToolTip", "The fetch has not yet failed." },
				{ "ModuleRelativePath", "Public/RemoteConfig/RemoteConfig.h" },
				{ "Throttled.Comment", "/// The most recent fetch failed because it was throttled by the server.\n/// (You are sending too many fetch requests in too short a time.)\n" },
				{ "Throttled.Name", "EFirebaseFetchFailureReason::Throttled" },
				{ "Throttled.ToolTip", "The most recent fetch failed because it was throttled by the server.\n(You are sending too many fetch requests in too short a time.)" },
				{ "ToolTip", "@brief Describes the most recent fetch failure." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_FirebaseFeatures,
				nullptr,
				"EFirebaseFetchFailureReason",
				"EFirebaseFetchFailureReason",
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
	static UEnum* EFirebaseLastFetchStatus_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_FirebaseFeatures_EFirebaseLastFetchStatus, Z_Construct_UPackage__Script_FirebaseFeatures(), TEXT("EFirebaseLastFetchStatus"));
		}
		return Singleton;
	}
	template<> FIREBASEFEATURES_API UEnum* StaticEnum<EFirebaseLastFetchStatus>()
	{
		return EFirebaseLastFetchStatus_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EFirebaseLastFetchStatus(EFirebaseLastFetchStatus_StaticEnum, TEXT("/Script/FirebaseFeatures"), TEXT("EFirebaseLastFetchStatus"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_FirebaseFeatures_EFirebaseLastFetchStatus_Hash() { return 1724267646U; }
	UEnum* Z_Construct_UEnum_FirebaseFeatures_EFirebaseLastFetchStatus()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_FirebaseFeatures();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EFirebaseLastFetchStatus"), 0, Get_Z_Construct_UEnum_FirebaseFeatures_EFirebaseLastFetchStatus_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EFirebaseLastFetchStatus::Success", (int64)EFirebaseLastFetchStatus::Success },
				{ "EFirebaseLastFetchStatus::Failure", (int64)EFirebaseLastFetchStatus::Failure },
				{ "EFirebaseLastFetchStatus::Pending", (int64)EFirebaseLastFetchStatus::Pending },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "/// @brief Describes the most recent fetch request status.\n" },
				{ "Failure.Comment", "/// The most recent fetch request failed.\n" },
				{ "Failure.Name", "EFirebaseLastFetchStatus::Failure" },
				{ "Failure.ToolTip", "The most recent fetch request failed." },
				{ "ModuleRelativePath", "Public/RemoteConfig/RemoteConfig.h" },
				{ "Pending.Comment", "/// The most recent fetch is still in progress.\n" },
				{ "Pending.Name", "EFirebaseLastFetchStatus::Pending" },
				{ "Pending.ToolTip", "The most recent fetch is still in progress." },
				{ "Success.Comment", "/// The most recent fetch was a success, and its data is ready to be\n/// applied, if you have not already done so.\n" },
				{ "Success.Name", "EFirebaseLastFetchStatus::Success" },
				{ "Success.ToolTip", "The most recent fetch was a success, and its data is ready to be\napplied, if you have not already done so." },
				{ "ToolTip", "@brief Describes the most recent fetch request status." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_FirebaseFeatures,
				nullptr,
				"EFirebaseLastFetchStatus",
				"EFirebaseLastFetchStatus",
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
	static UEnum* EFirebaseValueSource_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_FirebaseFeatures_EFirebaseValueSource, Z_Construct_UPackage__Script_FirebaseFeatures(), TEXT("EFirebaseValueSource"));
		}
		return Singleton;
	}
	template<> FIREBASEFEATURES_API UEnum* StaticEnum<EFirebaseValueSource>()
	{
		return EFirebaseValueSource_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EFirebaseValueSource(EFirebaseValueSource_StaticEnum, TEXT("/Script/FirebaseFeatures"), TEXT("EFirebaseValueSource"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_FirebaseFeatures_EFirebaseValueSource_Hash() { return 1496865779U; }
	UEnum* Z_Construct_UEnum_FirebaseFeatures_EFirebaseValueSource()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_FirebaseFeatures();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EFirebaseValueSource"), 0, Get_Z_Construct_UEnum_FirebaseFeatures_EFirebaseValueSource_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EFirebaseValueSource::StaticValue", (int64)EFirebaseValueSource::StaticValue },
				{ "EFirebaseValueSource::RemoteValue", (int64)EFirebaseValueSource::RemoteValue },
				{ "EFirebaseValueSource::DefaultValue", (int64)EFirebaseValueSource::DefaultValue },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "/// @brief Describes the source a config value was retrieved from.\n" },
				{ "DefaultValue.Comment", "/// The value was not specified, so the specified default value was\n/// returned instead.\n" },
				{ "DefaultValue.Name", "EFirebaseValueSource::DefaultValue" },
				{ "DefaultValue.ToolTip", "The value was not specified, so the specified default value was\nreturned instead." },
				{ "ModuleRelativePath", "Public/RemoteConfig/RemoteConfig.h" },
				{ "RemoteValue.Comment", "/// The value was found in the remote data store, and returned.\n" },
				{ "RemoteValue.Name", "EFirebaseValueSource::RemoteValue" },
				{ "RemoteValue.ToolTip", "The value was found in the remote data store, and returned." },
				{ "StaticValue.Comment", "/// The value was not specified and no default was specified, so a static\n/// value (0 for numeric values, an empty string for strings) was returned.\n" },
				{ "StaticValue.Name", "EFirebaseValueSource::StaticValue" },
				{ "StaticValue.ToolTip", "The value was not specified and no default was specified, so a static\nvalue (0 for numeric values, an empty string for strings) was returned." },
				{ "ToolTip", "@brief Describes the source a config value was retrieved from." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_FirebaseFeatures,
				nullptr,
				"EFirebaseValueSource",
				"EFirebaseValueSource",
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
class UScriptStruct* FFirebaseConfigKeyValueVariant::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FIREBASEFEATURES_API uint32 Get_Z_Construct_UScriptStruct_FFirebaseConfigKeyValueVariant_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FFirebaseConfigKeyValueVariant, Z_Construct_UPackage__Script_FirebaseFeatures(), TEXT("FirebaseConfigKeyValueVariant"), sizeof(FFirebaseConfigKeyValueVariant), Get_Z_Construct_UScriptStruct_FFirebaseConfigKeyValueVariant_Hash());
	}
	return Singleton;
}
template<> FIREBASEFEATURES_API UScriptStruct* StaticStruct<FFirebaseConfigKeyValueVariant>()
{
	return FFirebaseConfigKeyValueVariant::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FFirebaseConfigKeyValueVariant(FFirebaseConfigKeyValueVariant::StaticStruct, TEXT("/Script/FirebaseFeatures"), TEXT("FirebaseConfigKeyValueVariant"), false, nullptr, nullptr);
static struct FScriptStruct_FirebaseFeatures_StaticRegisterNativesFFirebaseConfigKeyValueVariant
{
	FScriptStruct_FirebaseFeatures_StaticRegisterNativesFFirebaseConfigKeyValueVariant()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("FirebaseConfigKeyValueVariant")),new UScriptStruct::TCppStructOps<FFirebaseConfigKeyValueVariant>);
	}
} ScriptStruct_FirebaseFeatures_StaticRegisterNativesFFirebaseConfigKeyValueVariant;
	struct Z_Construct_UScriptStruct_FFirebaseConfigKeyValueVariant_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFirebaseConfigKeyValueVariant_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/// @brief Describes a mapping of a key to a value of any type. Used to set\n/// default values.\n" },
		{ "ModuleRelativePath", "Public/RemoteConfig/RemoteConfig.h" },
		{ "ToolTip", "@brief Describes a mapping of a key to a value of any type. Used to set\ndefault values." },
	};
#endif
	void* Z_Construct_UScriptStruct_FFirebaseConfigKeyValueVariant_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFirebaseConfigKeyValueVariant>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFirebaseConfigKeyValueVariant_Statics::NewProp_Key_MetaData[] = {
		{ "Category", "Firebase|RemoteConfig" },
		{ "Comment", "/// The lookup key string.\n" },
		{ "ModuleRelativePath", "Public/RemoteConfig/RemoteConfig.h" },
		{ "ToolTip", "The lookup key string." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFirebaseConfigKeyValueVariant_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFirebaseConfigKeyValueVariant, Key), METADATA_PARAMS(Z_Construct_UScriptStruct_FFirebaseConfigKeyValueVariant_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFirebaseConfigKeyValueVariant_Statics::NewProp_Key_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFirebaseConfigKeyValueVariant_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "Firebase|RemoteConfig" },
		{ "Comment", "/// The value to be stored. The type of the Variant determines the type of\n/// default data for the given key.\n" },
		{ "ModuleRelativePath", "Public/RemoteConfig/RemoteConfig.h" },
		{ "ToolTip", "The value to be stored. The type of the Variant determines the type of\ndefault data for the given key." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFirebaseConfigKeyValueVariant_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFirebaseConfigKeyValueVariant, Value), Z_Construct_UScriptStruct_FFirebaseVariant, METADATA_PARAMS(Z_Construct_UScriptStruct_FFirebaseConfigKeyValueVariant_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFirebaseConfigKeyValueVariant_Statics::NewProp_Value_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFirebaseConfigKeyValueVariant_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFirebaseConfigKeyValueVariant_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFirebaseConfigKeyValueVariant_Statics::NewProp_Value,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFirebaseConfigKeyValueVariant_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FirebaseFeatures,
		nullptr,
		&NewStructOps,
		"FirebaseConfigKeyValueVariant",
		sizeof(FFirebaseConfigKeyValueVariant),
		alignof(FFirebaseConfigKeyValueVariant),
		Z_Construct_UScriptStruct_FFirebaseConfigKeyValueVariant_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFirebaseConfigKeyValueVariant_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFirebaseConfigKeyValueVariant_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFirebaseConfigKeyValueVariant_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFirebaseConfigKeyValueVariant()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FFirebaseConfigKeyValueVariant_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_FirebaseFeatures();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("FirebaseConfigKeyValueVariant"), sizeof(FFirebaseConfigKeyValueVariant), Get_Z_Construct_UScriptStruct_FFirebaseConfigKeyValueVariant_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FFirebaseConfigKeyValueVariant_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FFirebaseConfigKeyValueVariant_Hash() { return 1483355028U; }
class UScriptStruct* FFirebaseConfigKeyValue::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FIREBASEFEATURES_API uint32 Get_Z_Construct_UScriptStruct_FFirebaseConfigKeyValue_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FFirebaseConfigKeyValue, Z_Construct_UPackage__Script_FirebaseFeatures(), TEXT("FirebaseConfigKeyValue"), sizeof(FFirebaseConfigKeyValue), Get_Z_Construct_UScriptStruct_FFirebaseConfigKeyValue_Hash());
	}
	return Singleton;
}
template<> FIREBASEFEATURES_API UScriptStruct* StaticStruct<FFirebaseConfigKeyValue>()
{
	return FFirebaseConfigKeyValue::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FFirebaseConfigKeyValue(FFirebaseConfigKeyValue::StaticStruct, TEXT("/Script/FirebaseFeatures"), TEXT("FirebaseConfigKeyValue"), false, nullptr, nullptr);
static struct FScriptStruct_FirebaseFeatures_StaticRegisterNativesFFirebaseConfigKeyValue
{
	FScriptStruct_FirebaseFeatures_StaticRegisterNativesFFirebaseConfigKeyValue()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("FirebaseConfigKeyValue")),new UScriptStruct::TCppStructOps<FFirebaseConfigKeyValue>);
	}
} ScriptStruct_FirebaseFeatures_StaticRegisterNativesFFirebaseConfigKeyValue;
	struct Z_Construct_UScriptStruct_FFirebaseConfigKeyValue_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFirebaseConfigKeyValue_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/// @brief Describes a mapping of a key to a string value. Used to set default\n/// values.\n" },
		{ "ModuleRelativePath", "Public/RemoteConfig/RemoteConfig.h" },
		{ "ToolTip", "@brief Describes a mapping of a key to a string value. Used to set default\nvalues." },
	};
#endif
	void* Z_Construct_UScriptStruct_FFirebaseConfigKeyValue_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFirebaseConfigKeyValue>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFirebaseConfigKeyValue_Statics::NewProp_Key_MetaData[] = {
		{ "Category", "Firebase|RemoteConfig" },
		{ "Comment", "/// The lookup key string.\n" },
		{ "ModuleRelativePath", "Public/RemoteConfig/RemoteConfig.h" },
		{ "ToolTip", "The lookup key string." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFirebaseConfigKeyValue_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFirebaseConfigKeyValue, Key), METADATA_PARAMS(Z_Construct_UScriptStruct_FFirebaseConfigKeyValue_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFirebaseConfigKeyValue_Statics::NewProp_Key_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFirebaseConfigKeyValue_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "Firebase|RemoteConfig" },
		{ "Comment", "/// The value string to be stored.\n" },
		{ "ModuleRelativePath", "Public/RemoteConfig/RemoteConfig.h" },
		{ "ToolTip", "The value string to be stored." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFirebaseConfigKeyValue_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFirebaseConfigKeyValue, Value), METADATA_PARAMS(Z_Construct_UScriptStruct_FFirebaseConfigKeyValue_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFirebaseConfigKeyValue_Statics::NewProp_Value_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFirebaseConfigKeyValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFirebaseConfigKeyValue_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFirebaseConfigKeyValue_Statics::NewProp_Value,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFirebaseConfigKeyValue_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FirebaseFeatures,
		nullptr,
		&NewStructOps,
		"FirebaseConfigKeyValue",
		sizeof(FFirebaseConfigKeyValue),
		alignof(FFirebaseConfigKeyValue),
		Z_Construct_UScriptStruct_FFirebaseConfigKeyValue_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFirebaseConfigKeyValue_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFirebaseConfigKeyValue_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFirebaseConfigKeyValue_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFirebaseConfigKeyValue()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FFirebaseConfigKeyValue_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_FirebaseFeatures();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("FirebaseConfigKeyValue"), sizeof(FFirebaseConfigKeyValue), Get_Z_Construct_UScriptStruct_FFirebaseConfigKeyValue_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FFirebaseConfigKeyValue_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FFirebaseConfigKeyValue_Hash() { return 3790159297U; }
class UScriptStruct* FFirebaseValueInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FIREBASEFEATURES_API uint32 Get_Z_Construct_UScriptStruct_FFirebaseValueInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FFirebaseValueInfo, Z_Construct_UPackage__Script_FirebaseFeatures(), TEXT("FirebaseValueInfo"), sizeof(FFirebaseValueInfo), Get_Z_Construct_UScriptStruct_FFirebaseValueInfo_Hash());
	}
	return Singleton;
}
template<> FIREBASEFEATURES_API UScriptStruct* StaticStruct<FFirebaseValueInfo>()
{
	return FFirebaseValueInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FFirebaseValueInfo(FFirebaseValueInfo::StaticStruct, TEXT("/Script/FirebaseFeatures"), TEXT("FirebaseValueInfo"), false, nullptr, nullptr);
static struct FScriptStruct_FirebaseFeatures_StaticRegisterNativesFFirebaseValueInfo
{
	FScriptStruct_FirebaseFeatures_StaticRegisterNativesFFirebaseValueInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("FirebaseValueInfo")),new UScriptStruct::TCppStructOps<FFirebaseValueInfo>);
	}
} ScriptStruct_FirebaseFeatures_StaticRegisterNativesFFirebaseValueInfo;
	struct Z_Construct_UScriptStruct_FFirebaseValueInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Source_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Source_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Source;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bConversionSuccessful_MetaData[];
#endif
		static void NewProp_bConversionSuccessful_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bConversionSuccessful;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFirebaseValueInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/// @brief Describes a retrieved value.\n" },
		{ "ModuleRelativePath", "Public/RemoteConfig/RemoteConfig.h" },
		{ "ToolTip", "@brief Describes a retrieved value." },
	};
#endif
	void* Z_Construct_UScriptStruct_FFirebaseValueInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFirebaseValueInfo>();
	}
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FFirebaseValueInfo_Statics::NewProp_Source_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFirebaseValueInfo_Statics::NewProp_Source_MetaData[] = {
		{ "Category", "Firebase|RemoteConfig" },
		{ "Comment", "/// Where the config value was retrieved from (Default Config or Active\n/// Config).\n" },
		{ "ModuleRelativePath", "Public/RemoteConfig/RemoteConfig.h" },
		{ "ToolTip", "Where the config value was retrieved from (Default Config or Active\nConfig)." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FFirebaseValueInfo_Statics::NewProp_Source = { "Source", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFirebaseValueInfo, Source), Z_Construct_UEnum_FirebaseFeatures_EFirebaseValueSource, METADATA_PARAMS(Z_Construct_UScriptStruct_FFirebaseValueInfo_Statics::NewProp_Source_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFirebaseValueInfo_Statics::NewProp_Source_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFirebaseValueInfo_Statics::NewProp_bConversionSuccessful_MetaData[] = {
		{ "Category", "Firebase|RemoteConfig" },
		{ "Comment", "/// If <code>true</code> this indicates conversion to the requested type\n/// succeeded, otherwise conversion failed so the static value for the\n/// requested type was retrieved instead.\n" },
		{ "ModuleRelativePath", "Public/RemoteConfig/RemoteConfig.h" },
		{ "ToolTip", "If <code>true</code> this indicates conversion to the requested type\nsucceeded, otherwise conversion failed so the static value for the\nrequested type was retrieved instead." },
	};
#endif
	void Z_Construct_UScriptStruct_FFirebaseValueInfo_Statics::NewProp_bConversionSuccessful_SetBit(void* Obj)
	{
		((FFirebaseValueInfo*)Obj)->bConversionSuccessful = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FFirebaseValueInfo_Statics::NewProp_bConversionSuccessful = { "bConversionSuccessful", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FFirebaseValueInfo), &Z_Construct_UScriptStruct_FFirebaseValueInfo_Statics::NewProp_bConversionSuccessful_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FFirebaseValueInfo_Statics::NewProp_bConversionSuccessful_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFirebaseValueInfo_Statics::NewProp_bConversionSuccessful_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFirebaseValueInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFirebaseValueInfo_Statics::NewProp_Source_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFirebaseValueInfo_Statics::NewProp_Source,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFirebaseValueInfo_Statics::NewProp_bConversionSuccessful,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFirebaseValueInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FirebaseFeatures,
		nullptr,
		&NewStructOps,
		"FirebaseValueInfo",
		sizeof(FFirebaseValueInfo),
		alignof(FFirebaseValueInfo),
		Z_Construct_UScriptStruct_FFirebaseValueInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFirebaseValueInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFirebaseValueInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFirebaseValueInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFirebaseValueInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FFirebaseValueInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_FirebaseFeatures();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("FirebaseValueInfo"), sizeof(FFirebaseValueInfo), Get_Z_Construct_UScriptStruct_FFirebaseValueInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FFirebaseValueInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FFirebaseValueInfo_Hash() { return 1150127388U; }
class UScriptStruct* FFirebaseConfigInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FIREBASEFEATURES_API uint32 Get_Z_Construct_UScriptStruct_FFirebaseConfigInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FFirebaseConfigInfo, Z_Construct_UPackage__Script_FirebaseFeatures(), TEXT("FirebaseConfigInfo"), sizeof(FFirebaseConfigInfo), Get_Z_Construct_UScriptStruct_FFirebaseConfigInfo_Hash());
	}
	return Singleton;
}
template<> FIREBASEFEATURES_API UScriptStruct* StaticStruct<FFirebaseConfigInfo>()
{
	return FFirebaseConfigInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FFirebaseConfigInfo(FFirebaseConfigInfo::StaticStruct, TEXT("/Script/FirebaseFeatures"), TEXT("FirebaseConfigInfo"), false, nullptr, nullptr);
static struct FScriptStruct_FirebaseFeatures_StaticRegisterNativesFFirebaseConfigInfo
{
	FScriptStruct_FirebaseFeatures_StaticRegisterNativesFFirebaseConfigInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("FirebaseConfigInfo")),new UScriptStruct::TCppStructOps<FFirebaseConfigInfo>);
	}
} ScriptStruct_FirebaseFeatures_StaticRegisterNativesFFirebaseConfigInfo;
	struct Z_Construct_UScriptStruct_FFirebaseConfigInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FetchTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_FetchTime;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LastFetchStatus_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastFetchStatus_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_LastFetchStatus;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LastFetchFailureReason_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastFetchFailureReason_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_LastFetchFailureReason;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThrottledEndTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_ThrottledEndTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFirebaseConfigInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/// @brief Describes the state of the most recent Fetch() call.\n/// Normally returned as a result of the GetInfo() function.\n" },
		{ "ModuleRelativePath", "Public/RemoteConfig/RemoteConfig.h" },
		{ "ToolTip", "@brief Describes the state of the most recent Fetch() call.\nNormally returned as a result of the GetInfo() function." },
	};
#endif
	void* Z_Construct_UScriptStruct_FFirebaseConfigInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFirebaseConfigInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFirebaseConfigInfo_Statics::NewProp_FetchTime_MetaData[] = {
		{ "Category", "Firebase|RemoteConfig" },
		{ "Comment", "/// @brief The time (in milliseconds since the epoch) that the last fetch\n/// operation completed.\n" },
		{ "ModuleRelativePath", "Public/RemoteConfig/RemoteConfig.h" },
		{ "ToolTip", "@brief The time (in milliseconds since the epoch) that the last fetch\noperation completed." },
	};
#endif
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FFirebaseConfigInfo_Statics::NewProp_FetchTime = { "FetchTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFirebaseConfigInfo, FetchTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FFirebaseConfigInfo_Statics::NewProp_FetchTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFirebaseConfigInfo_Statics::NewProp_FetchTime_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FFirebaseConfigInfo_Statics::NewProp_LastFetchStatus_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFirebaseConfigInfo_Statics::NewProp_LastFetchStatus_MetaData[] = {
		{ "Category", "Firebase|RemoteConfig" },
		{ "Comment", "/// @brief The status of the last fetch request.\n" },
		{ "ModuleRelativePath", "Public/RemoteConfig/RemoteConfig.h" },
		{ "ToolTip", "@brief The status of the last fetch request." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FFirebaseConfigInfo_Statics::NewProp_LastFetchStatus = { "LastFetchStatus", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFirebaseConfigInfo, LastFetchStatus), Z_Construct_UEnum_FirebaseFeatures_EFirebaseLastFetchStatus, METADATA_PARAMS(Z_Construct_UScriptStruct_FFirebaseConfigInfo_Statics::NewProp_LastFetchStatus_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFirebaseConfigInfo_Statics::NewProp_LastFetchStatus_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FFirebaseConfigInfo_Statics::NewProp_LastFetchFailureReason_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFirebaseConfigInfo_Statics::NewProp_LastFetchFailureReason_MetaData[] = {
		{ "Category", "Firebase|RemoteConfig" },
		{ "Comment", "/// @brief The reason the most recent fetch failed.\n" },
		{ "ModuleRelativePath", "Public/RemoteConfig/RemoteConfig.h" },
		{ "ToolTip", "@brief The reason the most recent fetch failed." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FFirebaseConfigInfo_Statics::NewProp_LastFetchFailureReason = { "LastFetchFailureReason", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFirebaseConfigInfo, LastFetchFailureReason), Z_Construct_UEnum_FirebaseFeatures_EFirebaseFetchFailureReason, METADATA_PARAMS(Z_Construct_UScriptStruct_FFirebaseConfigInfo_Statics::NewProp_LastFetchFailureReason_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFirebaseConfigInfo_Statics::NewProp_LastFetchFailureReason_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFirebaseConfigInfo_Statics::NewProp_ThrottledEndTime_MetaData[] = {
		{ "Category", "Firebase|RemoteConfig" },
		{ "Comment", "/// @brief The time (in milliseconds since the epoch) when the refreshing of\n/// Remote Config data is throttled.\n" },
		{ "ModuleRelativePath", "Public/RemoteConfig/RemoteConfig.h" },
		{ "ToolTip", "@brief The time (in milliseconds since the epoch) when the refreshing of\nRemote Config data is throttled." },
	};
#endif
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FFirebaseConfigInfo_Statics::NewProp_ThrottledEndTime = { "ThrottledEndTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFirebaseConfigInfo, ThrottledEndTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FFirebaseConfigInfo_Statics::NewProp_ThrottledEndTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFirebaseConfigInfo_Statics::NewProp_ThrottledEndTime_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFirebaseConfigInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFirebaseConfigInfo_Statics::NewProp_FetchTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFirebaseConfigInfo_Statics::NewProp_LastFetchStatus_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFirebaseConfigInfo_Statics::NewProp_LastFetchStatus,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFirebaseConfigInfo_Statics::NewProp_LastFetchFailureReason_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFirebaseConfigInfo_Statics::NewProp_LastFetchFailureReason,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFirebaseConfigInfo_Statics::NewProp_ThrottledEndTime,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFirebaseConfigInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FirebaseFeatures,
		nullptr,
		&NewStructOps,
		"FirebaseConfigInfo",
		sizeof(FFirebaseConfigInfo),
		alignof(FFirebaseConfigInfo),
		Z_Construct_UScriptStruct_FFirebaseConfigInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFirebaseConfigInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFirebaseConfigInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFirebaseConfigInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFirebaseConfigInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FFirebaseConfigInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_FirebaseFeatures();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("FirebaseConfigInfo"), sizeof(FFirebaseConfigInfo), Get_Z_Construct_UScriptStruct_FFirebaseConfigInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FFirebaseConfigInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FFirebaseConfigInfo_Hash() { return 4052507487U; }
	DEFINE_FUNCTION(UFirebaseRemoteConfig::execGetInfo)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FFirebaseConfigInfo*)Z_Param__Result=UFirebaseRemoteConfig::GetInfo();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFirebaseRemoteConfig::execActivateFetched)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UFirebaseRemoteConfig::ActivateFetched();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFirebaseRemoteConfig::execGetKeys)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FString>*)Z_Param__Result=UFirebaseRemoteConfig::GetKeys();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFirebaseRemoteConfig::execGetKeysByPrefix)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Prefix);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FString>*)Z_Param__Result=UFirebaseRemoteConfig::GetKeysByPrefix(Z_Param_Prefix);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFirebaseRemoteConfig::execGetDataWithInfo)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_STRUCT_REF(FFirebaseValueInfo,Z_Param_Out_Info);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<uint8>*)Z_Param__Result=UFirebaseRemoteConfig::GetDataWithInfo(Z_Param_Key,Z_Param_Out_Info);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFirebaseRemoteConfig::execGetData)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<uint8>*)Z_Param__Result=UFirebaseRemoteConfig::GetData(Z_Param_Key);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFirebaseRemoteConfig::execGetStringWithInfo)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_STRUCT_REF(FFirebaseValueInfo,Z_Param_Out_Info);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UFirebaseRemoteConfig::GetStringWithInfo(Z_Param_Key,Z_Param_Out_Info);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFirebaseRemoteConfig::execGetString)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UFirebaseRemoteConfig::GetString(Z_Param_Key);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFirebaseRemoteConfig::execGetFloatWithInfo)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_STRUCT_REF(FFirebaseValueInfo,Z_Param_Out_Info);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UFirebaseRemoteConfig::GetFloatWithInfo(Z_Param_Key,Z_Param_Out_Info);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFirebaseRemoteConfig::execGetFloat)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UFirebaseRemoteConfig::GetFloat(Z_Param_Key);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFirebaseRemoteConfig::execGetInt64WithInfo)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_STRUCT_REF(FFirebaseValueInfo,Z_Param_Out_Info);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int64*)Z_Param__Result=UFirebaseRemoteConfig::GetInt64WithInfo(Z_Param_Key,Z_Param_Out_Info);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFirebaseRemoteConfig::execGetInt64)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int64*)Z_Param__Result=UFirebaseRemoteConfig::GetInt64(Z_Param_Key);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFirebaseRemoteConfig::execGetInt32)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UFirebaseRemoteConfig::GetInt32(Z_Param_Key);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFirebaseRemoteConfig::execGetByte)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(uint8*)Z_Param__Result=UFirebaseRemoteConfig::GetByte(Z_Param_Key);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFirebaseRemoteConfig::execGetBooleanWithInfo)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_STRUCT_REF(FFirebaseValueInfo,Z_Param_Out_Info);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UFirebaseRemoteConfig::GetBooleanWithInfo(Z_Param_Key,Z_Param_Out_Info);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFirebaseRemoteConfig::execGetBoolean)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UFirebaseRemoteConfig::GetBoolean(Z_Param_Key);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFirebaseRemoteConfig::execSetConfigSetting)
	{
		P_GET_ENUM(EFirebaseConfigSetting,Z_Param_Setting);
		P_GET_PROPERTY(FStrProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		UFirebaseRemoteConfig::SetConfigSetting(EFirebaseConfigSetting(Z_Param_Setting),Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFirebaseRemoteConfig::execGetConfigSetting)
	{
		P_GET_ENUM(EFirebaseConfigSetting,Z_Param_Defaults);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UFirebaseRemoteConfig::GetConfigSetting(EFirebaseConfigSetting(Z_Param_Defaults));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFirebaseRemoteConfig::execSetDefaults)
	{
		P_GET_TARRAY_REF(FFirebaseConfigKeyValue,Z_Param_Out_Defaults);
		P_FINISH;
		P_NATIVE_BEGIN;
		UFirebaseRemoteConfig::SetDefaults(Z_Param_Out_Defaults);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFirebaseRemoteConfig::execSetDefaultsWithVariant)
	{
		P_GET_TARRAY_REF(FFirebaseConfigKeyValueVariant,Z_Param_Out_Defaults);
		P_FINISH;
		P_NATIVE_BEGIN;
		UFirebaseRemoteConfig::SetDefaultsWithVariant(Z_Param_Out_Defaults);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFirebaseRemoteConfig::execTerminate)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		UFirebaseRemoteConfig::Terminate();
		P_NATIVE_END;
	}
	void UFirebaseRemoteConfig::StaticRegisterNativesUFirebaseRemoteConfig()
	{
		UClass* Class = UFirebaseRemoteConfig::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ActivateFetched", &UFirebaseRemoteConfig::execActivateFetched },
			{ "GetBoolean", &UFirebaseRemoteConfig::execGetBoolean },
			{ "GetBooleanWithInfo", &UFirebaseRemoteConfig::execGetBooleanWithInfo },
			{ "GetByte", &UFirebaseRemoteConfig::execGetByte },
			{ "GetConfigSetting", &UFirebaseRemoteConfig::execGetConfigSetting },
			{ "GetData", &UFirebaseRemoteConfig::execGetData },
			{ "GetDataWithInfo", &UFirebaseRemoteConfig::execGetDataWithInfo },
			{ "GetFloat", &UFirebaseRemoteConfig::execGetFloat },
			{ "GetFloatWithInfo", &UFirebaseRemoteConfig::execGetFloatWithInfo },
			{ "GetInfo", &UFirebaseRemoteConfig::execGetInfo },
			{ "GetInt32", &UFirebaseRemoteConfig::execGetInt32 },
			{ "GetInt64", &UFirebaseRemoteConfig::execGetInt64 },
			{ "GetInt64WithInfo", &UFirebaseRemoteConfig::execGetInt64WithInfo },
			{ "GetKeys", &UFirebaseRemoteConfig::execGetKeys },
			{ "GetKeysByPrefix", &UFirebaseRemoteConfig::execGetKeysByPrefix },
			{ "GetString", &UFirebaseRemoteConfig::execGetString },
			{ "GetStringWithInfo", &UFirebaseRemoteConfig::execGetStringWithInfo },
			{ "SetConfigSetting", &UFirebaseRemoteConfig::execSetConfigSetting },
			{ "SetDefaults", &UFirebaseRemoteConfig::execSetDefaults },
			{ "SetDefaultsWithVariant", &UFirebaseRemoteConfig::execSetDefaultsWithVariant },
			{ "Terminate", &UFirebaseRemoteConfig::execTerminate },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFirebaseRemoteConfig_ActivateFetched_Statics
	{
		struct FirebaseRemoteConfig_eventActivateFetched_Parms
		{
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseRemoteConfig_ActivateFetched_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Activated" },
	};
#endif
	void Z_Construct_UFunction_UFirebaseRemoteConfig_ActivateFetched_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FirebaseRemoteConfig_eventActivateFetched_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFirebaseRemoteConfig_ActivateFetched_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FirebaseRemoteConfig_eventActivateFetched_Parms), &Z_Construct_UFunction_UFirebaseRemoteConfig_ActivateFetched_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UFirebaseRemoteConfig_ActivateFetched_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseRemoteConfig_ActivateFetched_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFirebaseRemoteConfig_ActivateFetched_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseRemoteConfig_ActivateFetched_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseRemoteConfig_ActivateFetched_Statics::Function_MetaDataParams[] = {
		{ "Category", "Firebase|RemoteConfig" },
		{ "Comment", "/// @brief Applies the most recently fetched data, so that its values can be\n/// accessed.\n///\n/// Calls to @ref GetLong(), @ref GetDouble(), @ref GetString() and\n/// @ref GetData() will not reflect the new data retrieved by @ref Fetch()\n/// until @ref ActivateFetched() is called.  This gives the developer control\n/// over when newly fetched data is visible to their application.\n///\n/// @return true if a previously fetch configuration was activated, false\n/// if a fetched configuration wasn't found or the configuration was previously\n/// activated.\n" },
		{ "ModuleRelativePath", "Public/RemoteConfig/RemoteConfig.h" },
		{ "ToolTip", "@brief Applies the most recently fetched data, so that its values can be\naccessed.\n\nCalls to @ref GetLong(), @ref GetDouble(), @ref GetString() and\n@ref GetData() will not reflect the new data retrieved by @ref Fetch()\nuntil @ref ActivateFetched() is called.  This gives the developer control\nover when newly fetched data is visible to their application.\n\n@return true if a previously fetch configuration was activated, false\nif a fetched configuration wasn't found or the configuration was previously\nactivated." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFirebaseRemoteConfig_ActivateFetched_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFirebaseRemoteConfig, nullptr, "ActivateFetched", nullptr, nullptr, sizeof(FirebaseRemoteConfig_eventActivateFetched_Parms), Z_Construct_UFunction_UFirebaseRemoteConfig_ActivateFetched_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseRemoteConfig_ActivateFetched_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFirebaseRemoteConfig_ActivateFetched_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseRemoteConfig_ActivateFetched_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFirebaseRemoteConfig_ActivateFetched()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFirebaseRemoteConfig_ActivateFetched_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFirebaseRemoteConfig_GetBoolean_Statics
	{
		struct FirebaseRemoteConfig_eventGetBoolean_Parms
		{
			FString Key;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseRemoteConfig_GetBoolean_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFirebaseRemoteConfig_GetBoolean_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirebaseRemoteConfig_eventGetBoolean_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UFirebaseRemoteConfig_GetBoolean_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseRemoteConfig_GetBoolean_Statics::NewProp_Key_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseRemoteConfig_GetBoolean_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Value" },
	};
#endif
	void Z_Construct_UFunction_UFirebaseRemoteConfig_GetBoolean_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FirebaseRemoteConfig_eventGetBoolean_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFirebaseRemoteConfig_GetBoolean_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FirebaseRemoteConfig_eventGetBoolean_Parms), &Z_Construct_UFunction_UFirebaseRemoteConfig_GetBoolean_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UFirebaseRemoteConfig_GetBoolean_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseRemoteConfig_GetBoolean_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFirebaseRemoteConfig_GetBoolean_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseRemoteConfig_GetBoolean_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseRemoteConfig_GetBoolean_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseRemoteConfig_GetBoolean_Statics::Function_MetaDataParams[] = {
		{ "Category", "Firebase|RemoteConfig" },
		{ "Comment", "/// @brief Returns the value associated with a key, converted to a bool.\n///\n/// Values of \"1\", \"true\", \"t\", \"yes\", \"y\" and \"on\" are interpreted (case\n/// insensitive) as <code>true</code> and \"0\", \"false\", \"f\", \"no\", \"n\", \"off\",\n/// and empty strings are interpreted (case insensitive) as <code>false</code>.\n///\n/// @param[in] key Key of the value to be retrieved.\n///\n/// @return Value associated with the specified key converted to a boolean\n/// value.\n" },
		{ "ModuleRelativePath", "Public/RemoteConfig/RemoteConfig.h" },
		{ "ToolTip", "@brief Returns the value associated with a key, converted to a bool.\n\nValues of \"1\", \"true\", \"t\", \"yes\", \"y\" and \"on\" are interpreted (case\ninsensitive) as <code>true</code> and \"0\", \"false\", \"f\", \"no\", \"n\", \"off\",\nand empty strings are interpreted (case insensitive) as <code>false</code>.\n\n@param[in] key Key of the value to be retrieved.\n\n@return Value associated with the specified key converted to a boolean\nvalue." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFirebaseRemoteConfig_GetBoolean_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFirebaseRemoteConfig, nullptr, "GetBoolean", nullptr, nullptr, sizeof(FirebaseRemoteConfig_eventGetBoolean_Parms), Z_Construct_UFunction_UFirebaseRemoteConfig_GetBoolean_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseRemoteConfig_GetBoolean_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFirebaseRemoteConfig_GetBoolean_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseRemoteConfig_GetBoolean_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFirebaseRemoteConfig_GetBoolean()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFirebaseRemoteConfig_GetBoolean_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFirebaseRemoteConfig_GetBooleanWithInfo_Statics
	{
		struct FirebaseRemoteConfig_eventGetBooleanWithInfo_Parms
		{
			FString Key;
			FFirebaseValueInfo Info;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Info;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseRemoteConfig_GetBooleanWithInfo_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFirebaseRemoteConfig_GetBooleanWithInfo_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirebaseRemoteConfig_eventGetBooleanWithInfo_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UFirebaseRemoteConfig_GetBooleanWithInfo_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseRemoteConfig_GetBooleanWithInfo_Statics::NewProp_Key_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFirebaseRemoteConfig_GetBooleanWithInfo_Statics::NewProp_Info = { "Info", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirebaseRemoteConfig_eventGetBooleanWithInfo_Parms, Info), Z_Construct_UScriptStruct_FFirebaseValueInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseRemoteConfig_GetBooleanWithInfo_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Value" },
	};
#endif
	void Z_Construct_UFunction_UFirebaseRemoteConfig_GetBooleanWithInfo_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FirebaseRemoteConfig_eventGetBooleanWithInfo_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFirebaseRemoteConfig_GetBooleanWithInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FirebaseRemoteConfig_eventGetBooleanWithInfo_Parms), &Z_Construct_UFunction_UFirebaseRemoteConfig_GetBooleanWithInfo_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UFirebaseRemoteConfig_GetBooleanWithInfo_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseRemoteConfig_GetBooleanWithInfo_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFirebaseRemoteConfig_GetBooleanWithInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseRemoteConfig_GetBooleanWithInfo_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseRemoteConfig_GetBooleanWithInfo_Statics::NewProp_Info,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseRemoteConfig_GetBooleanWithInfo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseRemoteConfig_GetBooleanWithInfo_Statics::Function_MetaDataParams[] = {
		{ "Category", "Firebase|RemoteConfig" },
		{ "Comment", "/// @brief Returns the value associated with a key, converted to a bool.\n///\n/// Values of \"1\", \"true\", \"t\", \"yes\", \"y\" and \"on\" are interpreted (case\n/// insensitive) as <code>true</code> and \"0\", \"false\", \"f\", \"no\", \"n\", \"off\",\n/// and empty strings are interpreted (case insensitive) as <code>false</code>.\n///\n/// @param[in] key Key of the value to be retrieved.\n/// @param[out] info A return value, specifying the source of the returned\n/// value.\n///\n/// @return Value associated with the specified key converted to a boolean\n/// value.\n" },
		{ "ModuleRelativePath", "Public/RemoteConfig/RemoteConfig.h" },
		{ "ToolTip", "@brief Returns the value associated with a key, converted to a bool.\n\nValues of \"1\", \"true\", \"t\", \"yes\", \"y\" and \"on\" are interpreted (case\ninsensitive) as <code>true</code> and \"0\", \"false\", \"f\", \"no\", \"n\", \"off\",\nand empty strings are interpreted (case insensitive) as <code>false</code>.\n\n@param[in] key Key of the value to be retrieved.\n@param[out] info A return value, specifying the source of the returned\nvalue.\n\n@return Value associated with the specified key converted to a boolean\nvalue." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFirebaseRemoteConfig_GetBooleanWithInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFirebaseRemoteConfig, nullptr, "GetBooleanWithInfo", nullptr, nullptr, sizeof(FirebaseRemoteConfig_eventGetBooleanWithInfo_Parms), Z_Construct_UFunction_UFirebaseRemoteConfig_GetBooleanWithInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseRemoteConfig_GetBooleanWithInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFirebaseRemoteConfig_GetBooleanWithInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseRemoteConfig_GetBooleanWithInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFirebaseRemoteConfig_GetBooleanWithInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFirebaseRemoteConfig_GetBooleanWithInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFirebaseRemoteConfig_GetByte_Statics
	{
		struct FirebaseRemoteConfig_eventGetByte_Parms
		{
			FString Key;
			uint8 ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseRemoteConfig_GetByte_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFirebaseRemoteConfig_GetByte_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirebaseRemoteConfig_eventGetByte_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UFirebaseRemoteConfig_GetByte_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseRemoteConfig_GetByte_Statics::NewProp_Key_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseRemoteConfig_GetByte_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Value" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFirebaseRemoteConfig_GetByte_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirebaseRemoteConfig_eventGetByte_Parms, ReturnValue), nullptr, METADATA_PARAMS(Z_Construct_UFunction_UFirebaseRemoteConfig_GetByte_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseRemoteConfig_GetByte_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFirebaseRemoteConfig_GetByte_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseRemoteConfig_GetByte_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseRemoteConfig_GetByte_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseRemoteConfig_GetByte_Statics::Function_MetaDataParams[] = {
		{ "Category", "Firebase|RemoteConfig" },
		{ "Comment", "/// @brief Returns the value associated with a key, converted to a 8-bit\n/// integer.\n///\n/// @param[in] key Key of the value to be retrieved.\n///\n/// @return Value associated with the specified key converted to a 8-bit\n/// integer.\n" },
		{ "ModuleRelativePath", "Public/RemoteConfig/RemoteConfig.h" },
		{ "ToolTip", "@brief Returns the value associated with a key, converted to a 8-bit\ninteger.\n\n@param[in] key Key of the value to be retrieved.\n\n@return Value associated with the specified key converted to a 8-bit\ninteger." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFirebaseRemoteConfig_GetByte_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFirebaseRemoteConfig, nullptr, "GetByte", nullptr, nullptr, sizeof(FirebaseRemoteConfig_eventGetByte_Parms), Z_Construct_UFunction_UFirebaseRemoteConfig_GetByte_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseRemoteConfig_GetByte_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFirebaseRemoteConfig_GetByte_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseRemoteConfig_GetByte_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFirebaseRemoteConfig_GetByte()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFirebaseRemoteConfig_GetByte_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFirebaseRemoteConfig_GetConfigSetting_Statics
	{
		struct FirebaseRemoteConfig_eventGetConfigSetting_Parms
		{
			EFirebaseConfigSetting Defaults;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Defaults_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Defaults;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFirebaseRemoteConfig_GetConfigSetting_Statics::NewProp_Defaults_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFirebaseRemoteConfig_GetConfigSetting_Statics::NewProp_Defaults = { "Defaults", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirebaseRemoteConfig_eventGetConfigSetting_Parms, Defaults), Z_Construct_UEnum_FirebaseFeatures_EFirebaseConfigSetting, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseRemoteConfig_GetConfigSetting_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Config Setting" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFirebaseRemoteConfig_GetConfigSetting_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirebaseRemoteConfig_eventGetConfigSetting_Parms, ReturnValue), METADATA_PARAMS(Z_Construct_UFunction_UFirebaseRemoteConfig_GetConfigSetting_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseRemoteConfig_GetConfigSetting_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFirebaseRemoteConfig_GetConfigSetting_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseRemoteConfig_GetConfigSetting_Statics::NewProp_Defaults_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseRemoteConfig_GetConfigSetting_Statics::NewProp_Defaults,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseRemoteConfig_GetConfigSetting_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseRemoteConfig_GetConfigSetting_Statics::Function_MetaDataParams[] = {
		{ "Category", "Firebase|RemoteConfig" },
		{ "Comment", "/// @brief Retrieve an internal configuration setting.\n///\n/// @param[in] Defaults Setting to retrieve.\n///\n/// @return The value of the config\n///\n/// @see SetConfigSetting\n" },
		{ "ModuleRelativePath", "Public/RemoteConfig/RemoteConfig.h" },
		{ "ToolTip", "@brief Retrieve an internal configuration setting.\n\n@param[in] Defaults Setting to retrieve.\n\n@return The value of the config\n\n@see SetConfigSetting" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFirebaseRemoteConfig_GetConfigSetting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFirebaseRemoteConfig, nullptr, "GetConfigSetting", nullptr, nullptr, sizeof(FirebaseRemoteConfig_eventGetConfigSetting_Parms), Z_Construct_UFunction_UFirebaseRemoteConfig_GetConfigSetting_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseRemoteConfig_GetConfigSetting_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFirebaseRemoteConfig_GetConfigSetting_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseRemoteConfig_GetConfigSetting_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFirebaseRemoteConfig_GetConfigSetting()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFirebaseRemoteConfig_GetConfigSetting_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFirebaseRemoteConfig_GetData_Statics
	{
		struct FirebaseRemoteConfig_eventGetData_Parms
		{
			FString Key;
			TArray<uint8> ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseRemoteConfig_GetData_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFirebaseRemoteConfig_GetData_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirebaseRemoteConfig_eventGetData_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UFirebaseRemoteConfig_GetData_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseRemoteConfig_GetData_Statics::NewProp_Key_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFirebaseRemoteConfig_GetData_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseRemoteConfig_GetData_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Data" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFirebaseRemoteConfig_GetData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirebaseRemoteConfig_eventGetData_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UFirebaseRemoteConfig_GetData_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseRemoteConfig_GetData_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFirebaseRemoteConfig_GetData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseRemoteConfig_GetData_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseRemoteConfig_GetData_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseRemoteConfig_GetData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseRemoteConfig_GetData_Statics::Function_MetaDataParams[] = {
		{ "Category", "Firebase|RemoteConfig" },
		{ "Comment", "/// @brief Returns the value associated with a key, as a vector of raw\n/// byte-data.\n///\n/// @param[in] key Key of the value to be retrieved.\n///\n/// @return Vector of bytes.\n" },
		{ "ModuleRelativePath", "Public/RemoteConfig/RemoteConfig.h" },
		{ "ToolTip", "@brief Returns the value associated with a key, as a vector of raw\nbyte-data.\n\n@param[in] key Key of the value to be retrieved.\n\n@return Vector of bytes." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFirebaseRemoteConfig_GetData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFirebaseRemoteConfig, nullptr, "GetData", nullptr, nullptr, sizeof(FirebaseRemoteConfig_eventGetData_Parms), Z_Construct_UFunction_UFirebaseRemoteConfig_GetData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseRemoteConfig_GetData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFirebaseRemoteConfig_GetData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseRemoteConfig_GetData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFirebaseRemoteConfig_GetData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFirebaseRemoteConfig_GetData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFirebaseRemoteConfig_GetDataWithInfo_Statics
	{
		struct FirebaseRemoteConfig_eventGetDataWithInfo_Parms
		{
			FString Key;
			FFirebaseValueInfo Info;
			TArray<uint8> ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Info;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseRemoteConfig_GetDataWithInfo_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFirebaseRemoteConfig_GetDataWithInfo_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirebaseRemoteConfig_eventGetDataWithInfo_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UFirebaseRemoteConfig_GetDataWithInfo_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseRemoteConfig_GetDataWithInfo_Statics::NewProp_Key_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFirebaseRemoteConfig_GetDataWithInfo_Statics::NewProp_Info = { "Info", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirebaseRemoteConfig_eventGetDataWithInfo_Parms, Info), Z_Construct_UScriptStruct_FFirebaseValueInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFirebaseRemoteConfig_GetDataWithInfo_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseRemoteConfig_GetDataWithInfo_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Data" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFirebaseRemoteConfig_GetDataWithInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirebaseRemoteConfig_eventGetDataWithInfo_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UFirebaseRemoteConfig_GetDataWithInfo_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseRemoteConfig_GetDataWithInfo_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFirebaseRemoteConfig_GetDataWithInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseRemoteConfig_GetDataWithInfo_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseRemoteConfig_GetDataWithInfo_Statics::NewProp_Info,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseRemoteConfig_GetDataWithInfo_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseRemoteConfig_GetDataWithInfo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseRemoteConfig_GetDataWithInfo_Statics::Function_MetaDataParams[] = {
		{ "Category", "Firebase|RemoteConfig" },
		{ "Comment", "/// @brief Returns the value associated with a key, as a vector of raw\n/// byte-data.\n///\n/// @param[in] key Key of the value to be retrieved.\n/// @param[out] info A return value, specifying the source of the returned\n/// value.\n///\n/// @return Vector of bytes.\n" },
		{ "ModuleRelativePath", "Public/RemoteConfig/RemoteConfig.h" },
		{ "ToolTip", "@brief Returns the value associated with a key, as a vector of raw\nbyte-data.\n\n@param[in] key Key of the value to be retrieved.\n@param[out] info A return value, specifying the source of the returned\nvalue.\n\n@return Vector of bytes." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFirebaseRemoteConfig_GetDataWithInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFirebaseRemoteConfig, nullptr, "GetDataWithInfo", nullptr, nullptr, sizeof(FirebaseRemoteConfig_eventGetDataWithInfo_Parms), Z_Construct_UFunction_UFirebaseRemoteConfig_GetDataWithInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseRemoteConfig_GetDataWithInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFirebaseRemoteConfig_GetDataWithInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseRemoteConfig_GetDataWithInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFirebaseRemoteConfig_GetDataWithInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFirebaseRemoteConfig_GetDataWithInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFirebaseRemoteConfig_GetFloat_Statics
	{
		struct FirebaseRemoteConfig_eventGetFloat_Parms
		{
			FString Key;
			float ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseRemoteConfig_GetFloat_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFirebaseRemoteConfig_GetFloat_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirebaseRemoteConfig_eventGetFloat_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UFirebaseRemoteConfig_GetFloat_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseRemoteConfig_GetFloat_Statics::NewProp_Key_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseRemoteConfig_GetFloat_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Value" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFirebaseRemoteConfig_GetFloat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirebaseRemoteConfig_eventGetFloat_Parms, ReturnValue), METADATA_PARAMS(Z_Construct_UFunction_UFirebaseRemoteConfig_GetFloat_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseRemoteConfig_GetFloat_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFirebaseRemoteConfig_GetFloat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseRemoteConfig_GetFloat_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseRemoteConfig_GetFloat_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseRemoteConfig_GetFloat_Statics::Function_MetaDataParams[] = {
		{ "Category", "Firebase|RemoteConfig" },
		{ "Comment", "/// @brief Returns the value associated with a key, converted to a double.\n///\n/// @param[in] key Key of the value to be retrieved.\n///\n/// @return Value associated with the specified key converted to a double.\n" },
		{ "ModuleRelativePath", "Public/RemoteConfig/RemoteConfig.h" },
		{ "ToolTip", "@brief Returns the value associated with a key, converted to a double.\n\n@param[in] key Key of the value to be retrieved.\n\n@return Value associated with the specified key converted to a double." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFirebaseRemoteConfig_GetFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFirebaseRemoteConfig, nullptr, "GetFloat", nullptr, nullptr, sizeof(FirebaseRemoteConfig_eventGetFloat_Parms), Z_Construct_UFunction_UFirebaseRemoteConfig_GetFloat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseRemoteConfig_GetFloat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFirebaseRemoteConfig_GetFloat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseRemoteConfig_GetFloat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFirebaseRemoteConfig_GetFloat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFirebaseRemoteConfig_GetFloat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFirebaseRemoteConfig_GetFloatWithInfo_Statics
	{
		struct FirebaseRemoteConfig_eventGetFloatWithInfo_Parms
		{
			FString Key;
			FFirebaseValueInfo Info;
			float ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Info;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseRemoteConfig_GetFloatWithInfo_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFirebaseRemoteConfig_GetFloatWithInfo_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirebaseRemoteConfig_eventGetFloatWithInfo_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UFirebaseRemoteConfig_GetFloatWithInfo_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseRemoteConfig_GetFloatWithInfo_Statics::NewProp_Key_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFirebaseRemoteConfig_GetFloatWithInfo_Statics::NewProp_Info = { "Info", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirebaseRemoteConfig_eventGetFloatWithInfo_Parms, Info), Z_Construct_UScriptStruct_FFirebaseValueInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseRemoteConfig_GetFloatWithInfo_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Value" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFirebaseRemoteConfig_GetFloatWithInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirebaseRemoteConfig_eventGetFloatWithInfo_Parms, ReturnValue), METADATA_PARAMS(Z_Construct_UFunction_UFirebaseRemoteConfig_GetFloatWithInfo_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseRemoteConfig_GetFloatWithInfo_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFirebaseRemoteConfig_GetFloatWithInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseRemoteConfig_GetFloatWithInfo_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseRemoteConfig_GetFloatWithInfo_Statics::NewProp_Info,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseRemoteConfig_GetFloatWithInfo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseRemoteConfig_GetFloatWithInfo_Statics::Function_MetaDataParams[] = {
		{ "Category", "Firebase|RemoteConfig" },
		{ "Comment", "/// @brief Returns the value associated with a key, converted to a double.\n///\n/// @param[in] key Key of the value to be retrieved.\n/// @param[out] info A return value, specifying the source of the returned\n/// value.\n///\n/// @return Value associated with the specified key converted to a double.\n" },
		{ "ModuleRelativePath", "Public/RemoteConfig/RemoteConfig.h" },
		{ "ToolTip", "@brief Returns the value associated with a key, converted to a double.\n\n@param[in] key Key of the value to be retrieved.\n@param[out] info A return value, specifying the source of the returned\nvalue.\n\n@return Value associated with the specified key converted to a double." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFirebaseRemoteConfig_GetFloatWithInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFirebaseRemoteConfig, nullptr, "GetFloatWithInfo", nullptr, nullptr, sizeof(FirebaseRemoteConfig_eventGetFloatWithInfo_Parms), Z_Construct_UFunction_UFirebaseRemoteConfig_GetFloatWithInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseRemoteConfig_GetFloatWithInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFirebaseRemoteConfig_GetFloatWithInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseRemoteConfig_GetFloatWithInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFirebaseRemoteConfig_GetFloatWithInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFirebaseRemoteConfig_GetFloatWithInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFirebaseRemoteConfig_GetInfo_Statics
	{
		struct FirebaseRemoteConfig_eventGetInfo_Parms
		{
			FFirebaseConfigInfo ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseRemoteConfig_GetInfo_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Info" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFirebaseRemoteConfig_GetInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirebaseRemoteConfig_eventGetInfo_Parms, ReturnValue), Z_Construct_UScriptStruct_FFirebaseConfigInfo, METADATA_PARAMS(Z_Construct_UFunction_UFirebaseRemoteConfig_GetInfo_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseRemoteConfig_GetInfo_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFirebaseRemoteConfig_GetInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseRemoteConfig_GetInfo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseRemoteConfig_GetInfo_Statics::Function_MetaDataParams[] = {
		{ "Category", "Firebase|RemoteConfig" },
		{ "Comment", "/// @brief Returns information about the last fetch request, in the form\n/// of a ConfigInfo struct.\n///\n/// @return A ConfigInfo struct, containing fields reflecting the state\n/// of the most recent fetch request.\n" },
		{ "ModuleRelativePath", "Public/RemoteConfig/RemoteConfig.h" },
		{ "ToolTip", "@brief Returns information about the last fetch request, in the form\nof a ConfigInfo struct.\n\n@return A ConfigInfo struct, containing fields reflecting the state\nof the most recent fetch request." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFirebaseRemoteConfig_GetInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFirebaseRemoteConfig, nullptr, "GetInfo", nullptr, nullptr, sizeof(FirebaseRemoteConfig_eventGetInfo_Parms), Z_Construct_UFunction_UFirebaseRemoteConfig_GetInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseRemoteConfig_GetInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFirebaseRemoteConfig_GetInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseRemoteConfig_GetInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFirebaseRemoteConfig_GetInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFirebaseRemoteConfig_GetInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFirebaseRemoteConfig_GetInt32_Statics
	{
		struct FirebaseRemoteConfig_eventGetInt32_Parms
		{
			FString Key;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseRemoteConfig_GetInt32_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFirebaseRemoteConfig_GetInt32_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirebaseRemoteConfig_eventGetInt32_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UFirebaseRemoteConfig_GetInt32_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseRemoteConfig_GetInt32_Statics::NewProp_Key_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseRemoteConfig_GetInt32_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Value" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFirebaseRemoteConfig_GetInt32_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirebaseRemoteConfig_eventGetInt32_Parms, ReturnValue), METADATA_PARAMS(Z_Construct_UFunction_UFirebaseRemoteConfig_GetInt32_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseRemoteConfig_GetInt32_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFirebaseRemoteConfig_GetInt32_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseRemoteConfig_GetInt32_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseRemoteConfig_GetInt32_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseRemoteConfig_GetInt32_Statics::Function_MetaDataParams[] = {
		{ "Category", "Firebase|RemoteConfig" },
		{ "Comment", "/// @brief Returns the value associated with a key, converted to a 32-bit\n/// integer.\n///\n/// @param[in] key Key of the value to be retrieved.\n///\n/// @return Value associated with the specified key converted to a 32-bit\n/// integer.\n" },
		{ "ModuleRelativePath", "Public/RemoteConfig/RemoteConfig.h" },
		{ "ToolTip", "@brief Returns the value associated with a key, converted to a 32-bit\ninteger.\n\n@param[in] key Key of the value to be retrieved.\n\n@return Value associated with the specified key converted to a 32-bit\ninteger." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFirebaseRemoteConfig_GetInt32_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFirebaseRemoteConfig, nullptr, "GetInt32", nullptr, nullptr, sizeof(FirebaseRemoteConfig_eventGetInt32_Parms), Z_Construct_UFunction_UFirebaseRemoteConfig_GetInt32_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseRemoteConfig_GetInt32_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFirebaseRemoteConfig_GetInt32_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseRemoteConfig_GetInt32_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFirebaseRemoteConfig_GetInt32()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFirebaseRemoteConfig_GetInt32_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFirebaseRemoteConfig_GetInt64_Statics
	{
		struct FirebaseRemoteConfig_eventGetInt64_Parms
		{
			FString Key;
			int64 ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseRemoteConfig_GetInt64_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFirebaseRemoteConfig_GetInt64_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirebaseRemoteConfig_eventGetInt64_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UFirebaseRemoteConfig_GetInt64_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseRemoteConfig_GetInt64_Statics::NewProp_Key_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseRemoteConfig_GetInt64_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Value" },
	};
#endif
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UFirebaseRemoteConfig_GetInt64_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirebaseRemoteConfig_eventGetInt64_Parms, ReturnValue), METADATA_PARAMS(Z_Construct_UFunction_UFirebaseRemoteConfig_GetInt64_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseRemoteConfig_GetInt64_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFirebaseRemoteConfig_GetInt64_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseRemoteConfig_GetInt64_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseRemoteConfig_GetInt64_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseRemoteConfig_GetInt64_Statics::Function_MetaDataParams[] = {
		{ "Category", "Firebase|RemoteConfig" },
		{ "Comment", "/// @brief Returns the value associated with a key, converted to a 64-bit\n/// integer.\n///\n/// @param[in] key Key of the value to be retrieved.\n///\n/// @return Value associated with the specified key converted to a 64-bit\n/// integer.\n" },
		{ "ModuleRelativePath", "Public/RemoteConfig/RemoteConfig.h" },
		{ "ToolTip", "@brief Returns the value associated with a key, converted to a 64-bit\ninteger.\n\n@param[in] key Key of the value to be retrieved.\n\n@return Value associated with the specified key converted to a 64-bit\ninteger." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFirebaseRemoteConfig_GetInt64_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFirebaseRemoteConfig, nullptr, "GetInt64", nullptr, nullptr, sizeof(FirebaseRemoteConfig_eventGetInt64_Parms), Z_Construct_UFunction_UFirebaseRemoteConfig_GetInt64_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseRemoteConfig_GetInt64_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFirebaseRemoteConfig_GetInt64_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseRemoteConfig_GetInt64_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFirebaseRemoteConfig_GetInt64()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFirebaseRemoteConfig_GetInt64_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFirebaseRemoteConfig_GetInt64WithInfo_Statics
	{
		struct FirebaseRemoteConfig_eventGetInt64WithInfo_Parms
		{
			FString Key;
			FFirebaseValueInfo Info;
			int64 ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Info;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseRemoteConfig_GetInt64WithInfo_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFirebaseRemoteConfig_GetInt64WithInfo_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirebaseRemoteConfig_eventGetInt64WithInfo_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UFirebaseRemoteConfig_GetInt64WithInfo_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseRemoteConfig_GetInt64WithInfo_Statics::NewProp_Key_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFirebaseRemoteConfig_GetInt64WithInfo_Statics::NewProp_Info = { "Info", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirebaseRemoteConfig_eventGetInt64WithInfo_Parms, Info), Z_Construct_UScriptStruct_FFirebaseValueInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseRemoteConfig_GetInt64WithInfo_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Value" },
	};
#endif
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UFirebaseRemoteConfig_GetInt64WithInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirebaseRemoteConfig_eventGetInt64WithInfo_Parms, ReturnValue), METADATA_PARAMS(Z_Construct_UFunction_UFirebaseRemoteConfig_GetInt64WithInfo_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseRemoteConfig_GetInt64WithInfo_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFirebaseRemoteConfig_GetInt64WithInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseRemoteConfig_GetInt64WithInfo_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseRemoteConfig_GetInt64WithInfo_Statics::NewProp_Info,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseRemoteConfig_GetInt64WithInfo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseRemoteConfig_GetInt64WithInfo_Statics::Function_MetaDataParams[] = {
		{ "Category", "Firebase|RemoteConfig" },
		{ "Comment", "/// @brief Returns the value associated with a key, converted to a 64-bit\n/// integer.\n///\n/// @param[in] key Key of the value to be retrieved.\n/// @param[out] Info A return value, specifying the source of the returned\n/// value.\n///\n/// @return Value associated with the specified key converted to a 64-bit\n/// integer.\n" },
		{ "ModuleRelativePath", "Public/RemoteConfig/RemoteConfig.h" },
		{ "ToolTip", "@brief Returns the value associated with a key, converted to a 64-bit\ninteger.\n\n@param[in] key Key of the value to be retrieved.\n@param[out] Info A return value, specifying the source of the returned\nvalue.\n\n@return Value associated with the specified key converted to a 64-bit\ninteger." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFirebaseRemoteConfig_GetInt64WithInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFirebaseRemoteConfig, nullptr, "GetInt64WithInfo", nullptr, nullptr, sizeof(FirebaseRemoteConfig_eventGetInt64WithInfo_Parms), Z_Construct_UFunction_UFirebaseRemoteConfig_GetInt64WithInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseRemoteConfig_GetInt64WithInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFirebaseRemoteConfig_GetInt64WithInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseRemoteConfig_GetInt64WithInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFirebaseRemoteConfig_GetInt64WithInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFirebaseRemoteConfig_GetInt64WithInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFirebaseRemoteConfig_GetKeys_Statics
	{
		struct FirebaseRemoteConfig_eventGetKeys_Parms
		{
			TArray<FString> ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFirebaseRemoteConfig_GetKeys_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseRemoteConfig_GetKeys_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Keys" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFirebaseRemoteConfig_GetKeys_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirebaseRemoteConfig_eventGetKeys_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UFirebaseRemoteConfig_GetKeys_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseRemoteConfig_GetKeys_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFirebaseRemoteConfig_GetKeys_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseRemoteConfig_GetKeys_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseRemoteConfig_GetKeys_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseRemoteConfig_GetKeys_Statics::Function_MetaDataParams[] = {
		{ "Category", "Firebase|RemoteConfig" },
		{ "Comment", "/// @brief Gets the set of all keys.\n///\n/// @return Set of all Remote Config parameter keys.\n" },
		{ "ModuleRelativePath", "Public/RemoteConfig/RemoteConfig.h" },
		{ "ToolTip", "@brief Gets the set of all keys.\n\n@return Set of all Remote Config parameter keys." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFirebaseRemoteConfig_GetKeys_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFirebaseRemoteConfig, nullptr, "GetKeys", nullptr, nullptr, sizeof(FirebaseRemoteConfig_eventGetKeys_Parms), Z_Construct_UFunction_UFirebaseRemoteConfig_GetKeys_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseRemoteConfig_GetKeys_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFirebaseRemoteConfig_GetKeys_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseRemoteConfig_GetKeys_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFirebaseRemoteConfig_GetKeys()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFirebaseRemoteConfig_GetKeys_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFirebaseRemoteConfig_GetKeysByPrefix_Statics
	{
		struct FirebaseRemoteConfig_eventGetKeysByPrefix_Parms
		{
			FString Prefix;
			TArray<FString> ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Prefix_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Prefix;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseRemoteConfig_GetKeysByPrefix_Statics::NewProp_Prefix_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFirebaseRemoteConfig_GetKeysByPrefix_Statics::NewProp_Prefix = { "Prefix", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirebaseRemoteConfig_eventGetKeysByPrefix_Parms, Prefix), METADATA_PARAMS(Z_Construct_UFunction_UFirebaseRemoteConfig_GetKeysByPrefix_Statics::NewProp_Prefix_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseRemoteConfig_GetKeysByPrefix_Statics::NewProp_Prefix_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFirebaseRemoteConfig_GetKeysByPrefix_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseRemoteConfig_GetKeysByPrefix_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Keys" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFirebaseRemoteConfig_GetKeysByPrefix_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirebaseRemoteConfig_eventGetKeysByPrefix_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UFirebaseRemoteConfig_GetKeysByPrefix_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseRemoteConfig_GetKeysByPrefix_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFirebaseRemoteConfig_GetKeysByPrefix_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseRemoteConfig_GetKeysByPrefix_Statics::NewProp_Prefix,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseRemoteConfig_GetKeysByPrefix_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseRemoteConfig_GetKeysByPrefix_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseRemoteConfig_GetKeysByPrefix_Statics::Function_MetaDataParams[] = {
		{ "Category", "Firebase|RemoteConfig" },
		{ "Comment", "/// @brief Gets the set of keys that start with the given prefix.\n///\n/// @param[in] prefix The key prefix to look for. If empty or null, this\n/// method will return all keys.\n///\n/// @return Set of Remote Config parameter keys that start with the specified\n/// prefix. Will return an empty set if there are no keys with the given\n/// prefix.\n" },
		{ "ModuleRelativePath", "Public/RemoteConfig/RemoteConfig.h" },
		{ "ToolTip", "@brief Gets the set of keys that start with the given prefix.\n\n@param[in] prefix The key prefix to look for. If empty or null, this\nmethod will return all keys.\n\n@return Set of Remote Config parameter keys that start with the specified\nprefix. Will return an empty set if there are no keys with the given\nprefix." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFirebaseRemoteConfig_GetKeysByPrefix_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFirebaseRemoteConfig, nullptr, "GetKeysByPrefix", nullptr, nullptr, sizeof(FirebaseRemoteConfig_eventGetKeysByPrefix_Parms), Z_Construct_UFunction_UFirebaseRemoteConfig_GetKeysByPrefix_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseRemoteConfig_GetKeysByPrefix_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFirebaseRemoteConfig_GetKeysByPrefix_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseRemoteConfig_GetKeysByPrefix_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFirebaseRemoteConfig_GetKeysByPrefix()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFirebaseRemoteConfig_GetKeysByPrefix_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFirebaseRemoteConfig_GetString_Statics
	{
		struct FirebaseRemoteConfig_eventGetString_Parms
		{
			FString Key;
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseRemoteConfig_GetString_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFirebaseRemoteConfig_GetString_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirebaseRemoteConfig_eventGetString_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UFirebaseRemoteConfig_GetString_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseRemoteConfig_GetString_Statics::NewProp_Key_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseRemoteConfig_GetString_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Value" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFirebaseRemoteConfig_GetString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirebaseRemoteConfig_eventGetString_Parms, ReturnValue), METADATA_PARAMS(Z_Construct_UFunction_UFirebaseRemoteConfig_GetString_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseRemoteConfig_GetString_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFirebaseRemoteConfig_GetString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseRemoteConfig_GetString_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseRemoteConfig_GetString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseRemoteConfig_GetString_Statics::Function_MetaDataParams[] = {
		{ "Category", "Firebase|RemoteConfig" },
		{ "Comment", "/// @brief Returns the value associated with a key, converted to a string.\n///\n/// @param[in] key Key of the value to be retrieved.\n///\n/// @return Value as a string associated with the specified key.\n" },
		{ "ModuleRelativePath", "Public/RemoteConfig/RemoteConfig.h" },
		{ "ToolTip", "@brief Returns the value associated with a key, converted to a string.\n\n@param[in] key Key of the value to be retrieved.\n\n@return Value as a string associated with the specified key." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFirebaseRemoteConfig_GetString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFirebaseRemoteConfig, nullptr, "GetString", nullptr, nullptr, sizeof(FirebaseRemoteConfig_eventGetString_Parms), Z_Construct_UFunction_UFirebaseRemoteConfig_GetString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseRemoteConfig_GetString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFirebaseRemoteConfig_GetString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseRemoteConfig_GetString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFirebaseRemoteConfig_GetString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFirebaseRemoteConfig_GetString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFirebaseRemoteConfig_GetStringWithInfo_Statics
	{
		struct FirebaseRemoteConfig_eventGetStringWithInfo_Parms
		{
			FString Key;
			FFirebaseValueInfo Info;
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Info;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseRemoteConfig_GetStringWithInfo_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFirebaseRemoteConfig_GetStringWithInfo_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirebaseRemoteConfig_eventGetStringWithInfo_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UFirebaseRemoteConfig_GetStringWithInfo_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseRemoteConfig_GetStringWithInfo_Statics::NewProp_Key_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFirebaseRemoteConfig_GetStringWithInfo_Statics::NewProp_Info = { "Info", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirebaseRemoteConfig_eventGetStringWithInfo_Parms, Info), Z_Construct_UScriptStruct_FFirebaseValueInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseRemoteConfig_GetStringWithInfo_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Value" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFirebaseRemoteConfig_GetStringWithInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirebaseRemoteConfig_eventGetStringWithInfo_Parms, ReturnValue), METADATA_PARAMS(Z_Construct_UFunction_UFirebaseRemoteConfig_GetStringWithInfo_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseRemoteConfig_GetStringWithInfo_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFirebaseRemoteConfig_GetStringWithInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseRemoteConfig_GetStringWithInfo_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseRemoteConfig_GetStringWithInfo_Statics::NewProp_Info,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseRemoteConfig_GetStringWithInfo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseRemoteConfig_GetStringWithInfo_Statics::Function_MetaDataParams[] = {
		{ "Category", "Firebase|RemoteConfig" },
		{ "Comment", "/// @brief Returns the value associated with a key, converted to a string.\n///\n/// @param[in] key Key of the value to be retrieved.\n/// @param[out] info A return value, specifying the source of the returned\n/// value.\n///\n/// @return Value as a string associated with the specified key.\n" },
		{ "ModuleRelativePath", "Public/RemoteConfig/RemoteConfig.h" },
		{ "ToolTip", "@brief Returns the value associated with a key, converted to a string.\n\n@param[in] key Key of the value to be retrieved.\n@param[out] info A return value, specifying the source of the returned\nvalue.\n\n@return Value as a string associated with the specified key." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFirebaseRemoteConfig_GetStringWithInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFirebaseRemoteConfig, nullptr, "GetStringWithInfo", nullptr, nullptr, sizeof(FirebaseRemoteConfig_eventGetStringWithInfo_Parms), Z_Construct_UFunction_UFirebaseRemoteConfig_GetStringWithInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseRemoteConfig_GetStringWithInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFirebaseRemoteConfig_GetStringWithInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseRemoteConfig_GetStringWithInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFirebaseRemoteConfig_GetStringWithInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFirebaseRemoteConfig_GetStringWithInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFirebaseRemoteConfig_SetConfigSetting_Statics
	{
		struct FirebaseRemoteConfig_eventSetConfigSetting_Parms
		{
			EFirebaseConfigSetting Setting;
			FString Value;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Setting_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Setting;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFirebaseRemoteConfig_SetConfigSetting_Statics::NewProp_Setting_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFirebaseRemoteConfig_SetConfigSetting_Statics::NewProp_Setting = { "Setting", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirebaseRemoteConfig_eventSetConfigSetting_Parms, Setting), Z_Construct_UEnum_FirebaseFeatures_EFirebaseConfigSetting, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseRemoteConfig_SetConfigSetting_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFirebaseRemoteConfig_SetConfigSetting_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirebaseRemoteConfig_eventSetConfigSetting_Parms, Value), METADATA_PARAMS(Z_Construct_UFunction_UFirebaseRemoteConfig_SetConfigSetting_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseRemoteConfig_SetConfigSetting_Statics::NewProp_Value_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFirebaseRemoteConfig_SetConfigSetting_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseRemoteConfig_SetConfigSetting_Statics::NewProp_Setting_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseRemoteConfig_SetConfigSetting_Statics::NewProp_Setting,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseRemoteConfig_SetConfigSetting_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseRemoteConfig_SetConfigSetting_Statics::Function_MetaDataParams[] = {
		{ "Category", "Firebase|RemoteConfig" },
		{ "Comment", "/// @brief Sets an internal configuration setting.\n///\n/// @param[in] setting Setting to set.\n/// @param[in] value Value to apply to the setting.\n///\n/// @see ConfigSetting\n" },
		{ "ModuleRelativePath", "Public/RemoteConfig/RemoteConfig.h" },
		{ "ToolTip", "@brief Sets an internal configuration setting.\n\n@param[in] setting Setting to set.\n@param[in] value Value to apply to the setting.\n\n@see ConfigSetting" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFirebaseRemoteConfig_SetConfigSetting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFirebaseRemoteConfig, nullptr, "SetConfigSetting", nullptr, nullptr, sizeof(FirebaseRemoteConfig_eventSetConfigSetting_Parms), Z_Construct_UFunction_UFirebaseRemoteConfig_SetConfigSetting_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseRemoteConfig_SetConfigSetting_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFirebaseRemoteConfig_SetConfigSetting_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseRemoteConfig_SetConfigSetting_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFirebaseRemoteConfig_SetConfigSetting()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFirebaseRemoteConfig_SetConfigSetting_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFirebaseRemoteConfig_SetDefaults_Statics
	{
		struct FirebaseRemoteConfig_eventSetDefaults_Parms
		{
			TArray<FFirebaseConfigKeyValue> Defaults;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Defaults_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Defaults_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Defaults;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFirebaseRemoteConfig_SetDefaults_Statics::NewProp_Defaults_Inner = { "Defaults", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FFirebaseConfigKeyValue, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseRemoteConfig_SetDefaults_Statics::NewProp_Defaults_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFirebaseRemoteConfig_SetDefaults_Statics::NewProp_Defaults = { "Defaults", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirebaseRemoteConfig_eventSetDefaults_Parms, Defaults), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UFirebaseRemoteConfig_SetDefaults_Statics::NewProp_Defaults_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseRemoteConfig_SetDefaults_Statics::NewProp_Defaults_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFirebaseRemoteConfig_SetDefaults_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseRemoteConfig_SetDefaults_Statics::NewProp_Defaults_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseRemoteConfig_SetDefaults_Statics::NewProp_Defaults,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseRemoteConfig_SetDefaults_Statics::Function_MetaDataParams[] = {
		{ "Category", "Firebase|RemoteConfig" },
		{ "Comment", "/// @brief Sets the default values based on a string map.\n///\n/// @note This completely overrides all previous values.\n///\n/// @param Defaults Array of ConfigKeyValue, representing the new set of\n/// defaults to apply. If the same key is specified multiple times, the\n/// value associated with the last duplicate key is applied.\n/// @param number_of_defaults Number of elements in the defaults array.\n" },
		{ "ModuleRelativePath", "Public/RemoteConfig/RemoteConfig.h" },
		{ "ToolTip", "@brief Sets the default values based on a string map.\n\n@note This completely overrides all previous values.\n\n@param Defaults Array of ConfigKeyValue, representing the new set of\ndefaults to apply. If the same key is specified multiple times, the\nvalue associated with the last duplicate key is applied.\n@param number_of_defaults Number of elements in the defaults array." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFirebaseRemoteConfig_SetDefaults_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFirebaseRemoteConfig, nullptr, "SetDefaults", nullptr, nullptr, sizeof(FirebaseRemoteConfig_eventSetDefaults_Parms), Z_Construct_UFunction_UFirebaseRemoteConfig_SetDefaults_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseRemoteConfig_SetDefaults_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFirebaseRemoteConfig_SetDefaults_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseRemoteConfig_SetDefaults_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFirebaseRemoteConfig_SetDefaults()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFirebaseRemoteConfig_SetDefaults_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFirebaseRemoteConfig_SetDefaultsWithVariant_Statics
	{
		struct FirebaseRemoteConfig_eventSetDefaultsWithVariant_Parms
		{
			TArray<FFirebaseConfigKeyValueVariant> Defaults;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Defaults_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Defaults_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Defaults;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFirebaseRemoteConfig_SetDefaultsWithVariant_Statics::NewProp_Defaults_Inner = { "Defaults", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FFirebaseConfigKeyValueVariant, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseRemoteConfig_SetDefaultsWithVariant_Statics::NewProp_Defaults_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFirebaseRemoteConfig_SetDefaultsWithVariant_Statics::NewProp_Defaults = { "Defaults", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirebaseRemoteConfig_eventSetDefaultsWithVariant_Parms, Defaults), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UFirebaseRemoteConfig_SetDefaultsWithVariant_Statics::NewProp_Defaults_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseRemoteConfig_SetDefaultsWithVariant_Statics::NewProp_Defaults_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFirebaseRemoteConfig_SetDefaultsWithVariant_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseRemoteConfig_SetDefaultsWithVariant_Statics::NewProp_Defaults_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseRemoteConfig_SetDefaultsWithVariant_Statics::NewProp_Defaults,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseRemoteConfig_SetDefaultsWithVariant_Statics::Function_MetaDataParams[] = {
		{ "Category", "Firebase|RemoteConfig" },
		{ "Comment", "/// @brief Sets the default values based on a mapping of string to Variant.\n/// This allows you to specify defaults of type other than string.\n///\n/// The type of each Variant in the map determines the type of data for which\n/// you are providing a default. For example, boolean values can be retrieved\n/// with GetBool(), integer values can be retrieved with GetLong(), double\n/// values can be retrieved with GetDouble(), string values can be retrieved\n/// with GetString(), and binary data can be retrieved with GetData(). Aggregate\n/// Variant types are not allowed.\n///\n/// @see firebase::Variant for more information on how to create a Variant of\n/// each type.\n///\n/// @note This completely overrides all previous values.\n///\n/// @param Defaults Array of ConfigKeyValueVariant, representing the new set of\n/// defaults to apply. If the same key is specified multiple times, the\n/// value associated with the last duplicate key is applied.\n/// @param number_of_defaults Number of elements in the defaults array.\n" },
		{ "ModuleRelativePath", "Public/RemoteConfig/RemoteConfig.h" },
		{ "ToolTip", "@brief Sets the default values based on a mapping of string to Variant.\nThis allows you to specify defaults of type other than string.\n\nThe type of each Variant in the map determines the type of data for which\nyou are providing a default. For example, boolean values can be retrieved\nwith GetBool(), integer values can be retrieved with GetLong(), double\nvalues can be retrieved with GetDouble(), string values can be retrieved\nwith GetString(), and binary data can be retrieved with GetData(). Aggregate\nVariant types are not allowed.\n\n@see firebase::Variant for more information on how to create a Variant of\neach type.\n\n@note This completely overrides all previous values.\n\n@param Defaults Array of ConfigKeyValueVariant, representing the new set of\ndefaults to apply. If the same key is specified multiple times, the\nvalue associated with the last duplicate key is applied.\n@param number_of_defaults Number of elements in the defaults array." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFirebaseRemoteConfig_SetDefaultsWithVariant_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFirebaseRemoteConfig, nullptr, "SetDefaultsWithVariant", nullptr, nullptr, sizeof(FirebaseRemoteConfig_eventSetDefaultsWithVariant_Parms), Z_Construct_UFunction_UFirebaseRemoteConfig_SetDefaultsWithVariant_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseRemoteConfig_SetDefaultsWithVariant_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFirebaseRemoteConfig_SetDefaultsWithVariant_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseRemoteConfig_SetDefaultsWithVariant_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFirebaseRemoteConfig_SetDefaultsWithVariant()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFirebaseRemoteConfig_SetDefaultsWithVariant_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFirebaseRemoteConfig_Terminate_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseRemoteConfig_Terminate_Statics::Function_MetaDataParams[] = {
		{ "Category", "Firebase|RemoteConfig" },
		{ "Comment", "/// @brief Terminate the RemoteConfig API.\n///\n/// Call this method to free resources associated with the Remote Config API.\n" },
		{ "ModuleRelativePath", "Public/RemoteConfig/RemoteConfig.h" },
		{ "ToolTip", "@brief Terminate the RemoteConfig API.\n\nCall this method to free resources associated with the Remote Config API." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFirebaseRemoteConfig_Terminate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFirebaseRemoteConfig, nullptr, "Terminate", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFirebaseRemoteConfig_Terminate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseRemoteConfig_Terminate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFirebaseRemoteConfig_Terminate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFirebaseRemoteConfig_Terminate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFirebaseRemoteConfig_NoRegister()
	{
		return UFirebaseRemoteConfig::StaticClass();
	}
	struct Z_Construct_UClass_UFirebaseRemoteConfig_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFirebaseRemoteConfig_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_FirebaseFeatures,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFirebaseRemoteConfig_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFirebaseRemoteConfig_ActivateFetched, "ActivateFetched" }, // 4124535680
		{ &Z_Construct_UFunction_UFirebaseRemoteConfig_GetBoolean, "GetBoolean" }, // 2395745381
		{ &Z_Construct_UFunction_UFirebaseRemoteConfig_GetBooleanWithInfo, "GetBooleanWithInfo" }, // 387462344
		{ &Z_Construct_UFunction_UFirebaseRemoteConfig_GetByte, "GetByte" }, // 3874974723
		{ &Z_Construct_UFunction_UFirebaseRemoteConfig_GetConfigSetting, "GetConfigSetting" }, // 2156033379
		{ &Z_Construct_UFunction_UFirebaseRemoteConfig_GetData, "GetData" }, // 2345455676
		{ &Z_Construct_UFunction_UFirebaseRemoteConfig_GetDataWithInfo, "GetDataWithInfo" }, // 596791490
		{ &Z_Construct_UFunction_UFirebaseRemoteConfig_GetFloat, "GetFloat" }, // 268943893
		{ &Z_Construct_UFunction_UFirebaseRemoteConfig_GetFloatWithInfo, "GetFloatWithInfo" }, // 252531851
		{ &Z_Construct_UFunction_UFirebaseRemoteConfig_GetInfo, "GetInfo" }, // 2441660769
		{ &Z_Construct_UFunction_UFirebaseRemoteConfig_GetInt32, "GetInt32" }, // 4259599231
		{ &Z_Construct_UFunction_UFirebaseRemoteConfig_GetInt64, "GetInt64" }, // 1933446141
		{ &Z_Construct_UFunction_UFirebaseRemoteConfig_GetInt64WithInfo, "GetInt64WithInfo" }, // 3207014256
		{ &Z_Construct_UFunction_UFirebaseRemoteConfig_GetKeys, "GetKeys" }, // 610582460
		{ &Z_Construct_UFunction_UFirebaseRemoteConfig_GetKeysByPrefix, "GetKeysByPrefix" }, // 383500639
		{ &Z_Construct_UFunction_UFirebaseRemoteConfig_GetString, "GetString" }, // 2287498584
		{ &Z_Construct_UFunction_UFirebaseRemoteConfig_GetStringWithInfo, "GetStringWithInfo" }, // 2034991081
		{ &Z_Construct_UFunction_UFirebaseRemoteConfig_SetConfigSetting, "SetConfigSetting" }, // 3096717314
		{ &Z_Construct_UFunction_UFirebaseRemoteConfig_SetDefaults, "SetDefaults" }, // 796513281
		{ &Z_Construct_UFunction_UFirebaseRemoteConfig_SetDefaultsWithVariant, "SetDefaultsWithVariant" }, // 460169272
		{ &Z_Construct_UFunction_UFirebaseRemoteConfig_Terminate, "Terminate" }, // 4223996387
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFirebaseRemoteConfig_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "RemoteConfig/RemoteConfig.h" },
		{ "ModuleRelativePath", "Public/RemoteConfig/RemoteConfig.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFirebaseRemoteConfig_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFirebaseRemoteConfig>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFirebaseRemoteConfig_Statics::ClassParams = {
		&UFirebaseRemoteConfig::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UFirebaseRemoteConfig_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFirebaseRemoteConfig_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFirebaseRemoteConfig()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFirebaseRemoteConfig_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFirebaseRemoteConfig, 1813098352);
	template<> FIREBASEFEATURES_API UClass* StaticClass<UFirebaseRemoteConfig>()
	{
		return UFirebaseRemoteConfig::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFirebaseRemoteConfig(Z_Construct_UClass_UFirebaseRemoteConfig, &UFirebaseRemoteConfig::StaticClass, TEXT("/Script/FirebaseFeatures"), TEXT("UFirebaseRemoteConfig"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFirebaseRemoteConfig);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
