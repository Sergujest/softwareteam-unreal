// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FirebaseFeatures/Public/Firestore/Firestore.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFirestore() {}
// Cross Module References
	FIREBASEFEATURES_API UEnum* Z_Construct_UEnum_FirebaseFeatures_EFirestoreSource();
	UPackage* Z_Construct_UPackage__Script_FirebaseFeatures();
	FIREBASEFEATURES_API UEnum* Z_Construct_UEnum_FirebaseFeatures_EFirestoreSetOptionsType();
	FIREBASEFEATURES_API UScriptStruct* Z_Construct_UScriptStruct_FWriteBatch();
	FIREBASEFEATURES_API UScriptStruct* Z_Construct_UScriptStruct_FFirestoreTransaction();
	FIREBASEFEATURES_API UScriptStruct* Z_Construct_UScriptStruct_FFirestoreSetOptions();
	FIREBASEFEATURES_API UScriptStruct* Z_Construct_UScriptStruct_FFirestoreSettings();
	FIREBASEFEATURES_API UClass* Z_Construct_UClass_UFirestore_NoRegister();
	FIREBASEFEATURES_API UClass* Z_Construct_UClass_UFirestore();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	FIREBASEFEATURES_API UClass* Z_Construct_UClass_UFirestoreQuery_NoRegister();
	FIREBASEFEATURES_API UClass* Z_Construct_UClass_UFirestoreCollectionReference_NoRegister();
	FIREBASEFEATURES_API UClass* Z_Construct_UClass_UFirestoreDocumentReference_NoRegister();
