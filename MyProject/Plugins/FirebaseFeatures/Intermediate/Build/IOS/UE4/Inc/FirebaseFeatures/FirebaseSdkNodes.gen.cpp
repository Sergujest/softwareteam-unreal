// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FirebaseFeatures/Private/FirebaseSdk/FirebaseSdkNodes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFirebaseSdkNodes() {}
// Cross Module References
	FIREBASEFEATURES_API UFunction* Z_Construct_UDelegateFunction_FirebaseFeatures_DynMulOnFbInit__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_FirebaseFeatures();
	FIREBASEFEATURES_API UClass* Z_Construct_UClass_UFirebaseInitializationProxy_NoRegister();
	FIREBASEFEATURES_API UClass* Z_Construct_UClass_UFirebaseInitializationProxy();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_FirebaseFeatures_DynMulOnFbInit__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_FirebaseFeatures_DynMulOnFbInit__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/FirebaseSdk/FirebaseSdkNodes.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_FirebaseFeatures_DynMulOnFbInit__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_FirebaseFeatures, nullptr, "DynMulOnFbInit__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_FirebaseFeatures_DynMulOnFbInit__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_FirebaseFeatures_DynMulOnFbInit__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_FirebaseFeatures_DynMulOnFbInit__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_FirebaseFeatures_DynMulOnFbInit__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UFirebaseInitializationProxy::execWaitForInitialization)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UFirebaseInitializationProxy**)Z_Param__Result=UFirebaseInitializationProxy::WaitForInitialization();
		P_NATIVE_END;
	}
	void UFirebaseInitializationProxy::StaticRegisterNativesUFirebaseInitializationProxy()
	{
		UClass* Class = UFirebaseInitializationProxy::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "WaitForInitialization", &UFirebaseInitializationProxy::execWaitForInitialization },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFirebaseInitializationProxy_WaitForInitialization_Statics
	{
		struct FirebaseInitializationProxy_eventWaitForInitialization_Parms
		{
			UFirebaseInitializationProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFirebaseInitializationProxy_WaitForInitialization_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirebaseInitializationProxy_eventWaitForInitialization_Parms, ReturnValue), Z_Construct_UClass_UFirebaseInitializationProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFirebaseInitializationProxy_WaitForInitialization_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseInitializationProxy_WaitForInitialization_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseInitializationProxy_WaitForInitialization_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Firebase" },
		{ "DisplayName", "Wait for Firebase SDK Initialization" },
		{ "ModuleRelativePath", "Private/FirebaseSdk/FirebaseSdkNodes.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFirebaseInitializationProxy_WaitForInitialization_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFirebaseInitializationProxy, nullptr, "WaitForInitialization", nullptr, nullptr, sizeof(FirebaseInitializationProxy_eventWaitForInitialization_Parms), Z_Construct_UFunction_UFirebaseInitializationProxy_WaitForInitialization_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseInitializationProxy_WaitForInitialization_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFirebaseInitializationProxy_WaitForInitialization_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseInitializationProxy_WaitForInitialization_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFirebaseInitializationProxy_WaitForInitialization()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFirebaseInitializationProxy_WaitForInitialization_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFirebaseInitializationProxy_NoRegister()
	{
		return UFirebaseInitializationProxy::StaticClass();
	}
	struct Z_Construct_UClass_UFirebaseInitializationProxy_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FirebaseInitialized_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_FirebaseInitialized;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFirebaseInitializationProxy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_FirebaseFeatures,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFirebaseInitializationProxy_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFirebaseInitializationProxy_WaitForInitialization, "WaitForInitialization" }, // 2116621095
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFirebaseInitializationProxy_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FirebaseSdk/FirebaseSdkNodes.h" },
		{ "ModuleRelativePath", "Private/FirebaseSdk/FirebaseSdkNodes.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFirebaseInitializationProxy_Statics::NewProp_FirebaseInitialized_MetaData[] = {
		{ "ModuleRelativePath", "Private/FirebaseSdk/FirebaseSdkNodes.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UFirebaseInitializationProxy_Statics::NewProp_FirebaseInitialized = { "FirebaseInitialized", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFirebaseInitializationProxy, FirebaseInitialized), Z_Construct_UDelegateFunction_FirebaseFeatures_DynMulOnFbInit__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UFirebaseInitializationProxy_Statics::NewProp_FirebaseInitialized_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFirebaseInitializationProxy_Statics::NewProp_FirebaseInitialized_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFirebaseInitializationProxy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFirebaseInitializationProxy_Statics::NewProp_FirebaseInitialized,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFirebaseInitializationProxy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFirebaseInitializationProxy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFirebaseInitializationProxy_Statics::ClassParams = {
		&UFirebaseInitializationProxy::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UFirebaseInitializationProxy_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UFirebaseInitializationProxy_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFirebaseInitializationProxy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFirebaseInitializationProxy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFirebaseInitializationProxy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFirebaseInitializationProxy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFirebaseInitializationProxy, 1293151543);
	template<> FIREBASEFEATURES_API UClass* StaticClass<UFirebaseInitializationProxy>()
	{
		return UFirebaseInitializationProxy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFirebaseInitializationProxy(Z_Construct_UClass_UFirebaseInitializationProxy, &UFirebaseInitializationProxy::StaticClass, TEXT("/Script/FirebaseFeatures"), TEXT("UFirebaseInitializationProxy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFirebaseInitializationProxy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
