// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FirebaseFeatures/Public/Analytics/FirebaseAnalyticsLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFirebaseAnalyticsLibrary() {}
// Cross Module References
	FIREBASEFEATURES_API UClass* Z_Construct_UClass_UFirebaseAnalyticsLibrary_NoRegister();
	FIREBASEFEATURES_API UClass* Z_Construct_UClass_UFirebaseAnalyticsLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_FirebaseFeatures();
// End Cross Module References
	DEFINE_FUNCTION(UFirebaseAnalyticsLibrary::execSetCurrentScreen)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_ScreenName);
		P_GET_PROPERTY(FStrProperty,Z_Param_ScreenClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		UFirebaseAnalyticsLibrary::SetCurrentScreen(Z_Param_ScreenName,Z_Param_ScreenClass);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFirebaseAnalyticsLibrary::execSetSessionTimeoutDuration)
	{
		P_GET_PROPERTY(FInt64Property,Z_Param_Milliseconds);
		P_FINISH;
		P_NATIVE_BEGIN;
		UFirebaseAnalyticsLibrary::SetSessionTimeoutDuration(Z_Param_Milliseconds);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFirebaseAnalyticsLibrary::execSetUserId)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_UserId);
		P_FINISH;
		P_NATIVE_BEGIN;
		UFirebaseAnalyticsLibrary::SetUserId(Z_Param_UserId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFirebaseAnalyticsLibrary::execSetUserProperty)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Name);
		P_GET_PROPERTY(FStrProperty,Z_Param_Property);
		P_FINISH;
		P_NATIVE_BEGIN;
		UFirebaseAnalyticsLibrary::SetUserProperty(Z_Param_Name,Z_Param_Property);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFirebaseAnalyticsLibrary::execLogEvents)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_EventName);
		P_GET_TMAP_REF(FString,FString,Z_Param_Out_Parameters);
		P_FINISH;
		P_NATIVE_BEGIN;
		UFirebaseAnalyticsLibrary::LogEvents(Z_Param_EventName,Z_Param_Out_Parameters);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFirebaseAnalyticsLibrary::execLogEvent)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_EventName);
		P_FINISH;
		P_NATIVE_BEGIN;
		UFirebaseAnalyticsLibrary::LogEvent(Z_Param_EventName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFirebaseAnalyticsLibrary::execLogEventInt32)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_EventName);
		P_GET_PROPERTY(FStrProperty,Z_Param_ParameterName);
		P_GET_PROPERTY(FIntProperty,Z_Param_ParameterValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		UFirebaseAnalyticsLibrary::LogEventInt32(Z_Param_EventName,Z_Param_ParameterName,Z_Param_ParameterValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFirebaseAnalyticsLibrary::execLogEventInt64)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_EventName);
		P_GET_PROPERTY(FStrProperty,Z_Param_ParameterName);
		P_GET_PROPERTY(FInt64Property,Z_Param_ParameterValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		UFirebaseAnalyticsLibrary::LogEventInt64(Z_Param_EventName,Z_Param_ParameterName,Z_Param_ParameterValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFirebaseAnalyticsLibrary::execLogEventFloat)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_EventName);
		P_GET_PROPERTY(FStrProperty,Z_Param_ParameterName);
		P_GET_PROPERTY(FFloatProperty,Z_Param_ParameterValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		UFirebaseAnalyticsLibrary::LogEventFloat(Z_Param_EventName,Z_Param_ParameterName,Z_Param_ParameterValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFirebaseAnalyticsLibrary::execLogEventString)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_EventName);
		P_GET_PROPERTY(FStrProperty,Z_Param_ParameterName);
		P_GET_PROPERTY(FStrProperty,Z_Param_ParameterValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		UFirebaseAnalyticsLibrary::LogEventString(Z_Param_EventName,Z_Param_ParameterName,Z_Param_ParameterValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFirebaseAnalyticsLibrary::execSetAnalyticsCollectionEnabled)
	{
		P_GET_UBOOL(Z_Param_bEnabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		UFirebaseAnalyticsLibrary::SetAnalyticsCollectionEnabled(Z_Param_bEnabled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFirebaseAnalyticsLibrary::execResetAnalyticsData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		UFirebaseAnalyticsLibrary::ResetAnalyticsData();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFirebaseAnalyticsLibrary::execEndSession)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		UFirebaseAnalyticsLibrary::EndSession();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFirebaseAnalyticsLibrary::execStartSession)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UFirebaseAnalyticsLibrary::StartSession();
		P_NATIVE_END;
	}
	void UFirebaseAnalyticsLibrary::StaticRegisterNativesUFirebaseAnalyticsLibrary()
	{
		UClass* Class = UFirebaseAnalyticsLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EndSession", &UFirebaseAnalyticsLibrary::execEndSession },
			{ "LogEvent", &UFirebaseAnalyticsLibrary::execLogEvent },
			{ "LogEventFloat", &UFirebaseAnalyticsLibrary::execLogEventFloat },
			{ "LogEventInt32", &UFirebaseAnalyticsLibrary::execLogEventInt32 },
			{ "LogEventInt64", &UFirebaseAnalyticsLibrary::execLogEventInt64 },
			{ "LogEvents", &UFirebaseAnalyticsLibrary::execLogEvents },
			{ "LogEventString", &UFirebaseAnalyticsLibrary::execLogEventString },
			{ "ResetAnalyticsData", &UFirebaseAnalyticsLibrary::execResetAnalyticsData },
			{ "SetAnalyticsCollectionEnabled", &UFirebaseAnalyticsLibrary::execSetAnalyticsCollectionEnabled },
			{ "SetCurrentScreen", &UFirebaseAnalyticsLibrary::execSetCurrentScreen },
			{ "SetSessionTimeoutDuration", &UFirebaseAnalyticsLibrary::execSetSessionTimeoutDuration },
			{ "SetUserId", &UFirebaseAnalyticsLibrary::execSetUserId },
			{ "SetUserProperty", &UFirebaseAnalyticsLibrary::execSetUserProperty },
			{ "StartSession", &UFirebaseAnalyticsLibrary::execStartSession },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFirebaseAnalyticsLibrary_EndSession_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseAnalyticsLibrary_EndSession_Statics::Function_MetaDataParams[] = {
		{ "Category", "Firebase|Analytics" },
		{ "ModuleRelativePath", "Public/Analytics/FirebaseAnalyticsLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFirebaseAnalyticsLibrary_EndSession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFirebaseAnalyticsLibrary, nullptr, "EndSession", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFirebaseAnalyticsLibrary_EndSession_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseAnalyticsLibrary_EndSession_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFirebaseAnalyticsLibrary_EndSession()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFirebaseAnalyticsLibrary_EndSession_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFirebaseAnalyticsLibrary_LogEvent_Statics
	{
		struct FirebaseAnalyticsLibrary_eventLogEvent_Parms
		{
			FString EventName;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EventName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_EventName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseAnalyticsLibrary_LogEvent_Statics::NewProp_EventName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFirebaseAnalyticsLibrary_LogEvent_Statics::NewProp_EventName = { "EventName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirebaseAnalyticsLibrary_eventLogEvent_Parms, EventName), METADATA_PARAMS(Z_Construct_UFunction_UFirebaseAnalyticsLibrary_LogEvent_Statics::NewProp_EventName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseAnalyticsLibrary_LogEvent_Statics::NewProp_EventName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFirebaseAnalyticsLibrary_LogEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseAnalyticsLibrary_LogEvent_Statics::NewProp_EventName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseAnalyticsLibrary_LogEvent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Firebase|Analytics" },
		{ "DisplayName", "Log Event" },
		{ "ModuleRelativePath", "Public/Analytics/FirebaseAnalyticsLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFirebaseAnalyticsLibrary_LogEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFirebaseAnalyticsLibrary, nullptr, "LogEvent", nullptr, nullptr, sizeof(FirebaseAnalyticsLibrary_eventLogEvent_Parms), Z_Construct_UFunction_UFirebaseAnalyticsLibrary_LogEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseAnalyticsLibrary_LogEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFirebaseAnalyticsLibrary_LogEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseAnalyticsLibrary_LogEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFirebaseAnalyticsLibrary_LogEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFirebaseAnalyticsLibrary_LogEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFirebaseAnalyticsLibrary_LogEventFloat_Statics
	{
		struct FirebaseAnalyticsLibrary_eventLogEventFloat_Parms
		{
			FString EventName;
			FString ParameterName;
			float ParameterValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EventName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_EventName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParameterName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ParameterName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParameterValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ParameterValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseAnalyticsLibrary_LogEventFloat_Statics::NewProp_EventName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFirebaseAnalyticsLibrary_LogEventFloat_Statics::NewProp_EventName = { "EventName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirebaseAnalyticsLibrary_eventLogEventFloat_Parms, EventName), METADATA_PARAMS(Z_Construct_UFunction_UFirebaseAnalyticsLibrary_LogEventFloat_Statics::NewProp_EventName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseAnalyticsLibrary_LogEventFloat_Statics::NewProp_EventName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseAnalyticsLibrary_LogEventFloat_Statics::NewProp_ParameterName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFirebaseAnalyticsLibrary_LogEventFloat_Statics::NewProp_ParameterName = { "ParameterName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirebaseAnalyticsLibrary_eventLogEventFloat_Parms, ParameterName), METADATA_PARAMS(Z_Construct_UFunction_UFirebaseAnalyticsLibrary_LogEventFloat_Statics::NewProp_ParameterName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseAnalyticsLibrary_LogEventFloat_Statics::NewProp_ParameterName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseAnalyticsLibrary_LogEventFloat_Statics::NewProp_ParameterValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFirebaseAnalyticsLibrary_LogEventFloat_Statics::NewProp_ParameterValue = { "ParameterValue", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirebaseAnalyticsLibrary_eventLogEventFloat_Parms, ParameterValue), METADATA_PARAMS(Z_Construct_UFunction_UFirebaseAnalyticsLibrary_LogEventFloat_Statics::NewProp_ParameterValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseAnalyticsLibrary_LogEventFloat_Statics::NewProp_ParameterValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFirebaseAnalyticsLibrary_LogEventFloat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseAnalyticsLibrary_LogEventFloat_Statics::NewProp_EventName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseAnalyticsLibrary_LogEventFloat_Statics::NewProp_ParameterName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseAnalyticsLibrary_LogEventFloat_Statics::NewProp_ParameterValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseAnalyticsLibrary_LogEventFloat_Statics::Function_MetaDataParams[] = {
		{ "Category", "Firebase|Analytics" },
		{ "DisplayName", "Log Event (Float)" },
		{ "ModuleRelativePath", "Public/Analytics/FirebaseAnalyticsLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFirebaseAnalyticsLibrary_LogEventFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFirebaseAnalyticsLibrary, nullptr, "LogEventFloat", nullptr, nullptr, sizeof(FirebaseAnalyticsLibrary_eventLogEventFloat_Parms), Z_Construct_UFunction_UFirebaseAnalyticsLibrary_LogEventFloat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseAnalyticsLibrary_LogEventFloat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFirebaseAnalyticsLibrary_LogEventFloat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseAnalyticsLibrary_LogEventFloat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFirebaseAnalyticsLibrary_LogEventFloat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFirebaseAnalyticsLibrary_LogEventFloat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFirebaseAnalyticsLibrary_LogEventInt32_Statics
	{
		struct FirebaseAnalyticsLibrary_eventLogEventInt32_Parms
		{
			FString EventName;
			FString ParameterName;
			int32 ParameterValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EventName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_EventName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParameterName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ParameterName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParameterValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ParameterValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseAnalyticsLibrary_LogEventInt32_Statics::NewProp_EventName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFirebaseAnalyticsLibrary_LogEventInt32_Statics::NewProp_EventName = { "EventName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirebaseAnalyticsLibrary_eventLogEventInt32_Parms, EventName), METADATA_PARAMS(Z_Construct_UFunction_UFirebaseAnalyticsLibrary_LogEventInt32_Statics::NewProp_EventName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseAnalyticsLibrary_LogEventInt32_Statics::NewProp_EventName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseAnalyticsLibrary_LogEventInt32_Statics::NewProp_ParameterName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFirebaseAnalyticsLibrary_LogEventInt32_Statics::NewProp_ParameterName = { "ParameterName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirebaseAnalyticsLibrary_eventLogEventInt32_Parms, ParameterName), METADATA_PARAMS(Z_Construct_UFunction_UFirebaseAnalyticsLibrary_LogEventInt32_Statics::NewProp_ParameterName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseAnalyticsLibrary_LogEventInt32_Statics::NewProp_ParameterName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseAnalyticsLibrary_LogEventInt32_Statics::NewProp_ParameterValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFirebaseAnalyticsLibrary_LogEventInt32_Statics::NewProp_ParameterValue = { "ParameterValue", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirebaseAnalyticsLibrary_eventLogEventInt32_Parms, ParameterValue), METADATA_PARAMS(Z_Construct_UFunction_UFirebaseAnalyticsLibrary_LogEventInt32_Statics::NewProp_ParameterValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseAnalyticsLibrary_LogEventInt32_Statics::NewProp_ParameterValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFirebaseAnalyticsLibrary_LogEventInt32_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseAnalyticsLibrary_LogEventInt32_Statics::NewProp_EventName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseAnalyticsLibrary_LogEventInt32_Statics::NewProp_ParameterName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseAnalyticsLibrary_LogEventInt32_Statics::NewProp_ParameterValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseAnalyticsLibrary_LogEventInt32_Statics::Function_MetaDataParams[] = {
		{ "Category", "Firebase|Analytics" },
		{ "DisplayName", "Log Event (Int32)" },
		{ "ModuleRelativePath", "Public/Analytics/FirebaseAnalyticsLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFirebaseAnalyticsLibrary_LogEventInt32_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFirebaseAnalyticsLibrary, nullptr, "LogEventInt32", nullptr, nullptr, sizeof(FirebaseAnalyticsLibrary_eventLogEventInt32_Parms), Z_Construct_UFunction_UFirebaseAnalyticsLibrary_LogEventInt32_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseAnalyticsLibrary_LogEventInt32_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFirebaseAnalyticsLibrary_LogEventInt32_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseAnalyticsLibrary_LogEventInt32_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFirebaseAnalyticsLibrary_LogEventInt32()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFirebaseAnalyticsLibrary_LogEventInt32_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFirebaseAnalyticsLibrary_LogEventInt64_Statics
	{
		struct FirebaseAnalyticsLibrary_eventLogEventInt64_Parms
		{
			FString EventName;
			FString ParameterName;
			int64 ParameterValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EventName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_EventName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParameterName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ParameterName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParameterValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_ParameterValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseAnalyticsLibrary_LogEventInt64_Statics::NewProp_EventName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFirebaseAnalyticsLibrary_LogEventInt64_Statics::NewProp_EventName = { "EventName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirebaseAnalyticsLibrary_eventLogEventInt64_Parms, EventName), METADATA_PARAMS(Z_Construct_UFunction_UFirebaseAnalyticsLibrary_LogEventInt64_Statics::NewProp_EventName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseAnalyticsLibrary_LogEventInt64_Statics::NewProp_EventName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseAnalyticsLibrary_LogEventInt64_Statics::NewProp_ParameterName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFirebaseAnalyticsLibrary_LogEventInt64_Statics::NewProp_ParameterName = { "ParameterName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirebaseAnalyticsLibrary_eventLogEventInt64_Parms, ParameterName), METADATA_PARAMS(Z_Construct_UFunction_UFirebaseAnalyticsLibrary_LogEventInt64_Statics::NewProp_ParameterName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseAnalyticsLibrary_LogEventInt64_Statics::NewProp_ParameterName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseAnalyticsLibrary_LogEventInt64_Statics::NewProp_ParameterValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UFirebaseAnalyticsLibrary_LogEventInt64_Statics::NewProp_ParameterValue = { "ParameterValue", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirebaseAnalyticsLibrary_eventLogEventInt64_Parms, ParameterValue), METADATA_PARAMS(Z_Construct_UFunction_UFirebaseAnalyticsLibrary_LogEventInt64_Statics::NewProp_ParameterValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseAnalyticsLibrary_LogEventInt64_Statics::NewProp_ParameterValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFirebaseAnalyticsLibrary_LogEventInt64_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseAnalyticsLibrary_LogEventInt64_Statics::NewProp_EventName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseAnalyticsLibrary_LogEventInt64_Statics::NewProp_ParameterName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseAnalyticsLibrary_LogEventInt64_Statics::NewProp_ParameterValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseAnalyticsLibrary_LogEventInt64_Statics::Function_MetaDataParams[] = {
		{ "Category", "Firebase|Analytics" },
		{ "DisplayName", "Log Event (Int64)" },
		{ "ModuleRelativePath", "Public/Analytics/FirebaseAnalyticsLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFirebaseAnalyticsLibrary_LogEventInt64_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFirebaseAnalyticsLibrary, nullptr, "LogEventInt64", nullptr, nullptr, sizeof(FirebaseAnalyticsLibrary_eventLogEventInt64_Parms), Z_Construct_UFunction_UFirebaseAnalyticsLibrary_LogEventInt64_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseAnalyticsLibrary_LogEventInt64_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFirebaseAnalyticsLibrary_LogEventInt64_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseAnalyticsLibrary_LogEventInt64_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFirebaseAnalyticsLibrary_LogEventInt64()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFirebaseAnalyticsLibrary_LogEventInt64_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFirebaseAnalyticsLibrary_LogEvents_Statics
	{
		struct FirebaseAnalyticsLibrary_eventLogEvents_Parms
		{
			FString EventName;
			TMap<FString,FString> Parameters;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EventName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_EventName;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Parameters_ValueProp;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Parameters_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Parameters_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_Parameters;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseAnalyticsLibrary_LogEvents_Statics::NewProp_EventName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFirebaseAnalyticsLibrary_LogEvents_Statics::NewProp_EventName = { "EventName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirebaseAnalyticsLibrary_eventLogEvents_Parms, EventName), METADATA_PARAMS(Z_Construct_UFunction_UFirebaseAnalyticsLibrary_LogEvents_Statics::NewProp_EventName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseAnalyticsLibrary_LogEvents_Statics::NewProp_EventName_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFirebaseAnalyticsLibrary_LogEvents_Statics::NewProp_Parameters_ValueProp = { "Parameters", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFirebaseAnalyticsLibrary_LogEvents_Statics::NewProp_Parameters_Key_KeyProp = { "Parameters_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseAnalyticsLibrary_LogEvents_Statics::NewProp_Parameters_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UFirebaseAnalyticsLibrary_LogEvents_Statics::NewProp_Parameters = { "Parameters", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirebaseAnalyticsLibrary_eventLogEvents_Parms, Parameters), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UFirebaseAnalyticsLibrary_LogEvents_Statics::NewProp_Parameters_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseAnalyticsLibrary_LogEvents_Statics::NewProp_Parameters_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFirebaseAnalyticsLibrary_LogEvents_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseAnalyticsLibrary_LogEvents_Statics::NewProp_EventName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseAnalyticsLibrary_LogEvents_Statics::NewProp_Parameters_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseAnalyticsLibrary_LogEvents_Statics::NewProp_Parameters_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseAnalyticsLibrary_LogEvents_Statics::NewProp_Parameters,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseAnalyticsLibrary_LogEvents_Statics::Function_MetaDataParams[] = {
		{ "Category", "Firebase|Analytics" },
		{ "DisplayName", "Log Events (String)" },
		{ "ModuleRelativePath", "Public/Analytics/FirebaseAnalyticsLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFirebaseAnalyticsLibrary_LogEvents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFirebaseAnalyticsLibrary, nullptr, "LogEvents", nullptr, nullptr, sizeof(FirebaseAnalyticsLibrary_eventLogEvents_Parms), Z_Construct_UFunction_UFirebaseAnalyticsLibrary_LogEvents_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseAnalyticsLibrary_LogEvents_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFirebaseAnalyticsLibrary_LogEvents_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseAnalyticsLibrary_LogEvents_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFirebaseAnalyticsLibrary_LogEvents()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFirebaseAnalyticsLibrary_LogEvents_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFirebaseAnalyticsLibrary_LogEventString_Statics
	{
		struct FirebaseAnalyticsLibrary_eventLogEventString_Parms
		{
			FString EventName;
			FString ParameterName;
			FString ParameterValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EventName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_EventName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParameterName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ParameterName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParameterValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ParameterValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseAnalyticsLibrary_LogEventString_Statics::NewProp_EventName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFirebaseAnalyticsLibrary_LogEventString_Statics::NewProp_EventName = { "EventName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirebaseAnalyticsLibrary_eventLogEventString_Parms, EventName), METADATA_PARAMS(Z_Construct_UFunction_UFirebaseAnalyticsLibrary_LogEventString_Statics::NewProp_EventName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseAnalyticsLibrary_LogEventString_Statics::NewProp_EventName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseAnalyticsLibrary_LogEventString_Statics::NewProp_ParameterName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFirebaseAnalyticsLibrary_LogEventString_Statics::NewProp_ParameterName = { "ParameterName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirebaseAnalyticsLibrary_eventLogEventString_Parms, ParameterName), METADATA_PARAMS(Z_Construct_UFunction_UFirebaseAnalyticsLibrary_LogEventString_Statics::NewProp_ParameterName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseAnalyticsLibrary_LogEventString_Statics::NewProp_ParameterName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseAnalyticsLibrary_LogEventString_Statics::NewProp_ParameterValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFirebaseAnalyticsLibrary_LogEventString_Statics::NewProp_ParameterValue = { "ParameterValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirebaseAnalyticsLibrary_eventLogEventString_Parms, ParameterValue), METADATA_PARAMS(Z_Construct_UFunction_UFirebaseAnalyticsLibrary_LogEventString_Statics::NewProp_ParameterValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseAnalyticsLibrary_LogEventString_Statics::NewProp_ParameterValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFirebaseAnalyticsLibrary_LogEventString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseAnalyticsLibrary_LogEventString_Statics::NewProp_EventName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseAnalyticsLibrary_LogEventString_Statics::NewProp_ParameterName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseAnalyticsLibrary_LogEventString_Statics::NewProp_ParameterValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseAnalyticsLibrary_LogEventString_Statics::Function_MetaDataParams[] = {
		{ "Category", "Firebase|Analytics" },
		{ "DisplayName", "Log Event (String)" },
		{ "ModuleRelativePath", "Public/Analytics/FirebaseAnalyticsLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFirebaseAnalyticsLibrary_LogEventString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFirebaseAnalyticsLibrary, nullptr, "LogEventString", nullptr, nullptr, sizeof(FirebaseAnalyticsLibrary_eventLogEventString_Parms), Z_Construct_UFunction_UFirebaseAnalyticsLibrary_LogEventString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseAnalyticsLibrary_LogEventString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFirebaseAnalyticsLibrary_LogEventString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseAnalyticsLibrary_LogEventString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFirebaseAnalyticsLibrary_LogEventString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFirebaseAnalyticsLibrary_LogEventString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFirebaseAnalyticsLibrary_ResetAnalyticsData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseAnalyticsLibrary_ResetAnalyticsData_Statics::Function_MetaDataParams[] = {
		{ "Category", "Firebase|Analytics" },
		{ "ModuleRelativePath", "Public/Analytics/FirebaseAnalyticsLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFirebaseAnalyticsLibrary_ResetAnalyticsData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFirebaseAnalyticsLibrary, nullptr, "ResetAnalyticsData", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFirebaseAnalyticsLibrary_ResetAnalyticsData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseAnalyticsLibrary_ResetAnalyticsData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFirebaseAnalyticsLibrary_ResetAnalyticsData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFirebaseAnalyticsLibrary_ResetAnalyticsData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFirebaseAnalyticsLibrary_SetAnalyticsCollectionEnabled_Statics
	{
		struct FirebaseAnalyticsLibrary_eventSetAnalyticsCollectionEnabled_Parms
		{
			bool bEnabled;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[];
#endif
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseAnalyticsLibrary_SetAnalyticsCollectionEnabled_Statics::NewProp_bEnabled_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UFirebaseAnalyticsLibrary_SetAnalyticsCollectionEnabled_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((FirebaseAnalyticsLibrary_eventSetAnalyticsCollectionEnabled_Parms*)Obj)->bEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFirebaseAnalyticsLibrary_SetAnalyticsCollectionEnabled_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FirebaseAnalyticsLibrary_eventSetAnalyticsCollectionEnabled_Parms), &Z_Construct_UFunction_UFirebaseAnalyticsLibrary_SetAnalyticsCollectionEnabled_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UFirebaseAnalyticsLibrary_SetAnalyticsCollectionEnabled_Statics::NewProp_bEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseAnalyticsLibrary_SetAnalyticsCollectionEnabled_Statics::NewProp_bEnabled_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFirebaseAnalyticsLibrary_SetAnalyticsCollectionEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseAnalyticsLibrary_SetAnalyticsCollectionEnabled_Statics::NewProp_bEnabled,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseAnalyticsLibrary_SetAnalyticsCollectionEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "Firebase|Analytics" },
		{ "ModuleRelativePath", "Public/Analytics/FirebaseAnalyticsLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFirebaseAnalyticsLibrary_SetAnalyticsCollectionEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFirebaseAnalyticsLibrary, nullptr, "SetAnalyticsCollectionEnabled", nullptr, nullptr, sizeof(FirebaseAnalyticsLibrary_eventSetAnalyticsCollectionEnabled_Parms), Z_Construct_UFunction_UFirebaseAnalyticsLibrary_SetAnalyticsCollectionEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseAnalyticsLibrary_SetAnalyticsCollectionEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFirebaseAnalyticsLibrary_SetAnalyticsCollectionEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseAnalyticsLibrary_SetAnalyticsCollectionEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFirebaseAnalyticsLibrary_SetAnalyticsCollectionEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFirebaseAnalyticsLibrary_SetAnalyticsCollectionEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFirebaseAnalyticsLibrary_SetCurrentScreen_Statics
	{
		struct FirebaseAnalyticsLibrary_eventSetCurrentScreen_Parms
		{
			FString ScreenName;
			FString ScreenClass;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScreenName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ScreenName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScreenClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ScreenClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseAnalyticsLibrary_SetCurrentScreen_Statics::NewProp_ScreenName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFirebaseAnalyticsLibrary_SetCurrentScreen_Statics::NewProp_ScreenName = { "ScreenName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirebaseAnalyticsLibrary_eventSetCurrentScreen_Parms, ScreenName), METADATA_PARAMS(Z_Construct_UFunction_UFirebaseAnalyticsLibrary_SetCurrentScreen_Statics::NewProp_ScreenName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseAnalyticsLibrary_SetCurrentScreen_Statics::NewProp_ScreenName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseAnalyticsLibrary_SetCurrentScreen_Statics::NewProp_ScreenClass_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFirebaseAnalyticsLibrary_SetCurrentScreen_Statics::NewProp_ScreenClass = { "ScreenClass", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirebaseAnalyticsLibrary_eventSetCurrentScreen_Parms, ScreenClass), METADATA_PARAMS(Z_Construct_UFunction_UFirebaseAnalyticsLibrary_SetCurrentScreen_Statics::NewProp_ScreenClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseAnalyticsLibrary_SetCurrentScreen_Statics::NewProp_ScreenClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFirebaseAnalyticsLibrary_SetCurrentScreen_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseAnalyticsLibrary_SetCurrentScreen_Statics::NewProp_ScreenName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseAnalyticsLibrary_SetCurrentScreen_Statics::NewProp_ScreenClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseAnalyticsLibrary_SetCurrentScreen_Statics::Function_MetaDataParams[] = {
		{ "Category", "Firebase|Analytics" },
		{ "ModuleRelativePath", "Public/Analytics/FirebaseAnalyticsLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFirebaseAnalyticsLibrary_SetCurrentScreen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFirebaseAnalyticsLibrary, nullptr, "SetCurrentScreen", nullptr, nullptr, sizeof(FirebaseAnalyticsLibrary_eventSetCurrentScreen_Parms), Z_Construct_UFunction_UFirebaseAnalyticsLibrary_SetCurrentScreen_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseAnalyticsLibrary_SetCurrentScreen_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFirebaseAnalyticsLibrary_SetCurrentScreen_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseAnalyticsLibrary_SetCurrentScreen_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFirebaseAnalyticsLibrary_SetCurrentScreen()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFirebaseAnalyticsLibrary_SetCurrentScreen_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFirebaseAnalyticsLibrary_SetSessionTimeoutDuration_Statics
	{
		struct FirebaseAnalyticsLibrary_eventSetSessionTimeoutDuration_Parms
		{
			int64 Milliseconds;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Milliseconds_MetaData[];
#endif
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_Milliseconds;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseAnalyticsLibrary_SetSessionTimeoutDuration_Statics::NewProp_Milliseconds_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UFirebaseAnalyticsLibrary_SetSessionTimeoutDuration_Statics::NewProp_Milliseconds = { "Milliseconds", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirebaseAnalyticsLibrary_eventSetSessionTimeoutDuration_Parms, Milliseconds), METADATA_PARAMS(Z_Construct_UFunction_UFirebaseAnalyticsLibrary_SetSessionTimeoutDuration_Statics::NewProp_Milliseconds_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseAnalyticsLibrary_SetSessionTimeoutDuration_Statics::NewProp_Milliseconds_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFirebaseAnalyticsLibrary_SetSessionTimeoutDuration_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseAnalyticsLibrary_SetSessionTimeoutDuration_Statics::NewProp_Milliseconds,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseAnalyticsLibrary_SetSessionTimeoutDuration_Statics::Function_MetaDataParams[] = {
		{ "Category", "Firebase|Analytics" },
		{ "ModuleRelativePath", "Public/Analytics/FirebaseAnalyticsLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFirebaseAnalyticsLibrary_SetSessionTimeoutDuration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFirebaseAnalyticsLibrary, nullptr, "SetSessionTimeoutDuration", nullptr, nullptr, sizeof(FirebaseAnalyticsLibrary_eventSetSessionTimeoutDuration_Parms), Z_Construct_UFunction_UFirebaseAnalyticsLibrary_SetSessionTimeoutDuration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseAnalyticsLibrary_SetSessionTimeoutDuration_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFirebaseAnalyticsLibrary_SetSessionTimeoutDuration_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseAnalyticsLibrary_SetSessionTimeoutDuration_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFirebaseAnalyticsLibrary_SetSessionTimeoutDuration()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFirebaseAnalyticsLibrary_SetSessionTimeoutDuration_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFirebaseAnalyticsLibrary_SetUserId_Statics
	{
		struct FirebaseAnalyticsLibrary_eventSetUserId_Parms
		{
			FString UserId;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_UserId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseAnalyticsLibrary_SetUserId_Statics::NewProp_UserId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFirebaseAnalyticsLibrary_SetUserId_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirebaseAnalyticsLibrary_eventSetUserId_Parms, UserId), METADATA_PARAMS(Z_Construct_UFunction_UFirebaseAnalyticsLibrary_SetUserId_Statics::NewProp_UserId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseAnalyticsLibrary_SetUserId_Statics::NewProp_UserId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFirebaseAnalyticsLibrary_SetUserId_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseAnalyticsLibrary_SetUserId_Statics::NewProp_UserId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseAnalyticsLibrary_SetUserId_Statics::Function_MetaDataParams[] = {
		{ "Category", "Firebase|Analytics" },
		{ "ModuleRelativePath", "Public/Analytics/FirebaseAnalyticsLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFirebaseAnalyticsLibrary_SetUserId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFirebaseAnalyticsLibrary, nullptr, "SetUserId", nullptr, nullptr, sizeof(FirebaseAnalyticsLibrary_eventSetUserId_Parms), Z_Construct_UFunction_UFirebaseAnalyticsLibrary_SetUserId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseAnalyticsLibrary_SetUserId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFirebaseAnalyticsLibrary_SetUserId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseAnalyticsLibrary_SetUserId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFirebaseAnalyticsLibrary_SetUserId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFirebaseAnalyticsLibrary_SetUserId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFirebaseAnalyticsLibrary_SetUserProperty_Statics
	{
		struct FirebaseAnalyticsLibrary_eventSetUserProperty_Parms
		{
			FString Name;
			FString Property;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Property_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Property;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseAnalyticsLibrary_SetUserProperty_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFirebaseAnalyticsLibrary_SetUserProperty_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirebaseAnalyticsLibrary_eventSetUserProperty_Parms, Name), METADATA_PARAMS(Z_Construct_UFunction_UFirebaseAnalyticsLibrary_SetUserProperty_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseAnalyticsLibrary_SetUserProperty_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseAnalyticsLibrary_SetUserProperty_Statics::NewProp_Property_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFirebaseAnalyticsLibrary_SetUserProperty_Statics::NewProp_Property = { "Property", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirebaseAnalyticsLibrary_eventSetUserProperty_Parms, Property), METADATA_PARAMS(Z_Construct_UFunction_UFirebaseAnalyticsLibrary_SetUserProperty_Statics::NewProp_Property_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseAnalyticsLibrary_SetUserProperty_Statics::NewProp_Property_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFirebaseAnalyticsLibrary_SetUserProperty_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseAnalyticsLibrary_SetUserProperty_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseAnalyticsLibrary_SetUserProperty_Statics::NewProp_Property,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseAnalyticsLibrary_SetUserProperty_Statics::Function_MetaDataParams[] = {
		{ "Category", "Firebase|Analytics" },
		{ "ModuleRelativePath", "Public/Analytics/FirebaseAnalyticsLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFirebaseAnalyticsLibrary_SetUserProperty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFirebaseAnalyticsLibrary, nullptr, "SetUserProperty", nullptr, nullptr, sizeof(FirebaseAnalyticsLibrary_eventSetUserProperty_Parms), Z_Construct_UFunction_UFirebaseAnalyticsLibrary_SetUserProperty_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseAnalyticsLibrary_SetUserProperty_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFirebaseAnalyticsLibrary_SetUserProperty_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseAnalyticsLibrary_SetUserProperty_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFirebaseAnalyticsLibrary_SetUserProperty()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFirebaseAnalyticsLibrary_SetUserProperty_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFirebaseAnalyticsLibrary_StartSession_Statics
	{
		struct FirebaseAnalyticsLibrary_eventStartSession_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseAnalyticsLibrary_StartSession_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Has Started" },
	};
#endif
	void Z_Construct_UFunction_UFirebaseAnalyticsLibrary_StartSession_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FirebaseAnalyticsLibrary_eventStartSession_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFirebaseAnalyticsLibrary_StartSession_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FirebaseAnalyticsLibrary_eventStartSession_Parms), &Z_Construct_UFunction_UFirebaseAnalyticsLibrary_StartSession_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UFirebaseAnalyticsLibrary_StartSession_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseAnalyticsLibrary_StartSession_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFirebaseAnalyticsLibrary_StartSession_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseAnalyticsLibrary_StartSession_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseAnalyticsLibrary_StartSession_Statics::Function_MetaDataParams[] = {
		{ "Category", "Firebase|Analytics" },
		{ "ModuleRelativePath", "Public/Analytics/FirebaseAnalyticsLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFirebaseAnalyticsLibrary_StartSession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFirebaseAnalyticsLibrary, nullptr, "StartSession", nullptr, nullptr, sizeof(FirebaseAnalyticsLibrary_eventStartSession_Parms), Z_Construct_UFunction_UFirebaseAnalyticsLibrary_StartSession_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseAnalyticsLibrary_StartSession_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFirebaseAnalyticsLibrary_StartSession_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseAnalyticsLibrary_StartSession_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFirebaseAnalyticsLibrary_StartSession()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFirebaseAnalyticsLibrary_StartSession_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFirebaseAnalyticsLibrary_NoRegister()
	{
		return UFirebaseAnalyticsLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UFirebaseAnalyticsLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFirebaseAnalyticsLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_FirebaseFeatures,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFirebaseAnalyticsLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFirebaseAnalyticsLibrary_EndSession, "EndSession" }, // 1660872458
		{ &Z_Construct_UFunction_UFirebaseAnalyticsLibrary_LogEvent, "LogEvent" }, // 4281784944
		{ &Z_Construct_UFunction_UFirebaseAnalyticsLibrary_LogEventFloat, "LogEventFloat" }, // 3249952307
		{ &Z_Construct_UFunction_UFirebaseAnalyticsLibrary_LogEventInt32, "LogEventInt32" }, // 2823132428
		{ &Z_Construct_UFunction_UFirebaseAnalyticsLibrary_LogEventInt64, "LogEventInt64" }, // 275675184
		{ &Z_Construct_UFunction_UFirebaseAnalyticsLibrary_LogEvents, "LogEvents" }, // 2407348477
		{ &Z_Construct_UFunction_UFirebaseAnalyticsLibrary_LogEventString, "LogEventString" }, // 2991297841
		{ &Z_Construct_UFunction_UFirebaseAnalyticsLibrary_ResetAnalyticsData, "ResetAnalyticsData" }, // 3883586455
		{ &Z_Construct_UFunction_UFirebaseAnalyticsLibrary_SetAnalyticsCollectionEnabled, "SetAnalyticsCollectionEnabled" }, // 3742438060
		{ &Z_Construct_UFunction_UFirebaseAnalyticsLibrary_SetCurrentScreen, "SetCurrentScreen" }, // 3836903377
		{ &Z_Construct_UFunction_UFirebaseAnalyticsLibrary_SetSessionTimeoutDuration, "SetSessionTimeoutDuration" }, // 3129944476
		{ &Z_Construct_UFunction_UFirebaseAnalyticsLibrary_SetUserId, "SetUserId" }, // 1453197104
		{ &Z_Construct_UFunction_UFirebaseAnalyticsLibrary_SetUserProperty, "SetUserProperty" }, // 2752477639
		{ &Z_Construct_UFunction_UFirebaseAnalyticsLibrary_StartSession, "StartSession" }, // 321269058
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFirebaseAnalyticsLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Analytics/FirebaseAnalyticsLibrary.h" },
		{ "ModuleRelativePath", "Public/Analytics/FirebaseAnalyticsLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFirebaseAnalyticsLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFirebaseAnalyticsLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFirebaseAnalyticsLibrary_Statics::ClassParams = {
		&UFirebaseAnalyticsLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UFirebaseAnalyticsLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFirebaseAnalyticsLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFirebaseAnalyticsLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFirebaseAnalyticsLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFirebaseAnalyticsLibrary, 296985729);
	template<> FIREBASEFEATURES_API UClass* StaticClass<UFirebaseAnalyticsLibrary>()
	{
		return UFirebaseAnalyticsLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFirebaseAnalyticsLibrary(Z_Construct_UClass_UFirebaseAnalyticsLibrary, &UFirebaseAnalyticsLibrary::StaticClass, TEXT("/Script/FirebaseFeatures"), TEXT("UFirebaseAnalyticsLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFirebaseAnalyticsLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
