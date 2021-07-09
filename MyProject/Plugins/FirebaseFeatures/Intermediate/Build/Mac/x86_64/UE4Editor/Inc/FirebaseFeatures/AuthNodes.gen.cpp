// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FirebaseFeatures/Private/Auth/AuthNodes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAuthNodes() {}
// Cross Module References
	FIREBASEFEATURES_API UFunction* Z_Construct_UDelegateFunction_FirebaseFeatures_DynMultOnEvent__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_FirebaseFeatures();
	FIREBASEFEATURES_API UFunction* Z_Construct_UDelegateFunction_FirebaseFeatures_DynMultSignInCallback___DelegateSignature();
	FIREBASEFEATURES_API UEnum* Z_Construct_UEnum_FirebaseFeatures_EFirebaseAuthError();
	FIREBASEFEATURES_API UScriptStruct* Z_Construct_UScriptStruct_FSignInResult();
	FIREBASEFEATURES_API UFunction* Z_Construct_UDelegateFunction_FirebaseFeatures_DynMultSignInUserCallback__DelegateSignature();
	FIREBASEFEATURES_API UClass* Z_Construct_UClass_UUser_NoRegister();
	FIREBASEFEATURES_API UFunction* Z_Construct_UDelegateFunction_FirebaseFeatures_DynMultProvidersCallback__DelegateSignature();
	FIREBASEFEATURES_API UScriptStruct* Z_Construct_UScriptStruct_FProviderList();
	FIREBASEFEATURES_API UFunction* Z_Construct_UDelegateFunction_FirebaseFeatures_DynMultiVoidCallback__DelegateSignature();
	FIREBASEFEATURES_API UClass* Z_Construct_UClass_UAuthMiscLibrary_NoRegister();
	FIREBASEFEATURES_API UClass* Z_Construct_UClass_UAuthMiscLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	FIREBASEFEATURES_API UScriptStruct* Z_Construct_UScriptStruct_FFederatedOAuthProviderData();
	FIREBASEFEATURES_API UScriptStruct* Z_Construct_UScriptStruct_FFederatedAuthProvider();
	FIREBASEFEATURES_API UScriptStruct* Z_Construct_UScriptStruct_FCredential();
	FIREBASEFEATURES_API UClass* Z_Construct_UClass_UFetchProvidersForEmailProxy_NoRegister();
	FIREBASEFEATURES_API UClass* Z_Construct_UClass_UFetchProvidersForEmailProxy();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
	FIREBASEFEATURES_API UClass* Z_Construct_UClass_USignInWithCustomTokenProxy_NoRegister();
	FIREBASEFEATURES_API UClass* Z_Construct_UClass_USignInWithCustomTokenProxy();
	FIREBASEFEATURES_API UClass* Z_Construct_UClass_USignInWithCredentialProxy_NoRegister();
	FIREBASEFEATURES_API UClass* Z_Construct_UClass_USignInWithCredentialProxy();
	FIREBASEFEATURES_API UClass* Z_Construct_UClass_USignInWithProviderProxy_NoRegister();
	FIREBASEFEATURES_API UClass* Z_Construct_UClass_USignInWithProviderProxy();
	FIREBASEFEATURES_API UClass* Z_Construct_UClass_USignInAndRetrieveDataWithCredentialProxy_NoRegister();
	FIREBASEFEATURES_API UClass* Z_Construct_UClass_USignInAndRetrieveDataWithCredentialProxy();
	FIREBASEFEATURES_API UClass* Z_Construct_UClass_USignInAnonymouslyProxy_NoRegister();
	FIREBASEFEATURES_API UClass* Z_Construct_UClass_USignInAnonymouslyProxy();
	FIREBASEFEATURES_API UClass* Z_Construct_UClass_USignInWithEmailAndPasswordProxy_NoRegister();
	FIREBASEFEATURES_API UClass* Z_Construct_UClass_USignInWithEmailAndPasswordProxy();
	FIREBASEFEATURES_API UClass* Z_Construct_UClass_UCreateUserWithEmailAndPasswordProxy_NoRegister();
	FIREBASEFEATURES_API UClass* Z_Construct_UClass_UCreateUserWithEmailAndPasswordProxy();
	FIREBASEFEATURES_API UClass* Z_Construct_UClass_USendPasswordResetEmailProxy_NoRegister();
	FIREBASEFEATURES_API UClass* Z_Construct_UClass_USendPasswordResetEmailProxy();
	FIREBASEFEATURES_API UClass* Z_Construct_UClass_UListenAuthEventsProxy_NoRegister();
	FIREBASEFEATURES_API UClass* Z_Construct_UClass_UListenAuthEventsProxy();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_FirebaseFeatures_DynMultOnEvent__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_FirebaseFeatures_DynMultOnEvent__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Auth/AuthNodes.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_FirebaseFeatures_DynMultOnEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_FirebaseFeatures, nullptr, "DynMultOnEvent__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_FirebaseFeatures_DynMultOnEvent__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_FirebaseFeatures_DynMultOnEvent__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_FirebaseFeatures_DynMultOnEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_FirebaseFeatures_DynMultOnEvent__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_FirebaseFeatures_DynMultSignInCallback___DelegateSignature_Statics
	{
		struct _Script_FirebaseFeatures_eventDynMultSignInCallback__Parms
		{
			EFirebaseAuthError Error;
			FSignInResult Result;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Error_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Error_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Error;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Result;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_FirebaseFeatures_DynMultSignInCallback___DelegateSignature_Statics::NewProp_Error_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_FirebaseFeatures_DynMultSignInCallback___DelegateSignature_Statics::NewProp_Error_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_FirebaseFeatures_DynMultSignInCallback___DelegateSignature_Statics::NewProp_Error = { "Error", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_FirebaseFeatures_eventDynMultSignInCallback__Parms, Error), Z_Construct_UEnum_FirebaseFeatures_EFirebaseAuthError, METADATA_PARAMS(Z_Construct_UDelegateFunction_FirebaseFeatures_DynMultSignInCallback___DelegateSignature_Statics::NewProp_Error_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_FirebaseFeatures_DynMultSignInCallback___DelegateSignature_Statics::NewProp_Error_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_FirebaseFeatures_DynMultSignInCallback___DelegateSignature_Statics::NewProp_Result_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_FirebaseFeatures_DynMultSignInCallback___DelegateSignature_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_FirebaseFeatures_eventDynMultSignInCallback__Parms, Result), Z_Construct_UScriptStruct_FSignInResult, METADATA_PARAMS(Z_Construct_UDelegateFunction_FirebaseFeatures_DynMultSignInCallback___DelegateSignature_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_FirebaseFeatures_DynMultSignInCallback___DelegateSignature_Statics::NewProp_Result_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_FirebaseFeatures_DynMultSignInCallback___DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_FirebaseFeatures_DynMultSignInCallback___DelegateSignature_Statics::NewProp_Error_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_FirebaseFeatures_DynMultSignInCallback___DelegateSignature_Statics::NewProp_Error,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_FirebaseFeatures_DynMultSignInCallback___DelegateSignature_Statics::NewProp_Result,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_FirebaseFeatures_DynMultSignInCallback___DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Auth/AuthNodes.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_FirebaseFeatures_DynMultSignInCallback___DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_FirebaseFeatures, nullptr, "DynMultSignInCallback___DelegateSignature", nullptr, nullptr, sizeof(_Script_FirebaseFeatures_eventDynMultSignInCallback__Parms), Z_Construct_UDelegateFunction_FirebaseFeatures_DynMultSignInCallback___DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_FirebaseFeatures_DynMultSignInCallback___DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_FirebaseFeatures_DynMultSignInCallback___DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_FirebaseFeatures_DynMultSignInCallback___DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_FirebaseFeatures_DynMultSignInCallback___DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_FirebaseFeatures_DynMultSignInCallback___DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_FirebaseFeatures_DynMultSignInUserCallback__DelegateSignature_Statics
	{
		struct _Script_FirebaseFeatures_eventDynMultSignInUserCallback_Parms
		{
			EFirebaseAuthError Error;
			const UUser* User;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Error_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Error_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Error;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_User_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_User;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_FirebaseFeatures_DynMultSignInUserCallback__DelegateSignature_Statics::NewProp_Error_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_FirebaseFeatures_DynMultSignInUserCallback__DelegateSignature_Statics::NewProp_Error_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_FirebaseFeatures_DynMultSignInUserCallback__DelegateSignature_Statics::NewProp_Error = { "Error", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_FirebaseFeatures_eventDynMultSignInUserCallback_Parms, Error), Z_Construct_UEnum_FirebaseFeatures_EFirebaseAuthError, METADATA_PARAMS(Z_Construct_UDelegateFunction_FirebaseFeatures_DynMultSignInUserCallback__DelegateSignature_Statics::NewProp_Error_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_FirebaseFeatures_DynMultSignInUserCallback__DelegateSignature_Statics::NewProp_Error_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_FirebaseFeatures_DynMultSignInUserCallback__DelegateSignature_Statics::NewProp_User_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_FirebaseFeatures_DynMultSignInUserCallback__DelegateSignature_Statics::NewProp_User = { "User", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_FirebaseFeatures_eventDynMultSignInUserCallback_Parms, User), Z_Construct_UClass_UUser_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_FirebaseFeatures_DynMultSignInUserCallback__DelegateSignature_Statics::NewProp_User_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_FirebaseFeatures_DynMultSignInUserCallback__DelegateSignature_Statics::NewProp_User_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_FirebaseFeatures_DynMultSignInUserCallback__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_FirebaseFeatures_DynMultSignInUserCallback__DelegateSignature_Statics::NewProp_Error_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_FirebaseFeatures_DynMultSignInUserCallback__DelegateSignature_Statics::NewProp_Error,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_FirebaseFeatures_DynMultSignInUserCallback__DelegateSignature_Statics::NewProp_User,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_FirebaseFeatures_DynMultSignInUserCallback__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Auth/AuthNodes.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_FirebaseFeatures_DynMultSignInUserCallback__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_FirebaseFeatures, nullptr, "DynMultSignInUserCallback__DelegateSignature", nullptr, nullptr, sizeof(_Script_FirebaseFeatures_eventDynMultSignInUserCallback_Parms), Z_Construct_UDelegateFunction_FirebaseFeatures_DynMultSignInUserCallback__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_FirebaseFeatures_DynMultSignInUserCallback__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_FirebaseFeatures_DynMultSignInUserCallback__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_FirebaseFeatures_DynMultSignInUserCallback__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_FirebaseFeatures_DynMultSignInUserCallback__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_FirebaseFeatures_DynMultSignInUserCallback__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_FirebaseFeatures_DynMultProvidersCallback__DelegateSignature_Statics
	{
		struct _Script_FirebaseFeatures_eventDynMultProvidersCallback_Parms
		{
			EFirebaseAuthError Error;
			FProviderList Providers;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Error_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Error_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Error;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Providers_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Providers;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_FirebaseFeatures_DynMultProvidersCallback__DelegateSignature_Statics::NewProp_Error_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_FirebaseFeatures_DynMultProvidersCallback__DelegateSignature_Statics::NewProp_Error_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_FirebaseFeatures_DynMultProvidersCallback__DelegateSignature_Statics::NewProp_Error = { "Error", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_FirebaseFeatures_eventDynMultProvidersCallback_Parms, Error), Z_Construct_UEnum_FirebaseFeatures_EFirebaseAuthError, METADATA_PARAMS(Z_Construct_UDelegateFunction_FirebaseFeatures_DynMultProvidersCallback__DelegateSignature_Statics::NewProp_Error_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_FirebaseFeatures_DynMultProvidersCallback__DelegateSignature_Statics::NewProp_Error_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_FirebaseFeatures_DynMultProvidersCallback__DelegateSignature_Statics::NewProp_Providers_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_FirebaseFeatures_DynMultProvidersCallback__DelegateSignature_Statics::NewProp_Providers = { "Providers", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_FirebaseFeatures_eventDynMultProvidersCallback_Parms, Providers), Z_Construct_UScriptStruct_FProviderList, METADATA_PARAMS(Z_Construct_UDelegateFunction_FirebaseFeatures_DynMultProvidersCallback__DelegateSignature_Statics::NewProp_Providers_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_FirebaseFeatures_DynMultProvidersCallback__DelegateSignature_Statics::NewProp_Providers_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_FirebaseFeatures_DynMultProvidersCallback__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_FirebaseFeatures_DynMultProvidersCallback__DelegateSignature_Statics::NewProp_Error_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_FirebaseFeatures_DynMultProvidersCallback__DelegateSignature_Statics::NewProp_Error,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_FirebaseFeatures_DynMultProvidersCallback__DelegateSignature_Statics::NewProp_Providers,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_FirebaseFeatures_DynMultProvidersCallback__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Auth/AuthNodes.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_FirebaseFeatures_DynMultProvidersCallback__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_FirebaseFeatures, nullptr, "DynMultProvidersCallback__DelegateSignature", nullptr, nullptr, sizeof(_Script_FirebaseFeatures_eventDynMultProvidersCallback_Parms), Z_Construct_UDelegateFunction_FirebaseFeatures_DynMultProvidersCallback__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_FirebaseFeatures_DynMultProvidersCallback__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_FirebaseFeatures_DynMultProvidersCallback__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_FirebaseFeatures_DynMultProvidersCallback__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_FirebaseFeatures_DynMultProvidersCallback__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_FirebaseFeatures_DynMultProvidersCallback__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_FirebaseFeatures_DynMultiVoidCallback__DelegateSignature_Statics
	{
		struct _Script_FirebaseFeatures_eventDynMultiVoidCallback_Parms
		{
			EFirebaseAuthError Error;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Error_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Error_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Error;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_FirebaseFeatures_DynMultiVoidCallback__DelegateSignature_Statics::NewProp_Error_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_FirebaseFeatures_DynMultiVoidCallback__DelegateSignature_Statics::NewProp_Error_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_FirebaseFeatures_DynMultiVoidCallback__DelegateSignature_Statics::NewProp_Error = { "Error", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_FirebaseFeatures_eventDynMultiVoidCallback_Parms, Error), Z_Construct_UEnum_FirebaseFeatures_EFirebaseAuthError, METADATA_PARAMS(Z_Construct_UDelegateFunction_FirebaseFeatures_DynMultiVoidCallback__DelegateSignature_Statics::NewProp_Error_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_FirebaseFeatures_DynMultiVoidCallback__DelegateSignature_Statics::NewProp_Error_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_FirebaseFeatures_DynMultiVoidCallback__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_FirebaseFeatures_DynMultiVoidCallback__DelegateSignature_Statics::NewProp_Error_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_FirebaseFeatures_DynMultiVoidCallback__DelegateSignature_Statics::NewProp_Error,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_FirebaseFeatures_DynMultiVoidCallback__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Auth/AuthNodes.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_FirebaseFeatures_DynMultiVoidCallback__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_FirebaseFeatures, nullptr, "DynMultiVoidCallback__DelegateSignature", nullptr, nullptr, sizeof(_Script_FirebaseFeatures_eventDynMultiVoidCallback_Parms), Z_Construct_UDelegateFunction_FirebaseFeatures_DynMultiVoidCallback__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_FirebaseFeatures_DynMultiVoidCallback__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_FirebaseFeatures_DynMultiVoidCallback__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_FirebaseFeatures_DynMultiVoidCallback__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_FirebaseFeatures_DynMultiVoidCallback__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_FirebaseFeatures_DynMultiVoidCallback__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
class UScriptStruct* FProviderList::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FIREBASEFEATURES_API uint32 Get_Z_Construct_UScriptStruct_FProviderList_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FProviderList, Z_Construct_UPackage__Script_FirebaseFeatures(), TEXT("ProviderList"), sizeof(FProviderList), Get_Z_Construct_UScriptStruct_FProviderList_Hash());
	}
	return Singleton;
}
template<> FIREBASEFEATURES_API UScriptStruct* StaticStruct<FProviderList>()
{
	return FProviderList::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FProviderList(FProviderList::StaticStruct, TEXT("/Script/FirebaseFeatures"), TEXT("ProviderList"), false, nullptr, nullptr);
static struct FScriptStruct_FirebaseFeatures_StaticRegisterNativesFProviderList
{
	FScriptStruct_FirebaseFeatures_StaticRegisterNativesFProviderList()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ProviderList")),new UScriptStruct::TCppStructOps<FProviderList>);
	}
} ScriptStruct_FirebaseFeatures_StaticRegisterNativesFProviderList;
	struct Z_Construct_UScriptStruct_FProviderList_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Providers_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Providers_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Providers;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProviderList_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Private/Auth/AuthNodes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FProviderList_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FProviderList>();
	}
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FProviderList_Statics::NewProp_Providers_Inner = { "Providers", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProviderList_Statics::NewProp_Providers_MetaData[] = {
		{ "Category", "Firebase|Auth|Providers" },
		{ "ModuleRelativePath", "Private/Auth/AuthNodes.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FProviderList_Statics::NewProp_Providers = { "Providers", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FProviderList, Providers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FProviderList_Statics::NewProp_Providers_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProviderList_Statics::NewProp_Providers_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FProviderList_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProviderList_Statics::NewProp_Providers_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProviderList_Statics::NewProp_Providers,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FProviderList_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FirebaseFeatures,
		nullptr,
		&NewStructOps,
		"ProviderList",
		sizeof(FProviderList),
		alignof(FProviderList),
		Z_Construct_UScriptStruct_FProviderList_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProviderList_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FProviderList_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProviderList_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FProviderList()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FProviderList_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_FirebaseFeatures();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ProviderList"), sizeof(FProviderList), Get_Z_Construct_UScriptStruct_FProviderList_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FProviderList_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FProviderList_Hash() { return 1758189053U; }
	DEFINE_FUNCTION(UAuthMiscLibrary::execCreateOAuthProvider)
	{
		P_GET_STRUCT_REF(FFederatedOAuthProviderData,Z_Param_Out_ProviderData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FFederatedAuthProvider*)Z_Param__Result=UAuthMiscLibrary::CreateOAuthProvider(Z_Param_Out_ProviderData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAuthMiscLibrary::execSignOut)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		UAuthMiscLibrary::SignOut();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAuthMiscLibrary::execCurrentUser)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UUser**)Z_Param__Result=UAuthMiscLibrary::CurrentUser();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAuthMiscLibrary::execIsValid)
	{
		P_GET_STRUCT_REF(FCredential,Z_Param_Out_Credential);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UAuthMiscLibrary::IsValid(Z_Param_Out_Credential);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAuthMiscLibrary::execProvider)
	{
		P_GET_STRUCT_REF(FCredential,Z_Param_Out_Credential);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UAuthMiscLibrary::Provider(Z_Param_Out_Credential);
		P_NATIVE_END;
	}
	void UAuthMiscLibrary::StaticRegisterNativesUAuthMiscLibrary()
	{
		UClass* Class = UAuthMiscLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateOAuthProvider", &UAuthMiscLibrary::execCreateOAuthProvider },
			{ "CurrentUser", &UAuthMiscLibrary::execCurrentUser },
			{ "IsValid", &UAuthMiscLibrary::execIsValid },
			{ "Provider", &UAuthMiscLibrary::execProvider },
			{ "SignOut", &UAuthMiscLibrary::execSignOut },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAuthMiscLibrary_CreateOAuthProvider_Statics
	{
		struct AuthMiscLibrary_eventCreateOAuthProvider_Parms
		{
			FFederatedOAuthProviderData ProviderData;
			FFederatedAuthProvider ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProviderData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ProviderData;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAuthMiscLibrary_CreateOAuthProvider_Statics::NewProp_ProviderData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAuthMiscLibrary_CreateOAuthProvider_Statics::NewProp_ProviderData = { "ProviderData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AuthMiscLibrary_eventCreateOAuthProvider_Parms, ProviderData), Z_Construct_UScriptStruct_FFederatedOAuthProviderData, METADATA_PARAMS(Z_Construct_UFunction_UAuthMiscLibrary_CreateOAuthProvider_Statics::NewProp_ProviderData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAuthMiscLibrary_CreateOAuthProvider_Statics::NewProp_ProviderData_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAuthMiscLibrary_CreateOAuthProvider_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AuthMiscLibrary_eventCreateOAuthProvider_Parms, ReturnValue), Z_Construct_UScriptStruct_FFederatedAuthProvider, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAuthMiscLibrary_CreateOAuthProvider_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAuthMiscLibrary_CreateOAuthProvider_Statics::NewProp_ProviderData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAuthMiscLibrary_CreateOAuthProvider_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAuthMiscLibrary_CreateOAuthProvider_Statics::Function_MetaDataParams[] = {
		{ "Category", "Firebase|Auth" },
		{ "Comment", "/// @brief Configures the provider with OAuth provider information.\n/// @param[in] ProviderData Contains the federated provider id and OAuth\n/// scopes and OAuth custom parameters required for user authentication and\n/// user linking.\n" },
		{ "ModuleRelativePath", "Private/Auth/AuthNodes.h" },
		{ "ToolTip", "@brief Configures the provider with OAuth provider information.\n@param[in] ProviderData Contains the federated provider id and OAuth\nscopes and OAuth custom parameters required for user authentication and\nuser linking." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAuthMiscLibrary_CreateOAuthProvider_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAuthMiscLibrary, nullptr, "CreateOAuthProvider", nullptr, nullptr, sizeof(AuthMiscLibrary_eventCreateOAuthProvider_Parms), Z_Construct_UFunction_UAuthMiscLibrary_CreateOAuthProvider_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAuthMiscLibrary_CreateOAuthProvider_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAuthMiscLibrary_CreateOAuthProvider_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAuthMiscLibrary_CreateOAuthProvider_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAuthMiscLibrary_CreateOAuthProvider()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAuthMiscLibrary_CreateOAuthProvider_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAuthMiscLibrary_CurrentUser_Statics
	{
		struct AuthMiscLibrary_eventCurrentUser_Parms
		{
			UUser* ReturnValue;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAuthMiscLibrary_CurrentUser_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "User" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAuthMiscLibrary_CurrentUser_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AuthMiscLibrary_eventCurrentUser_Parms, ReturnValue), Z_Construct_UClass_UUser_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAuthMiscLibrary_CurrentUser_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAuthMiscLibrary_CurrentUser_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAuthMiscLibrary_CurrentUser_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAuthMiscLibrary_CurrentUser_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAuthMiscLibrary_CurrentUser_Statics::Function_MetaDataParams[] = {
		{ "Category", "Firebase|Auth" },
		{ "Comment", "/// Synchronously gets the cached current user, or nullptr if there is none.\n/// @note This function may block and wait until the Auth instance finishes\n/// loading the saved user's state. This should only happen for a short\n/// period of time after the Auth instance is created.\n" },
		{ "ModuleRelativePath", "Private/Auth/AuthNodes.h" },
		{ "ToolTip", "Synchronously gets the cached current user, or nullptr if there is none.\n@note This function may block and wait until the Auth instance finishes\nloading the saved user's state. This should only happen for a short\nperiod of time after the Auth instance is created." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAuthMiscLibrary_CurrentUser_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAuthMiscLibrary, nullptr, "CurrentUser", nullptr, nullptr, sizeof(AuthMiscLibrary_eventCurrentUser_Parms), Z_Construct_UFunction_UAuthMiscLibrary_CurrentUser_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAuthMiscLibrary_CurrentUser_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAuthMiscLibrary_CurrentUser_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAuthMiscLibrary_CurrentUser_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAuthMiscLibrary_CurrentUser()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAuthMiscLibrary_CurrentUser_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAuthMiscLibrary_IsValid_Statics
	{
		struct AuthMiscLibrary_eventIsValid_Parms
		{
			FCredential Credential;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Credential_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Credential;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAuthMiscLibrary_IsValid_Statics::NewProp_Credential_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAuthMiscLibrary_IsValid_Statics::NewProp_Credential = { "Credential", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AuthMiscLibrary_eventIsValid_Parms, Credential), Z_Construct_UScriptStruct_FCredential, METADATA_PARAMS(Z_Construct_UFunction_UAuthMiscLibrary_IsValid_Statics::NewProp_Credential_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAuthMiscLibrary_IsValid_Statics::NewProp_Credential_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAuthMiscLibrary_IsValid_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Is Valid" },
	};
#endif
	void Z_Construct_UFunction_UAuthMiscLibrary_IsValid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AuthMiscLibrary_eventIsValid_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAuthMiscLibrary_IsValid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AuthMiscLibrary_eventIsValid_Parms), &Z_Construct_UFunction_UAuthMiscLibrary_IsValid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UAuthMiscLibrary_IsValid_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAuthMiscLibrary_IsValid_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAuthMiscLibrary_IsValid_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAuthMiscLibrary_IsValid_Statics::NewProp_Credential,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAuthMiscLibrary_IsValid_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAuthMiscLibrary_IsValid_Statics::Function_MetaDataParams[] = {
		{ "Category", "Firebase|Auth|Credential" },
		{ "Comment", "/// Get whether this credential is valid. A credential can be\n/// invalid in an error condition, e.g. empty username/password.\n/// @returns True if the credential is valid, false otherwise.\n" },
		{ "ModuleRelativePath", "Private/Auth/AuthNodes.h" },
		{ "ToolTip", "Get whether this credential is valid. A credential can be\ninvalid in an error condition, e.g. empty username/password.\n@returns True if the credential is valid, false otherwise." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAuthMiscLibrary_IsValid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAuthMiscLibrary, nullptr, "IsValid", nullptr, nullptr, sizeof(AuthMiscLibrary_eventIsValid_Parms), Z_Construct_UFunction_UAuthMiscLibrary_IsValid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAuthMiscLibrary_IsValid_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAuthMiscLibrary_IsValid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAuthMiscLibrary_IsValid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAuthMiscLibrary_IsValid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAuthMiscLibrary_IsValid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAuthMiscLibrary_Provider_Statics
	{
		struct AuthMiscLibrary_eventProvider_Parms
		{
			FCredential Credential;
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Credential_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Credential;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAuthMiscLibrary_Provider_Statics::NewProp_Credential_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAuthMiscLibrary_Provider_Statics::NewProp_Credential = { "Credential", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AuthMiscLibrary_eventProvider_Parms, Credential), Z_Construct_UScriptStruct_FCredential, METADATA_PARAMS(Z_Construct_UFunction_UAuthMiscLibrary_Provider_Statics::NewProp_Credential_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAuthMiscLibrary_Provider_Statics::NewProp_Credential_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAuthMiscLibrary_Provider_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Provider" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAuthMiscLibrary_Provider_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AuthMiscLibrary_eventProvider_Parms, ReturnValue), METADATA_PARAMS(Z_Construct_UFunction_UAuthMiscLibrary_Provider_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAuthMiscLibrary_Provider_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAuthMiscLibrary_Provider_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAuthMiscLibrary_Provider_Statics::NewProp_Credential,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAuthMiscLibrary_Provider_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAuthMiscLibrary_Provider_Statics::Function_MetaDataParams[] = {
		{ "Category", "Firebase|Auth|Credential" },
		{ "Comment", "/// Gets the name of the Identification Provider (IDP) for the credential.\n" },
		{ "ModuleRelativePath", "Private/Auth/AuthNodes.h" },
		{ "ToolTip", "Gets the name of the Identification Provider (IDP) for the credential." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAuthMiscLibrary_Provider_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAuthMiscLibrary, nullptr, "Provider", nullptr, nullptr, sizeof(AuthMiscLibrary_eventProvider_Parms), Z_Construct_UFunction_UAuthMiscLibrary_Provider_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAuthMiscLibrary_Provider_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAuthMiscLibrary_Provider_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAuthMiscLibrary_Provider_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAuthMiscLibrary_Provider()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAuthMiscLibrary_Provider_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAuthMiscLibrary_SignOut_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAuthMiscLibrary_SignOut_Statics::Function_MetaDataParams[] = {
		{ "Category", "Firebase|Auth" },
		{ "Comment", "/// Removes any existing authentication credentials from this client.\n/// This function always succeeds.\n" },
		{ "ModuleRelativePath", "Private/Auth/AuthNodes.h" },
		{ "ToolTip", "Removes any existing authentication credentials from this client.\nThis function always succeeds." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAuthMiscLibrary_SignOut_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAuthMiscLibrary, nullptr, "SignOut", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAuthMiscLibrary_SignOut_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAuthMiscLibrary_SignOut_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAuthMiscLibrary_SignOut()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAuthMiscLibrary_SignOut_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAuthMiscLibrary_NoRegister()
	{
		return UAuthMiscLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UAuthMiscLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAuthMiscLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_FirebaseFeatures,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAuthMiscLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAuthMiscLibrary_CreateOAuthProvider, "CreateOAuthProvider" }, // 1852520877
		{ &Z_Construct_UFunction_UAuthMiscLibrary_CurrentUser, "CurrentUser" }, // 254292227
		{ &Z_Construct_UFunction_UAuthMiscLibrary_IsValid, "IsValid" }, // 265892808
		{ &Z_Construct_UFunction_UAuthMiscLibrary_Provider, "Provider" }, // 4237690280
		{ &Z_Construct_UFunction_UAuthMiscLibrary_SignOut, "SignOut" }, // 2460769563
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAuthMiscLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Contains methods for Blueprints.\n * Not exported because C++ modules don't need it.\n **/" },
		{ "IncludePath", "Auth/AuthNodes.h" },
		{ "ModuleRelativePath", "Private/Auth/AuthNodes.h" },
		{ "ToolTip", "Contains methods for Blueprints.\nNot exported because C++ modules don't need it." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAuthMiscLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAuthMiscLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAuthMiscLibrary_Statics::ClassParams = {
		&UAuthMiscLibrary::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAuthMiscLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAuthMiscLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAuthMiscLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAuthMiscLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAuthMiscLibrary, 1792262803);
	template<> FIREBASEFEATURES_API UClass* StaticClass<UAuthMiscLibrary>()
	{
		return UAuthMiscLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAuthMiscLibrary(Z_Construct_UClass_UAuthMiscLibrary, &UAuthMiscLibrary::StaticClass, TEXT("/Script/FirebaseFeatures"), TEXT("UAuthMiscLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAuthMiscLibrary);
	DEFINE_FUNCTION(UFetchProvidersForEmailProxy::execFetchProvidersForEmail)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Email);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UFetchProvidersForEmailProxy**)Z_Param__Result=UFetchProvidersForEmailProxy::FetchProvidersForEmail(Z_Param_Email);
		P_NATIVE_END;
	}
	void UFetchProvidersForEmailProxy::StaticRegisterNativesUFetchProvidersForEmailProxy()
	{
		UClass* Class = UFetchProvidersForEmailProxy::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FetchProvidersForEmail", &UFetchProvidersForEmailProxy::execFetchProvidersForEmail },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFetchProvidersForEmailProxy_FetchProvidersForEmail_Statics
	{
		struct FetchProvidersForEmailProxy_eventFetchProvidersForEmail_Parms
		{
			FString Email;
			UFetchProvidersForEmailProxy* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Email_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Email;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFetchProvidersForEmailProxy_FetchProvidersForEmail_Statics::NewProp_Email_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFetchProvidersForEmailProxy_FetchProvidersForEmail_Statics::NewProp_Email = { "Email", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FetchProvidersForEmailProxy_eventFetchProvidersForEmail_Parms, Email), METADATA_PARAMS(Z_Construct_UFunction_UFetchProvidersForEmailProxy_FetchProvidersForEmail_Statics::NewProp_Email_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFetchProvidersForEmailProxy_FetchProvidersForEmail_Statics::NewProp_Email_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFetchProvidersForEmailProxy_FetchProvidersForEmail_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FetchProvidersForEmailProxy_eventFetchProvidersForEmail_Parms, ReturnValue), Z_Construct_UClass_UFetchProvidersForEmailProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFetchProvidersForEmailProxy_FetchProvidersForEmail_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFetchProvidersForEmailProxy_FetchProvidersForEmail_Statics::NewProp_Email,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFetchProvidersForEmailProxy_FetchProvidersForEmail_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFetchProvidersForEmailProxy_FetchProvidersForEmail_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Firebase|Auth" },
		{ "Comment", "/// Asynchronously requests the IDPs (identity providers) that can be used\n/// for the given email address.\n/// Useful for an \"identifier-first\" login flow.\n" },
		{ "DisplayName", "Fetch Providers for Email" },
		{ "ModuleRelativePath", "Private/Auth/AuthNodes.h" },
		{ "ToolTip", "Asynchronously requests the IDPs (identity providers) that can be used\nfor the given email address.\nUseful for an \"identifier-first\" login flow." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFetchProvidersForEmailProxy_FetchProvidersForEmail_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFetchProvidersForEmailProxy, nullptr, "FetchProvidersForEmail", nullptr, nullptr, sizeof(FetchProvidersForEmailProxy_eventFetchProvidersForEmail_Parms), Z_Construct_UFunction_UFetchProvidersForEmailProxy_FetchProvidersForEmail_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFetchProvidersForEmailProxy_FetchProvidersForEmail_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFetchProvidersForEmailProxy_FetchProvidersForEmail_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFetchProvidersForEmailProxy_FetchProvidersForEmail_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFetchProvidersForEmailProxy_FetchProvidersForEmail()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFetchProvidersForEmailProxy_FetchProvidersForEmail_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFetchProvidersForEmailProxy_NoRegister()
	{
		return UFetchProvidersForEmailProxy::StaticClass();
	}
	struct Z_Construct_UClass_UFetchProvidersForEmailProxy_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnProvidersFetched_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnProvidersFetched;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnError_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnError;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFetchProvidersForEmailProxy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_FirebaseFeatures,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFetchProvidersForEmailProxy_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFetchProvidersForEmailProxy_FetchProvidersForEmail, "FetchProvidersForEmail" }, // 3628201545
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFetchProvidersForEmailProxy_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Auth/AuthNodes.h" },
		{ "ModuleRelativePath", "Private/Auth/AuthNodes.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFetchProvidersForEmailProxy_Statics::NewProp_OnProvidersFetched_MetaData[] = {
		{ "ModuleRelativePath", "Private/Auth/AuthNodes.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UFetchProvidersForEmailProxy_Statics::NewProp_OnProvidersFetched = { "OnProvidersFetched", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFetchProvidersForEmailProxy, OnProvidersFetched), Z_Construct_UDelegateFunction_FirebaseFeatures_DynMultProvidersCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UFetchProvidersForEmailProxy_Statics::NewProp_OnProvidersFetched_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFetchProvidersForEmailProxy_Statics::NewProp_OnProvidersFetched_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFetchProvidersForEmailProxy_Statics::NewProp_OnError_MetaData[] = {
		{ "ModuleRelativePath", "Private/Auth/AuthNodes.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UFetchProvidersForEmailProxy_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFetchProvidersForEmailProxy, OnError), Z_Construct_UDelegateFunction_FirebaseFeatures_DynMultProvidersCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UFetchProvidersForEmailProxy_Statics::NewProp_OnError_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFetchProvidersForEmailProxy_Statics::NewProp_OnError_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFetchProvidersForEmailProxy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFetchProvidersForEmailProxy_Statics::NewProp_OnProvidersFetched,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFetchProvidersForEmailProxy_Statics::NewProp_OnError,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFetchProvidersForEmailProxy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFetchProvidersForEmailProxy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFetchProvidersForEmailProxy_Statics::ClassParams = {
		&UFetchProvidersForEmailProxy::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UFetchProvidersForEmailProxy_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UFetchProvidersForEmailProxy_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFetchProvidersForEmailProxy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFetchProvidersForEmailProxy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFetchProvidersForEmailProxy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFetchProvidersForEmailProxy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFetchProvidersForEmailProxy, 1616224530);
	template<> FIREBASEFEATURES_API UClass* StaticClass<UFetchProvidersForEmailProxy>()
	{
		return UFetchProvidersForEmailProxy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFetchProvidersForEmailProxy(Z_Construct_UClass_UFetchProvidersForEmailProxy, &UFetchProvidersForEmailProxy::StaticClass, TEXT("/Script/FirebaseFeatures"), TEXT("UFetchProvidersForEmailProxy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFetchProvidersForEmailProxy);
	DEFINE_FUNCTION(USignInWithCustomTokenProxy::execSignInWithCustomToken)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Token);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USignInWithCustomTokenProxy**)Z_Param__Result=USignInWithCustomTokenProxy::SignInWithCustomToken(Z_Param_Token);
		P_NATIVE_END;
	}
	void USignInWithCustomTokenProxy::StaticRegisterNativesUSignInWithCustomTokenProxy()
	{
		UClass* Class = USignInWithCustomTokenProxy::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SignInWithCustomToken", &USignInWithCustomTokenProxy::execSignInWithCustomToken },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USignInWithCustomTokenProxy_SignInWithCustomToken_Statics
	{
		struct SignInWithCustomTokenProxy_eventSignInWithCustomToken_Parms
		{
			FString Token;
			USignInWithCustomTokenProxy* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Token_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Token;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USignInWithCustomTokenProxy_SignInWithCustomToken_Statics::NewProp_Token_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USignInWithCustomTokenProxy_SignInWithCustomToken_Statics::NewProp_Token = { "Token", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SignInWithCustomTokenProxy_eventSignInWithCustomToken_Parms, Token), METADATA_PARAMS(Z_Construct_UFunction_USignInWithCustomTokenProxy_SignInWithCustomToken_Statics::NewProp_Token_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USignInWithCustomTokenProxy_SignInWithCustomToken_Statics::NewProp_Token_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USignInWithCustomTokenProxy_SignInWithCustomToken_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SignInWithCustomTokenProxy_eventSignInWithCustomToken_Parms, ReturnValue), Z_Construct_UClass_USignInWithCustomTokenProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USignInWithCustomTokenProxy_SignInWithCustomToken_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USignInWithCustomTokenProxy_SignInWithCustomToken_Statics::NewProp_Token,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USignInWithCustomTokenProxy_SignInWithCustomToken_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USignInWithCustomTokenProxy_SignInWithCustomToken_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Firebase|Auth" },
		{ "Comment", "/// Asynchronously logs into Firebase with the given Auth token.\n/// An error is returned, if the token is invalid, expired or otherwise\n/// not accepted by the server.\n" },
		{ "DisplayName", "Sign In with Custom Token" },
		{ "ModuleRelativePath", "Private/Auth/AuthNodes.h" },
		{ "ToolTip", "Asynchronously logs into Firebase with the given Auth token.\nAn error is returned, if the token is invalid, expired or otherwise\nnot accepted by the server." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USignInWithCustomTokenProxy_SignInWithCustomToken_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USignInWithCustomTokenProxy, nullptr, "SignInWithCustomToken", nullptr, nullptr, sizeof(SignInWithCustomTokenProxy_eventSignInWithCustomToken_Parms), Z_Construct_UFunction_USignInWithCustomTokenProxy_SignInWithCustomToken_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USignInWithCustomTokenProxy_SignInWithCustomToken_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USignInWithCustomTokenProxy_SignInWithCustomToken_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USignInWithCustomTokenProxy_SignInWithCustomToken_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USignInWithCustomTokenProxy_SignInWithCustomToken()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USignInWithCustomTokenProxy_SignInWithCustomToken_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USignInWithCustomTokenProxy_NoRegister()
	{
		return USignInWithCustomTokenProxy::StaticClass();
	}
	struct Z_Construct_UClass_USignInWithCustomTokenProxy_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnSignedIn_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSignedIn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnError_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnError;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USignInWithCustomTokenProxy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_FirebaseFeatures,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USignInWithCustomTokenProxy_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USignInWithCustomTokenProxy_SignInWithCustomToken, "SignInWithCustomToken" }, // 1037240846
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USignInWithCustomTokenProxy_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Auth/AuthNodes.h" },
		{ "ModuleRelativePath", "Private/Auth/AuthNodes.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USignInWithCustomTokenProxy_Statics::NewProp_OnSignedIn_MetaData[] = {
		{ "ModuleRelativePath", "Private/Auth/AuthNodes.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USignInWithCustomTokenProxy_Statics::NewProp_OnSignedIn = { "OnSignedIn", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USignInWithCustomTokenProxy, OnSignedIn), Z_Construct_UDelegateFunction_FirebaseFeatures_DynMultSignInUserCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USignInWithCustomTokenProxy_Statics::NewProp_OnSignedIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USignInWithCustomTokenProxy_Statics::NewProp_OnSignedIn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USignInWithCustomTokenProxy_Statics::NewProp_OnError_MetaData[] = {
		{ "ModuleRelativePath", "Private/Auth/AuthNodes.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USignInWithCustomTokenProxy_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USignInWithCustomTokenProxy, OnError), Z_Construct_UDelegateFunction_FirebaseFeatures_DynMultSignInUserCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USignInWithCustomTokenProxy_Statics::NewProp_OnError_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USignInWithCustomTokenProxy_Statics::NewProp_OnError_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USignInWithCustomTokenProxy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USignInWithCustomTokenProxy_Statics::NewProp_OnSignedIn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USignInWithCustomTokenProxy_Statics::NewProp_OnError,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USignInWithCustomTokenProxy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USignInWithCustomTokenProxy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USignInWithCustomTokenProxy_Statics::ClassParams = {
		&USignInWithCustomTokenProxy::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USignInWithCustomTokenProxy_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USignInWithCustomTokenProxy_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USignInWithCustomTokenProxy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USignInWithCustomTokenProxy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USignInWithCustomTokenProxy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USignInWithCustomTokenProxy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USignInWithCustomTokenProxy, 4123195941);
	template<> FIREBASEFEATURES_API UClass* StaticClass<USignInWithCustomTokenProxy>()
	{
		return USignInWithCustomTokenProxy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USignInWithCustomTokenProxy(Z_Construct_UClass_USignInWithCustomTokenProxy, &USignInWithCustomTokenProxy::StaticClass, TEXT("/Script/FirebaseFeatures"), TEXT("USignInWithCustomTokenProxy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USignInWithCustomTokenProxy);
	DEFINE_FUNCTION(USignInWithCredentialProxy::execSignInWithCredential)
	{
		P_GET_STRUCT_REF(FCredential,Z_Param_Out_Credential);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USignInWithCredentialProxy**)Z_Param__Result=USignInWithCredentialProxy::SignInWithCredential(Z_Param_Out_Credential);
		P_NATIVE_END;
	}
	void USignInWithCredentialProxy::StaticRegisterNativesUSignInWithCredentialProxy()
	{
		UClass* Class = USignInWithCredentialProxy::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SignInWithCredential", &USignInWithCredentialProxy::execSignInWithCredential },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USignInWithCredentialProxy_SignInWithCredential_Statics
	{
		struct SignInWithCredentialProxy_eventSignInWithCredential_Parms
		{
			FCredential Credential;
			USignInWithCredentialProxy* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Credential_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Credential;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USignInWithCredentialProxy_SignInWithCredential_Statics::NewProp_Credential_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USignInWithCredentialProxy_SignInWithCredential_Statics::NewProp_Credential = { "Credential", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SignInWithCredentialProxy_eventSignInWithCredential_Parms, Credential), Z_Construct_UScriptStruct_FCredential, METADATA_PARAMS(Z_Construct_UFunction_USignInWithCredentialProxy_SignInWithCredential_Statics::NewProp_Credential_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USignInWithCredentialProxy_SignInWithCredential_Statics::NewProp_Credential_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USignInWithCredentialProxy_SignInWithCredential_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SignInWithCredentialProxy_eventSignInWithCredential_Parms, ReturnValue), Z_Construct_UClass_USignInWithCredentialProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USignInWithCredentialProxy_SignInWithCredential_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USignInWithCredentialProxy_SignInWithCredential_Statics::NewProp_Credential,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USignInWithCredentialProxy_SignInWithCredential_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USignInWithCredentialProxy_SignInWithCredential_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Firebase|Auth" },
		{ "Comment", "/// Convenience method for SignInAndRetrieveDataWithCredential that\n/// doesn't return additional identity provider data.\n" },
		{ "DisplayName", "Sign In with Credential" },
		{ "ModuleRelativePath", "Private/Auth/AuthNodes.h" },
		{ "ToolTip", "Convenience method for SignInAndRetrieveDataWithCredential that\ndoesn't return additional identity provider data." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USignInWithCredentialProxy_SignInWithCredential_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USignInWithCredentialProxy, nullptr, "SignInWithCredential", nullptr, nullptr, sizeof(SignInWithCredentialProxy_eventSignInWithCredential_Parms), Z_Construct_UFunction_USignInWithCredentialProxy_SignInWithCredential_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USignInWithCredentialProxy_SignInWithCredential_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USignInWithCredentialProxy_SignInWithCredential_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USignInWithCredentialProxy_SignInWithCredential_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USignInWithCredentialProxy_SignInWithCredential()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USignInWithCredentialProxy_SignInWithCredential_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USignInWithCredentialProxy_NoRegister()
	{
		return USignInWithCredentialProxy::StaticClass();
	}
	struct Z_Construct_UClass_USignInWithCredentialProxy_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnSignedIn_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSignedIn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnError_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnError;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USignInWithCredentialProxy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_FirebaseFeatures,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USignInWithCredentialProxy_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USignInWithCredentialProxy_SignInWithCredential, "SignInWithCredential" }, // 4247908560
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USignInWithCredentialProxy_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Auth/AuthNodes.h" },
		{ "ModuleRelativePath", "Private/Auth/AuthNodes.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USignInWithCredentialProxy_Statics::NewProp_OnSignedIn_MetaData[] = {
		{ "ModuleRelativePath", "Private/Auth/AuthNodes.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USignInWithCredentialProxy_Statics::NewProp_OnSignedIn = { "OnSignedIn", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USignInWithCredentialProxy, OnSignedIn), Z_Construct_UDelegateFunction_FirebaseFeatures_DynMultSignInUserCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USignInWithCredentialProxy_Statics::NewProp_OnSignedIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USignInWithCredentialProxy_Statics::NewProp_OnSignedIn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USignInWithCredentialProxy_Statics::NewProp_OnError_MetaData[] = {
		{ "ModuleRelativePath", "Private/Auth/AuthNodes.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USignInWithCredentialProxy_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USignInWithCredentialProxy, OnError), Z_Construct_UDelegateFunction_FirebaseFeatures_DynMultSignInUserCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USignInWithCredentialProxy_Statics::NewProp_OnError_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USignInWithCredentialProxy_Statics::NewProp_OnError_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USignInWithCredentialProxy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USignInWithCredentialProxy_Statics::NewProp_OnSignedIn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USignInWithCredentialProxy_Statics::NewProp_OnError,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USignInWithCredentialProxy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USignInWithCredentialProxy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USignInWithCredentialProxy_Statics::ClassParams = {
		&USignInWithCredentialProxy::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USignInWithCredentialProxy_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USignInWithCredentialProxy_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USignInWithCredentialProxy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USignInWithCredentialProxy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USignInWithCredentialProxy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USignInWithCredentialProxy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USignInWithCredentialProxy, 2582161960);
	template<> FIREBASEFEATURES_API UClass* StaticClass<USignInWithCredentialProxy>()
	{
		return USignInWithCredentialProxy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USignInWithCredentialProxy(Z_Construct_UClass_USignInWithCredentialProxy, &USignInWithCredentialProxy::StaticClass, TEXT("/Script/FirebaseFeatures"), TEXT("USignInWithCredentialProxy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USignInWithCredentialProxy);
	DEFINE_FUNCTION(USignInWithProviderProxy::execSignInWithProvider)
	{
		P_GET_STRUCT_REF(FFederatedAuthProvider,Z_Param_Out_AuthProvider);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USignInWithProviderProxy**)Z_Param__Result=USignInWithProviderProxy::SignInWithProvider(Z_Param_Out_AuthProvider);
		P_NATIVE_END;
	}
	void USignInWithProviderProxy::StaticRegisterNativesUSignInWithProviderProxy()
	{
		UClass* Class = USignInWithProviderProxy::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SignInWithProvider", &USignInWithProviderProxy::execSignInWithProvider },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USignInWithProviderProxy_SignInWithProvider_Statics
	{
		struct SignInWithProviderProxy_eventSignInWithProvider_Parms
		{
			FFederatedAuthProvider AuthProvider;
			USignInWithProviderProxy* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AuthProvider_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AuthProvider;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USignInWithProviderProxy_SignInWithProvider_Statics::NewProp_AuthProvider_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USignInWithProviderProxy_SignInWithProvider_Statics::NewProp_AuthProvider = { "AuthProvider", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SignInWithProviderProxy_eventSignInWithProvider_Parms, AuthProvider), Z_Construct_UScriptStruct_FFederatedAuthProvider, METADATA_PARAMS(Z_Construct_UFunction_USignInWithProviderProxy_SignInWithProvider_Statics::NewProp_AuthProvider_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USignInWithProviderProxy_SignInWithProvider_Statics::NewProp_AuthProvider_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USignInWithProviderProxy_SignInWithProvider_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SignInWithProviderProxy_eventSignInWithProvider_Parms, ReturnValue), Z_Construct_UClass_USignInWithProviderProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USignInWithProviderProxy_SignInWithProvider_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USignInWithProviderProxy_SignInWithProvider_Statics::NewProp_AuthProvider,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USignInWithProviderProxy_SignInWithProvider_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USignInWithProviderProxy_SignInWithProvider_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Firebase|Auth" },
		{ "Comment", "/// Sign-in a user authenticated via a federated auth provider.\n/// @param[in] Provider Contains information on the provider to authenticate\n/// with.\n" },
		{ "DisplayName", "Sign In with Provider" },
		{ "ModuleRelativePath", "Private/Auth/AuthNodes.h" },
		{ "ToolTip", "Sign-in a user authenticated via a federated auth provider.\n@param[in] Provider Contains information on the provider to authenticate\nwith." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USignInWithProviderProxy_SignInWithProvider_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USignInWithProviderProxy, nullptr, "SignInWithProvider", nullptr, nullptr, sizeof(SignInWithProviderProxy_eventSignInWithProvider_Parms), Z_Construct_UFunction_USignInWithProviderProxy_SignInWithProvider_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USignInWithProviderProxy_SignInWithProvider_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USignInWithProviderProxy_SignInWithProvider_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USignInWithProviderProxy_SignInWithProvider_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USignInWithProviderProxy_SignInWithProvider()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USignInWithProviderProxy_SignInWithProvider_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USignInWithProviderProxy_NoRegister()
	{
		return USignInWithProviderProxy::StaticClass();
	}
	struct Z_Construct_UClass_USignInWithProviderProxy_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnSignedIn_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSignedIn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnError_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnError;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USignInWithProviderProxy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_FirebaseFeatures,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USignInWithProviderProxy_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USignInWithProviderProxy_SignInWithProvider, "SignInWithProvider" }, // 2346483045
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USignInWithProviderProxy_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Auth/AuthNodes.h" },
		{ "ModuleRelativePath", "Private/Auth/AuthNodes.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USignInWithProviderProxy_Statics::NewProp_OnSignedIn_MetaData[] = {
		{ "ModuleRelativePath", "Private/Auth/AuthNodes.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USignInWithProviderProxy_Statics::NewProp_OnSignedIn = { "OnSignedIn", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USignInWithProviderProxy, OnSignedIn), Z_Construct_UDelegateFunction_FirebaseFeatures_DynMultSignInCallback___DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USignInWithProviderProxy_Statics::NewProp_OnSignedIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USignInWithProviderProxy_Statics::NewProp_OnSignedIn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USignInWithProviderProxy_Statics::NewProp_OnError_MetaData[] = {
		{ "ModuleRelativePath", "Private/Auth/AuthNodes.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USignInWithProviderProxy_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USignInWithProviderProxy, OnError), Z_Construct_UDelegateFunction_FirebaseFeatures_DynMultSignInCallback___DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USignInWithProviderProxy_Statics::NewProp_OnError_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USignInWithProviderProxy_Statics::NewProp_OnError_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USignInWithProviderProxy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USignInWithProviderProxy_Statics::NewProp_OnSignedIn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USignInWithProviderProxy_Statics::NewProp_OnError,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USignInWithProviderProxy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USignInWithProviderProxy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USignInWithProviderProxy_Statics::ClassParams = {
		&USignInWithProviderProxy::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USignInWithProviderProxy_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USignInWithProviderProxy_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USignInWithProviderProxy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USignInWithProviderProxy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USignInWithProviderProxy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USignInWithProviderProxy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USignInWithProviderProxy, 2693209954);
	template<> FIREBASEFEATURES_API UClass* StaticClass<USignInWithProviderProxy>()
	{
		return USignInWithProviderProxy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USignInWithProviderProxy(Z_Construct_UClass_USignInWithProviderProxy, &USignInWithProviderProxy::StaticClass, TEXT("/Script/FirebaseFeatures"), TEXT("USignInWithProviderProxy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USignInWithProviderProxy);
	DEFINE_FUNCTION(USignInAndRetrieveDataWithCredentialProxy::execSignInAndRetrieveDataWithCredential)
	{
		P_GET_STRUCT_REF(FCredential,Z_Param_Out_Credential);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USignInAndRetrieveDataWithCredentialProxy**)Z_Param__Result=USignInAndRetrieveDataWithCredentialProxy::SignInAndRetrieveDataWithCredential(Z_Param_Out_Credential);
		P_NATIVE_END;
	}
	void USignInAndRetrieveDataWithCredentialProxy::StaticRegisterNativesUSignInAndRetrieveDataWithCredentialProxy()
	{
		UClass* Class = USignInAndRetrieveDataWithCredentialProxy::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SignInAndRetrieveDataWithCredential", &USignInAndRetrieveDataWithCredentialProxy::execSignInAndRetrieveDataWithCredential },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USignInAndRetrieveDataWithCredentialProxy_SignInAndRetrieveDataWithCredential_Statics
	{
		struct SignInAndRetrieveDataWithCredentialProxy_eventSignInAndRetrieveDataWithCredential_Parms
		{
			FCredential Credential;
			USignInAndRetrieveDataWithCredentialProxy* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Credential_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Credential;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USignInAndRetrieveDataWithCredentialProxy_SignInAndRetrieveDataWithCredential_Statics::NewProp_Credential_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USignInAndRetrieveDataWithCredentialProxy_SignInAndRetrieveDataWithCredential_Statics::NewProp_Credential = { "Credential", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SignInAndRetrieveDataWithCredentialProxy_eventSignInAndRetrieveDataWithCredential_Parms, Credential), Z_Construct_UScriptStruct_FCredential, METADATA_PARAMS(Z_Construct_UFunction_USignInAndRetrieveDataWithCredentialProxy_SignInAndRetrieveDataWithCredential_Statics::NewProp_Credential_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USignInAndRetrieveDataWithCredentialProxy_SignInAndRetrieveDataWithCredential_Statics::NewProp_Credential_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USignInAndRetrieveDataWithCredentialProxy_SignInAndRetrieveDataWithCredential_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SignInAndRetrieveDataWithCredentialProxy_eventSignInAndRetrieveDataWithCredential_Parms, ReturnValue), Z_Construct_UClass_USignInAndRetrieveDataWithCredentialProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USignInAndRetrieveDataWithCredentialProxy_SignInAndRetrieveDataWithCredential_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USignInAndRetrieveDataWithCredentialProxy_SignInAndRetrieveDataWithCredential_Statics::NewProp_Credential,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USignInAndRetrieveDataWithCredentialProxy_SignInAndRetrieveDataWithCredential_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USignInAndRetrieveDataWithCredentialProxy_SignInAndRetrieveDataWithCredential_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Firebase|Auth" },
		{ "Comment", "/// Asynchronously logs into Firebase with the given credentials.\n/// For example, the credential could wrap a Facebook login access token or\n/// a Twitter token/token-secret pair.\n/// The SignInResult contains both a reference to the User (which can be null\n/// if the sign in failed), and AdditionalUserInfo, which holds details\n/// specific to the Identity Provider used to sign in.\n/// An error is returned if the token is invalid, expired, or otherwise not\n/// accepted by the server.\n" },
		{ "DisplayName", "Sign In and retrieve Data with Credential" },
		{ "ModuleRelativePath", "Private/Auth/AuthNodes.h" },
		{ "ToolTip", "Asynchronously logs into Firebase with the given credentials.\nFor example, the credential could wrap a Facebook login access token or\na Twitter token/token-secret pair.\nThe SignInResult contains both a reference to the User (which can be null\nif the sign in failed), and AdditionalUserInfo, which holds details\nspecific to the Identity Provider used to sign in.\nAn error is returned if the token is invalid, expired, or otherwise not\naccepted by the server." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USignInAndRetrieveDataWithCredentialProxy_SignInAndRetrieveDataWithCredential_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USignInAndRetrieveDataWithCredentialProxy, nullptr, "SignInAndRetrieveDataWithCredential", nullptr, nullptr, sizeof(SignInAndRetrieveDataWithCredentialProxy_eventSignInAndRetrieveDataWithCredential_Parms), Z_Construct_UFunction_USignInAndRetrieveDataWithCredentialProxy_SignInAndRetrieveDataWithCredential_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USignInAndRetrieveDataWithCredentialProxy_SignInAndRetrieveDataWithCredential_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USignInAndRetrieveDataWithCredentialProxy_SignInAndRetrieveDataWithCredential_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USignInAndRetrieveDataWithCredentialProxy_SignInAndRetrieveDataWithCredential_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USignInAndRetrieveDataWithCredentialProxy_SignInAndRetrieveDataWithCredential()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USignInAndRetrieveDataWithCredentialProxy_SignInAndRetrieveDataWithCredential_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USignInAndRetrieveDataWithCredentialProxy_NoRegister()
	{
		return USignInAndRetrieveDataWithCredentialProxy::StaticClass();
	}
	struct Z_Construct_UClass_USignInAndRetrieveDataWithCredentialProxy_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnSignedIn_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSignedIn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnError_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnError;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USignInAndRetrieveDataWithCredentialProxy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_FirebaseFeatures,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USignInAndRetrieveDataWithCredentialProxy_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USignInAndRetrieveDataWithCredentialProxy_SignInAndRetrieveDataWithCredential, "SignInAndRetrieveDataWithCredential" }, // 2974231977
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USignInAndRetrieveDataWithCredentialProxy_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Auth/AuthNodes.h" },
		{ "ModuleRelativePath", "Private/Auth/AuthNodes.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USignInAndRetrieveDataWithCredentialProxy_Statics::NewProp_OnSignedIn_MetaData[] = {
		{ "ModuleRelativePath", "Private/Auth/AuthNodes.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USignInAndRetrieveDataWithCredentialProxy_Statics::NewProp_OnSignedIn = { "OnSignedIn", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USignInAndRetrieveDataWithCredentialProxy, OnSignedIn), Z_Construct_UDelegateFunction_FirebaseFeatures_DynMultSignInCallback___DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USignInAndRetrieveDataWithCredentialProxy_Statics::NewProp_OnSignedIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USignInAndRetrieveDataWithCredentialProxy_Statics::NewProp_OnSignedIn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USignInAndRetrieveDataWithCredentialProxy_Statics::NewProp_OnError_MetaData[] = {
		{ "ModuleRelativePath", "Private/Auth/AuthNodes.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USignInAndRetrieveDataWithCredentialProxy_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USignInAndRetrieveDataWithCredentialProxy, OnError), Z_Construct_UDelegateFunction_FirebaseFeatures_DynMultSignInCallback___DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USignInAndRetrieveDataWithCredentialProxy_Statics::NewProp_OnError_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USignInAndRetrieveDataWithCredentialProxy_Statics::NewProp_OnError_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USignInAndRetrieveDataWithCredentialProxy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USignInAndRetrieveDataWithCredentialProxy_Statics::NewProp_OnSignedIn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USignInAndRetrieveDataWithCredentialProxy_Statics::NewProp_OnError,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USignInAndRetrieveDataWithCredentialProxy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USignInAndRetrieveDataWithCredentialProxy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USignInAndRetrieveDataWithCredentialProxy_Statics::ClassParams = {
		&USignInAndRetrieveDataWithCredentialProxy::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USignInAndRetrieveDataWithCredentialProxy_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USignInAndRetrieveDataWithCredentialProxy_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USignInAndRetrieveDataWithCredentialProxy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USignInAndRetrieveDataWithCredentialProxy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USignInAndRetrieveDataWithCredentialProxy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USignInAndRetrieveDataWithCredentialProxy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USignInAndRetrieveDataWithCredentialProxy, 193658421);
	template<> FIREBASEFEATURES_API UClass* StaticClass<USignInAndRetrieveDataWithCredentialProxy>()
	{
		return USignInAndRetrieveDataWithCredentialProxy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USignInAndRetrieveDataWithCredentialProxy(Z_Construct_UClass_USignInAndRetrieveDataWithCredentialProxy, &USignInAndRetrieveDataWithCredentialProxy::StaticClass, TEXT("/Script/FirebaseFeatures"), TEXT("USignInAndRetrieveDataWithCredentialProxy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USignInAndRetrieveDataWithCredentialProxy);
	DEFINE_FUNCTION(USignInAnonymouslyProxy::execSignInAnonymously)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USignInAnonymouslyProxy**)Z_Param__Result=USignInAnonymouslyProxy::SignInAnonymously();
		P_NATIVE_END;
	}
	void USignInAnonymouslyProxy::StaticRegisterNativesUSignInAnonymouslyProxy()
	{
		UClass* Class = USignInAnonymouslyProxy::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SignInAnonymously", &USignInAnonymouslyProxy::execSignInAnonymously },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USignInAnonymouslyProxy_SignInAnonymously_Statics
	{
		struct SignInAnonymouslyProxy_eventSignInAnonymously_Parms
		{
			USignInAnonymouslyProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USignInAnonymouslyProxy_SignInAnonymously_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SignInAnonymouslyProxy_eventSignInAnonymously_Parms, ReturnValue), Z_Construct_UClass_USignInAnonymouslyProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USignInAnonymouslyProxy_SignInAnonymously_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USignInAnonymouslyProxy_SignInAnonymously_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USignInAnonymouslyProxy_SignInAnonymously_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Firebase|Auth" },
		{ "Comment", "/// Asynchronously creates and becomes an anonymous user.\n/// If there is already an anonymous user signed in, that user will be\n/// returned instead.\n/// If there is any other existing user, that user will be signed out.\n" },
		{ "DisplayName", "Sign In Anonymously" },
		{ "ModuleRelativePath", "Private/Auth/AuthNodes.h" },
		{ "ToolTip", "Asynchronously creates and becomes an anonymous user.\nIf there is already an anonymous user signed in, that user will be\nreturned instead.\nIf there is any other existing user, that user will be signed out." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USignInAnonymouslyProxy_SignInAnonymously_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USignInAnonymouslyProxy, nullptr, "SignInAnonymously", nullptr, nullptr, sizeof(SignInAnonymouslyProxy_eventSignInAnonymously_Parms), Z_Construct_UFunction_USignInAnonymouslyProxy_SignInAnonymously_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USignInAnonymouslyProxy_SignInAnonymously_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USignInAnonymouslyProxy_SignInAnonymously_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USignInAnonymouslyProxy_SignInAnonymously_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USignInAnonymouslyProxy_SignInAnonymously()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USignInAnonymouslyProxy_SignInAnonymously_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USignInAnonymouslyProxy_NoRegister()
	{
		return USignInAnonymouslyProxy::StaticClass();
	}
	struct Z_Construct_UClass_USignInAnonymouslyProxy_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnSignedIn_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSignedIn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnError_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnError;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USignInAnonymouslyProxy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_FirebaseFeatures,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USignInAnonymouslyProxy_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USignInAnonymouslyProxy_SignInAnonymously, "SignInAnonymously" }, // 1178035164
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USignInAnonymouslyProxy_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Auth/AuthNodes.h" },
		{ "ModuleRelativePath", "Private/Auth/AuthNodes.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USignInAnonymouslyProxy_Statics::NewProp_OnSignedIn_MetaData[] = {
		{ "ModuleRelativePath", "Private/Auth/AuthNodes.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USignInAnonymouslyProxy_Statics::NewProp_OnSignedIn = { "OnSignedIn", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USignInAnonymouslyProxy, OnSignedIn), Z_Construct_UDelegateFunction_FirebaseFeatures_DynMultSignInUserCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USignInAnonymouslyProxy_Statics::NewProp_OnSignedIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USignInAnonymouslyProxy_Statics::NewProp_OnSignedIn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USignInAnonymouslyProxy_Statics::NewProp_OnError_MetaData[] = {
		{ "ModuleRelativePath", "Private/Auth/AuthNodes.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USignInAnonymouslyProxy_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USignInAnonymouslyProxy, OnError), Z_Construct_UDelegateFunction_FirebaseFeatures_DynMultSignInUserCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USignInAnonymouslyProxy_Statics::NewProp_OnError_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USignInAnonymouslyProxy_Statics::NewProp_OnError_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USignInAnonymouslyProxy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USignInAnonymouslyProxy_Statics::NewProp_OnSignedIn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USignInAnonymouslyProxy_Statics::NewProp_OnError,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USignInAnonymouslyProxy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USignInAnonymouslyProxy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USignInAnonymouslyProxy_Statics::ClassParams = {
		&USignInAnonymouslyProxy::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USignInAnonymouslyProxy_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USignInAnonymouslyProxy_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USignInAnonymouslyProxy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USignInAnonymouslyProxy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USignInAnonymouslyProxy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USignInAnonymouslyProxy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USignInAnonymouslyProxy, 3937915533);
	template<> FIREBASEFEATURES_API UClass* StaticClass<USignInAnonymouslyProxy>()
	{
		return USignInAnonymouslyProxy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USignInAnonymouslyProxy(Z_Construct_UClass_USignInAnonymouslyProxy, &USignInAnonymouslyProxy::StaticClass, TEXT("/Script/FirebaseFeatures"), TEXT("USignInAnonymouslyProxy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USignInAnonymouslyProxy);
	DEFINE_FUNCTION(USignInWithEmailAndPasswordProxy::execSignInWithEmailAndPassword)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Email);
		P_GET_PROPERTY(FStrProperty,Z_Param_Password);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USignInWithEmailAndPasswordProxy**)Z_Param__Result=USignInWithEmailAndPasswordProxy::SignInWithEmailAndPassword(Z_Param_Email,Z_Param_Password);
		P_NATIVE_END;
	}
	void USignInWithEmailAndPasswordProxy::StaticRegisterNativesUSignInWithEmailAndPasswordProxy()
	{
		UClass* Class = USignInWithEmailAndPasswordProxy::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SignInWithEmailAndPassword", &USignInWithEmailAndPasswordProxy::execSignInWithEmailAndPassword },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USignInWithEmailAndPasswordProxy_SignInWithEmailAndPassword_Statics
	{
		struct SignInWithEmailAndPasswordProxy_eventSignInWithEmailAndPassword_Parms
		{
			FString Email;
			FString Password;
			USignInWithEmailAndPasswordProxy* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Email_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Email;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Password_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Password;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USignInWithEmailAndPasswordProxy_SignInWithEmailAndPassword_Statics::NewProp_Email_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USignInWithEmailAndPasswordProxy_SignInWithEmailAndPassword_Statics::NewProp_Email = { "Email", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SignInWithEmailAndPasswordProxy_eventSignInWithEmailAndPassword_Parms, Email), METADATA_PARAMS(Z_Construct_UFunction_USignInWithEmailAndPasswordProxy_SignInWithEmailAndPassword_Statics::NewProp_Email_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USignInWithEmailAndPasswordProxy_SignInWithEmailAndPassword_Statics::NewProp_Email_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USignInWithEmailAndPasswordProxy_SignInWithEmailAndPassword_Statics::NewProp_Password_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USignInWithEmailAndPasswordProxy_SignInWithEmailAndPassword_Statics::NewProp_Password = { "Password", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SignInWithEmailAndPasswordProxy_eventSignInWithEmailAndPassword_Parms, Password), METADATA_PARAMS(Z_Construct_UFunction_USignInWithEmailAndPasswordProxy_SignInWithEmailAndPassword_Statics::NewProp_Password_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USignInWithEmailAndPasswordProxy_SignInWithEmailAndPassword_Statics::NewProp_Password_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USignInWithEmailAndPasswordProxy_SignInWithEmailAndPassword_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SignInWithEmailAndPasswordProxy_eventSignInWithEmailAndPassword_Parms, ReturnValue), Z_Construct_UClass_USignInWithEmailAndPasswordProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USignInWithEmailAndPasswordProxy_SignInWithEmailAndPassword_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USignInWithEmailAndPasswordProxy_SignInWithEmailAndPassword_Statics::NewProp_Email,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USignInWithEmailAndPasswordProxy_SignInWithEmailAndPassword_Statics::NewProp_Password,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USignInWithEmailAndPasswordProxy_SignInWithEmailAndPassword_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USignInWithEmailAndPasswordProxy_SignInWithEmailAndPassword_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Firebase|Auth" },
		{ "Comment", "/// Signs in using provided email address and password.\n/// An error is returned if the password is wrong or otherwise not accepted\n/// by the server.\n" },
		{ "DisplayName", "Sign In with Email and Password" },
		{ "ModuleRelativePath", "Private/Auth/AuthNodes.h" },
		{ "ToolTip", "Signs in using provided email address and password.\nAn error is returned if the password is wrong or otherwise not accepted\nby the server." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USignInWithEmailAndPasswordProxy_SignInWithEmailAndPassword_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USignInWithEmailAndPasswordProxy, nullptr, "SignInWithEmailAndPassword", nullptr, nullptr, sizeof(SignInWithEmailAndPasswordProxy_eventSignInWithEmailAndPassword_Parms), Z_Construct_UFunction_USignInWithEmailAndPasswordProxy_SignInWithEmailAndPassword_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USignInWithEmailAndPasswordProxy_SignInWithEmailAndPassword_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USignInWithEmailAndPasswordProxy_SignInWithEmailAndPassword_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USignInWithEmailAndPasswordProxy_SignInWithEmailAndPassword_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USignInWithEmailAndPasswordProxy_SignInWithEmailAndPassword()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USignInWithEmailAndPasswordProxy_SignInWithEmailAndPassword_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USignInWithEmailAndPasswordProxy_NoRegister()
	{
		return USignInWithEmailAndPasswordProxy::StaticClass();
	}
	struct Z_Construct_UClass_USignInWithEmailAndPasswordProxy_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnSignedIn_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSignedIn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnError_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnError;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USignInWithEmailAndPasswordProxy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_FirebaseFeatures,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USignInWithEmailAndPasswordProxy_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USignInWithEmailAndPasswordProxy_SignInWithEmailAndPassword, "SignInWithEmailAndPassword" }, // 2942297688
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USignInWithEmailAndPasswordProxy_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Auth/AuthNodes.h" },
		{ "ModuleRelativePath", "Private/Auth/AuthNodes.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USignInWithEmailAndPasswordProxy_Statics::NewProp_OnSignedIn_MetaData[] = {
		{ "ModuleRelativePath", "Private/Auth/AuthNodes.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USignInWithEmailAndPasswordProxy_Statics::NewProp_OnSignedIn = { "OnSignedIn", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USignInWithEmailAndPasswordProxy, OnSignedIn), Z_Construct_UDelegateFunction_FirebaseFeatures_DynMultSignInUserCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USignInWithEmailAndPasswordProxy_Statics::NewProp_OnSignedIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USignInWithEmailAndPasswordProxy_Statics::NewProp_OnSignedIn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USignInWithEmailAndPasswordProxy_Statics::NewProp_OnError_MetaData[] = {
		{ "ModuleRelativePath", "Private/Auth/AuthNodes.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USignInWithEmailAndPasswordProxy_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USignInWithEmailAndPasswordProxy, OnError), Z_Construct_UDelegateFunction_FirebaseFeatures_DynMultSignInUserCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USignInWithEmailAndPasswordProxy_Statics::NewProp_OnError_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USignInWithEmailAndPasswordProxy_Statics::NewProp_OnError_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USignInWithEmailAndPasswordProxy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USignInWithEmailAndPasswordProxy_Statics::NewProp_OnSignedIn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USignInWithEmailAndPasswordProxy_Statics::NewProp_OnError,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USignInWithEmailAndPasswordProxy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USignInWithEmailAndPasswordProxy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USignInWithEmailAndPasswordProxy_Statics::ClassParams = {
		&USignInWithEmailAndPasswordProxy::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USignInWithEmailAndPasswordProxy_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USignInWithEmailAndPasswordProxy_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USignInWithEmailAndPasswordProxy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USignInWithEmailAndPasswordProxy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USignInWithEmailAndPasswordProxy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USignInWithEmailAndPasswordProxy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USignInWithEmailAndPasswordProxy, 3207089355);
	template<> FIREBASEFEATURES_API UClass* StaticClass<USignInWithEmailAndPasswordProxy>()
	{
		return USignInWithEmailAndPasswordProxy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USignInWithEmailAndPasswordProxy(Z_Construct_UClass_USignInWithEmailAndPasswordProxy, &USignInWithEmailAndPasswordProxy::StaticClass, TEXT("/Script/FirebaseFeatures"), TEXT("USignInWithEmailAndPasswordProxy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USignInWithEmailAndPasswordProxy);
	DEFINE_FUNCTION(UCreateUserWithEmailAndPasswordProxy::execCreateUserWithEmailAndPassword)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Email);
		P_GET_PROPERTY(FStrProperty,Z_Param_Password);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UCreateUserWithEmailAndPasswordProxy**)Z_Param__Result=UCreateUserWithEmailAndPasswordProxy::CreateUserWithEmailAndPassword(Z_Param_Email,Z_Param_Password);
		P_NATIVE_END;
	}
	void UCreateUserWithEmailAndPasswordProxy::StaticRegisterNativesUCreateUserWithEmailAndPasswordProxy()
	{
		UClass* Class = UCreateUserWithEmailAndPasswordProxy::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateUserWithEmailAndPassword", &UCreateUserWithEmailAndPasswordProxy::execCreateUserWithEmailAndPassword },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCreateUserWithEmailAndPasswordProxy_CreateUserWithEmailAndPassword_Statics
	{
		struct CreateUserWithEmailAndPasswordProxy_eventCreateUserWithEmailAndPassword_Parms
		{
			FString Email;
			FString Password;
			UCreateUserWithEmailAndPasswordProxy* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Email_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Email;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Password_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Password;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCreateUserWithEmailAndPasswordProxy_CreateUserWithEmailAndPassword_Statics::NewProp_Email_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCreateUserWithEmailAndPasswordProxy_CreateUserWithEmailAndPassword_Statics::NewProp_Email = { "Email", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CreateUserWithEmailAndPasswordProxy_eventCreateUserWithEmailAndPassword_Parms, Email), METADATA_PARAMS(Z_Construct_UFunction_UCreateUserWithEmailAndPasswordProxy_CreateUserWithEmailAndPassword_Statics::NewProp_Email_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCreateUserWithEmailAndPasswordProxy_CreateUserWithEmailAndPassword_Statics::NewProp_Email_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCreateUserWithEmailAndPasswordProxy_CreateUserWithEmailAndPassword_Statics::NewProp_Password_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCreateUserWithEmailAndPasswordProxy_CreateUserWithEmailAndPassword_Statics::NewProp_Password = { "Password", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CreateUserWithEmailAndPasswordProxy_eventCreateUserWithEmailAndPassword_Parms, Password), METADATA_PARAMS(Z_Construct_UFunction_UCreateUserWithEmailAndPasswordProxy_CreateUserWithEmailAndPassword_Statics::NewProp_Password_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCreateUserWithEmailAndPasswordProxy_CreateUserWithEmailAndPassword_Statics::NewProp_Password_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCreateUserWithEmailAndPasswordProxy_CreateUserWithEmailAndPassword_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CreateUserWithEmailAndPasswordProxy_eventCreateUserWithEmailAndPassword_Parms, ReturnValue), Z_Construct_UClass_UCreateUserWithEmailAndPasswordProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCreateUserWithEmailAndPasswordProxy_CreateUserWithEmailAndPassword_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCreateUserWithEmailAndPasswordProxy_CreateUserWithEmailAndPassword_Statics::NewProp_Email,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCreateUserWithEmailAndPasswordProxy_CreateUserWithEmailAndPassword_Statics::NewProp_Password,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCreateUserWithEmailAndPasswordProxy_CreateUserWithEmailAndPassword_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCreateUserWithEmailAndPasswordProxy_CreateUserWithEmailAndPassword_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Firebase|Auth" },
		{ "Comment", "/// Creates, and on success, logs in a user with the given email address\n/// and password.\n/// An error is returned when account creation is unsuccessful\n/// (due to another existing account, invalid password, etc.).\n" },
		{ "DisplayName", "Create User with Email and Password" },
		{ "ModuleRelativePath", "Private/Auth/AuthNodes.h" },
		{ "ToolTip", "Creates, and on success, logs in a user with the given email address\nand password.\nAn error is returned when account creation is unsuccessful\n(due to another existing account, invalid password, etc.)." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCreateUserWithEmailAndPasswordProxy_CreateUserWithEmailAndPassword_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCreateUserWithEmailAndPasswordProxy, nullptr, "CreateUserWithEmailAndPassword", nullptr, nullptr, sizeof(CreateUserWithEmailAndPasswordProxy_eventCreateUserWithEmailAndPassword_Parms), Z_Construct_UFunction_UCreateUserWithEmailAndPasswordProxy_CreateUserWithEmailAndPassword_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCreateUserWithEmailAndPasswordProxy_CreateUserWithEmailAndPassword_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCreateUserWithEmailAndPasswordProxy_CreateUserWithEmailAndPassword_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCreateUserWithEmailAndPasswordProxy_CreateUserWithEmailAndPassword_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCreateUserWithEmailAndPasswordProxy_CreateUserWithEmailAndPassword()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCreateUserWithEmailAndPasswordProxy_CreateUserWithEmailAndPassword_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCreateUserWithEmailAndPasswordProxy_NoRegister()
	{
		return UCreateUserWithEmailAndPasswordProxy::StaticClass();
	}
	struct Z_Construct_UClass_UCreateUserWithEmailAndPasswordProxy_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnUserCreated_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnUserCreated;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnError_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnError;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCreateUserWithEmailAndPasswordProxy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_FirebaseFeatures,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCreateUserWithEmailAndPasswordProxy_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCreateUserWithEmailAndPasswordProxy_CreateUserWithEmailAndPassword, "CreateUserWithEmailAndPassword" }, // 192710384
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCreateUserWithEmailAndPasswordProxy_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Auth/AuthNodes.h" },
		{ "ModuleRelativePath", "Private/Auth/AuthNodes.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCreateUserWithEmailAndPasswordProxy_Statics::NewProp_OnUserCreated_MetaData[] = {
		{ "ModuleRelativePath", "Private/Auth/AuthNodes.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCreateUserWithEmailAndPasswordProxy_Statics::NewProp_OnUserCreated = { "OnUserCreated", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCreateUserWithEmailAndPasswordProxy, OnUserCreated), Z_Construct_UDelegateFunction_FirebaseFeatures_DynMultSignInUserCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCreateUserWithEmailAndPasswordProxy_Statics::NewProp_OnUserCreated_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCreateUserWithEmailAndPasswordProxy_Statics::NewProp_OnUserCreated_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCreateUserWithEmailAndPasswordProxy_Statics::NewProp_OnError_MetaData[] = {
		{ "ModuleRelativePath", "Private/Auth/AuthNodes.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCreateUserWithEmailAndPasswordProxy_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCreateUserWithEmailAndPasswordProxy, OnError), Z_Construct_UDelegateFunction_FirebaseFeatures_DynMultSignInUserCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCreateUserWithEmailAndPasswordProxy_Statics::NewProp_OnError_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCreateUserWithEmailAndPasswordProxy_Statics::NewProp_OnError_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCreateUserWithEmailAndPasswordProxy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCreateUserWithEmailAndPasswordProxy_Statics::NewProp_OnUserCreated,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCreateUserWithEmailAndPasswordProxy_Statics::NewProp_OnError,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCreateUserWithEmailAndPasswordProxy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCreateUserWithEmailAndPasswordProxy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCreateUserWithEmailAndPasswordProxy_Statics::ClassParams = {
		&UCreateUserWithEmailAndPasswordProxy::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCreateUserWithEmailAndPasswordProxy_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCreateUserWithEmailAndPasswordProxy_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCreateUserWithEmailAndPasswordProxy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCreateUserWithEmailAndPasswordProxy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCreateUserWithEmailAndPasswordProxy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCreateUserWithEmailAndPasswordProxy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCreateUserWithEmailAndPasswordProxy, 2614887111);
	template<> FIREBASEFEATURES_API UClass* StaticClass<UCreateUserWithEmailAndPasswordProxy>()
	{
		return UCreateUserWithEmailAndPasswordProxy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCreateUserWithEmailAndPasswordProxy(Z_Construct_UClass_UCreateUserWithEmailAndPasswordProxy, &UCreateUserWithEmailAndPasswordProxy::StaticClass, TEXT("/Script/FirebaseFeatures"), TEXT("UCreateUserWithEmailAndPasswordProxy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCreateUserWithEmailAndPasswordProxy);
	DEFINE_FUNCTION(USendPasswordResetEmailProxy::execSendPasswordResetEmail)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Email);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USendPasswordResetEmailProxy**)Z_Param__Result=USendPasswordResetEmailProxy::SendPasswordResetEmail(Z_Param_Email);
		P_NATIVE_END;
	}
	void USendPasswordResetEmailProxy::StaticRegisterNativesUSendPasswordResetEmailProxy()
	{
		UClass* Class = USendPasswordResetEmailProxy::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SendPasswordResetEmail", &USendPasswordResetEmailProxy::execSendPasswordResetEmail },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USendPasswordResetEmailProxy_SendPasswordResetEmail_Statics
	{
		struct SendPasswordResetEmailProxy_eventSendPasswordResetEmail_Parms
		{
			FString Email;
			USendPasswordResetEmailProxy* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Email_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Email;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USendPasswordResetEmailProxy_SendPasswordResetEmail_Statics::NewProp_Email_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USendPasswordResetEmailProxy_SendPasswordResetEmail_Statics::NewProp_Email = { "Email", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SendPasswordResetEmailProxy_eventSendPasswordResetEmail_Parms, Email), METADATA_PARAMS(Z_Construct_UFunction_USendPasswordResetEmailProxy_SendPasswordResetEmail_Statics::NewProp_Email_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USendPasswordResetEmailProxy_SendPasswordResetEmail_Statics::NewProp_Email_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USendPasswordResetEmailProxy_SendPasswordResetEmail_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SendPasswordResetEmailProxy_eventSendPasswordResetEmail_Parms, ReturnValue), Z_Construct_UClass_USendPasswordResetEmailProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USendPasswordResetEmailProxy_SendPasswordResetEmail_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USendPasswordResetEmailProxy_SendPasswordResetEmail_Statics::NewProp_Email,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USendPasswordResetEmailProxy_SendPasswordResetEmail_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USendPasswordResetEmailProxy_SendPasswordResetEmail_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Firebase|Auth" },
		{ "Comment", "/// Initiates a password reset for the given email address.\n/// If the email address is not registered, then the callback has a\n/// status of IsFaulted.\n" },
		{ "DisplayName", "Send Password Reset Email" },
		{ "ModuleRelativePath", "Private/Auth/AuthNodes.h" },
		{ "ToolTip", "Initiates a password reset for the given email address.\nIf the email address is not registered, then the callback has a\nstatus of IsFaulted." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USendPasswordResetEmailProxy_SendPasswordResetEmail_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USendPasswordResetEmailProxy, nullptr, "SendPasswordResetEmail", nullptr, nullptr, sizeof(SendPasswordResetEmailProxy_eventSendPasswordResetEmail_Parms), Z_Construct_UFunction_USendPasswordResetEmailProxy_SendPasswordResetEmail_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USendPasswordResetEmailProxy_SendPasswordResetEmail_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USendPasswordResetEmailProxy_SendPasswordResetEmail_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USendPasswordResetEmailProxy_SendPasswordResetEmail_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USendPasswordResetEmailProxy_SendPasswordResetEmail()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USendPasswordResetEmailProxy_SendPasswordResetEmail_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USendPasswordResetEmailProxy_NoRegister()
	{
		return USendPasswordResetEmailProxy::StaticClass();
	}
	struct Z_Construct_UClass_USendPasswordResetEmailProxy_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnEmailSent_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnEmailSent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnError_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnError;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USendPasswordResetEmailProxy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_FirebaseFeatures,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USendPasswordResetEmailProxy_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USendPasswordResetEmailProxy_SendPasswordResetEmail, "SendPasswordResetEmail" }, // 381136448
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USendPasswordResetEmailProxy_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Auth/AuthNodes.h" },
		{ "ModuleRelativePath", "Private/Auth/AuthNodes.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USendPasswordResetEmailProxy_Statics::NewProp_OnEmailSent_MetaData[] = {
		{ "ModuleRelativePath", "Private/Auth/AuthNodes.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USendPasswordResetEmailProxy_Statics::NewProp_OnEmailSent = { "OnEmailSent", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USendPasswordResetEmailProxy, OnEmailSent), Z_Construct_UDelegateFunction_FirebaseFeatures_DynMultiVoidCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USendPasswordResetEmailProxy_Statics::NewProp_OnEmailSent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USendPasswordResetEmailProxy_Statics::NewProp_OnEmailSent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USendPasswordResetEmailProxy_Statics::NewProp_OnError_MetaData[] = {
		{ "ModuleRelativePath", "Private/Auth/AuthNodes.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USendPasswordResetEmailProxy_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USendPasswordResetEmailProxy, OnError), Z_Construct_UDelegateFunction_FirebaseFeatures_DynMultiVoidCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USendPasswordResetEmailProxy_Statics::NewProp_OnError_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USendPasswordResetEmailProxy_Statics::NewProp_OnError_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USendPasswordResetEmailProxy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USendPasswordResetEmailProxy_Statics::NewProp_OnEmailSent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USendPasswordResetEmailProxy_Statics::NewProp_OnError,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USendPasswordResetEmailProxy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USendPasswordResetEmailProxy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USendPasswordResetEmailProxy_Statics::ClassParams = {
		&USendPasswordResetEmailProxy::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USendPasswordResetEmailProxy_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USendPasswordResetEmailProxy_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USendPasswordResetEmailProxy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USendPasswordResetEmailProxy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USendPasswordResetEmailProxy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USendPasswordResetEmailProxy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USendPasswordResetEmailProxy, 613603650);
	template<> FIREBASEFEATURES_API UClass* StaticClass<USendPasswordResetEmailProxy>()
	{
		return USendPasswordResetEmailProxy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USendPasswordResetEmailProxy(Z_Construct_UClass_USendPasswordResetEmailProxy, &USendPasswordResetEmailProxy::StaticClass, TEXT("/Script/FirebaseFeatures"), TEXT("USendPasswordResetEmailProxy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USendPasswordResetEmailProxy);
	DEFINE_FUNCTION(UListenAuthEventsProxy::execListenAuthEvents)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UListenAuthEventsProxy**)Z_Param__Result=UListenAuthEventsProxy::ListenAuthEvents();
		P_NATIVE_END;
	}
	void UListenAuthEventsProxy::StaticRegisterNativesUListenAuthEventsProxy()
	{
		UClass* Class = UListenAuthEventsProxy::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ListenAuthEvents", &UListenAuthEventsProxy::execListenAuthEvents },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UListenAuthEventsProxy_ListenAuthEvents_Statics
	{
		struct ListenAuthEventsProxy_eventListenAuthEvents_Parms
		{
			UListenAuthEventsProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UListenAuthEventsProxy_ListenAuthEvents_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ListenAuthEventsProxy_eventListenAuthEvents_Parms, ReturnValue), Z_Construct_UClass_UListenAuthEventsProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UListenAuthEventsProxy_ListenAuthEvents_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UListenAuthEventsProxy_ListenAuthEvents_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UListenAuthEventsProxy_ListenAuthEvents_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Firebase|Auth" },
		{ "Comment", "/**\n\x09 * Listens to the Auth events.\n\x09*/" },
		{ "DisplayName", "Listen Auth Events" },
		{ "ModuleRelativePath", "Private/Auth/AuthNodes.h" },
		{ "ToolTip", "Listens to the Auth events." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UListenAuthEventsProxy_ListenAuthEvents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UListenAuthEventsProxy, nullptr, "ListenAuthEvents", nullptr, nullptr, sizeof(ListenAuthEventsProxy_eventListenAuthEvents_Parms), Z_Construct_UFunction_UListenAuthEventsProxy_ListenAuthEvents_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UListenAuthEventsProxy_ListenAuthEvents_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UListenAuthEventsProxy_ListenAuthEvents_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UListenAuthEventsProxy_ListenAuthEvents_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UListenAuthEventsProxy_ListenAuthEvents()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UListenAuthEventsProxy_ListenAuthEvents_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UListenAuthEventsProxy_NoRegister()
	{
		return UListenAuthEventsProxy::StaticClass();
	}
	struct Z_Construct_UClass_UListenAuthEventsProxy_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnAuthChanged_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAuthChanged;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnIdTokenChanged_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnIdTokenChanged;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UListenAuthEventsProxy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_FirebaseFeatures,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UListenAuthEventsProxy_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UListenAuthEventsProxy_ListenAuthEvents, "ListenAuthEvents" }, // 3226405429
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UListenAuthEventsProxy_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Auth/AuthNodes.h" },
		{ "ModuleRelativePath", "Private/Auth/AuthNodes.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UListenAuthEventsProxy_Statics::NewProp_OnAuthChanged_MetaData[] = {
		{ "ModuleRelativePath", "Private/Auth/AuthNodes.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UListenAuthEventsProxy_Statics::NewProp_OnAuthChanged = { "OnAuthChanged", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UListenAuthEventsProxy, OnAuthChanged), Z_Construct_UDelegateFunction_FirebaseFeatures_DynMultOnEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UListenAuthEventsProxy_Statics::NewProp_OnAuthChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UListenAuthEventsProxy_Statics::NewProp_OnAuthChanged_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UListenAuthEventsProxy_Statics::NewProp_OnIdTokenChanged_MetaData[] = {
		{ "ModuleRelativePath", "Private/Auth/AuthNodes.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UListenAuthEventsProxy_Statics::NewProp_OnIdTokenChanged = { "OnIdTokenChanged", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UListenAuthEventsProxy, OnIdTokenChanged), Z_Construct_UDelegateFunction_FirebaseFeatures_DynMultOnEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UListenAuthEventsProxy_Statics::NewProp_OnIdTokenChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UListenAuthEventsProxy_Statics::NewProp_OnIdTokenChanged_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UListenAuthEventsProxy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UListenAuthEventsProxy_Statics::NewProp_OnAuthChanged,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UListenAuthEventsProxy_Statics::NewProp_OnIdTokenChanged,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UListenAuthEventsProxy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UListenAuthEventsProxy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UListenAuthEventsProxy_Statics::ClassParams = {
		&UListenAuthEventsProxy::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UListenAuthEventsProxy_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UListenAuthEventsProxy_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UListenAuthEventsProxy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UListenAuthEventsProxy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UListenAuthEventsProxy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UListenAuthEventsProxy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UListenAuthEventsProxy, 4279134933);
	template<> FIREBASEFEATURES_API UClass* StaticClass<UListenAuthEventsProxy>()
	{
		return UListenAuthEventsProxy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UListenAuthEventsProxy(Z_Construct_UClass_UListenAuthEventsProxy, &UListenAuthEventsProxy::StaticClass, TEXT("/Script/FirebaseFeatures"), TEXT("UListenAuthEventsProxy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UListenAuthEventsProxy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
