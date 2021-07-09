// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FirebaseFeatures/Public/Firestore/DocumentSnapshot.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDocumentSnapshot() {}
// Cross Module References
	FIREBASEFEATURES_API UEnum* Z_Construct_UEnum_FirebaseFeatures_EFirestoreServerTimestampBehavior();
	UPackage* Z_Construct_UPackage__Script_FirebaseFeatures();
	FIREBASEFEATURES_API UScriptStruct* Z_Construct_UScriptStruct_FFirestoreDocumentSnapshot();
	FIREBASEFEATURES_API UScriptStruct* Z_Construct_UScriptStruct_FFirestoreSnapshotMetadata();
// End Cross Module References
	static UEnum* EFirestoreServerTimestampBehavior_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_FirebaseFeatures_EFirestoreServerTimestampBehavior, Z_Construct_UPackage__Script_FirebaseFeatures(), TEXT("EFirestoreServerTimestampBehavior"));
		}
		return Singleton;
	}
	template<> FIREBASEFEATURES_API UEnum* StaticEnum<EFirestoreServerTimestampBehavior>()
	{
		return EFirestoreServerTimestampBehavior_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EFirestoreServerTimestampBehavior(EFirestoreServerTimestampBehavior_StaticEnum, TEXT("/Script/FirebaseFeatures"), TEXT("EFirestoreServerTimestampBehavior"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_FirebaseFeatures_EFirestoreServerTimestampBehavior_Hash() { return 3870244026U; }
	UEnum* Z_Construct_UEnum_FirebaseFeatures_EFirestoreServerTimestampBehavior()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_FirebaseFeatures();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EFirestoreServerTimestampBehavior"), 0, Get_Z_Construct_UEnum_FirebaseFeatures_EFirestoreServerTimestampBehavior_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EFirestoreServerTimestampBehavior::Estimate", (int64)EFirestoreServerTimestampBehavior::Estimate },
				{ "EFirestoreServerTimestampBehavior::Previous", (int64)EFirestoreServerTimestampBehavior::Previous },
				{ "EFirestoreServerTimestampBehavior::Default", (int64)EFirestoreServerTimestampBehavior::Default },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Default.Comment", "/** The default behavior, which is equivalent to specifying None. */" },
				{ "Default.Name", "EFirestoreServerTimestampBehavior::Default" },
				{ "Default.ToolTip", "The default behavior, which is equivalent to specifying None." },
				{ "Estimate.Comment", "/**\n     * Return local estimates for server timestamps that have not yet been set\n     * to their final value. This estimate will likely differ from the final\n     * value and may cause these pending values to change once the server result\n     * becomes available.\n     */" },
				{ "Estimate.Name", "EFirestoreServerTimestampBehavior::Estimate" },
				{ "Estimate.ToolTip", "Return local estimates for server timestamps that have not yet been set\nto their final value. This estimate will likely differ from the final\nvalue and may cause these pending values to change once the server result\nbecomes available." },
				{ "ModuleRelativePath", "Public/Firestore/DocumentSnapshot.h" },
				{ "Previous.Comment", "/**\n      * Return the previous value for server timestamps that have not yet been\n      * set to their final value.\n      */" },
				{ "Previous.Name", "EFirestoreServerTimestampBehavior::Previous" },
				{ "Previous.ToolTip", "Return the previous value for server timestamps that have not yet been\nset to their final value." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_FirebaseFeatures,
				nullptr,
				"EFirestoreServerTimestampBehavior",
				"EFirestoreServerTimestampBehavior",
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
class UScriptStruct* FFirestoreDocumentSnapshot::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FIREBASEFEATURES_API uint32 Get_Z_Construct_UScriptStruct_FFirestoreDocumentSnapshot_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FFirestoreDocumentSnapshot, Z_Construct_UPackage__Script_FirebaseFeatures(), TEXT("FirestoreDocumentSnapshot"), sizeof(FFirestoreDocumentSnapshot), Get_Z_Construct_UScriptStruct_FFirestoreDocumentSnapshot_Hash());
	}
	return Singleton;
}
template<> FIREBASEFEATURES_API UScriptStruct* StaticStruct<FFirestoreDocumentSnapshot>()
{
	return FFirestoreDocumentSnapshot::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FFirestoreDocumentSnapshot(FFirestoreDocumentSnapshot::StaticStruct, TEXT("/Script/FirebaseFeatures"), TEXT("FirestoreDocumentSnapshot"), false, nullptr, nullptr);
static struct FScriptStruct_FirebaseFeatures_StaticRegisterNativesFFirestoreDocumentSnapshot
{
	FScriptStruct_FirebaseFeatures_StaticRegisterNativesFFirestoreDocumentSnapshot()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("FirestoreDocumentSnapshot")),new UScriptStruct::TCppStructOps<FFirestoreDocumentSnapshot>);
	}
} ScriptStruct_FirebaseFeatures_StaticRegisterNativesFFirestoreDocumentSnapshot;
	struct Z_Construct_UScriptStruct_FFirestoreDocumentSnapshot_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFirestoreDocumentSnapshot_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Firestore/DocumentSnapshot.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFirestoreDocumentSnapshot_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFirestoreDocumentSnapshot>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFirestoreDocumentSnapshot_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FirebaseFeatures,
		nullptr,
		&NewStructOps,
		"FirestoreDocumentSnapshot",
		sizeof(FFirestoreDocumentSnapshot),
		alignof(FFirestoreDocumentSnapshot),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFirestoreDocumentSnapshot_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFirestoreDocumentSnapshot_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFirestoreDocumentSnapshot()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FFirestoreDocumentSnapshot_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_FirebaseFeatures();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("FirestoreDocumentSnapshot"), sizeof(FFirestoreDocumentSnapshot), Get_Z_Construct_UScriptStruct_FFirestoreDocumentSnapshot_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FFirestoreDocumentSnapshot_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FFirestoreDocumentSnapshot_Hash() { return 3235549993U; }
