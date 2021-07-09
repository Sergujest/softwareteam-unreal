// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FirebaseFeatures/Private/Analytics/FirebaseAnalyticsNodes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFirebaseAnalyticsNodes() {}
// Cross Module References
	FIREBASEFEATURES_API UFunction* Z_Construct_UDelegateFunction_FirebaseFeatures_GetAnalyticsInstanceIdCallback__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_FirebaseFeatures();
	FIREBASEFEATURES_API UClass* Z_Construct_UClass_UGetAnalyticsInstanceIdProxy_NoRegister();
	FIREBASEFEATURES_API UClass* Z_Construct_UClass_UGetAnalyticsInstanceIdProxy();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_FirebaseFeatures_GetAnalyticsInstanceIdCallback__DelegateSignature_Statics
	{
		struct _Script_FirebaseFeatures_eventGetAnalyticsInstanceIdCallback_Parms
		{
			FString InstanceId;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InstanceId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InstanceId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_FirebaseFeatures_GetAnalyticsInstanceIdCallback__DelegateSignature_Statics::NewProp_InstanceId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_FirebaseFeatures_GetAnalyticsInstanceIdCallback__DelegateSignature_Statics::NewProp_InstanceId = { "InstanceId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_FirebaseFeatures_eventGetAnalyticsInstanceIdCallback_Parms, InstanceId), METADATA_PARAMS(Z_Construct_UDelegateFunction_FirebaseFeatures_GetAnalyticsInstanceIdCallback__DelegateSignature_Statics::NewProp_InstanceId_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_FirebaseFeatures_GetAnalyticsInstanceIdCallback__DelegateSignature_Statics::NewProp_InstanceId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_FirebaseFeatures_GetAnalyticsInstanceIdCallback__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_FirebaseFeatures_GetAnalyticsInstanceIdCallback__DelegateSignature_Statics::NewProp_InstanceId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_FirebaseFeatures_GetAnalyticsInstanceIdCallback__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Analytics/FirebaseAnalyticsNodes.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_FirebaseFeatures_GetAnalyticsInstanceIdCallback__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_FirebaseFeatures, nullptr, "GetAnalyticsInstanceIdCallback__DelegateSignature", nullptr, nullptr, sizeof(_Script_FirebaseFeatures_eventGetAnalyticsInstanceIdCallback_Parms), Z_Construct_UDelegateFunction_FirebaseFeatures_GetAnalyticsInstanceIdCallback__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_FirebaseFeatures_GetAnalyticsInstanceIdCallback__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_FirebaseFeatures_GetAnalyticsInstanceIdCallback__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_FirebaseFeatures_GetAnalyticsInstanceIdCallback__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_FirebaseFeatures_GetAnalyticsInstanceIdCallback__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_FirebaseFeatures_GetAnalyticsInstanceIdCallback__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UGetAnalyticsInstanceIdProxy::execGetAnalyticsInstanceId)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UGetAnalyticsInstanceIdProxy**)Z_Param__Result=UGetAnalyticsInstanceIdProxy::GetAnalyticsInstanceId();
		P_NATIVE_END;
	}
	void UGetAnalyticsInstanceIdProxy::StaticRegisterNativesUGetAnalyticsInstanceIdProxy()
	{
		UClass* Class = UGetAnalyticsInstanceIdProxy::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAnalyticsInstanceId", &UGetAnalyticsInstanceIdProxy::execGetAnalyticsInstanceId },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGetAnalyticsInstanceIdProxy_GetAnalyticsInstanceId_Statics
	{
		struct GetAnalyticsInstanceIdProxy_eventGetAnalyticsInstanceId_Parms
		{
			UGetAnalyticsInstanceIdProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGetAnalyticsInstanceIdProxy_GetAnalyticsInstanceId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GetAnalyticsInstanceIdProxy_eventGetAnalyticsInstanceId_Parms, ReturnValue), Z_Construct_UClass_UGetAnalyticsInstanceIdProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGetAnalyticsInstanceIdProxy_GetAnalyticsInstanceId_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGetAnalyticsInstanceIdProxy_GetAnalyticsInstanceId_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGetAnalyticsInstanceIdProxy_GetAnalyticsInstanceId_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Firebase|Analytics" },
		{ "ModuleRelativePath", "Private/Analytics/FirebaseAnalyticsNodes.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGetAnalyticsInstanceIdProxy_GetAnalyticsInstanceId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGetAnalyticsInstanceIdProxy, nullptr, "GetAnalyticsInstanceId", nullptr, nullptr, sizeof(GetAnalyticsInstanceIdProxy_eventGetAnalyticsInstanceId_Parms), Z_Construct_UFunction_UGetAnalyticsInstanceIdProxy_GetAnalyticsInstanceId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGetAnalyticsInstanceIdProxy_GetAnalyticsInstanceId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGetAnalyticsInstanceIdProxy_GetAnalyticsInstanceId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGetAnalyticsInstanceIdProxy_GetAnalyticsInstanceId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGetAnalyticsInstanceIdProxy_GetAnalyticsInstanceId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGetAnalyticsInstanceIdProxy_GetAnalyticsInstanceId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UGetAnalyticsInstanceIdProxy_NoRegister()
	{
		return UGetAnalyticsInstanceIdProxy::StaticClass();
	}
	struct Z_Construct_UClass_UGetAnalyticsInstanceIdProxy_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnInstanceIdReceived_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnInstanceIdReceived;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGetAnalyticsInstanceIdProxy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_FirebaseFeatures,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGetAnalyticsInstanceIdProxy_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGetAnalyticsInstanceIdProxy_GetAnalyticsInstanceId, "GetAnalyticsInstanceId" }, // 1623774429
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGetAnalyticsInstanceIdProxy_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Analytics/FirebaseAnalyticsNodes.h" },
		{ "ModuleRelativePath", "Private/Analytics/FirebaseAnalyticsNodes.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGetAnalyticsInstanceIdProxy_Statics::NewProp_OnInstanceIdReceived_MetaData[] = {
		{ "ModuleRelativePath", "Private/Analytics/FirebaseAnalyticsNodes.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGetAnalyticsInstanceIdProxy_Statics::NewProp_OnInstanceIdReceived = { "OnInstanceIdReceived", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGetAnalyticsInstanceIdProxy, OnInstanceIdReceived), Z_Construct_UDelegateFunction_FirebaseFeatures_GetAnalyticsInstanceIdCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UGetAnalyticsInstanceIdProxy_Statics::NewProp_OnInstanceIdReceived_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGetAnalyticsInstanceIdProxy_Statics::NewProp_OnInstanceIdReceived_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGetAnalyticsInstanceIdProxy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGetAnalyticsInstanceIdProxy_Statics::NewProp_OnInstanceIdReceived,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGetAnalyticsInstanceIdProxy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGetAnalyticsInstanceIdProxy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGetAnalyticsInstanceIdProxy_Statics::ClassParams = {
		&UGetAnalyticsInstanceIdProxy::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UGetAnalyticsInstanceIdProxy_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UGetAnalyticsInstanceIdProxy_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGetAnalyticsInstanceIdProxy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGetAnalyticsInstanceIdProxy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGetAnalyticsInstanceIdProxy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGetAnalyticsInstanceIdProxy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGetAnalyticsInstanceIdProxy, 4289380407);
	template<> FIREBASEFEATURES_API UClass* StaticClass<UGetAnalyticsInstanceIdProxy>()
	{
		return UGetAnalyticsInstanceIdProxy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGetAnalyticsInstanceIdProxy(Z_Construct_UClass_UGetAnalyticsInstanceIdProxy, &UGetAnalyticsInstanceIdProxy::StaticClass, TEXT("/Script/FirebaseFeatures"), TEXT("UGetAnalyticsInstanceIdProxy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGetAnalyticsInstanceIdProxy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
