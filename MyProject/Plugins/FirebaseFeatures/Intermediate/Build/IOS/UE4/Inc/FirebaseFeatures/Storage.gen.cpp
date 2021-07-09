// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FirebaseFeatures/Public/Storage/Storage.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStorage() {}
// Cross Module References
	FIREBASEFEATURES_API UClass* Z_Construct_UClass_UFirebaseStorage_NoRegister();
	FIREBASEFEATURES_API UClass* Z_Construct_UClass_UFirebaseStorage();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_FirebaseFeatures();
	FIREBASEFEATURES_API UClass* Z_Construct_UClass_UFirebaseStorageReference_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UFirebaseStorage::execSetMaxOperationRetryTime)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_MaxTransferRetrySeconds);
		P_FINISH;
		P_NATIVE_BEGIN;
		UFirebaseStorage::SetMaxOperationRetryTime(Z_Param_MaxTransferRetrySeconds);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFirebaseStorage::execGetMaxOperationRetryTime)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UFirebaseStorage::GetMaxOperationRetryTime();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFirebaseStorage::execSetMaxUploadRetryTime)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_MaxTransferRetrySeconds);
		P_FINISH;
		P_NATIVE_BEGIN;
		UFirebaseStorage::SetMaxUploadRetryTime(Z_Param_MaxTransferRetrySeconds);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFirebaseStorage::execGetMaxUploadRetryTime)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UFirebaseStorage::GetMaxUploadRetryTime();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFirebaseStorage::execSetMaxDownloadRetryTime)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_MaxTransferRetrySeconds);
		P_FINISH;
		P_NATIVE_BEGIN;
		UFirebaseStorage::SetMaxDownloadRetryTime(Z_Param_MaxTransferRetrySeconds);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFirebaseStorage::execGetMaxDownloadRetryTime)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UFirebaseStorage::GetMaxDownloadRetryTime();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFirebaseStorage::execGetReferenceFromUrl)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Url);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UFirebaseStorageReference**)Z_Param__Result=UFirebaseStorage::GetReferenceFromUrl(Z_Param_Url);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFirebaseStorage::execGetReferenceFromPath)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Path);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UFirebaseStorageReference**)Z_Param__Result=UFirebaseStorage::GetReferenceFromPath(Z_Param_Path);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFirebaseStorage::execGetReference)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UFirebaseStorageReference**)Z_Param__Result=UFirebaseStorage::GetReference();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFirebaseStorage::execGetUrl)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UFirebaseStorage::GetUrl();
		P_NATIVE_END;
	}
	void UFirebaseStorage::StaticRegisterNativesUFirebaseStorage()
	{
		UClass* Class = UFirebaseStorage::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetMaxDownloadRetryTime", &UFirebaseStorage::execGetMaxDownloadRetryTime },
			{ "GetMaxOperationRetryTime", &UFirebaseStorage::execGetMaxOperationRetryTime },
			{ "GetMaxUploadRetryTime", &UFirebaseStorage::execGetMaxUploadRetryTime },
			{ "GetReference", &UFirebaseStorage::execGetReference },
			{ "GetReferenceFromPath", &UFirebaseStorage::execGetReferenceFromPath },
			{ "GetReferenceFromUrl", &UFirebaseStorage::execGetReferenceFromUrl },
			{ "GetUrl", &UFirebaseStorage::execGetUrl },
			{ "SetMaxDownloadRetryTime", &UFirebaseStorage::execSetMaxDownloadRetryTime },
			{ "SetMaxOperationRetryTime", &UFirebaseStorage::execSetMaxOperationRetryTime },
			{ "SetMaxUploadRetryTime", &UFirebaseStorage::execSetMaxUploadRetryTime },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFirebaseStorage_GetMaxDownloadRetryTime_Statics
	{
		struct FirebaseStorage_eventGetMaxDownloadRetryTime_Parms
		{
			float ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseStorage_GetMaxDownloadRetryTime_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Time" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFirebaseStorage_GetMaxDownloadRetryTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirebaseStorage_eventGetMaxDownloadRetryTime_Parms, ReturnValue), METADATA_PARAMS(Z_Construct_UFunction_UFirebaseStorage_GetMaxDownloadRetryTime_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseStorage_GetMaxDownloadRetryTime_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFirebaseStorage_GetMaxDownloadRetryTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseStorage_GetMaxDownloadRetryTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseStorage_GetMaxDownloadRetryTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "Firebase|Storage" },
		{ "Comment", "/// @brief Returns the maximum time in seconds to retry a download if a\n/// failure occurs.\n" },
		{ "ModuleRelativePath", "Public/Storage/Storage.h" },
		{ "ToolTip", "@brief Returns the maximum time in seconds to retry a download if a\nfailure occurs." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFirebaseStorage_GetMaxDownloadRetryTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFirebaseStorage, nullptr, "GetMaxDownloadRetryTime", nullptr, nullptr, sizeof(FirebaseStorage_eventGetMaxDownloadRetryTime_Parms), Z_Construct_UFunction_UFirebaseStorage_GetMaxDownloadRetryTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseStorage_GetMaxDownloadRetryTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFirebaseStorage_GetMaxDownloadRetryTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseStorage_GetMaxDownloadRetryTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFirebaseStorage_GetMaxDownloadRetryTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFirebaseStorage_GetMaxDownloadRetryTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFirebaseStorage_GetMaxOperationRetryTime_Statics
	{
		struct FirebaseStorage_eventGetMaxOperationRetryTime_Parms
		{
			float ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseStorage_GetMaxOperationRetryTime_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Time" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFirebaseStorage_GetMaxOperationRetryTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirebaseStorage_eventGetMaxOperationRetryTime_Parms, ReturnValue), METADATA_PARAMS(Z_Construct_UFunction_UFirebaseStorage_GetMaxOperationRetryTime_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseStorage_GetMaxOperationRetryTime_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFirebaseStorage_GetMaxOperationRetryTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseStorage_GetMaxOperationRetryTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseStorage_GetMaxOperationRetryTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "Firebase|Storage" },
		{ "Comment", "/// @brief Returns the maximum time to retry operations other than upload\n/// and download if a failure occurs.\n" },
		{ "ModuleRelativePath", "Public/Storage/Storage.h" },
		{ "ToolTip", "@brief Returns the maximum time to retry operations other than upload\nand download if a failure occurs." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFirebaseStorage_GetMaxOperationRetryTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFirebaseStorage, nullptr, "GetMaxOperationRetryTime", nullptr, nullptr, sizeof(FirebaseStorage_eventGetMaxOperationRetryTime_Parms), Z_Construct_UFunction_UFirebaseStorage_GetMaxOperationRetryTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseStorage_GetMaxOperationRetryTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFirebaseStorage_GetMaxOperationRetryTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseStorage_GetMaxOperationRetryTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFirebaseStorage_GetMaxOperationRetryTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFirebaseStorage_GetMaxOperationRetryTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFirebaseStorage_GetMaxUploadRetryTime_Statics
	{
		struct FirebaseStorage_eventGetMaxUploadRetryTime_Parms
		{
			float ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseStorage_GetMaxUploadRetryTime_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Time" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFirebaseStorage_GetMaxUploadRetryTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirebaseStorage_eventGetMaxUploadRetryTime_Parms, ReturnValue), METADATA_PARAMS(Z_Construct_UFunction_UFirebaseStorage_GetMaxUploadRetryTime_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseStorage_GetMaxUploadRetryTime_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFirebaseStorage_GetMaxUploadRetryTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseStorage_GetMaxUploadRetryTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseStorage_GetMaxUploadRetryTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "Firebase|Storage" },
		{ "Comment", "/// @brief Returns the maximum time to retry an upload if a failure occurs.\n" },
		{ "ModuleRelativePath", "Public/Storage/Storage.h" },
		{ "ToolTip", "@brief Returns the maximum time to retry an upload if a failure occurs." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFirebaseStorage_GetMaxUploadRetryTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFirebaseStorage, nullptr, "GetMaxUploadRetryTime", nullptr, nullptr, sizeof(FirebaseStorage_eventGetMaxUploadRetryTime_Parms), Z_Construct_UFunction_UFirebaseStorage_GetMaxUploadRetryTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseStorage_GetMaxUploadRetryTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFirebaseStorage_GetMaxUploadRetryTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseStorage_GetMaxUploadRetryTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFirebaseStorage_GetMaxUploadRetryTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFirebaseStorage_GetMaxUploadRetryTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFirebaseStorage_GetReference_Statics
	{
		struct FirebaseStorage_eventGetReference_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseStorage_GetReference_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Reference" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFirebaseStorage_GetReference_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirebaseStorage_eventGetReference_Parms, ReturnValue), Z_Construct_UClass_UFirebaseStorageReference_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UFirebaseStorage_GetReference_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseStorage_GetReference_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFirebaseStorage_GetReference_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseStorage_GetReference_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseStorage_GetReference_Statics::Function_MetaDataParams[] = {
		{ "Category", "Firebase|Storage" },
		{ "Comment", "/// @brief Get a StorageReference to the root of the database.\n" },
		{ "ModuleRelativePath", "Public/Storage/Storage.h" },
		{ "ToolTip", "@brief Get a StorageReference to the root of the database." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFirebaseStorage_GetReference_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFirebaseStorage, nullptr, "GetReference", nullptr, nullptr, sizeof(FirebaseStorage_eventGetReference_Parms), Z_Construct_UFunction_UFirebaseStorage_GetReference_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseStorage_GetReference_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFirebaseStorage_GetReference_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseStorage_GetReference_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFirebaseStorage_GetReference()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFirebaseStorage_GetReference_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFirebaseStorage_GetReferenceFromPath_Statics
	{
		struct FirebaseStorage_eventGetReferenceFromPath_Parms
		{
			FString Path;
			UFirebaseStorageReference* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Path_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Path;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseStorage_GetReferenceFromPath_Statics::NewProp_Path_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFirebaseStorage_GetReferenceFromPath_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirebaseStorage_eventGetReferenceFromPath_Parms, Path), METADATA_PARAMS(Z_Construct_UFunction_UFirebaseStorage_GetReferenceFromPath_Statics::NewProp_Path_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseStorage_GetReferenceFromPath_Statics::NewProp_Path_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseStorage_GetReferenceFromPath_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Reference" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFirebaseStorage_GetReferenceFromPath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirebaseStorage_eventGetReferenceFromPath_Parms, ReturnValue), Z_Construct_UClass_UFirebaseStorageReference_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UFirebaseStorage_GetReferenceFromPath_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseStorage_GetReferenceFromPath_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFirebaseStorage_GetReferenceFromPath_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseStorage_GetReferenceFromPath_Statics::NewProp_Path,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseStorage_GetReferenceFromPath_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseStorage_GetReferenceFromPath_Statics::Function_MetaDataParams[] = {
		{ "Category", "Firebase|Storage" },
		{ "Comment", "/// @brief Get a StorageReference for the specified path.\n" },
		{ "ModuleRelativePath", "Public/Storage/Storage.h" },
		{ "ToolTip", "@brief Get a StorageReference for the specified path." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFirebaseStorage_GetReferenceFromPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFirebaseStorage, nullptr, "GetReferenceFromPath", nullptr, nullptr, sizeof(FirebaseStorage_eventGetReferenceFromPath_Parms), Z_Construct_UFunction_UFirebaseStorage_GetReferenceFromPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseStorage_GetReferenceFromPath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFirebaseStorage_GetReferenceFromPath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseStorage_GetReferenceFromPath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFirebaseStorage_GetReferenceFromPath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFirebaseStorage_GetReferenceFromPath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFirebaseStorage_GetReferenceFromUrl_Statics
	{
		struct FirebaseStorage_eventGetReferenceFromUrl_Parms
		{
			FString Url;
			UFirebaseStorageReference* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Url_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Url;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseStorage_GetReferenceFromUrl_Statics::NewProp_Url_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFirebaseStorage_GetReferenceFromUrl_Statics::NewProp_Url = { "Url", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirebaseStorage_eventGetReferenceFromUrl_Parms, Url), METADATA_PARAMS(Z_Construct_UFunction_UFirebaseStorage_GetReferenceFromUrl_Statics::NewProp_Url_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseStorage_GetReferenceFromUrl_Statics::NewProp_Url_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseStorage_GetReferenceFromUrl_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Reference" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFirebaseStorage_GetReferenceFromUrl_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirebaseStorage_eventGetReferenceFromUrl_Parms, ReturnValue), Z_Construct_UClass_UFirebaseStorageReference_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UFirebaseStorage_GetReferenceFromUrl_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseStorage_GetReferenceFromUrl_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFirebaseStorage_GetReferenceFromUrl_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseStorage_GetReferenceFromUrl_Statics::NewProp_Url,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseStorage_GetReferenceFromUrl_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseStorage_GetReferenceFromUrl_Statics::Function_MetaDataParams[] = {
		{ "Category", "Firebase|Storage" },
		{ "Comment", "/// @brief Get a StorageReference for the provided URL.\n" },
		{ "ModuleRelativePath", "Public/Storage/Storage.h" },
		{ "ToolTip", "@brief Get a StorageReference for the provided URL." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFirebaseStorage_GetReferenceFromUrl_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFirebaseStorage, nullptr, "GetReferenceFromUrl", nullptr, nullptr, sizeof(FirebaseStorage_eventGetReferenceFromUrl_Parms), Z_Construct_UFunction_UFirebaseStorage_GetReferenceFromUrl_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseStorage_GetReferenceFromUrl_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFirebaseStorage_GetReferenceFromUrl_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseStorage_GetReferenceFromUrl_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFirebaseStorage_GetReferenceFromUrl()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFirebaseStorage_GetReferenceFromUrl_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFirebaseStorage_GetUrl_Statics
	{
		struct FirebaseStorage_eventGetUrl_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseStorage_GetUrl_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "URL" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFirebaseStorage_GetUrl_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirebaseStorage_eventGetUrl_Parms, ReturnValue), METADATA_PARAMS(Z_Construct_UFunction_UFirebaseStorage_GetUrl_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseStorage_GetUrl_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFirebaseStorage_GetUrl_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseStorage_GetUrl_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseStorage_GetUrl_Statics::Function_MetaDataParams[] = {
		{ "Category", "Firebase|Storage" },
		{ "Comment", "/// @brief Get the URL that this Storage was created with.\n///\n/// @returns The URL this Storage was created with, or an empty\n/// string if this Storage was created with default parameters.\n" },
		{ "ModuleRelativePath", "Public/Storage/Storage.h" },
		{ "ToolTip", "@brief Get the URL that this Storage was created with.\n\n@returns The URL this Storage was created with, or an empty\nstring if this Storage was created with default parameters." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFirebaseStorage_GetUrl_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFirebaseStorage, nullptr, "GetUrl", nullptr, nullptr, sizeof(FirebaseStorage_eventGetUrl_Parms), Z_Construct_UFunction_UFirebaseStorage_GetUrl_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseStorage_GetUrl_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFirebaseStorage_GetUrl_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseStorage_GetUrl_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFirebaseStorage_GetUrl()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFirebaseStorage_GetUrl_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFirebaseStorage_SetMaxDownloadRetryTime_Statics
	{
		struct FirebaseStorage_eventSetMaxDownloadRetryTime_Parms
		{
			float MaxTransferRetrySeconds;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxTransferRetrySeconds;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFirebaseStorage_SetMaxDownloadRetryTime_Statics::NewProp_MaxTransferRetrySeconds = { "MaxTransferRetrySeconds", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirebaseStorage_eventSetMaxDownloadRetryTime_Parms, MaxTransferRetrySeconds), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFirebaseStorage_SetMaxDownloadRetryTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseStorage_SetMaxDownloadRetryTime_Statics::NewProp_MaxTransferRetrySeconds,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseStorage_SetMaxDownloadRetryTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "Firebase|Storage" },
		{ "Comment", "/// @brief Sets the maximum time to retry a download if a failure occurs.\n/// Defaults to 600 seconds (10 minutes).\n" },
		{ "ModuleRelativePath", "Public/Storage/Storage.h" },
		{ "ToolTip", "@brief Sets the maximum time to retry a download if a failure occurs.\nDefaults to 600 seconds (10 minutes)." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFirebaseStorage_SetMaxDownloadRetryTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFirebaseStorage, nullptr, "SetMaxDownloadRetryTime", nullptr, nullptr, sizeof(FirebaseStorage_eventSetMaxDownloadRetryTime_Parms), Z_Construct_UFunction_UFirebaseStorage_SetMaxDownloadRetryTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseStorage_SetMaxDownloadRetryTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFirebaseStorage_SetMaxDownloadRetryTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseStorage_SetMaxDownloadRetryTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFirebaseStorage_SetMaxDownloadRetryTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFirebaseStorage_SetMaxDownloadRetryTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFirebaseStorage_SetMaxOperationRetryTime_Statics
	{
		struct FirebaseStorage_eventSetMaxOperationRetryTime_Parms
		{
			float MaxTransferRetrySeconds;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxTransferRetrySeconds;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFirebaseStorage_SetMaxOperationRetryTime_Statics::NewProp_MaxTransferRetrySeconds = { "MaxTransferRetrySeconds", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirebaseStorage_eventSetMaxOperationRetryTime_Parms, MaxTransferRetrySeconds), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFirebaseStorage_SetMaxOperationRetryTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseStorage_SetMaxOperationRetryTime_Statics::NewProp_MaxTransferRetrySeconds,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseStorage_SetMaxOperationRetryTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "Firebase|Storage" },
		{ "Comment", "/// @brief Sets the maximum time to retry operations other than upload and\n/// download if a failure occurs. Defaults to 120 seconds (2 minutes).\n" },
		{ "ModuleRelativePath", "Public/Storage/Storage.h" },
		{ "ToolTip", "@brief Sets the maximum time to retry operations other than upload and\ndownload if a failure occurs. Defaults to 120 seconds (2 minutes)." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFirebaseStorage_SetMaxOperationRetryTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFirebaseStorage, nullptr, "SetMaxOperationRetryTime", nullptr, nullptr, sizeof(FirebaseStorage_eventSetMaxOperationRetryTime_Parms), Z_Construct_UFunction_UFirebaseStorage_SetMaxOperationRetryTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseStorage_SetMaxOperationRetryTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFirebaseStorage_SetMaxOperationRetryTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseStorage_SetMaxOperationRetryTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFirebaseStorage_SetMaxOperationRetryTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFirebaseStorage_SetMaxOperationRetryTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFirebaseStorage_SetMaxUploadRetryTime_Statics
	{
		struct FirebaseStorage_eventSetMaxUploadRetryTime_Parms
		{
			float MaxTransferRetrySeconds;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxTransferRetrySeconds;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFirebaseStorage_SetMaxUploadRetryTime_Statics::NewProp_MaxTransferRetrySeconds = { "MaxTransferRetrySeconds", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirebaseStorage_eventSetMaxUploadRetryTime_Parms, MaxTransferRetrySeconds), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFirebaseStorage_SetMaxUploadRetryTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseStorage_SetMaxUploadRetryTime_Statics::NewProp_MaxTransferRetrySeconds,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseStorage_SetMaxUploadRetryTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "Firebase|Storage" },
		{ "Comment", "/// @brief Sets the maximum time to retry an upload if a failure occurs.\n/// Defaults to 600 seconds (10 minutes).\n" },
		{ "ModuleRelativePath", "Public/Storage/Storage.h" },
		{ "ToolTip", "@brief Sets the maximum time to retry an upload if a failure occurs.\nDefaults to 600 seconds (10 minutes)." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFirebaseStorage_SetMaxUploadRetryTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFirebaseStorage, nullptr, "SetMaxUploadRetryTime", nullptr, nullptr, sizeof(FirebaseStorage_eventSetMaxUploadRetryTime_Parms), Z_Construct_UFunction_UFirebaseStorage_SetMaxUploadRetryTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseStorage_SetMaxUploadRetryTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFirebaseStorage_SetMaxUploadRetryTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseStorage_SetMaxUploadRetryTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFirebaseStorage_SetMaxUploadRetryTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFirebaseStorage_SetMaxUploadRetryTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFirebaseStorage_NoRegister()
	{
		return UFirebaseStorage::StaticClass();
	}
	struct Z_Construct_UClass_UFirebaseStorage_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFirebaseStorage_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_FirebaseFeatures,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFirebaseStorage_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFirebaseStorage_GetMaxDownloadRetryTime, "GetMaxDownloadRetryTime" }, // 3098267897
		{ &Z_Construct_UFunction_UFirebaseStorage_GetMaxOperationRetryTime, "GetMaxOperationRetryTime" }, // 960564425
		{ &Z_Construct_UFunction_UFirebaseStorage_GetMaxUploadRetryTime, "GetMaxUploadRetryTime" }, // 1780683926
		{ &Z_Construct_UFunction_UFirebaseStorage_GetReference, "GetReference" }, // 1482746051
		{ &Z_Construct_UFunction_UFirebaseStorage_GetReferenceFromPath, "GetReferenceFromPath" }, // 2226604669
		{ &Z_Construct_UFunction_UFirebaseStorage_GetReferenceFromUrl, "GetReferenceFromUrl" }, // 29729791
		{ &Z_Construct_UFunction_UFirebaseStorage_GetUrl, "GetUrl" }, // 2798066674
		{ &Z_Construct_UFunction_UFirebaseStorage_SetMaxDownloadRetryTime, "SetMaxDownloadRetryTime" }, // 740486120
		{ &Z_Construct_UFunction_UFirebaseStorage_SetMaxOperationRetryTime, "SetMaxOperationRetryTime" }, // 2250162086
		{ &Z_Construct_UFunction_UFirebaseStorage_SetMaxUploadRetryTime, "SetMaxUploadRetryTime" }, // 278183824
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFirebaseStorage_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Storage/Storage.h" },
		{ "ModuleRelativePath", "Public/Storage/Storage.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFirebaseStorage_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFirebaseStorage>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFirebaseStorage_Statics::ClassParams = {
		&UFirebaseStorage::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UFirebaseStorage_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFirebaseStorage_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFirebaseStorage()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFirebaseStorage_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFirebaseStorage, 897809056);
	template<> FIREBASEFEATURES_API UClass* StaticClass<UFirebaseStorage>()
	{
		return UFirebaseStorage::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFirebaseStorage(Z_Construct_UClass_UFirebaseStorage, &UFirebaseStorage::StaticClass, TEXT("/Script/FirebaseFeatures"), TEXT("UFirebaseStorage"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFirebaseStorage);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