class UScriptStruct* FFirestoreSnapshotMetadata::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FIREBASEFEATURES_API uint32 Get_Z_Construct_UScriptStruct_FFirestoreSnapshotMetadata_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FFirestoreSnapshotMetadata, Z_Construct_UPackage__Script_FirebaseFeatures(), TEXT("FirestoreSnapshotMetadata"), sizeof(FFirestoreSnapshotMetadata), Get_Z_Construct_UScriptStruct_FFirestoreSnapshotMetadata_Hash());
	}
	return Singleton;
}
template<> FIREBASEFEATURES_API UScriptStruct* StaticStruct<FFirestoreSnapshotMetadata>()
{
	return FFirestoreSnapshotMetadata::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FFirestoreSnapshotMetadata(FFirestoreSnapshotMetadata::StaticStruct, TEXT("/Script/FirebaseFeatures"), TEXT("FirestoreSnapshotMetadata"), false, nullptr, nullptr);
static struct FScriptStruct_FirebaseFeatures_StaticRegisterNativesFFirestoreSnapshotMetadata
{
	FScriptStruct_FirebaseFeatures_StaticRegisterNativesFFirestoreSnapshotMetadata()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("FirestoreSnapshotMetadata")),new UScriptStruct::TCppStructOps<FFirestoreSnapshotMetadata>);
	}
} ScriptStruct_FirebaseFeatures_StaticRegisterNativesFFirestoreSnapshotMetadata;
	struct Z_Construct_UScriptStruct_FFirestoreSnapshotMetadata_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHasPendingWrites_MetaData[];
#endif
		static void NewProp_bHasPendingWrites_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHasPendingWrites;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsFromCache_MetaData[];
