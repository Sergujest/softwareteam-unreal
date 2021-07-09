// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FirebaseFeatures/Public/Functions/CallableReference.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCallableReference() {}
// Cross Module References
	FIREBASEFEATURES_API UScriptStruct* Z_Construct_UScriptStruct_FFirebaseHttpsCallableReference();
	UPackage* Z_Construct_UPackage__Script_FirebaseFeatures();
// End Cross Module References
class UScriptStruct* FFirebaseHttpsCallableReference::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FIREBASEFEATURES_API uint32 Get_Z_Construct_UScriptStruct_FFirebaseHttpsCallableReference_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FFirebaseHttpsCallableReference, Z_Construct_UPackage__Script_FirebaseFeatures(), TEXT("FirebaseHttpsCallableReference"), sizeof(FFirebaseHttpsCallableReference), Get_Z_Construct_UScriptStruct_FFirebaseHttpsCallableReference_Hash());
	}
	return Singleton;
}
template<> FIREBASEFEATURES_API UScriptStruct* StaticStruct<FFirebaseHttpsCallableReference>()
{
	return FFirebaseHttpsCallableReference::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FFirebaseHttpsCallableReference(FFirebaseHttpsCallableReference::StaticStruct, TEXT("/Script/FirebaseFeatures"), TEXT("FirebaseHttpsCallableReference"), false, nullptr, nullptr);
static struct FScriptStruct_FirebaseFeatures_StaticRegisterNativesFFirebaseHttpsCallableReference
{
	FScriptStruct_FirebaseFeatures_StaticRegisterNativesFFirebaseHttpsCallableReference()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("FirebaseHttpsCallableReference")),new UScriptStruct::TCppStructOps<FFirebaseHttpsCallableReference>);
	}
} ScriptStruct_FirebaseFeatures_StaticRegisterNativesFFirebaseHttpsCallableReference;
	struct Z_Construct_UScriptStruct_FFirebaseHttpsCallableReference_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFirebaseHttpsCallableReference_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/// Represents a reference to a Cloud Functions object.\n/// Developers can call HTTPS Callable Functions.\n" },
		{ "ModuleRelativePath", "Public/Functions/CallableReference.h" },
		{ "ToolTip", "Represents a reference to a Cloud Functions object.\nDevelopers can call HTTPS Callable Functions." },
	};
#endif
	void* Z_Construct_UScriptStruct_FFirebaseHttpsCallableReference_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFirebaseHttpsCallableReference>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFirebaseHttpsCallableReference_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FirebaseFeatures,
		nullptr,
		&NewStructOps,
		"FirebaseHttpsCallableReference",
		sizeof(FFirebaseHttpsCallableReference),
		alignof(FFirebaseHttpsCallableReference),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFirebaseHttpsCallableReference_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFirebaseHttpsCallableReference_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFirebaseHttpsCallableReference()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FFirebaseHttpsCallableReference_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_FirebaseFeatures();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("FirebaseHttpsCallableReference"), sizeof(FFirebaseHttpsCallableReference), Get_Z_Construct_UScriptStruct_FFirebaseHttpsCallableReference_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FFirebaseHttpsCallableReference_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FFirebaseHttpsCallableReference_Hash() { return 1488502647U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
