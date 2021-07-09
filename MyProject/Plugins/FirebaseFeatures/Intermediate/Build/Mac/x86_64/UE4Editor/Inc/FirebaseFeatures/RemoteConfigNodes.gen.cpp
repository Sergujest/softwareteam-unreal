// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FirebaseFeatures/Private/RemoteConfig/RemoteConfigNodes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRemoteConfigNodes() {}
// Cross Module References
	FIREBASEFEATURES_API UFunction* Z_Construct_UDelegateFunction_FirebaseFeatures_DynMultOnFetched__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_FirebaseFeatures();
	FIREBASEFEATURES_API UClass* Z_Construct_UClass_UFetchProxy_NoRegister();
	FIREBASEFEATURES_API UClass* Z_Construct_UClass_UFetchProxy();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
	FIREBASEFEATURES_API UClass* Z_Construct_UClass_UFetchWithCacheExpirationProxy_NoRegister();
	FIREBASEFEATURES_API UClass* Z_Construct_UClass_UFetchWithCacheExpirationProxy();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_FirebaseFeatures_DynMultOnFetched__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_FirebaseFeatures_DynMultOnFetched__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/RemoteConfig/RemoteConfigNodes.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_FirebaseFeatures_DynMultOnFetched__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_FirebaseFeatures, nullptr, "DynMultOnFetched__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_FirebaseFeatures_DynMultOnFetched__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_FirebaseFeatures_DynMultOnFetched__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_FirebaseFeatures_DynMultOnFetched__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_FirebaseFeatures_DynMultOnFetched__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UFetchProxy::execFetch)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UFetchProxy**)Z_Param__Result=UFetchProxy::Fetch();
		P_NATIVE_END;
	}
	void UFetchProxy::StaticRegisterNativesUFetchProxy()
	{
		UClass* Class = UFetchProxy::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Fetch", &UFetchProxy::execFetch },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFetchProxy_Fetch_Statics
	{
		struct FetchProxy_eventFetch_Parms
		{
			UFetchProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFetchProxy_Fetch_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FetchProxy_eventFetch_Parms, ReturnValue), Z_Construct_UClass_UFetchProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFetchProxy_Fetch_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFetchProxy_Fetch_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFetchProxy_Fetch_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Firebase|RemoteConfig" },
		{ "DisplayName", "Fetch" },
		{ "ModuleRelativePath", "Private/RemoteConfig/RemoteConfigNodes.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFetchProxy_Fetch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFetchProxy, nullptr, "Fetch", nullptr, nullptr, sizeof(FetchProxy_eventFetch_Parms), Z_Construct_UFunction_UFetchProxy_Fetch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFetchProxy_Fetch_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFetchProxy_Fetch_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFetchProxy_Fetch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFetchProxy_Fetch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFetchProxy_Fetch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFetchProxy_NoRegister()
	{
		return UFetchProxy::StaticClass();
	}
	struct Z_Construct_UClass_UFetchProxy_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnFetched_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFetched;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFetchProxy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_FirebaseFeatures,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFetchProxy_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFetchProxy_Fetch, "Fetch" }, // 920597311
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFetchProxy_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "RemoteConfig/RemoteConfigNodes.h" },
		{ "ModuleRelativePath", "Private/RemoteConfig/RemoteConfigNodes.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFetchProxy_Statics::NewProp_OnFetched_MetaData[] = {
		{ "ModuleRelativePath", "Private/RemoteConfig/RemoteConfigNodes.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UFetchProxy_Statics::NewProp_OnFetched = { "OnFetched", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFetchProxy, OnFetched), Z_Construct_UDelegateFunction_FirebaseFeatures_DynMultOnFetched__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UFetchProxy_Statics::NewProp_OnFetched_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFetchProxy_Statics::NewProp_OnFetched_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFetchProxy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFetchProxy_Statics::NewProp_OnFetched,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFetchProxy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFetchProxy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFetchProxy_Statics::ClassParams = {
		&UFetchProxy::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UFetchProxy_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UFetchProxy_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFetchProxy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFetchProxy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFetchProxy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFetchProxy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFetchProxy, 2683127172);
	template<> FIREBASEFEATURES_API UClass* StaticClass<UFetchProxy>()
	{
		return UFetchProxy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFetchProxy(Z_Construct_UClass_UFetchProxy, &UFetchProxy::StaticClass, TEXT("/Script/FirebaseFeatures"), TEXT("UFetchProxy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFetchProxy);
	DEFINE_FUNCTION(UFetchWithCacheExpirationProxy::execFetchWithCacheExpiration)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_CacheExpirationInSeconds);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UFetchWithCacheExpirationProxy**)Z_Param__Result=UFetchWithCacheExpirationProxy::FetchWithCacheExpiration(Z_Param_CacheExpirationInSeconds);
		P_NATIVE_END;
	}
	void UFetchWithCacheExpirationProxy::StaticRegisterNativesUFetchWithCacheExpirationProxy()
	{
		UClass* Class = UFetchWithCacheExpirationProxy::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FetchWithCacheExpiration", &UFetchWithCacheExpirationProxy::execFetchWithCacheExpiration },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFetchWithCacheExpirationProxy_FetchWithCacheExpiration_Statics
	{
		struct FetchWithCacheExpirationProxy_eventFetchWithCacheExpiration_Parms
		{
			int32 CacheExpirationInSeconds;
			UFetchWithCacheExpirationProxy* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CacheExpirationInSeconds_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CacheExpirationInSeconds;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFetchWithCacheExpirationProxy_FetchWithCacheExpiration_Statics::NewProp_CacheExpirationInSeconds_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFetchWithCacheExpirationProxy_FetchWithCacheExpiration_Statics::NewProp_CacheExpirationInSeconds = { "CacheExpirationInSeconds", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FetchWithCacheExpirationProxy_eventFetchWithCacheExpiration_Parms, CacheExpirationInSeconds), METADATA_PARAMS(Z_Construct_UFunction_UFetchWithCacheExpirationProxy_FetchWithCacheExpiration_Statics::NewProp_CacheExpirationInSeconds_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFetchWithCacheExpirationProxy_FetchWithCacheExpiration_Statics::NewProp_CacheExpirationInSeconds_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFetchWithCacheExpirationProxy_FetchWithCacheExpiration_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FetchWithCacheExpirationProxy_eventFetchWithCacheExpiration_Parms, ReturnValue), Z_Construct_UClass_UFetchWithCacheExpirationProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFetchWithCacheExpirationProxy_FetchWithCacheExpiration_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFetchWithCacheExpirationProxy_FetchWithCacheExpiration_Statics::NewProp_CacheExpirationInSeconds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFetchWithCacheExpirationProxy_FetchWithCacheExpiration_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFetchWithCacheExpirationProxy_FetchWithCacheExpiration_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Firebase|RemoteConfig" },
		{ "DisplayName", "Fetch with Cache Expiration" },
		{ "ModuleRelativePath", "Private/RemoteConfig/RemoteConfigNodes.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFetchWithCacheExpirationProxy_FetchWithCacheExpiration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFetchWithCacheExpirationProxy, nullptr, "FetchWithCacheExpiration", nullptr, nullptr, sizeof(FetchWithCacheExpirationProxy_eventFetchWithCacheExpiration_Parms), Z_Construct_UFunction_UFetchWithCacheExpirationProxy_FetchWithCacheExpiration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFetchWithCacheExpirationProxy_FetchWithCacheExpiration_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFetchWithCacheExpirationProxy_FetchWithCacheExpiration_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFetchWithCacheExpirationProxy_FetchWithCacheExpiration_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFetchWithCacheExpirationProxy_FetchWithCacheExpiration()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFetchWithCacheExpirationProxy_FetchWithCacheExpiration_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFetchWithCacheExpirationProxy_NoRegister()
	{
		return UFetchWithCacheExpirationProxy::StaticClass();
	}
	struct Z_Construct_UClass_UFetchWithCacheExpirationProxy_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnFetched_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFetched;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFetchWithCacheExpirationProxy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_FirebaseFeatures,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFetchWithCacheExpirationProxy_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFetchWithCacheExpirationProxy_FetchWithCacheExpiration, "FetchWithCacheExpiration" }, // 867762305
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFetchWithCacheExpirationProxy_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "RemoteConfig/RemoteConfigNodes.h" },
		{ "ModuleRelativePath", "Private/RemoteConfig/RemoteConfigNodes.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFetchWithCacheExpirationProxy_Statics::NewProp_OnFetched_MetaData[] = {
		{ "ModuleRelativePath", "Private/RemoteConfig/RemoteConfigNodes.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UFetchWithCacheExpirationProxy_Statics::NewProp_OnFetched = { "OnFetched", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFetchWithCacheExpirationProxy, OnFetched), Z_Construct_UDelegateFunction_FirebaseFeatures_DynMultOnFetched__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UFetchWithCacheExpirationProxy_Statics::NewProp_OnFetched_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFetchWithCacheExpirationProxy_Statics::NewProp_OnFetched_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFetchWithCacheExpirationProxy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFetchWithCacheExpirationProxy_Statics::NewProp_OnFetched,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFetchWithCacheExpirationProxy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFetchWithCacheExpirationProxy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFetchWithCacheExpirationProxy_Statics::ClassParams = {
		&UFetchWithCacheExpirationProxy::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UFetchWithCacheExpirationProxy_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UFetchWithCacheExpirationProxy_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFetchWithCacheExpirationProxy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFetchWithCacheExpirationProxy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFetchWithCacheExpirationProxy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFetchWithCacheExpirationProxy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFetchWithCacheExpirationProxy, 272508481);
	template<> FIREBASEFEATURES_API UClass* StaticClass<UFetchWithCacheExpirationProxy>()
	{
		return UFetchWithCacheExpirationProxy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFetchWithCacheExpirationProxy(Z_Construct_UClass_UFetchWithCacheExpirationProxy, &UFetchWithCacheExpirationProxy::StaticClass, TEXT("/Script/FirebaseFeatures"), TEXT("UFetchWithCacheExpirationProxy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFetchWithCacheExpirationProxy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