#endif
		static void NewProp_bIsFromCache_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsFromCache;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFirestoreSnapshotMetadata_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Firestore/DocumentSnapshot.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFirestoreSnapshotMetadata_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFirestoreSnapshotMetadata>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFirestoreSnapshotMetadata_Statics::NewProp_bHasPendingWrites_MetaData[] = {
		{ "Category", "Firebase|Firestore|DocumentSnapshot" },
		{ "Comment", "/**\n     * Whether the snapshot contains the result of local writes.\n     * Is true if the snapshot contains the result of local writes (for\n     * example, Set() or Update() calls) that have not yet been committed to the\n     * backend. \n     */" },
		{ "ModuleRelativePath", "Public/Firestore/DocumentSnapshot.h" },
		{ "ToolTip", "Whether the snapshot contains the result of local writes.\nIs true if the snapshot contains the result of local writes (for\nexample, Set() or Update() calls) that have not yet been committed to the\nbackend." },
	};
#endif
	void Z_Construct_UScriptStruct_FFirestoreSnapshotMetadata_Statics::NewProp_bHasPendingWrites_SetBit(void* Obj)
	{
		((FFirestoreSnapshotMetadata*)Obj)->bHasPendingWrites = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FFirestoreSnapshotMetadata_Statics::NewProp_bHasPendingWrites = { "bHasPendingWrites", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FFirestoreSnapshotMetadata), &Z_Construct_UScriptStruct_FFirestoreSnapshotMetadata_Statics::NewProp_bHasPendingWrites_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FFirestoreSnapshotMetadata_Statics::NewProp_bHasPendingWrites_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFirestoreSnapshotMetadata_Statics::NewProp_bHasPendingWrites_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFirestoreSnapshotMetadata_Statics::NewProp_bIsFromCache_MetaData[] = {
		{ "Category", "Firebase|Firestore|DocumentSnapshot" },
		{ "Comment", "/**\n     * Whether the snapshot was created from cached data.\n     * Is true if the snapshot was created from cached data rather than\n     * guaranteed up-to-date server data. \n     */" },
		{ "ModuleRelativePath", "Public/Firestore/DocumentSnapshot.h" },
		{ "ToolTip", "Whether the snapshot was created from cached data.\nIs true if the snapshot was created from cached data rather than\nguaranteed up-to-date server data." },
	};
#endif
	void Z_Construct_UScriptStruct_FFirestoreSnapshotMetadata_Statics::NewProp_bIsFromCache_SetBit(void* Obj)
	{
		((FFirestoreSnapshotMetadata*)Obj)->bIsFromCache = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FFirestoreSnapshotMetadata_Statics::NewProp_bIsFromCache = { "bIsFromCache", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FFirestoreSnapshotMetadata), &Z_Construct_UScriptStruct_FFirestoreSnapshotMetadata_Statics::NewProp_bIsFromCache_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FFirestoreSnapshotMetadata_Statics::NewProp_bIsFromCache_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFirestoreSnapshotMetadata_Statics::NewProp_bIsFromCache_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFirestoreSnapshotMetadata_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFirestoreSnapshotMetadata_Statics::NewProp_bHasPendingWrites,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFirestoreSnapshotMetadata_Statics::NewProp_bIsFromCache,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFirestoreSnapshotMetadata_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FirebaseFeatures,
		nullptr,
		&NewStructOps,
		"FirestoreSnapshotMetadata",
		sizeof(FFirestoreSnapshotMetadata),
		alignof(FFirestoreSnapshotMetadata),
		Z_Construct_UScriptStruct_FFirestoreSnapshotMetadata_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFirestoreSnapshotMetadata_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFirestoreSnapshotMetadata_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFirestoreSnapshotMetadata_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFirestoreSnapshotMetadata()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FFirestoreSnapshotMetadata_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_FirebaseFeatures();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("FirestoreSnapshotMetadata"), sizeof(FFirestoreSnapshotMetadata), Get_Z_Construct_UScriptStruct_FFirestoreSnapshotMetadata_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FFirestoreSnapshotMetadata_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FFirestoreSnapshotMetadata_Hash() { return 3511874208U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
