// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FirebaseFeatures/Public/Storage/StorageReference.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStorageReference() {}
// Cross Module References
	FIREBASEFEATURES_API UScriptStruct* Z_Construct_UScriptStruct_FFirebaseStorageMetadata();
	UPackage* Z_Construct_UPackage__Script_FirebaseFeatures();
	FIREBASEFEATURES_API UScriptStruct* Z_Construct_UScriptStruct_FFirebaseStorageController();
	FIREBASEFEATURES_API UClass* Z_Construct_UClass_UFirebaseStorageReference_NoRegister();
	FIREBASEFEATURES_API UClass* Z_Construct_UClass_UFirebaseStorageReference();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
class UScriptStruct* FFirebaseStorageMetadata::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FIREBASEFEATURES_API uint32 Get_Z_Construct_UScriptStruct_FFirebaseStorageMetadata_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FFirebaseStorageMetadata, Z_Construct_UPackage__Script_FirebaseFeatures(), TEXT("FirebaseStorageMetadata"), sizeof(FFirebaseStorageMetadata), Get_Z_Construct_UScriptStruct_FFirebaseStorageMetadata_Hash());
	}
	return Singleton;
}
template<> FIREBASEFEATURES_API UScriptStruct* StaticStruct<FFirebaseStorageMetadata>()
{
	return FFirebaseStorageMetadata::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FFirebaseStorageMetadata(FFirebaseStorageMetadata::StaticStruct, TEXT("/Script/FirebaseFeatures"), TEXT("FirebaseStorageMetadata"), false, nullptr, nullptr);
static struct FScriptStruct_FirebaseFeatures_StaticRegisterNativesFFirebaseStorageMetadata
{
	FScriptStruct_FirebaseFeatures_StaticRegisterNativesFFirebaseStorageMetadata()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("FirebaseStorageMetadata")),new UScriptStruct::TCppStructOps<FFirebaseStorageMetadata>);
	}
} ScriptStruct_FirebaseFeatures_StaticRegisterNativesFFirebaseStorageMetadata;
	struct Z_Construct_UScriptStruct_FFirebaseStorageMetadata_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFirebaseStorageMetadata_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Storage/StorageReference.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFirebaseStorageMetadata_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFirebaseStorageMetadata>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFirebaseStorageMetadata_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FirebaseFeatures,
		nullptr,
		&NewStructOps,
		"FirebaseStorageMetadata",
		sizeof(FFirebaseStorageMetadata),
		alignof(FFirebaseStorageMetadata),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFirebaseStorageMetadata_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFirebaseStorageMetadata_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFirebaseStorageMetadata()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FFirebaseStorageMetadata_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_FirebaseFeatures();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("FirebaseStorageMetadata"), sizeof(FFirebaseStorageMetadata), Get_Z_Construct_UScriptStruct_FFirebaseStorageMetadata_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FFirebaseStorageMetadata_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FFirebaseStorageMetadata_Hash() { return 3341992472U; }