// End Cross Module References
	static UEnum* EFirestoreSource_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_FirebaseFeatures_EFirestoreSource, Z_Construct_UPackage__Script_FirebaseFeatures(), TEXT("EFirestoreSource"));
		}
		return Singleton;
	}
	template<> FIREBASEFEATURES_API UEnum* StaticEnum<EFirestoreSource>()
	{
		return EFirestoreSource_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EFirestoreSource(EFirestoreSource_StaticEnum, TEXT("/Script/FirebaseFeatures"), TEXT("EFirestoreSource"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_FirebaseFeatures_EFirestoreSource_Hash() { return 2278038116U; }
	UEnum* Z_Construct_UEnum_FirebaseFeatures_EFirestoreSource()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_FirebaseFeatures();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EFirestoreSource"), 0, Get_Z_Construct_UEnum_FirebaseFeatures_EFirestoreSource_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EFirestoreSource::Default", (int64)EFirestoreSource::Default },
				{ "EFirestoreSource::Server", (int64)EFirestoreSource::Server },
				{ "EFirestoreSource::Cache", (int64)EFirestoreSource::Cache },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Cache.Comment", "/**\n\x09  * Causes Firestore to immediately return a value from the cache, ignoring the\n\x09  * server completely (implying that the returned value may be stale with\n\x09  * respect to the value on the server). If there is no data in the cache to\n\x09  * satisfy the DocumentReference::Get() call will return an error and\n\x09  * Query::Get() will return an empty QuerySnapshot with no documents.\n\x09  */" },
				{ "Cache.Name", "EFirestoreSource::Cache" },
				{ "Cache.ToolTip", "Causes Firestore to immediately return a value from the cache, ignoring the\nserver completely (implying that the returned value may be stale with\nrespect to the value on the server). If there is no data in the cache to\nsatisfy the DocumentReference::Get() call will return an error and\nQuery::Get() will return an empty QuerySnapshot with no documents." },
				{ "Comment", "/**\n * @brief Configures the behavior of DocumentReference::Get() and Query::Get().\n *\n * By providing a Source value, these methods can be configured to fetch results\n * only from the server, only from the local cache, or attempt to fetch results\n * from the server and fall back to the cache (which is the default).\n */" },
				{ "Default.Comment", "/**\n\x09 * Causes Firestore to try to retrieve an up-to-date (server-retrieved)\n\x09 * snapshot, but fall back to returning cached data if the server can't be\n\x09 * reached.\n\x09 */" },
				{ "Default.Name", "EFirestoreSource::Default" },
				{ "Default.ToolTip", "Causes Firestore to try to retrieve an up-to-date (server-retrieved)\nsnapshot, but fall back to returning cached data if the server can't be\nreached." },
				{ "ModuleRelativePath", "Public/Firestore/Firestore.h" },
				{ "Server.Comment", "/**\n\x09 * Causes Firestore to avoid the cache, generating an error if the server\n\x09 * cannot be reached. Note that the cache will still be updated if the server\n\x09 * request succeeds. Also note that latency-compensation still takes effect,\n\x09 * so any pending write operations will be visible in the returned data\n\x09 * (merged into the server-provided data).\n\x09 */" },
				{ "Server.Name", "EFirestoreSource::Server" },
				{ "Server.ToolTip", "Causes Firestore to avoid the cache, generating an error if the server\ncannot be reached. Note that the cache will still be updated if the server\nrequest succeeds. Also note that latency-compensation still takes effect,\nso any pending write operations will be visible in the returned data\n(merged into the server-provided data)." },
				{ "ToolTip", "@brief Configures the behavior of DocumentReference::Get() and Query::Get().\n\nBy providing a Source value, these methods can be configured to fetch results\nonly from the server, only from the local cache, or attempt to fetch results\nfrom the server and fall back to the cache (which is the default)." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_FirebaseFeatures,
				nullptr,
				"EFirestoreSource",
				"EFirestoreSource",
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
	static UEnum* EFirestoreSetOptionsType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_FirebaseFeatures_EFirestoreSetOptionsType, Z_Construct_UPackage__Script_FirebaseFeatures(), TEXT("EFirestoreSetOptionsType"));
		}
		return Singleton;
	}
	template<> FIREBASEFEATURES_API UEnum* StaticEnum<EFirestoreSetOptionsType>()
	{
		return EFirestoreSetOptionsType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EFirestoreSetOptionsType(EFirestoreSetOptionsType_StaticEnum, TEXT("/Script/FirebaseFeatures"), TEXT("EFirestoreSetOptionsType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_FirebaseFeatures_EFirestoreSetOptionsType_Hash() { return 1199626040U; }
	UEnum* Z_Construct_UEnum_FirebaseFeatures_EFirestoreSetOptionsType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_FirebaseFeatures();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EFirestoreSetOptionsType"), 0, Get_Z_Construct_UEnum_FirebaseFeatures_EFirestoreSetOptionsType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EFirestoreSetOptionsType::Overwrite", (int64)EFirestoreSetOptionsType::Overwrite },
				{ "EFirestoreSetOptionsType::MergeAll", (int64)EFirestoreSetOptionsType::MergeAll },
				{ "EFirestoreSetOptionsType::MergeSpecific", (int64)EFirestoreSetOptionsType::MergeSpecific },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "MergeAll.Comment", "/**\n\x09 * Replaces the values specified in the call parameter while leaves omitted\n\x09 * fields untouched.\n\x09 */" },
				{ "MergeAll.Name", "EFirestoreSetOptionsType::MergeAll" },
				{ "MergeAll.ToolTip", "Replaces the values specified in the call parameter while leaves omitted\nfields untouched." },
				{ "MergeSpecific.Comment", "/**\n\x09 * Replaces the values of the fields explicitly specified in the call\n\x09 * parameter.\n\x09 */" },
				{ "MergeSpecific.Name", "EFirestoreSetOptionsType::MergeSpecific" },
				{ "MergeSpecific.ToolTip", "Replaces the values of the fields explicitly specified in the call\nparameter." },
				{ "ModuleRelativePath", "Public/Firestore/Firestore.h" },
				{ "Overwrite.Comment", "/** Overwrites the whole document. */" },
				{ "Overwrite.Name", "EFirestoreSetOptionsType::Overwrite" },
				{ "Overwrite.ToolTip", "Overwrites the whole document." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_FirebaseFeatures,
				nullptr,
				"EFirestoreSetOptionsType",
				"EFirestoreSetOptionsType",
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
class UScriptStruct* FWriteBatch::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FIREBASEFEATURES_API uint32 Get_Z_Construct_UScriptStruct_FWriteBatch_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FWriteBatch, Z_Construct_UPackage__Script_FirebaseFeatures(), TEXT("WriteBatch"), sizeof(FWriteBatch), Get_Z_Construct_UScriptStruct_FWriteBatch_Hash());
	}
	return Singleton;
}
template<> FIREBASEFEATURES_API UScriptStruct* StaticStruct<FWriteBatch>()
{
	return FWriteBatch::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FWriteBatch(FWriteBatch::StaticStruct, TEXT("/Script/FirebaseFeatures"), TEXT("WriteBatch"), false, nullptr, nullptr);
static struct FScriptStruct_FirebaseFeatures_StaticRegisterNativesFWriteBatch
{
	FScriptStruct_FirebaseFeatures_StaticRegisterNativesFWriteBatch()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("WriteBatch")),new UScriptStruct::TCppStructOps<FWriteBatch>);
	}
} ScriptStruct_FirebaseFeatures_StaticRegisterNativesFWriteBatch;
	struct Z_Construct_UScriptStruct_FWriteBatch_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWriteBatch_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Firestore/Firestore.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FWriteBatch_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWriteBatch>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWriteBatch_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FirebaseFeatures,
		nullptr,
		&NewStructOps,
		"WriteBatch",
		sizeof(FWriteBatch),
		alignof(FWriteBatch),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FWriteBatch_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWriteBatch_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FWriteBatch()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FWriteBatch_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_FirebaseFeatures();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("WriteBatch"), sizeof(FWriteBatch), Get_Z_Construct_UScriptStruct_FWriteBatch_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FWriteBatch_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FWriteBatch_Hash() { return 2978774708U; }
