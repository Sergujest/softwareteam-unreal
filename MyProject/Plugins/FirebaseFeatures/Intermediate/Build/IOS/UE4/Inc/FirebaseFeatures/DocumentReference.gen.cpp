// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FirebaseFeatures/Public/Firestore/DocumentReference.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDocumentReference() {}
// Cross Module References
	FIREBASEFEATURES_API UFunction* Z_Construct_UDelegateFunction_FirebaseFeatures_DocumentSnapshotListener__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_FirebaseFeatures();
	FIREBASEFEATURES_API UEnum* Z_Construct_UEnum_FirebaseFeatures_EFirestoreError();
	FIREBASEFEATURES_API UScriptStruct* Z_Construct_UScriptStruct_FFirestoreDocumentSnapshot();
	FIREBASEFEATURES_API UClass* Z_Construct_UClass_UFirestoreDocumentReference_NoRegister();
	FIREBASEFEATURES_API UClass* Z_Construct_UClass_UFirestoreDocumentReference();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	FIREBASEFEATURES_API UClass* Z_Construct_UClass_UFirestoreCollectionReference_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_FirebaseFeatures_DocumentSnapshotListener__DelegateSignature_Statics
	{
		struct _Script_FirebaseFeatures_eventDocumentSnapshotListener_Parms
		{
			EFirestoreError Error;
			FFirestoreDocumentSnapshot DocumentSnapshot;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Error_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Error_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Error;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DocumentSnapshot_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DocumentSnapshot;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_FirebaseFeatures_DocumentSnapshotListener__DelegateSignature_Statics::NewProp_Error_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_FirebaseFeatures_DocumentSnapshotListener__DelegateSignature_Statics::NewProp_Error_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_FirebaseFeatures_DocumentSnapshotListener__DelegateSignature_Statics::NewProp_Error = { "Error", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_FirebaseFeatures_eventDocumentSnapshotListener_Parms, Error), Z_Construct_UEnum_FirebaseFeatures_EFirestoreError, METADATA_PARAMS(Z_Construct_UDelegateFunction_FirebaseFeatures_DocumentSnapshotListener__DelegateSignature_Statics::NewProp_Error_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_FirebaseFeatures_DocumentSnapshotListener__DelegateSignature_Statics::NewProp_Error_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_FirebaseFeatures_DocumentSnapshotListener__DelegateSignature_Statics::NewProp_DocumentSnapshot_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_FirebaseFeatures_DocumentSnapshotListener__DelegateSignature_Statics::NewProp_DocumentSnapshot = { "DocumentSnapshot", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_FirebaseFeatures_eventDocumentSnapshotListener_Parms, DocumentSnapshot), Z_Construct_UScriptStruct_FFirestoreDocumentSnapshot, METADATA_PARAMS(Z_Construct_UDelegateFunction_FirebaseFeatures_DocumentSnapshotListener__DelegateSignature_Statics::NewProp_DocumentSnapshot_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_FirebaseFeatures_DocumentSnapshotListener__DelegateSignature_Statics::NewProp_DocumentSnapshot_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_FirebaseFeatures_DocumentSnapshotListener__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_FirebaseFeatures_DocumentSnapshotListener__DelegateSignature_Statics::NewProp_Error_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_FirebaseFeatures_DocumentSnapshotListener__DelegateSignature_Statics::NewProp_Error,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_FirebaseFeatures_DocumentSnapshotListener__DelegateSignature_Statics::NewProp_DocumentSnapshot,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_FirebaseFeatures_DocumentSnapshotListener__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Firestore/DocumentReference.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_FirebaseFeatures_DocumentSnapshotListener__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_FirebaseFeatures, nullptr, "DocumentSnapshotListener__DelegateSignature", nullptr, nullptr, sizeof(_Script_FirebaseFeatures_eventDocumentSnapshotListener_Parms), Z_Construct_UDelegateFunction_FirebaseFeatures_DocumentSnapshotListener__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_FirebaseFeatures_DocumentSnapshotListener__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_FirebaseFeatures_DocumentSnapshotListener__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_FirebaseFeatures_DocumentSnapshotListener__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_FirebaseFeatures_DocumentSnapshotListener__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_FirebaseFeatures_DocumentSnapshotListener__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UFirestoreDocumentReference::execAddSnapshotListener)
	{
		P_GET_PROPERTY(FDelegateProperty,Z_Param_Callback);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddSnapshotListener(FDocumentSnapshotListener(Z_Param_Callback));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFirestoreDocumentReference::execToString)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->ToString();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFirestoreDocumentReference::execIsValid)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsValid();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFirestoreDocumentReference::execGetCollection)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_CollectionPath);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UFirestoreCollectionReference**)Z_Param__Result=P_THIS->GetCollection(Z_Param_CollectionPath);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFirestoreDocumentReference::execGetParent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UFirestoreCollectionReference**)Z_Param__Result=P_THIS->GetParent();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFirestoreDocumentReference::execGetPath)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetPath();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFirestoreDocumentReference::execGetId)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetId();
		P_NATIVE_END;
	}
	void UFirestoreDocumentReference::StaticRegisterNativesUFirestoreDocumentReference()
	{
		UClass* Class = UFirestoreDocumentReference::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddSnapshotListener", &UFirestoreDocumentReference::execAddSnapshotListener },
			{ "GetCollection", &UFirestoreDocumentReference::execGetCollection },
			{ "GetId", &UFirestoreDocumentReference::execGetId },
			{ "GetParent", &UFirestoreDocumentReference::execGetParent },
			{ "GetPath", &UFirestoreDocumentReference::execGetPath },
			{ "IsValid", &UFirestoreDocumentReference::execIsValid },
			{ "ToString", &UFirestoreDocumentReference::execToString },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFirestoreDocumentReference_AddSnapshotListener_Statics
	{
		struct FirestoreDocumentReference_eventAddSnapshotListener_Parms
		{
			FScriptDelegate Callback;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_Callback;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirestoreDocumentReference_AddSnapshotListener_Statics::NewProp_Callback_MetaData[] = {
		{ "DisplayName", "Listener" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UFirestoreDocumentReference_AddSnapshotListener_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirestoreDocumentReference_eventAddSnapshotListener_Parms, Callback), Z_Construct_UDelegateFunction_FirebaseFeatures_DocumentSnapshotListener__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UFirestoreDocumentReference_AddSnapshotListener_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirestoreDocumentReference_AddSnapshotListener_Statics::NewProp_Callback_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFirestoreDocumentReference_AddSnapshotListener_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirestoreDocumentReference_AddSnapshotListener_Statics::NewProp_Callback,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirestoreDocumentReference_AddSnapshotListener_Statics::Function_MetaDataParams[] = {
		{ "Category", "Firebase|Firestore|DocumentReference" },
		{ "Comment", "/**\n     * Starts listening to the document referenced by this\n     * DocumentReference.\n     *\n     * @param callback The callback to call. When this function is\n     * called, snapshot value is valid if and only if error is Ok.\n     *\n     * @note This method is not available when using the STLPort C++ runtime\n     * library.\n     */" },
		{ "ModuleRelativePath", "Public/Firestore/DocumentReference.h" },
		{ "ToolTip", "Starts listening to the document referenced by this\nDocumentReference.\n\n@param callback The callback to call. When this function is\ncalled, snapshot value is valid if and only if error is Ok.\n\n@note This method is not available when using the STLPort C++ runtime\nlibrary." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFirestoreDocumentReference_AddSnapshotListener_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFirestoreDocumentReference, nullptr, "AddSnapshotListener", nullptr, nullptr, sizeof(FirestoreDocumentReference_eventAddSnapshotListener_Parms), Z_Construct_UFunction_UFirestoreDocumentReference_AddSnapshotListener_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirestoreDocumentReference_AddSnapshotListener_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFirestoreDocumentReference_AddSnapshotListener_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirestoreDocumentReference_AddSnapshotListener_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFirestoreDocumentReference_AddSnapshotListener()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFirestoreDocumentReference_AddSnapshotListener_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFirestoreDocumentReference_GetCollection_Statics
	{
		struct FirestoreDocumentReference_eventGetCollection_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirestoreDocumentReference_GetCollection_Statics::NewProp_CollectionPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFirestoreDocumentReference_GetCollection_Statics::NewProp_CollectionPath = { "CollectionPath", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirestoreDocumentReference_eventGetCollection_Parms, CollectionPath), METADATA_PARAMS(Z_Construct_UFunction_UFirestoreDocumentReference_GetCollection_Statics::NewProp_CollectionPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirestoreDocumentReference_GetCollection_Statics::NewProp_CollectionPath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirestoreDocumentReference_GetCollection_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Collection" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFirestoreDocumentReference_GetCollection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirestoreDocumentReference_eventGetCollection_Parms, ReturnValue), Z_Construct_UClass_UFirestoreCollectionReference_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UFirestoreDocumentReference_GetCollection_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirestoreDocumentReference_GetCollection_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFirestoreDocumentReference_GetCollection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirestoreDocumentReference_GetCollection_Statics::NewProp_CollectionPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirestoreDocumentReference_GetCollection_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirestoreDocumentReference_GetCollection_Statics::Function_MetaDataParams[] = {
		{ "Category", "Firebase|Firestore|DocumentReference" },
		{ "Comment", "/**\n\x09 * @brief Returns a CollectionReference instance that refers to the\n\x09 * subcollection at the specified path relative to this document.\n\x09 *\n\x09 * @param[in] collection_path A slash-separated relative path to a\n\x09 * subcollection. \n\x09 *\n\x09 * @return The CollectionReference instance.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Firestore/DocumentReference.h" },
		{ "ToolTip", "@brief Returns a CollectionReference instance that refers to the\nsubcollection at the specified path relative to this document.\n\n@param[in] collection_path A slash-separated relative path to a\nsubcollection.\n\n@return The CollectionReference instance." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFirestoreDocumentReference_GetCollection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFirestoreDocumentReference, nullptr, "GetCollection", nullptr, nullptr, sizeof(FirestoreDocumentReference_eventGetCollection_Parms), Z_Construct_UFunction_UFirestoreDocumentReference_GetCollection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirestoreDocumentReference_GetCollection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFirestoreDocumentReference_GetCollection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirestoreDocumentReference_GetCollection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFirestoreDocumentReference_GetCollection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFirestoreDocumentReference_GetCollection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFirestoreDocumentReference_GetId_Statics
	{
		struct FirestoreDocumentReference_eventGetId_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirestoreDocumentReference_GetId_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "ID" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFirestoreDocumentReference_GetId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirestoreDocumentReference_eventGetId_Parms, ReturnValue), METADATA_PARAMS(Z_Construct_UFunction_UFirestoreDocumentReference_GetId_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirestoreDocumentReference_GetId_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFirestoreDocumentReference_GetId_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirestoreDocumentReference_GetId_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirestoreDocumentReference_GetId_Statics::Function_MetaDataParams[] = {
		{ "Category", "Firebase|Firestore|DocumentReference" },
		{ "Comment", "/**\n\x09 * @brief Returns the string ID of this document location.\n\x09 *\n\x09 * @return String ID of this document location.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Firestore/DocumentReference.h" },
		{ "ToolTip", "@brief Returns the string ID of this document location.\n\n@return String ID of this document location." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFirestoreDocumentReference_GetId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFirestoreDocumentReference, nullptr, "GetId", nullptr, nullptr, sizeof(FirestoreDocumentReference_eventGetId_Parms), Z_Construct_UFunction_UFirestoreDocumentReference_GetId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirestoreDocumentReference_GetId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFirestoreDocumentReference_GetId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirestoreDocumentReference_GetId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFirestoreDocumentReference_GetId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFirestoreDocumentReference_GetId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFirestoreDocumentReference_GetParent_Statics
	{
		struct FirestoreDocumentReference_eventGetParent_Parms
		{
			UFirestoreCollectionReference* ReturnValue;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirestoreDocumentReference_GetParent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Collection" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFirestoreDocumentReference_GetParent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirestoreDocumentReference_eventGetParent_Parms, ReturnValue), Z_Construct_UClass_UFirestoreCollectionReference_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UFirestoreDocumentReference_GetParent_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirestoreDocumentReference_GetParent_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFirestoreDocumentReference_GetParent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirestoreDocumentReference_GetParent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirestoreDocumentReference_GetParent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Firebase|Firestore|DocumentReference" },
		{ "Comment", "/**\n\x09 * @brief Returns a CollectionReference to the collection that contains this\n\x09 * document.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Firestore/DocumentReference.h" },
		{ "ToolTip", "@brief Returns a CollectionReference to the collection that contains this\ndocument." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFirestoreDocumentReference_GetParent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFirestoreDocumentReference, nullptr, "GetParent", nullptr, nullptr, sizeof(FirestoreDocumentReference_eventGetParent_Parms), Z_Construct_UFunction_UFirestoreDocumentReference_GetParent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirestoreDocumentReference_GetParent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFirestoreDocumentReference_GetParent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirestoreDocumentReference_GetParent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFirestoreDocumentReference_GetParent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFirestoreDocumentReference_GetParent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFirestoreDocumentReference_GetPath_Statics
	{
		struct FirestoreDocumentReference_eventGetPath_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirestoreDocumentReference_GetPath_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Path" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFirestoreDocumentReference_GetPath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirestoreDocumentReference_eventGetPath_Parms, ReturnValue), METADATA_PARAMS(Z_Construct_UFunction_UFirestoreDocumentReference_GetPath_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirestoreDocumentReference_GetPath_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFirestoreDocumentReference_GetPath_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirestoreDocumentReference_GetPath_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirestoreDocumentReference_GetPath_Statics::Function_MetaDataParams[] = {
		{ "Category", "Firebase|Firestore|DocumentReference" },
		{ "Comment", "/**\n\x09 * @brief Returns the path of this document (relative to the root of the\n\x09 * database) as a slash-separated string.\n\x09 *\n\x09 * @return String path of this document location.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Firestore/DocumentReference.h" },
		{ "ToolTip", "@brief Returns the path of this document (relative to the root of the\ndatabase) as a slash-separated string.\n\n@return String path of this document location." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFirestoreDocumentReference_GetPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFirestoreDocumentReference, nullptr, "GetPath", nullptr, nullptr, sizeof(FirestoreDocumentReference_eventGetPath_Parms), Z_Construct_UFunction_UFirestoreDocumentReference_GetPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirestoreDocumentReference_GetPath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFirestoreDocumentReference_GetPath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirestoreDocumentReference_GetPath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFirestoreDocumentReference_GetPath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFirestoreDocumentReference_GetPath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFirestoreDocumentReference_IsValid_Statics
	{
		struct FirestoreDocumentReference_eventIsValid_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirestoreDocumentReference_IsValid_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Is Valid" },
	};
#endif
	void Z_Construct_UFunction_UFirestoreDocumentReference_IsValid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FirestoreDocumentReference_eventIsValid_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFirestoreDocumentReference_IsValid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FirestoreDocumentReference_eventIsValid_Parms), &Z_Construct_UFunction_UFirestoreDocumentReference_IsValid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UFirestoreDocumentReference_IsValid_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirestoreDocumentReference_IsValid_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFirestoreDocumentReference_IsValid_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirestoreDocumentReference_IsValid_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirestoreDocumentReference_IsValid_Statics::Function_MetaDataParams[] = {
		{ "Category", "Firebase|Firestore|DocumentReference" },
		{ "Comment", "/**\n\x09 * @brief Returns true if this DocumentReference is valid, false if it is not\n\x09 * valid. An invalid DocumentReference could be the result of:\n\x09 *   - Creating a DocumentReference with the default constructor.\n\x09 *   - Calling CollectionReference::Parent() on a CollectionReference that is\n\x09 *     not a subcollection.\n\x09 *   - Deleting your Firestore instance, which will invalidate all\n\x09 *     DocumentReference instances associated with it.\n\x09 *\n\x09 * @return true if this DocumentReference is valid, false if this\n\x09 * DocumentReference is invalid.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Firestore/DocumentReference.h" },
		{ "ToolTip", "@brief Returns true if this DocumentReference is valid, false if it is not\nvalid. An invalid DocumentReference could be the result of:\n  - Creating a DocumentReference with the default constructor.\n  - Calling CollectionReference::Parent() on a CollectionReference that is\n    not a subcollection.\n  - Deleting your Firestore instance, which will invalidate all\n    DocumentReference instances associated with it.\n\n@return true if this DocumentReference is valid, false if this\nDocumentReference is invalid." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFirestoreDocumentReference_IsValid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFirestoreDocumentReference, nullptr, "IsValid", nullptr, nullptr, sizeof(FirestoreDocumentReference_eventIsValid_Parms), Z_Construct_UFunction_UFirestoreDocumentReference_IsValid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirestoreDocumentReference_IsValid_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFirestoreDocumentReference_IsValid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirestoreDocumentReference_IsValid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFirestoreDocumentReference_IsValid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFirestoreDocumentReference_IsValid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFirestoreDocumentReference_ToString_Statics
	{
		struct FirestoreDocumentReference_eventToString_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirestoreDocumentReference_ToString_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "String" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFirestoreDocumentReference_ToString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirestoreDocumentReference_eventToString_Parms, ReturnValue), METADATA_PARAMS(Z_Construct_UFunction_UFirestoreDocumentReference_ToString_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirestoreDocumentReference_ToString_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFirestoreDocumentReference_ToString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirestoreDocumentReference_ToString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirestoreDocumentReference_ToString_Statics::Function_MetaDataParams[] = {
		{ "Category", "Firebase|Firestore|DocumentReference" },
		{ "Comment", "/**\n\x09 * Returns a string representation of this `DocumentReference` for\n\x09 * logging/debugging purposes.\n\x09 *\n\x09 * @note the exact string representation is unspecified and subject to\n\x09 * change; don't rely on the format of the string.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Firestore/DocumentReference.h" },
		{ "ToolTip", "Returns a string representation of this `DocumentReference` for\nlogging/debugging purposes.\n\n@note the exact string representation is unspecified and subject to\nchange; don't rely on the format of the string." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFirestoreDocumentReference_ToString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFirestoreDocumentReference, nullptr, "ToString", nullptr, nullptr, sizeof(FirestoreDocumentReference_eventToString_Parms), Z_Construct_UFunction_UFirestoreDocumentReference_ToString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirestoreDocumentReference_ToString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFirestoreDocumentReference_ToString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirestoreDocumentReference_ToString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFirestoreDocumentReference_ToString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFirestoreDocumentReference_ToString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFirestoreDocumentReference_NoRegister()
	{
		return UFirestoreDocumentReference::StaticClass();
	}
	struct Z_Construct_UClass_UFirestoreDocumentReference_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFirestoreDocumentReference_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_FirebaseFeatures,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFirestoreDocumentReference_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFirestoreDocumentReference_AddSnapshotListener, "AddSnapshotListener" }, // 3337593205
		{ &Z_Construct_UFunction_UFirestoreDocumentReference_GetCollection, "GetCollection" }, // 2898737272
		{ &Z_Construct_UFunction_UFirestoreDocumentReference_GetId, "GetId" }, // 3126897232
		{ &Z_Construct_UFunction_UFirestoreDocumentReference_GetParent, "GetParent" }, // 3192006245
		{ &Z_Construct_UFunction_UFirestoreDocumentReference_GetPath, "GetPath" }, // 2775926549
		{ &Z_Construct_UFunction_UFirestoreDocumentReference_IsValid, "IsValid" }, // 2041525269
		{ &Z_Construct_UFunction_UFirestoreDocumentReference_ToString, "ToString" }, // 2974803187
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFirestoreDocumentReference_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n *\x09""A Firestore Document Reference.\n **/" },
		{ "IncludePath", "Firestore/DocumentReference.h" },
		{ "ModuleRelativePath", "Public/Firestore/DocumentReference.h" },
		{ "ToolTip", "A Firestore Document Reference." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFirestoreDocumentReference_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFirestoreDocumentReference>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFirestoreDocumentReference_Statics::ClassParams = {
		&UFirestoreDocumentReference::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UFirestoreDocumentReference_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFirestoreDocumentReference_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFirestoreDocumentReference()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFirestoreDocumentReference_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFirestoreDocumentReference, 3138472789);
	template<> FIREBASEFEATURES_API UClass* StaticClass<UFirestoreDocumentReference>()
	{
		return UFirestoreDocumentReference::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFirestoreDocumentReference(Z_Construct_UClass_UFirestoreDocumentReference, &UFirestoreDocumentReference::StaticClass, TEXT("/Script/FirebaseFeatures"), TEXT("UFirestoreDocumentReference"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFirestoreDocumentReference);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
