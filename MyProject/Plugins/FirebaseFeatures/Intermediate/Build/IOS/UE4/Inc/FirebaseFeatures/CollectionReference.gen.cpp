// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FirebaseFeatures/Public/Firestore/CollectionReference.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCollectionReference() {}
// Cross Module References
	FIREBASEFEATURES_API UClass* Z_Construct_UClass_UFirestoreCollectionReference_NoRegister();
	FIREBASEFEATURES_API UClass* Z_Construct_UClass_UFirestoreCollectionReference();
	FIREBASEFEATURES_API UClass* Z_Construct_UClass_UFirestoreQuery();
	UPackage* Z_Construct_UPackage__Script_FirebaseFeatures();
	FIREBASEFEATURES_API UClass* Z_Construct_UClass_UFirestoreDocumentReference_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UFirestoreCollectionReference::execGetDocumentFromPath)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_DocumentPath);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UFirestoreDocumentReference**)Z_Param__Result=P_THIS->GetDocumentFromPath(Z_Param_DocumentPath);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFirestoreCollectionReference::execGetDocument)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UFirestoreDocumentReference**)Z_Param__Result=P_THIS->GetDocument();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFirestoreCollectionReference::execGetParent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UFirestoreDocumentReference**)Z_Param__Result=P_THIS->GetParent();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFirestoreCollectionReference::execGetPath)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetPath();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFirestoreCollectionReference::execGetId)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetId();
		P_NATIVE_END;
	}
	void UFirestoreCollectionReference::StaticRegisterNativesUFirestoreCollectionReference()
	{
		UClass* Class = UFirestoreCollectionReference::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetDocument", &UFirestoreCollectionReference::execGetDocument },
			{ "GetDocumentFromPath", &UFirestoreCollectionReference::execGetDocumentFromPath },
			{ "GetId", &UFirestoreCollectionReference::execGetId },
			{ "GetParent", &UFirestoreCollectionReference::execGetParent },
			{ "GetPath", &UFirestoreCollectionReference::execGetPath },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFirestoreCollectionReference_GetDocument_Statics
	{
		struct FirestoreCollectionReference_eventGetDocument_Parms
		{
			UFirestoreDocumentReference* ReturnValue;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirestoreCollectionReference_GetDocument_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Document" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFirestoreCollectionReference_GetDocument_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirestoreCollectionReference_eventGetDocument_Parms, ReturnValue), Z_Construct_UClass_UFirestoreDocumentReference_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UFirestoreCollectionReference_GetDocument_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirestoreCollectionReference_GetDocument_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFirestoreCollectionReference_GetDocument_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirestoreCollectionReference_GetDocument_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirestoreCollectionReference_GetDocument_Statics::Function_MetaDataParams[] = {
		{ "Category", "Firebase|Firestore|Collection" },
		{ "Comment", "/**\n\x09 * @brief Returns a DocumentReference that points to a new document with an\n\x09 * auto-generated ID within this collection.\n\x09 *\n\x09 * @return A DocumentReference pointing to the new document.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Firestore/CollectionReference.h" },
		{ "ToolTip", "@brief Returns a DocumentReference that points to a new document with an\nauto-generated ID within this collection.\n\n@return A DocumentReference pointing to the new document." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFirestoreCollectionReference_GetDocument_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFirestoreCollectionReference, nullptr, "GetDocument", nullptr, nullptr, sizeof(FirestoreCollectionReference_eventGetDocument_Parms), Z_Construct_UFunction_UFirestoreCollectionReference_GetDocument_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirestoreCollectionReference_GetDocument_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFirestoreCollectionReference_GetDocument_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirestoreCollectionReference_GetDocument_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFirestoreCollectionReference_GetDocument()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFirestoreCollectionReference_GetDocument_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFirestoreCollectionReference_GetDocumentFromPath_Statics
	{
		struct FirestoreCollectionReference_eventGetDocumentFromPath_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirestoreCollectionReference_GetDocumentFromPath_Statics::NewProp_DocumentPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFirestoreCollectionReference_GetDocumentFromPath_Statics::NewProp_DocumentPath = { "DocumentPath", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirestoreCollectionReference_eventGetDocumentFromPath_Parms, DocumentPath), METADATA_PARAMS(Z_Construct_UFunction_UFirestoreCollectionReference_GetDocumentFromPath_Statics::NewProp_DocumentPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirestoreCollectionReference_GetDocumentFromPath_Statics::NewProp_DocumentPath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirestoreCollectionReference_GetDocumentFromPath_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Document" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFirestoreCollectionReference_GetDocumentFromPath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirestoreCollectionReference_eventGetDocumentFromPath_Parms, ReturnValue), Z_Construct_UClass_UFirestoreDocumentReference_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UFirestoreCollectionReference_GetDocumentFromPath_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirestoreCollectionReference_GetDocumentFromPath_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFirestoreCollectionReference_GetDocumentFromPath_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirestoreCollectionReference_GetDocumentFromPath_Statics::NewProp_DocumentPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirestoreCollectionReference_GetDocumentFromPath_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirestoreCollectionReference_GetDocumentFromPath_Statics::Function_MetaDataParams[] = {
		{ "Category", "Firebase|Firestore|Collection" },
		{ "Comment", "/**\n\x09 * @brief Gets a DocumentReference instance that refers to the document at the\n\x09 * specified path within this collection.\n\x09 *\n\x09 * @param[in] DocumentPath A slash-separated relative path to a document.\n\x09 *\n\x09 * @return The DocumentReference instance.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Firestore/CollectionReference.h" },
		{ "ToolTip", "@brief Gets a DocumentReference instance that refers to the document at the\nspecified path within this collection.\n\n@param[in] DocumentPath A slash-separated relative path to a document.\n\n@return The DocumentReference instance." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFirestoreCollectionReference_GetDocumentFromPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFirestoreCollectionReference, nullptr, "GetDocumentFromPath", nullptr, nullptr, sizeof(FirestoreCollectionReference_eventGetDocumentFromPath_Parms), Z_Construct_UFunction_UFirestoreCollectionReference_GetDocumentFromPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirestoreCollectionReference_GetDocumentFromPath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFirestoreCollectionReference_GetDocumentFromPath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirestoreCollectionReference_GetDocumentFromPath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFirestoreCollectionReference_GetDocumentFromPath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFirestoreCollectionReference_GetDocumentFromPath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFirestoreCollectionReference_GetId_Statics
	{
		struct FirestoreCollectionReference_eventGetId_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirestoreCollectionReference_GetId_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "ID" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFirestoreCollectionReference_GetId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirestoreCollectionReference_eventGetId_Parms, ReturnValue), METADATA_PARAMS(Z_Construct_UFunction_UFirestoreCollectionReference_GetId_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirestoreCollectionReference_GetId_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFirestoreCollectionReference_GetId_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirestoreCollectionReference_GetId_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirestoreCollectionReference_GetId_Statics::Function_MetaDataParams[] = {
		{ "Category", "Firebase|Firestore|Collection" },
		{ "Comment", "/**\n\x09 * @brief Gets the ID of the referenced collection.\n\x09 *\n\x09 * @return The ID as a FString.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Firestore/CollectionReference.h" },
		{ "ToolTip", "@brief Gets the ID of the referenced collection.\n\n@return The ID as a FString." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFirestoreCollectionReference_GetId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFirestoreCollectionReference, nullptr, "GetId", nullptr, nullptr, sizeof(FirestoreCollectionReference_eventGetId_Parms), Z_Construct_UFunction_UFirestoreCollectionReference_GetId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirestoreCollectionReference_GetId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFirestoreCollectionReference_GetId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirestoreCollectionReference_GetId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFirestoreCollectionReference_GetId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFirestoreCollectionReference_GetId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFirestoreCollectionReference_GetParent_Statics
	{
		struct FirestoreCollectionReference_eventGetParent_Parms
		{
			UFirestoreDocumentReference* ReturnValue;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirestoreCollectionReference_GetParent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Document" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFirestoreCollectionReference_GetParent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirestoreCollectionReference_eventGetParent_Parms, ReturnValue), Z_Construct_UClass_UFirestoreDocumentReference_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UFirestoreCollectionReference_GetParent_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirestoreCollectionReference_GetParent_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFirestoreCollectionReference_GetParent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirestoreCollectionReference_GetParent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirestoreCollectionReference_GetParent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Firebase|Firestore|Collection" },
		{ "Comment", "/**\n\x09 * @brief Gets a DocumentReference to the document that contains this\n\x09 * collection.\n\x09 *\n\x09 * @return The DocumentReference that contains this collection if this is a\n\x09 * subcollection. If this is a root collection, returns an invalid\n\x09 * DocumentReference (`DocumentReference::is_valid()` will return false).\n\x09 */" },
		{ "ModuleRelativePath", "Public/Firestore/CollectionReference.h" },
		{ "ToolTip", "@brief Gets a DocumentReference to the document that contains this\ncollection.\n\n@return The DocumentReference that contains this collection if this is a\nsubcollection. If this is a root collection, returns an invalid\nDocumentReference (`DocumentReference::is_valid()` will return false)." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFirestoreCollectionReference_GetParent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFirestoreCollectionReference, nullptr, "GetParent", nullptr, nullptr, sizeof(FirestoreCollectionReference_eventGetParent_Parms), Z_Construct_UFunction_UFirestoreCollectionReference_GetParent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirestoreCollectionReference_GetParent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFirestoreCollectionReference_GetParent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirestoreCollectionReference_GetParent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFirestoreCollectionReference_GetParent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFirestoreCollectionReference_GetParent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFirestoreCollectionReference_GetPath_Statics
	{
		struct FirestoreCollectionReference_eventGetPath_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirestoreCollectionReference_GetPath_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Path" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFirestoreCollectionReference_GetPath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirestoreCollectionReference_eventGetPath_Parms, ReturnValue), METADATA_PARAMS(Z_Construct_UFunction_UFirestoreCollectionReference_GetPath_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirestoreCollectionReference_GetPath_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFirestoreCollectionReference_GetPath_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirestoreCollectionReference_GetPath_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirestoreCollectionReference_GetPath_Statics::Function_MetaDataParams[] = {
		{ "Category", "Firebase|Firestore|Collection" },
		{ "Comment", "/**\n\x09 * @brief Returns the path of this collection (relative to the root of the\n\x09 * database) as a slash-separated string.\n\x09 *\n\x09 * @return The path as a FString.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Firestore/CollectionReference.h" },
		{ "ToolTip", "@brief Returns the path of this collection (relative to the root of the\ndatabase) as a slash-separated string.\n\n@return The path as a FString." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFirestoreCollectionReference_GetPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFirestoreCollectionReference, nullptr, "GetPath", nullptr, nullptr, sizeof(FirestoreCollectionReference_eventGetPath_Parms), Z_Construct_UFunction_UFirestoreCollectionReference_GetPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirestoreCollectionReference_GetPath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFirestoreCollectionReference_GetPath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirestoreCollectionReference_GetPath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFirestoreCollectionReference_GetPath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFirestoreCollectionReference_GetPath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFirestoreCollectionReference_NoRegister()
	{
		return UFirestoreCollectionReference::StaticClass();
	}
	struct Z_Construct_UClass_UFirestoreCollectionReference_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFirestoreCollectionReference_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFirestoreQuery,
		(UObject* (*)())Z_Construct_UPackage__Script_FirebaseFeatures,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFirestoreCollectionReference_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFirestoreCollectionReference_GetDocument, "GetDocument" }, // 1654898980
		{ &Z_Construct_UFunction_UFirestoreCollectionReference_GetDocumentFromPath, "GetDocumentFromPath" }, // 3279863549
		{ &Z_Construct_UFunction_UFirestoreCollectionReference_GetId, "GetId" }, // 2906121505
		{ &Z_Construct_UFunction_UFirestoreCollectionReference_GetParent, "GetParent" }, // 1959214135
		{ &Z_Construct_UFunction_UFirestoreCollectionReference_GetPath, "GetPath" }, // 4191872210
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFirestoreCollectionReference_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Firestore/CollectionReference.h" },
		{ "ModuleRelativePath", "Public/Firestore/CollectionReference.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFirestoreCollectionReference_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFirestoreCollectionReference>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFirestoreCollectionReference_Statics::ClassParams = {
		&UFirestoreCollectionReference::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UFirestoreCollectionReference_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFirestoreCollectionReference_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFirestoreCollectionReference()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFirestoreCollectionReference_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFirestoreCollectionReference, 3521211236);
	template<> FIREBASEFEATURES_API UClass* StaticClass<UFirestoreCollectionReference>()
	{
		return UFirestoreCollectionReference::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFirestoreCollectionReference(Z_Construct_UClass_UFirestoreCollectionReference, &UFirestoreCollectionReference::StaticClass, TEXT("/Script/FirebaseFeatures"), TEXT("UFirestoreCollectionReference"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFirestoreCollectionReference);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
