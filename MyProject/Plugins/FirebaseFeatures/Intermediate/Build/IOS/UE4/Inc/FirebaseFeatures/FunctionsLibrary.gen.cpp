// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FirebaseFeatures/Public/Functions/FunctionsLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFunctionsLibrary() {}
// Cross Module References
	FIREBASEFEATURES_API UClass* Z_Construct_UClass_UFirebaseFunctionsLibrary_NoRegister();
	FIREBASEFEATURES_API UClass* Z_Construct_UClass_UFirebaseFunctionsLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_FirebaseFeatures();
	FIREBASEFEATURES_API UScriptStruct* Z_Construct_UScriptStruct_FFirebaseHttpsCallableReference();
// End Cross Module References
	DEFINE_FUNCTION(UFirebaseFunctionsLibrary::execGetHttpsCallable)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Name);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FFirebaseHttpsCallableReference*)Z_Param__Result=UFirebaseFunctionsLibrary::GetHttpsCallable(Z_Param_Name);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFirebaseFunctionsLibrary::execUseFunctionsEmulator)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Origin);
		P_FINISH;
		P_NATIVE_BEGIN;
		UFirebaseFunctionsLibrary::UseFunctionsEmulator(Z_Param_Origin);
		P_NATIVE_END;
	}
	void UFirebaseFunctionsLibrary::StaticRegisterNativesUFirebaseFunctionsLibrary()
	{
		UClass* Class = UFirebaseFunctionsLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetHttpsCallable", &UFirebaseFunctionsLibrary::execGetHttpsCallable },
			{ "UseFunctionsEmulator", &UFirebaseFunctionsLibrary::execUseFunctionsEmulator },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFirebaseFunctionsLibrary_GetHttpsCallable_Statics
	{
		struct FirebaseFunctionsLibrary_eventGetHttpsCallable_Parms
		{
			FString Name;
			FFirebaseHttpsCallableReference ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseFunctionsLibrary_GetHttpsCallable_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFirebaseFunctionsLibrary_GetHttpsCallable_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirebaseFunctionsLibrary_eventGetHttpsCallable_Parms, Name), METADATA_PARAMS(Z_Construct_UFunction_UFirebaseFunctionsLibrary_GetHttpsCallable_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseFunctionsLibrary_GetHttpsCallable_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseFunctionsLibrary_GetHttpsCallable_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "HTTPS Callable" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFirebaseFunctionsLibrary_GetHttpsCallable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirebaseFunctionsLibrary_eventGetHttpsCallable_Parms, ReturnValue), Z_Construct_UScriptStruct_FFirebaseHttpsCallableReference, METADATA_PARAMS(Z_Construct_UFunction_UFirebaseFunctionsLibrary_GetHttpsCallable_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseFunctionsLibrary_GetHttpsCallable_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFirebaseFunctionsLibrary_GetHttpsCallable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseFunctionsLibrary_GetHttpsCallable_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseFunctionsLibrary_GetHttpsCallable_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseFunctionsLibrary_GetHttpsCallable_Statics::Function_MetaDataParams[] = {
		{ "Category", "Firebase|Functions" },
		{ "Comment", "/// @brief Get a FunctionsReference for the specified path.\n" },
		{ "ModuleRelativePath", "Public/Functions/FunctionsLibrary.h" },
		{ "ToolTip", "@brief Get a FunctionsReference for the specified path." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFirebaseFunctionsLibrary_GetHttpsCallable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFirebaseFunctionsLibrary, nullptr, "GetHttpsCallable", nullptr, nullptr, sizeof(FirebaseFunctionsLibrary_eventGetHttpsCallable_Parms), Z_Construct_UFunction_UFirebaseFunctionsLibrary_GetHttpsCallable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseFunctionsLibrary_GetHttpsCallable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFirebaseFunctionsLibrary_GetHttpsCallable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseFunctionsLibrary_GetHttpsCallable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFirebaseFunctionsLibrary_GetHttpsCallable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFirebaseFunctionsLibrary_GetHttpsCallable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFirebaseFunctionsLibrary_UseFunctionsEmulator_Statics
	{
		struct FirebaseFunctionsLibrary_eventUseFunctionsEmulator_Parms
		{
			FString Origin;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Origin_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Origin;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseFunctionsLibrary_UseFunctionsEmulator_Statics::NewProp_Origin_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFirebaseFunctionsLibrary_UseFunctionsEmulator_Statics::NewProp_Origin = { "Origin", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirebaseFunctionsLibrary_eventUseFunctionsEmulator_Parms, Origin), METADATA_PARAMS(Z_Construct_UFunction_UFirebaseFunctionsLibrary_UseFunctionsEmulator_Statics::NewProp_Origin_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseFunctionsLibrary_UseFunctionsEmulator_Statics::NewProp_Origin_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFirebaseFunctionsLibrary_UseFunctionsEmulator_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseFunctionsLibrary_UseFunctionsEmulator_Statics::NewProp_Origin,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseFunctionsLibrary_UseFunctionsEmulator_Statics::Function_MetaDataParams[] = {
		{ "Category", "Firebase|Functions" },
		{ "Comment", "/// @brief Sets an origin for a Cloud Functions emulator to use.\n" },
		{ "ModuleRelativePath", "Public/Functions/FunctionsLibrary.h" },
		{ "ToolTip", "@brief Sets an origin for a Cloud Functions emulator to use." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFirebaseFunctionsLibrary_UseFunctionsEmulator_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFirebaseFunctionsLibrary, nullptr, "UseFunctionsEmulator", nullptr, nullptr, sizeof(FirebaseFunctionsLibrary_eventUseFunctionsEmulator_Parms), Z_Construct_UFunction_UFirebaseFunctionsLibrary_UseFunctionsEmulator_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseFunctionsLibrary_UseFunctionsEmulator_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFirebaseFunctionsLibrary_UseFunctionsEmulator_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseFunctionsLibrary_UseFunctionsEmulator_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFirebaseFunctionsLibrary_UseFunctionsEmulator()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFirebaseFunctionsLibrary_UseFunctionsEmulator_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFirebaseFunctionsLibrary_NoRegister()
	{
		return UFirebaseFunctionsLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UFirebaseFunctionsLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFirebaseFunctionsLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_FirebaseFeatures,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFirebaseFunctionsLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFirebaseFunctionsLibrary_GetHttpsCallable, "GetHttpsCallable" }, // 2881335248
		{ &Z_Construct_UFunction_UFirebaseFunctionsLibrary_UseFunctionsEmulator, "UseFunctionsEmulator" }, // 3844764495
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFirebaseFunctionsLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/// @brief Entry point for the Firebase C++ SDK for Cloud Functions.\n///\n/// To use the SDK, use GetHttpsCallable() to obtain\n/// references to callable functions. From there you can call them with\n/// FFirebaseHttpsCallableReference::Call().\n" },
		{ "IncludePath", "Functions/FunctionsLibrary.h" },
		{ "ModuleRelativePath", "Public/Functions/FunctionsLibrary.h" },
		{ "ToolTip", "@brief Entry point for the Firebase C++ SDK for Cloud Functions.\n\nTo use the SDK, use GetHttpsCallable() to obtain\nreferences to callable functions. From there you can call them with\nFFirebaseHttpsCallableReference::Call()." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFirebaseFunctionsLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFirebaseFunctionsLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFirebaseFunctionsLibrary_Statics::ClassParams = {
		&UFirebaseFunctionsLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UFirebaseFunctionsLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFirebaseFunctionsLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFirebaseFunctionsLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFirebaseFunctionsLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFirebaseFunctionsLibrary, 3280157087);
	template<> FIREBASEFEATURES_API UClass* StaticClass<UFirebaseFunctionsLibrary>()
	{
		return UFirebaseFunctionsLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFirebaseFunctionsLibrary(Z_Construct_UClass_UFirebaseFunctionsLibrary, &UFirebaseFunctionsLibrary::StaticClass, TEXT("/Script/FirebaseFeatures"), TEXT("UFirebaseFunctionsLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFirebaseFunctionsLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
