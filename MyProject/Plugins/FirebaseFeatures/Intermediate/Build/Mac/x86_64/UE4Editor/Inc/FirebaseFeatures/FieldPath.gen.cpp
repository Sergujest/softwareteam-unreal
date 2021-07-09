// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FirebaseFeatures/Public/Firestore/FieldPath.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFieldPath() {}
// Cross Module References
	FIREBASEFEATURES_API UScriptStruct* Z_Construct_UScriptStruct_FFirestoreFieldPath();
	UPackage* Z_Construct_UPackage__Script_FirebaseFeatures();
// End Cross Module References
class UScriptStruct* FFirestoreFieldPath::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FIREBASEFEATURES_API uint32 Get_Z_Construct_UScriptStruct_FFirestoreFieldPath_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FFirestoreFieldPath, Z_Construct_UPackage__Script_FirebaseFeatures(), TEXT("FirestoreFieldPath"), sizeof(FFirestoreFieldPath), Get_Z_Construct_UScriptStruct_FFirestoreFieldPath_Hash());
	}
	return Singleton;
}
template<> FIREBASEFEATURES_API UScriptStruct* StaticStruct<FFirestoreFieldPath>()
{
	return FFirestoreFieldPath::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FFirestoreFieldPath(FFirestoreFieldPath::StaticStruct, TEXT("/Script/FirebaseFeatures"), TEXT("FirestoreFieldPath"), false, nullptr, nullptr);
static struct FScriptStruct_FirebaseFeatures_StaticRegisterNativesFFirestoreFieldPath
{
	FScriptStruct_FirebaseFeatures_StaticRegisterNativesFFirestoreFieldPath()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("FirestoreFieldPath")),new UScriptStruct::TCppStructOps<FFirestoreFieldPath>);
	}
} ScriptStruct_FirebaseFeatures_StaticRegisterNativesFFirestoreFieldPath;
	struct Z_Construct_UScriptStruct_FFirestoreFieldPath_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFirestoreFieldPath_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Firestore/FieldPath.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFirestoreFieldPath_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFirestoreFieldPath>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFirestoreFieldPath_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FirebaseFeatures,
		nullptr,
		&NewStructOps,
		"FirestoreFieldPath",
		sizeof(FFirestoreFieldPath),
		alignof(FFirestoreFieldPath),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFirestoreFieldPath_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFirestoreFieldPath_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFirestoreFieldPath()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FFirestoreFieldPath_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_FirebaseFeatures();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("FirestoreFieldPath"), sizeof(FFirestoreFieldPath), Get_Z_Construct_UScriptStruct_FFirestoreFieldPath_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FFirestoreFieldPath_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FFirestoreFieldPath_Hash() { return 951432233U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