class UScriptStruct* FFirebaseStorageController::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FIREBASEFEATURES_API uint32 Get_Z_Construct_UScriptStruct_FFirebaseStorageController_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FFirebaseStorageController, Z_Construct_UPackage__Script_FirebaseFeatures(), TEXT("FirebaseStorageController"), sizeof(FFirebaseStorageController), Get_Z_Construct_UScriptStruct_FFirebaseStorageController_Hash());
	}
	return Singleton;
}
template<> FIREBASEFEATURES_API UScriptStruct* StaticStruct<FFirebaseStorageController>()
{
	return FFirebaseStorageController::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FFirebaseStorageController(FFirebaseStorageController::StaticStruct, TEXT("/Script/FirebaseFeatures"), TEXT("FirebaseStorageController"), false, nullptr, nullptr);
static struct FScriptStruct_FirebaseFeatures_StaticRegisterNativesFFirebaseStorageController
{
	FScriptStruct_FirebaseFeatures_StaticRegisterNativesFFirebaseStorageController()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("FirebaseStorageController")),new UScriptStruct::TCppStructOps<FFirebaseStorageController>);
	}
} ScriptStruct_FirebaseFeatures_StaticRegisterNativesFFirebaseStorageController;
	struct Z_Construct_UScriptStruct_FFirebaseStorageController_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFirebaseStorageController_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Storage/StorageReference.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFirebaseStorageController_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFirebaseStorageController>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFirebaseStorageController_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FirebaseFeatures,
		nullptr,
		&NewStructOps,
		"FirebaseStorageController",
		sizeof(FFirebaseStorageController),
		alignof(FFirebaseStorageController),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFirebaseStorageController_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFirebaseStorageController_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFirebaseStorageController()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FFirebaseStorageController_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_FirebaseFeatures();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("FirebaseStorageController"), sizeof(FFirebaseStorageController), Get_Z_Construct_UScriptStruct_FFirebaseStorageController_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FFirebaseStorageController_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FFirebaseStorageController_Hash() { return 2210201021U; }
	DEFINE_FUNCTION(UFirebaseStorageReference::execIsValid)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsValid();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFirebaseStorageReference::execGetParent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UFirebaseStorageReference**)Z_Param__Result=P_THIS->GetParent();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFirebaseStorageReference::execGetName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetName();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFirebaseStorageReference::execGetFullPath)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetFullPath();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFirebaseStorageReference::execGetBucket)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetBucket();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFirebaseStorageReference::execChild)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_path);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UFirebaseStorageReference**)Z_Param__Result=P_THIS->Child(Z_Param_path);
		P_NATIVE_END;
	}
	void UFirebaseStorageReference::StaticRegisterNativesUFirebaseStorageReference()
	{
		UClass* Class = UFirebaseStorageReference::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Child", &UFirebaseStorageReference::execChild },
			{ "GetBucket", &UFirebaseStorageReference::execGetBucket },
			{ "GetFullPath", &UFirebaseStorageReference::execGetFullPath },
			{ "GetName", &UFirebaseStorageReference::execGetName },
			{ "GetParent", &UFirebaseStorageReference::execGetParent },
			{ "IsValid", &UFirebaseStorageReference::execIsValid },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFirebaseStorageReference_Child_Statics
	{
		struct FirebaseStorageReference_eventChild_Parms
		{
			FString path;
			UFirebaseStorageReference* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_path_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_path;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseStorageReference_Child_Statics::NewProp_path_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFirebaseStorageReference_Child_Statics::NewProp_path = { "path", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirebaseStorageReference_eventChild_Parms, path), METADATA_PARAMS(Z_Construct_UFunction_UFirebaseStorageReference_Child_Statics::NewProp_path_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseStorageReference_Child_Statics::NewProp_path_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseStorageReference_Child_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Child" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFirebaseStorageReference_Child_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirebaseStorageReference_eventChild_Parms, ReturnValue), Z_Construct_UClass_UFirebaseStorageReference_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UFirebaseStorageReference_Child_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseStorageReference_Child_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFirebaseStorageReference_Child_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseStorageReference_Child_Statics::NewProp_path,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseStorageReference_Child_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseStorageReference_Child_Statics::Function_MetaDataParams[] = {
		{ "Category", "Firebase|Storage|StorageReference" },
		{ "Comment", "/// @brief Gets a reference to a location relative to this one.\n///\n/// @param[in] path Path relative to this reference's location.\n/// The pointer only needs to be valid during this call.\n///\n/// @returns Child relative to this location.\n" },
		{ "ModuleRelativePath", "Public/Storage/StorageReference.h" },
		{ "ToolTip", "@brief Gets a reference to a location relative to this one.\n\n@param[in] path Path relative to this reference's location.\nThe pointer only needs to be valid during this call.\n\n@returns Child relative to this location." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFirebaseStorageReference_Child_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFirebaseStorageReference, nullptr, "Child", nullptr, nullptr, sizeof(FirebaseStorageReference_eventChild_Parms), Z_Construct_UFunction_UFirebaseStorageReference_Child_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseStorageReference_Child_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFirebaseStorageReference_Child_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseStorageReference_Child_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFirebaseStorageReference_Child()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFirebaseStorageReference_Child_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFirebaseStorageReference_GetBucket_Statics
	{
		struct FirebaseStorageReference_eventGetBucket_Parms
		{
			FString ReturnValue;
		};
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseStorageReference_GetBucket_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Bucket" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFirebaseStorageReference_GetBucket_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirebaseStorageReference_eventGetBucket_Parms, ReturnValue), METADATA_PARAMS(Z_Construct_UFunction_UFirebaseStorageReference_GetBucket_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseStorageReference_GetBucket_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFirebaseStorageReference_GetBucket_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseStorageReference_GetBucket_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseStorageReference_GetBucket_Statics::Function_MetaDataParams[] = {
		{ "Category", "Firebase|Storage|StorageReference" },
		{ "Comment", "/// @brief Return the Google Cloud Storage bucket that holds this object.\n///\n/// @returns The bucket.\n" },
		{ "ModuleRelativePath", "Public/Storage/StorageReference.h" },
		{ "ToolTip", "@brief Return the Google Cloud Storage bucket that holds this object.\n\n@returns The bucket." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFirebaseStorageReference_GetBucket_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFirebaseStorageReference, nullptr, "GetBucket", nullptr, nullptr, sizeof(FirebaseStorageReference_eventGetBucket_Parms), Z_Construct_UFunction_UFirebaseStorageReference_GetBucket_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseStorageReference_GetBucket_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFirebaseStorageReference_GetBucket_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseStorageReference_GetBucket_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFirebaseStorageReference_GetBucket()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFirebaseStorageReference_GetBucket_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFirebaseStorageReference_GetFullPath_Statics
	{
		struct FirebaseStorageReference_eventGetFullPath_Parms
		{
			FString ReturnValue;
		};
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseStorageReference_GetFullPath_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Full Path" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFirebaseStorageReference_GetFullPath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirebaseStorageReference_eventGetFullPath_Parms, ReturnValue), METADATA_PARAMS(Z_Construct_UFunction_UFirebaseStorageReference_GetFullPath_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseStorageReference_GetFullPath_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFirebaseStorageReference_GetFullPath_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseStorageReference_GetFullPath_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseStorageReference_GetFullPath_Statics::Function_MetaDataParams[] = {
		{ "Category", "Firebase|Storage|StorageReference" },
		{ "Comment", "/// @brief Return the full path of the storage reference, not including\n/// the Google Cloud Storage bucket.\n///\n/// @returns Full path to the storage reference, not including GCS bucket.\n/// For example, for the reference \"gs://bucket/path/to/object.txt\", the full\n/// path would be \"path/to/object.txt\".\n" },
		{ "ModuleRelativePath", "Public/Storage/StorageReference.h" },
		{ "ToolTip", "@brief Return the full path of the storage reference, not including\nthe Google Cloud Storage bucket.\n\n@returns Full path to the storage reference, not including GCS bucket.\nFor example, for the reference \"gs:bucket/path/to/object.txt\", the full\npath would be \"path/to/object.txt\"." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFirebaseStorageReference_GetFullPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFirebaseStorageReference, nullptr, "GetFullPath", nullptr, nullptr, sizeof(FirebaseStorageReference_eventGetFullPath_Parms), Z_Construct_UFunction_UFirebaseStorageReference_GetFullPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseStorageReference_GetFullPath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFirebaseStorageReference_GetFullPath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseStorageReference_GetFullPath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFirebaseStorageReference_GetFullPath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFirebaseStorageReference_GetFullPath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFirebaseStorageReference_GetName_Statics
	{
		struct FirebaseStorageReference_eventGetName_Parms
		{
			FString ReturnValue;
		};
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseStorageReference_GetName_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Name" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFirebaseStorageReference_GetName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirebaseStorageReference_eventGetName_Parms, ReturnValue), METADATA_PARAMS(Z_Construct_UFunction_UFirebaseStorageReference_GetName_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseStorageReference_GetName_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFirebaseStorageReference_GetName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseStorageReference_GetName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseStorageReference_GetName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Firebase|Storage|StorageReference" },
		{ "Comment", "/// @brief Returns the short name of this object.\n///\n/// @returns the short name of this object.\n" },
		{ "ModuleRelativePath", "Public/Storage/StorageReference.h" },
		{ "ToolTip", "@brief Returns the short name of this object.\n\n@returns the short name of this object." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFirebaseStorageReference_GetName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFirebaseStorageReference, nullptr, "GetName", nullptr, nullptr, sizeof(FirebaseStorageReference_eventGetName_Parms), Z_Construct_UFunction_UFirebaseStorageReference_GetName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseStorageReference_GetName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFirebaseStorageReference_GetName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseStorageReference_GetName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFirebaseStorageReference_GetName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFirebaseStorageReference_GetName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFirebaseStorageReference_GetParent_Statics
	{
		struct FirebaseStorageReference_eventGetParent_Parms
		{
			UFirebaseStorageReference* ReturnValue;
		};
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseStorageReference_GetParent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Parent" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFirebaseStorageReference_GetParent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirebaseStorageReference_eventGetParent_Parms, ReturnValue), Z_Construct_UClass_UFirebaseStorageReference_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UFirebaseStorageReference_GetParent_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseStorageReference_GetParent_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFirebaseStorageReference_GetParent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseStorageReference_GetParent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseStorageReference_GetParent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Firebase|Storage|StorageReference" },
		{ "Comment", "/// @brief Returns a new instance of StorageReference pointing to the parent\n/// location or null if this instance references the root location.\n///\n/// @returns The parent StorageReference.\n" },
		{ "ModuleRelativePath", "Public/Storage/StorageReference.h" },
		{ "ToolTip", "@brief Returns a new instance of StorageReference pointing to the parent\nlocation or null if this instance references the root location.\n\n@returns The parent StorageReference." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFirebaseStorageReference_GetParent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFirebaseStorageReference, nullptr, "GetParent", nullptr, nullptr, sizeof(FirebaseStorageReference_eventGetParent_Parms), Z_Construct_UFunction_UFirebaseStorageReference_GetParent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseStorageReference_GetParent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFirebaseStorageReference_GetParent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseStorageReference_GetParent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFirebaseStorageReference_GetParent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFirebaseStorageReference_GetParent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFirebaseStorageReference_IsValid_Statics
	{
		struct FirebaseStorageReference_eventIsValid_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseStorageReference_IsValid_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Is Valid" },
	};
#endif
	void Z_Construct_UFunction_UFirebaseStorageReference_IsValid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FirebaseStorageReference_eventIsValid_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFirebaseStorageReference_IsValid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FirebaseStorageReference_eventIsValid_Parms), &Z_Construct_UFunction_UFirebaseStorageReference_IsValid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UFirebaseStorageReference_IsValid_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseStorageReference_IsValid_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFirebaseStorageReference_IsValid_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseStorageReference_IsValid_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseStorageReference_IsValid_Statics::Function_MetaDataParams[] = {
		{ "Category", "Firebase|Storage|StorageReference" },
		{ "Comment", "/// @brief Returns true if this StorageReference is valid, false if it is not\n/// valid. An invalid StorageReference indicates that the reference is\n/// uninitialized (created with the default constructor) or that there was an\n/// error retrieving the reference.\n///\n/// @returns true if this StorageReference is valid, false if this\n/// StorageReference is invalid.\n" },
		{ "ModuleRelativePath", "Public/Storage/StorageReference.h" },
		{ "ToolTip", "@brief Returns true if this StorageReference is valid, false if it is not\nvalid. An invalid StorageReference indicates that the reference is\nuninitialized (created with the default constructor) or that there was an\nerror retrieving the reference.\n\n@returns true if this StorageReference is valid, false if this\nStorageReference is invalid." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFirebaseStorageReference_IsValid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFirebaseStorageReference, nullptr, "IsValid", nullptr, nullptr, sizeof(FirebaseStorageReference_eventIsValid_Parms), Z_Construct_UFunction_UFirebaseStorageReference_IsValid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseStorageReference_IsValid_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFirebaseStorageReference_IsValid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseStorageReference_IsValid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFirebaseStorageReference_IsValid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFirebaseStorageReference_IsValid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFirebaseStorageReference_NoRegister()
	{
		return UFirebaseStorageReference::StaticClass();
	}
	struct Z_Construct_UClass_UFirebaseStorageReference_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFirebaseStorageReference_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_FirebaseFeatures,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFirebaseStorageReference_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFirebaseStorageReference_Child, "Child" }, // 3193909923
		{ &Z_Construct_UFunction_UFirebaseStorageReference_GetBucket, "GetBucket" }, // 2987471572
		{ &Z_Construct_UFunction_UFirebaseStorageReference_GetFullPath, "GetFullPath" }, // 2166305307
		{ &Z_Construct_UFunction_UFirebaseStorageReference_GetName, "GetName" }, // 144107819
		{ &Z_Construct_UFunction_UFirebaseStorageReference_GetParent, "GetParent" }, // 2629220103
		{ &Z_Construct_UFunction_UFirebaseStorageReference_IsValid, "IsValid" }, // 3068997602
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFirebaseStorageReference_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Storage/StorageReference.h" },
		{ "ModuleRelativePath", "Public/Storage/StorageReference.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFirebaseStorageReference_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFirebaseStorageReference>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFirebaseStorageReference_Statics::ClassParams = {
		&UFirebaseStorageReference::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UFirebaseStorageReference_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFirebaseStorageReference_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFirebaseStorageReference()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFirebaseStorageReference_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFirebaseStorageReference, 2203408419);
	template<> FIREBASEFEATURES_API UClass* StaticClass<UFirebaseStorageReference>()
	{
		return UFirebaseStorageReference::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFirebaseStorageReference(Z_Construct_UClass_UFirebaseStorageReference, &UFirebaseStorageReference::StaticClass, TEXT("/Script/FirebaseFeatures"), TEXT("UFirebaseStorageReference"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFirebaseStorageReference);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