class UScriptStruct* FFirestoreTransaction::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FIREBASEFEATURES_API uint32 Get_Z_Construct_UScriptStruct_FFirestoreTransaction_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FFirestoreTransaction, Z_Construct_UPackage__Script_FirebaseFeatures(), TEXT("FirestoreTransaction"), sizeof(FFirestoreTransaction), Get_Z_Construct_UScriptStruct_FFirestoreTransaction_Hash());
	}
	return Singleton;
}
template<> FIREBASEFEATURES_API UScriptStruct* StaticStruct<FFirestoreTransaction>()
{
	return FFirestoreTransaction::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FFirestoreTransaction(FFirestoreTransaction::StaticStruct, TEXT("/Script/FirebaseFeatures"), TEXT("FirestoreTransaction"), false, nullptr, nullptr);
static struct FScriptStruct_FirebaseFeatures_StaticRegisterNativesFFirestoreTransaction
{
	FScriptStruct_FirebaseFeatures_StaticRegisterNativesFFirestoreTransaction()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("FirestoreTransaction")),new UScriptStruct::TCppStructOps<FFirestoreTransaction>);
	}
} ScriptStruct_FirebaseFeatures_StaticRegisterNativesFFirestoreTransaction;
	struct Z_Construct_UScriptStruct_FFirestoreTransaction_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFirestoreTransaction_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Firestore/Firestore.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFirestoreTransaction_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFirestoreTransaction>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFirestoreTransaction_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FirebaseFeatures,
		nullptr,
		&NewStructOps,
		"FirestoreTransaction",
		sizeof(FFirestoreTransaction),
		alignof(FFirestoreTransaction),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFirestoreTransaction_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFirestoreTransaction_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFirestoreTransaction()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FFirestoreTransaction_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_FirebaseFeatures();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("FirestoreTransaction"), sizeof(FFirestoreTransaction), Get_Z_Construct_UScriptStruct_FFirestoreTransaction_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FFirestoreTransaction_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FFirestoreTransaction_Hash() { return 1577260567U; }
class UScriptStruct* FFirestoreSetOptions::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FIREBASEFEATURES_API uint32 Get_Z_Construct_UScriptStruct_FFirestoreSetOptions_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FFirestoreSetOptions, Z_Construct_UPackage__Script_FirebaseFeatures(), TEXT("FirestoreSetOptions"), sizeof(FFirestoreSetOptions), Get_Z_Construct_UScriptStruct_FFirestoreSetOptions_Hash());
	}
	return Singleton;
}
template<> FIREBASEFEATURES_API UScriptStruct* StaticStruct<FFirestoreSetOptions>()
{
	return FFirestoreSetOptions::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FFirestoreSetOptions(FFirestoreSetOptions::StaticStruct, TEXT("/Script/FirebaseFeatures"), TEXT("FirestoreSetOptions"), false, nullptr, nullptr);
static struct FScriptStruct_FirebaseFeatures_StaticRegisterNativesFFirestoreSetOptions
{
	FScriptStruct_FirebaseFeatures_StaticRegisterNativesFFirestoreSetOptions()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("FirestoreSetOptions")),new UScriptStruct::TCppStructOps<FFirestoreSetOptions>);
	}
} ScriptStruct_FirebaseFeatures_StaticRegisterNativesFFirestoreSetOptions;
	struct Z_Construct_UScriptStruct_FFirestoreSetOptions_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFirestoreSetOptions_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Firestore/Firestore.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFirestoreSetOptions_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFirestoreSetOptions>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFirestoreSetOptions_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FirebaseFeatures,
		nullptr,
		&NewStructOps,
		"FirestoreSetOptions",
		sizeof(FFirestoreSetOptions),
		alignof(FFirestoreSetOptions),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFirestoreSetOptions_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFirestoreSetOptions_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFirestoreSetOptions()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FFirestoreSetOptions_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_FirebaseFeatures();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("FirestoreSetOptions"), sizeof(FFirestoreSetOptions), Get_Z_Construct_UScriptStruct_FFirestoreSetOptions_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FFirestoreSetOptions_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FFirestoreSetOptions_Hash() { return 1279922968U; }
class UScriptStruct* FFirestoreSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FIREBASEFEATURES_API uint32 Get_Z_Construct_UScriptStruct_FFirestoreSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FFirestoreSettings, Z_Construct_UPackage__Script_FirebaseFeatures(), TEXT("FirestoreSettings"), sizeof(FFirestoreSettings), Get_Z_Construct_UScriptStruct_FFirestoreSettings_Hash());
	}
	return Singleton;
}
template<> FIREBASEFEATURES_API UScriptStruct* StaticStruct<FFirestoreSettings>()
{
	return FFirestoreSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FFirestoreSettings(FFirestoreSettings::StaticStruct, TEXT("/Script/FirebaseFeatures"), TEXT("FirestoreSettings"), false, nullptr, nullptr);
static struct FScriptStruct_FirebaseFeatures_StaticRegisterNativesFFirestoreSettings
{
	FScriptStruct_FirebaseFeatures_StaticRegisterNativesFFirestoreSettings()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("FirestoreSettings")),new UScriptStruct::TCppStructOps<FFirestoreSettings>);
	}
} ScriptStruct_FirebaseFeatures_StaticRegisterNativesFFirestoreSettings;
	struct Z_Construct_UScriptStruct_FFirestoreSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Host_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Host;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSslEnabled_MetaData[];
#endif
		static void NewProp_bSslEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSslEnabled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPersistenceEnabled_MetaData[];
#endif
		static void NewProp_bPersistenceEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPersistenceEnabled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFirestoreSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Firestore/Firestore.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFirestoreSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFirestoreSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFirestoreSettings_Statics::NewProp_Host_MetaData[] = {
		{ "Category", "Firebase|Firestore" },
		{ "ModuleRelativePath", "Public/Firestore/Firestore.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFirestoreSettings_Statics::NewProp_Host = { "Host", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFirestoreSettings, Host), METADATA_PARAMS(Z_Construct_UScriptStruct_FFirestoreSettings_Statics::NewProp_Host_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFirestoreSettings_Statics::NewProp_Host_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFirestoreSettings_Statics::NewProp_bSslEnabled_MetaData[] = {
		{ "Category", "Firebase|Firestore" },
		{ "ModuleRelativePath", "Public/Firestore/Firestore.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FFirestoreSettings_Statics::NewProp_bSslEnabled_SetBit(void* Obj)
	{
		((FFirestoreSettings*)Obj)->bSslEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FFirestoreSettings_Statics::NewProp_bSslEnabled = { "bSslEnabled", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FFirestoreSettings), &Z_Construct_UScriptStruct_FFirestoreSettings_Statics::NewProp_bSslEnabled_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FFirestoreSettings_Statics::NewProp_bSslEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFirestoreSettings_Statics::NewProp_bSslEnabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFirestoreSettings_Statics::NewProp_bPersistenceEnabled_MetaData[] = {
		{ "Category", "Firebase|Firestore" },
		{ "ModuleRelativePath", "Public/Firestore/Firestore.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FFirestoreSettings_Statics::NewProp_bPersistenceEnabled_SetBit(void* Obj)
	{
		((FFirestoreSettings*)Obj)->bPersistenceEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FFirestoreSettings_Statics::NewProp_bPersistenceEnabled = { "bPersistenceEnabled", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FFirestoreSettings), &Z_Construct_UScriptStruct_FFirestoreSettings_Statics::NewProp_bPersistenceEnabled_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FFirestoreSettings_Statics::NewProp_bPersistenceEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFirestoreSettings_Statics::NewProp_bPersistenceEnabled_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFirestoreSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFirestoreSettings_Statics::NewProp_Host,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFirestoreSettings_Statics::NewProp_bSslEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFirestoreSettings_Statics::NewProp_bPersistenceEnabled,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFirestoreSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FirebaseFeatures,
		nullptr,
		&NewStructOps,
		"FirestoreSettings",
		sizeof(FFirestoreSettings),
		alignof(FFirestoreSettings),
		Z_Construct_UScriptStruct_FFirestoreSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFirestoreSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFirestoreSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFirestoreSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFirestoreSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FFirestoreSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_FirebaseFeatures();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("FirestoreSettings"), sizeof(FFirestoreSettings), Get_Z_Construct_UScriptStruct_FFirestoreSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FFirestoreSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FFirestoreSettings_Hash() { return 205035815U; }
	DEFINE_FUNCTION(UFirestore::execSetSettings)
	{
		P_GET_STRUCT_REF(FFirestoreSettings,Z_Param_Out_Settings);
		P_FINISH;
		P_NATIVE_BEGIN;
		UFirestore::SetSettings(Z_Param_Out_Settings);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFirestore::execGetSettings)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FFirestoreSettings*)Z_Param__Result=UFirestore::GetSettings();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFirestore::execCollectionGroup)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_CollectionId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UFirestoreQuery**)Z_Param__Result=UFirestore::CollectionGroup(Z_Param_CollectionId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFirestore::execGetDocument)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_DocumentPath);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UFirestoreDocumentReference**)Z_Param__Result=UFirestore::GetDocument(Z_Param_DocumentPath);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFirestore::execGetCollection)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_CollectionPath);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UFirestoreCollectionReference**)Z_Param__Result=UFirestore::GetCollection(Z_Param_CollectionPath);
		P_NATIVE_END;
	}
	void UFirestore::StaticRegisterNativesUFirestore()
	{
		UClass* Class = UFirestore::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CollectionGroup", &UFirestore::execCollectionGroup },
			{ "GetCollection", &UFirestore::execGetCollection },
			{ "GetDocument", &UFirestore::execGetDocument },
			{ "GetSettings", &UFirestore::execGetSettings },
			{ "SetSettings", &UFirestore::execSetSettings },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFirestore_CollectionGroup_Statics
	{
		struct Firestore_eventCollectionGroup_Parms
		{
			FString CollectionId;
			UFirestoreQuery* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CollectionId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CollectionId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirestore_CollectionGroup_Statics::NewProp_CollectionId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFirestore_CollectionGroup_Statics::NewProp_CollectionId = { "CollectionId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Firestore_eventCollectionGroup_Parms, CollectionId), METADATA_PARAMS(Z_Construct_UFunction_UFirestore_CollectionGroup_Statics::NewProp_CollectionId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirestore_CollectionGroup_Statics::NewProp_CollectionId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirestore_CollectionGroup_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Query" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFirestore_CollectionGroup_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Firestore_eventCollectionGroup_Parms, ReturnValue), Z_Construct_UClass_UFirestoreQuery_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UFirestore_CollectionGroup_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirestore_CollectionGroup_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFirestore_CollectionGroup_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirestore_CollectionGroup_Statics::NewProp_CollectionId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirestore_CollectionGroup_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirestore_CollectionGroup_Statics::Function_MetaDataParams[] = {
		{ "Category", "Firebase|Firestore" },
		{ "Comment", "/**\n\x09 * @brief Returns a Query instance that includes all documents in the\n\x09 * database that are contained in a collection or subcollection with the\n\x09 * given CollectionId.\n\x09 *\n\x09 * @param CollectionId Identifies the collections to query over. Every\n\x09 * collection or subcollection with this ID as the last segment of its path\n\x09 * will be included. Cannot contain a slash.\n\x09 *\n\x09 * @return The Query instance.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Firestore/Firestore.h" },
		{ "ToolTip", "@brief Returns a Query instance that includes all documents in the\ndatabase that are contained in a collection or subcollection with the\ngiven CollectionId.\n\n@param CollectionId Identifies the collections to query over. Every\ncollection or subcollection with this ID as the last segment of its path\nwill be included. Cannot contain a slash.\n\n@return The Query instance." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFirestore_CollectionGroup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFirestore, nullptr, "CollectionGroup", nullptr, nullptr, sizeof(Firestore_eventCollectionGroup_Parms), Z_Construct_UFunction_UFirestore_CollectionGroup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirestore_CollectionGroup_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFirestore_CollectionGroup_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirestore_CollectionGroup_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFirestore_CollectionGroup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFirestore_CollectionGroup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFirestore_GetCollection_Statics
	{
		struct Firestore_eventGetCollection_Parms
		{
			FString CollectionPath;
			UFirestoreCollectionReference* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CollectionPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CollectionPath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirestore_GetCollection_Statics::NewProp_CollectionPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFirestore_GetCollection_Statics::NewProp_CollectionPath = { "CollectionPath", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Firestore_eventGetCollection_Parms, CollectionPath), METADATA_PARAMS(Z_Construct_UFunction_UFirestore_GetCollection_Statics::NewProp_CollectionPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirestore_GetCollection_Statics::NewProp_CollectionPath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirestore_GetCollection_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Collection" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFirestore_GetCollection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Firestore_eventGetCollection_Parms, ReturnValue), Z_Construct_UClass_UFirestoreCollectionReference_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UFirestore_GetCollection_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirestore_GetCollection_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFirestore_GetCollection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirestore_GetCollection_Statics::NewProp_CollectionPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirestore_GetCollection_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirestore_GetCollection_Statics::Function_MetaDataParams[] = {
		{ "Category", "Firebase|Firestore" },
		{ "Comment", "/**\n\x09 * @brief Returns a CollectionReference instance that refers to the\n\x09 * collection at the specified path within the database.\n\x09 *\n\x09 * @param CollectionPath A slash-separated path to a collection.\n\x09 *\n\x09 * @return The CollectionReference instance.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Firestore/Firestore.h" },
		{ "ToolTip", "@brief Returns a CollectionReference instance that refers to the\ncollection at the specified path within the database.\n\n@param CollectionPath A slash-separated path to a collection.\n\n@return The CollectionReference instance." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFirestore_GetCollection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFirestore, nullptr, "GetCollection", nullptr, nullptr, sizeof(Firestore_eventGetCollection_Parms), Z_Construct_UFunction_UFirestore_GetCollection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirestore_GetCollection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFirestore_GetCollection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirestore_GetCollection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFirestore_GetCollection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFirestore_GetCollection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFirestore_GetDocument_Statics
	{
		struct Firestore_eventGetDocument_Parms
		{
			FString DocumentPath;
			UFirestoreDocumentReference* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DocumentPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DocumentPath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirestore_GetDocument_Statics::NewProp_DocumentPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFirestore_GetDocument_Statics::NewProp_DocumentPath = { "DocumentPath", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Firestore_eventGetDocument_Parms, DocumentPath), METADATA_PARAMS(Z_Construct_UFunction_UFirestore_GetDocument_Statics::NewProp_DocumentPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirestore_GetDocument_Statics::NewProp_DocumentPath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirestore_GetDocument_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Document" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFirestore_GetDocument_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Firestore_eventGetDocument_Parms, ReturnValue), Z_Construct_UClass_UFirestoreDocumentReference_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UFirestore_GetDocument_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirestore_GetDocument_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFirestore_GetDocument_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirestore_GetDocument_Statics::NewProp_DocumentPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirestore_GetDocument_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirestore_GetDocument_Statics::Function_MetaDataParams[] = {
		{ "Category", "Firebase|Firestore" },
		{ "Comment", "/**\n\x09 * @brief Returns a DocumentReference instance that refers to the document at\n\x09 * the specified path within the database.\n\x09 *\n\x09 * @param DocumentPath A slash-separated path to a document.\n\x09 *\n\x09 * @return The DocumentReference instance.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Firestore/Firestore.h" },
		{ "ToolTip", "@brief Returns a DocumentReference instance that refers to the document at\nthe specified path within the database.\n\n@param DocumentPath A slash-separated path to a document.\n\n@return The DocumentReference instance." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFirestore_GetDocument_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFirestore, nullptr, "GetDocument", nullptr, nullptr, sizeof(Firestore_eventGetDocument_Parms), Z_Construct_UFunction_UFirestore_GetDocument_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirestore_GetDocument_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFirestore_GetDocument_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirestore_GetDocument_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFirestore_GetDocument()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFirestore_GetDocument_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFirestore_GetSettings_Statics
	{
		struct Firestore_eventGetSettings_Parms
		{
			FFirestoreSettings ReturnValue;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirestore_GetSettings_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Settings" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFirestore_GetSettings_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Firestore_eventGetSettings_Parms, ReturnValue), Z_Construct_UScriptStruct_FFirestoreSettings, METADATA_PARAMS(Z_Construct_UFunction_UFirestore_GetSettings_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirestore_GetSettings_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFirestore_GetSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirestore_GetSettings_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirestore_GetSettings_Statics::Function_MetaDataParams[] = {
		{ "Category", "Firebase|Firestore" },
		{ "Comment", "/** Returns the settings used by this Firestore object. */" },
		{ "ModuleRelativePath", "Public/Firestore/Firestore.h" },
		{ "ToolTip", "Returns the settings used by this Firestore object." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFirestore_GetSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFirestore, nullptr, "GetSettings", nullptr, nullptr, sizeof(Firestore_eventGetSettings_Parms), Z_Construct_UFunction_UFirestore_GetSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirestore_GetSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFirestore_GetSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirestore_GetSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFirestore_GetSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFirestore_GetSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFirestore_SetSettings_Statics
	{
		struct Firestore_eventSetSettings_Parms
		{
			FFirestoreSettings Settings;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Settings;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirestore_SetSettings_Statics::NewProp_Settings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFirestore_SetSettings_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Firestore_eventSetSettings_Parms, Settings), Z_Construct_UScriptStruct_FFirestoreSettings, METADATA_PARAMS(Z_Construct_UFunction_UFirestore_SetSettings_Statics::NewProp_Settings_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirestore_SetSettings_Statics::NewProp_Settings_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFirestore_SetSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirestore_SetSettings_Statics::NewProp_Settings,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirestore_SetSettings_Statics::Function_MetaDataParams[] = {
		{ "Category", "Firebase|Firestore" },
		{ "Comment", "/** Sets any custom settings used to configure this Firestore object. */" },
		{ "ModuleRelativePath", "Public/Firestore/Firestore.h" },
		{ "ToolTip", "Sets any custom settings used to configure this Firestore object." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFirestore_SetSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFirestore, nullptr, "SetSettings", nullptr, nullptr, sizeof(Firestore_eventSetSettings_Parms), Z_Construct_UFunction_UFirestore_SetSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirestore_SetSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFirestore_SetSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirestore_SetSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFirestore_SetSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFirestore_SetSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFirestore_NoRegister()
	{
		return UFirestore::StaticClass();
	}
	struct Z_Construct_UClass_UFirestore_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFirestore_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_FirebaseFeatures,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFirestore_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFirestore_CollectionGroup, "CollectionGroup" }, // 3402249137
		{ &Z_Construct_UFunction_UFirestore_GetCollection, "GetCollection" }, // 197639886
		{ &Z_Construct_UFunction_UFirestore_GetDocument, "GetDocument" }, // 345888103
		{ &Z_Construct_UFunction_UFirestore_GetSettings, "GetSettings" }, // 2200752083
		{ &Z_Construct_UFunction_UFirestore_SetSettings, "SetSettings" }, // 2975545959
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFirestore_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Firestore/Firestore.h" },
		{ "ModuleRelativePath", "Public/Firestore/Firestore.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFirestore_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFirestore>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFirestore_Statics::ClassParams = {
		&UFirestore::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UFirestore_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFirestore_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFirestore()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFirestore_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFirestore, 3816750054);
	template<> FIREBASEFEATURES_API UClass* StaticClass<UFirestore>()
	{
		return UFirestore::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFirestore(Z_Construct_UClass_UFirestore, &UFirestore::StaticClass, TEXT("/Script/FirebaseFeatures"), TEXT("UFirestore"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFirestore);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
