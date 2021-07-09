// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FirebaseFeatures/Public/Database/DatabaseReference.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDatabaseReference() {}
// Cross Module References
	FIREBASEFEATURES_API UFunction* Z_Construct_UDelegateFunction_FirebaseFeatures_QueryValueEvent__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_FirebaseFeatures();
	FIREBASEFEATURES_API UClass* Z_Construct_UClass_UDataSnapshot_NoRegister();
	FIREBASEFEATURES_API UFunction* Z_Construct_UDelegateFunction_FirebaseFeatures_QueryCancelEvent__DelegateSignature();
	FIREBASEFEATURES_API UEnum* Z_Construct_UEnum_FirebaseFeatures_EFirebaseDatabaseError();
	FIREBASEFEATURES_API UFunction* Z_Construct_UDelegateFunction_FirebaseFeatures_QueryChildEvent__DelegateSignature();
	FIREBASEFEATURES_API UEnum* Z_Construct_UEnum_FirebaseFeatures_ETransactionResult();
	FIREBASEFEATURES_API UScriptStruct* Z_Construct_UScriptStruct_FMutableData();
	FIREBASEFEATURES_API UClass* Z_Construct_UClass_UDataSnapshot();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	FIREBASEFEATURES_API UScriptStruct* Z_Construct_UScriptStruct_FFirebaseVariant();
	FIREBASEFEATURES_API UClass* Z_Construct_UClass_UDatabaseReference_NoRegister();
	FIREBASEFEATURES_API UClass* Z_Construct_UClass_UDisconnectionHandler_NoRegister();
	FIREBASEFEATURES_API UClass* Z_Construct_UClass_UDisconnectionHandler();
	FIREBASEFEATURES_API UClass* Z_Construct_UClass_UDatabaseQuery_NoRegister();
	FIREBASEFEATURES_API UClass* Z_Construct_UClass_UDatabaseQuery();
	FIREBASEFEATURES_API UClass* Z_Construct_UClass_UDatabaseReference();
	FIREBASEFEATURES_API UClass* Z_Construct_UClass_UDatabase_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_FirebaseFeatures_QueryValueEvent__DelegateSignature_Statics
	{
		struct _Script_FirebaseFeatures_eventQueryValueEvent_Parms
		{
			UDataSnapshot* Snapshot;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Snapshot;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_FirebaseFeatures_QueryValueEvent__DelegateSignature_Statics::NewProp_Snapshot = { "Snapshot", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_FirebaseFeatures_eventQueryValueEvent_Parms, Snapshot), Z_Construct_UClass_UDataSnapshot_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_FirebaseFeatures_QueryValueEvent__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_FirebaseFeatures_QueryValueEvent__DelegateSignature_Statics::NewProp_Snapshot,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_FirebaseFeatures_QueryValueEvent__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Database/DatabaseReference.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_FirebaseFeatures_QueryValueEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_FirebaseFeatures, nullptr, "QueryValueEvent__DelegateSignature", nullptr, nullptr, sizeof(_Script_FirebaseFeatures_eventQueryValueEvent_Parms), Z_Construct_UDelegateFunction_FirebaseFeatures_QueryValueEvent__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_FirebaseFeatures_QueryValueEvent__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_FirebaseFeatures_QueryValueEvent__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_FirebaseFeatures_QueryValueEvent__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_FirebaseFeatures_QueryValueEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_FirebaseFeatures_QueryValueEvent__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_FirebaseFeatures_QueryCancelEvent__DelegateSignature_Statics
	{
		struct _Script_FirebaseFeatures_eventQueryCancelEvent_Parms
		{
			EFirebaseDatabaseError Error;
			FString ErrorMessage;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Error_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Error_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Error;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ErrorMessage_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ErrorMessage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_FirebaseFeatures_QueryCancelEvent__DelegateSignature_Statics::NewProp_Error_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_FirebaseFeatures_QueryCancelEvent__DelegateSignature_Statics::NewProp_Error_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_FirebaseFeatures_QueryCancelEvent__DelegateSignature_Statics::NewProp_Error = { "Error", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_FirebaseFeatures_eventQueryCancelEvent_Parms, Error), Z_Construct_UEnum_FirebaseFeatures_EFirebaseDatabaseError, METADATA_PARAMS(Z_Construct_UDelegateFunction_FirebaseFeatures_QueryCancelEvent__DelegateSignature_Statics::NewProp_Error_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_FirebaseFeatures_QueryCancelEvent__DelegateSignature_Statics::NewProp_Error_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_FirebaseFeatures_QueryCancelEvent__DelegateSignature_Statics::NewProp_ErrorMessage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_FirebaseFeatures_QueryCancelEvent__DelegateSignature_Statics::NewProp_ErrorMessage = { "ErrorMessage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_FirebaseFeatures_eventQueryCancelEvent_Parms, ErrorMessage), METADATA_PARAMS(Z_Construct_UDelegateFunction_FirebaseFeatures_QueryCancelEvent__DelegateSignature_Statics::NewProp_ErrorMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_FirebaseFeatures_QueryCancelEvent__DelegateSignature_Statics::NewProp_ErrorMessage_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_FirebaseFeatures_QueryCancelEvent__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_FirebaseFeatures_QueryCancelEvent__DelegateSignature_Statics::NewProp_Error_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_FirebaseFeatures_QueryCancelEvent__DelegateSignature_Statics::NewProp_Error,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_FirebaseFeatures_QueryCancelEvent__DelegateSignature_Statics::NewProp_ErrorMessage,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_FirebaseFeatures_QueryCancelEvent__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Database/DatabaseReference.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_FirebaseFeatures_QueryCancelEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_FirebaseFeatures, nullptr, "QueryCancelEvent__DelegateSignature", nullptr, nullptr, sizeof(_Script_FirebaseFeatures_eventQueryCancelEvent_Parms), Z_Construct_UDelegateFunction_FirebaseFeatures_QueryCancelEvent__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_FirebaseFeatures_QueryCancelEvent__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_FirebaseFeatures_QueryCancelEvent__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_FirebaseFeatures_QueryCancelEvent__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_FirebaseFeatures_QueryCancelEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_FirebaseFeatures_QueryCancelEvent__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_FirebaseFeatures_QueryChildEvent__DelegateSignature_Statics
	{
		struct _Script_FirebaseFeatures_eventQueryChildEvent_Parms
		{
			UDataSnapshot* Snapshot;
			FString PreviousSiblingKey;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Snapshot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreviousSiblingKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PreviousSiblingKey;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_FirebaseFeatures_QueryChildEvent__DelegateSignature_Statics::NewProp_Snapshot = { "Snapshot", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_FirebaseFeatures_eventQueryChildEvent_Parms, Snapshot), Z_Construct_UClass_UDataSnapshot_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_FirebaseFeatures_QueryChildEvent__DelegateSignature_Statics::NewProp_PreviousSiblingKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_FirebaseFeatures_QueryChildEvent__DelegateSignature_Statics::NewProp_PreviousSiblingKey = { "PreviousSiblingKey", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_FirebaseFeatures_eventQueryChildEvent_Parms, PreviousSiblingKey), METADATA_PARAMS(Z_Construct_UDelegateFunction_FirebaseFeatures_QueryChildEvent__DelegateSignature_Statics::NewProp_PreviousSiblingKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_FirebaseFeatures_QueryChildEvent__DelegateSignature_Statics::NewProp_PreviousSiblingKey_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_FirebaseFeatures_QueryChildEvent__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_FirebaseFeatures_QueryChildEvent__DelegateSignature_Statics::NewProp_Snapshot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_FirebaseFeatures_QueryChildEvent__DelegateSignature_Statics::NewProp_PreviousSiblingKey,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_FirebaseFeatures_QueryChildEvent__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Database/DatabaseReference.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_FirebaseFeatures_QueryChildEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_FirebaseFeatures, nullptr, "QueryChildEvent__DelegateSignature", nullptr, nullptr, sizeof(_Script_FirebaseFeatures_eventQueryChildEvent_Parms), Z_Construct_UDelegateFunction_FirebaseFeatures_QueryChildEvent__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_FirebaseFeatures_QueryChildEvent__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_FirebaseFeatures_QueryChildEvent__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_FirebaseFeatures_QueryChildEvent__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_FirebaseFeatures_QueryChildEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_FirebaseFeatures_QueryChildEvent__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	static UEnum* ETransactionResult_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_FirebaseFeatures_ETransactionResult, Z_Construct_UPackage__Script_FirebaseFeatures(), TEXT("ETransactionResult"));
		}
		return Singleton;
	}
	template<> FIREBASEFEATURES_API UEnum* StaticEnum<ETransactionResult>()
	{
		return ETransactionResult_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ETransactionResult(ETransactionResult_StaticEnum, TEXT("/Script/FirebaseFeatures"), TEXT("ETransactionResult"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_FirebaseFeatures_ETransactionResult_Hash() { return 1364640623U; }
	UEnum* Z_Construct_UEnum_FirebaseFeatures_ETransactionResult()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_FirebaseFeatures();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ETransactionResult"), 0, Get_Z_Construct_UEnum_FirebaseFeatures_ETransactionResult_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ETransactionResult::Success", (int64)ETransactionResult::Success },
				{ "ETransactionResult::Abort", (int64)ETransactionResult::Abort },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Abort.Comment", "/// The transaction did not succeed. Any changes to the MutableData\n/// will be discarded.\n" },
				{ "Abort.Name", "ETransactionResult::Abort" },
				{ "Abort.ToolTip", "The transaction did not succeed. Any changes to the MutableData\nwill be discarded." },
				{ "BlueprintType", "true" },
				{ "Comment", "/// Specifies whether the transaction succeeded or not.\n" },
				{ "ModuleRelativePath", "Public/Database/DatabaseReference.h" },
				{ "Success.Comment", "/// The transaction was successful, the MutableData was updated.\n" },
				{ "Success.Name", "ETransactionResult::Success" },
				{ "Success.ToolTip", "The transaction was successful, the MutableData was updated." },
				{ "ToolTip", "Specifies whether the transaction succeeded or not." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_FirebaseFeatures,
				nullptr,
				"ETransactionResult",
				"ETransactionResult",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FMutableData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FIREBASEFEATURES_API uint32 Get_Z_Construct_UScriptStruct_FMutableData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMutableData, Z_Construct_UPackage__Script_FirebaseFeatures(), TEXT("MutableData"), sizeof(FMutableData), Get_Z_Construct_UScriptStruct_FMutableData_Hash());
	}
	return Singleton;
}
template<> FIREBASEFEATURES_API UScriptStruct* StaticStruct<FMutableData>()
{
	return FMutableData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMutableData(FMutableData::StaticStruct, TEXT("/Script/FirebaseFeatures"), TEXT("MutableData"), false, nullptr, nullptr);
static struct FScriptStruct_FirebaseFeatures_StaticRegisterNativesFMutableData
{
	FScriptStruct_FirebaseFeatures_StaticRegisterNativesFMutableData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MutableData")),new UScriptStruct::TCppStructOps<FMutableData>);
	}
} ScriptStruct_FirebaseFeatures_StaticRegisterNativesFMutableData;
	struct Z_Construct_UScriptStruct_FMutableData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMutableData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Database/DatabaseReference.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMutableData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMutableData>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMutableData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FirebaseFeatures,
		nullptr,
		&NewStructOps,
		"MutableData",
		sizeof(FMutableData),
		alignof(FMutableData),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMutableData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMutableData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMutableData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMutableData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_FirebaseFeatures();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MutableData"), sizeof(FMutableData), Get_Z_Construct_UScriptStruct_FMutableData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMutableData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMutableData_Hash() { return 1406452640U; }
	DEFINE_FUNCTION(UDataSnapshot::execIsValid)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsValid();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDataSnapshot::execHasChild)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Path);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasChild(Z_Param_Path);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDataSnapshot::execGetReference)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDatabaseReference**)Z_Param__Result=P_THIS->GetReference();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDataSnapshot::execGetPriority)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FFirebaseVariant*)Z_Param__Result=P_THIS->GetPriority();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDataSnapshot::execGetValue)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FFirebaseVariant*)Z_Param__Result=P_THIS->GetValue();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDataSnapshot::execGetKey)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetKey();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDataSnapshot::execHasChildren)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasChildren();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDataSnapshot::execChildrenCount)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int64*)Z_Param__Result=P_THIS->ChildrenCount();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDataSnapshot::execGetChildren)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UDataSnapshot*>*)Z_Param__Result=P_THIS->GetChildren();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDataSnapshot::execGetChild)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Path);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDataSnapshot**)Z_Param__Result=P_THIS->GetChild(Z_Param_Path);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDataSnapshot::execExists)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->Exists();
		P_NATIVE_END;
	}
	void UDataSnapshot::StaticRegisterNativesUDataSnapshot()
	{
		UClass* Class = UDataSnapshot::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ChildrenCount", &UDataSnapshot::execChildrenCount },
			{ "Exists", &UDataSnapshot::execExists },
			{ "GetChild", &UDataSnapshot::execGetChild },
			{ "GetChildren", &UDataSnapshot::execGetChildren },
			{ "GetKey", &UDataSnapshot::execGetKey },
			{ "GetPriority", &UDataSnapshot::execGetPriority },
			{ "GetReference", &UDataSnapshot::execGetReference },
			{ "GetValue", &UDataSnapshot::execGetValue },
			{ "HasChild", &UDataSnapshot::execHasChild },
			{ "HasChildren", &UDataSnapshot::execHasChildren },
			{ "IsValid", &UDataSnapshot::execIsValid },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDataSnapshot_ChildrenCount_Statics
	{
		struct DataSnapshot_eventChildrenCount_Parms
		{
			int64 ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataSnapshot_ChildrenCount_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Count" },
	};
#endif
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UDataSnapshot_ChildrenCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DataSnapshot_eventChildrenCount_Parms, ReturnValue), METADATA_PARAMS(Z_Construct_UFunction_UDataSnapshot_ChildrenCount_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataSnapshot_ChildrenCount_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDataSnapshot_ChildrenCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataSnapshot_ChildrenCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataSnapshot_ChildrenCount_Statics::Function_MetaDataParams[] = {
		{ "Category", "Firebase|Database|Snapshot" },
		{ "Comment", "/// @brief Get all the immediate children of this location.\n/// @returns The immediate children of this snapshot.\n" },
		{ "ModuleRelativePath", "Public/Database/DatabaseReference.h" },
		{ "ToolTip", "@brief Get all the immediate children of this location.\n@returns The immediate children of this snapshot." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataSnapshot_ChildrenCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDataSnapshot, nullptr, "ChildrenCount", nullptr, nullptr, sizeof(DataSnapshot_eventChildrenCount_Parms), Z_Construct_UFunction_UDataSnapshot_ChildrenCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataSnapshot_ChildrenCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDataSnapshot_ChildrenCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataSnapshot_ChildrenCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDataSnapshot_ChildrenCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDataSnapshot_ChildrenCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDataSnapshot_Exists_Statics
	{
		struct DataSnapshot_eventExists_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataSnapshot_Exists_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Exists" },
	};
#endif
	void Z_Construct_UFunction_UDataSnapshot_Exists_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DataSnapshot_eventExists_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDataSnapshot_Exists_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DataSnapshot_eventExists_Parms), &Z_Construct_UFunction_UDataSnapshot_Exists_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UDataSnapshot_Exists_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataSnapshot_Exists_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDataSnapshot_Exists_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataSnapshot_Exists_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataSnapshot_Exists_Statics::Function_MetaDataParams[] = {
		{ "Category", "Firebase|Database|Snapshot" },
		{ "Comment", "/// @brief Returns true if the data is non-empty.\n" },
		{ "ModuleRelativePath", "Public/Database/DatabaseReference.h" },
		{ "ToolTip", "@brief Returns true if the data is non-empty." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataSnapshot_Exists_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDataSnapshot, nullptr, "Exists", nullptr, nullptr, sizeof(DataSnapshot_eventExists_Parms), Z_Construct_UFunction_UDataSnapshot_Exists_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataSnapshot_Exists_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDataSnapshot_Exists_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataSnapshot_Exists_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDataSnapshot_Exists()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDataSnapshot_Exists_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDataSnapshot_GetChild_Statics
	{
		struct DataSnapshot_eventGetChild_Parms
		{
			FString Path;
			UDataSnapshot* ReturnValue;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataSnapshot_GetChild_Statics::NewProp_Path_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDataSnapshot_GetChild_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DataSnapshot_eventGetChild_Parms, Path), METADATA_PARAMS(Z_Construct_UFunction_UDataSnapshot_GetChild_Statics::NewProp_Path_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataSnapshot_GetChild_Statics::NewProp_Path_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataSnapshot_GetChild_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Child" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDataSnapshot_GetChild_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DataSnapshot_eventGetChild_Parms, ReturnValue), Z_Construct_UClass_UDataSnapshot_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UDataSnapshot_GetChild_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataSnapshot_GetChild_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDataSnapshot_GetChild_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataSnapshot_GetChild_Statics::NewProp_Path,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataSnapshot_GetChild_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataSnapshot_GetChild_Statics::Function_MetaDataParams[] = {
		{ "Category", "Firebase|Database|Snapshot" },
		{ "Comment", "/// @brief Get a DataSnapshot for the location at the specified relative path.\n/// @param[in] path Path relative to this snapshot's location.\n/// @returns A DataSnapshot corresponding to specified child location.\n" },
		{ "ModuleRelativePath", "Public/Database/DatabaseReference.h" },
		{ "ToolTip", "@brief Get a DataSnapshot for the location at the specified relative path.\n@param[in] path Path relative to this snapshot's location.\n@returns A DataSnapshot corresponding to specified child location." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataSnapshot_GetChild_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDataSnapshot, nullptr, "GetChild", nullptr, nullptr, sizeof(DataSnapshot_eventGetChild_Parms), Z_Construct_UFunction_UDataSnapshot_GetChild_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataSnapshot_GetChild_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDataSnapshot_GetChild_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataSnapshot_GetChild_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDataSnapshot_GetChild()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDataSnapshot_GetChild_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDataSnapshot_GetChildren_Statics
	{
		struct DataSnapshot_eventGetChildren_Parms
		{
			TArray<UDataSnapshot*> ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDataSnapshot_GetChildren_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UDataSnapshot_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataSnapshot_GetChildren_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Children" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDataSnapshot_GetChildren_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DataSnapshot_eventGetChildren_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UDataSnapshot_GetChildren_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataSnapshot_GetChildren_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDataSnapshot_GetChildren_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataSnapshot_GetChildren_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataSnapshot_GetChildren_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataSnapshot_GetChildren_Statics::Function_MetaDataParams[] = {
		{ "Category", "Firebase|Database|Snapshot" },
		{ "Comment", "/// @brief Get all the immediate children of this location.\n///\n/// @returns The immediate children of this snapshot.\n" },
		{ "ModuleRelativePath", "Public/Database/DatabaseReference.h" },
		{ "ToolTip", "@brief Get all the immediate children of this location.\n\n@returns The immediate children of this snapshot." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataSnapshot_GetChildren_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDataSnapshot, nullptr, "GetChildren", nullptr, nullptr, sizeof(DataSnapshot_eventGetChildren_Parms), Z_Construct_UFunction_UDataSnapshot_GetChildren_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataSnapshot_GetChildren_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDataSnapshot_GetChildren_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataSnapshot_GetChildren_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDataSnapshot_GetChildren()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDataSnapshot_GetChildren_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDataSnapshot_GetKey_Statics
	{
		struct DataSnapshot_eventGetKey_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataSnapshot_GetKey_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Key" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDataSnapshot_GetKey_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DataSnapshot_eventGetKey_Parms, ReturnValue), METADATA_PARAMS(Z_Construct_UFunction_UDataSnapshot_GetKey_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataSnapshot_GetKey_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDataSnapshot_GetKey_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataSnapshot_GetKey_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataSnapshot_GetKey_Statics::Function_MetaDataParams[] = {
		{ "Category", "Firebase|Database|Snapshot" },
		{ "Comment", "/// @brief Get the key name of the source location of this snapshot.\n///\n/// @note The returned pointer is only guaranteed to be valid while the\n/// DataSnapshot is still in memory.\n///\n/// @returns Key name of the source location of this snapshot.\n" },
		{ "ModuleRelativePath", "Public/Database/DatabaseReference.h" },
		{ "ToolTip", "@brief Get the key name of the source location of this snapshot.\n\n@note The returned pointer is only guaranteed to be valid while the\nDataSnapshot is still in memory.\n\n@returns Key name of the source location of this snapshot." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataSnapshot_GetKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDataSnapshot, nullptr, "GetKey", nullptr, nullptr, sizeof(DataSnapshot_eventGetKey_Parms), Z_Construct_UFunction_UDataSnapshot_GetKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataSnapshot_GetKey_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDataSnapshot_GetKey_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataSnapshot_GetKey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDataSnapshot_GetKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDataSnapshot_GetKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDataSnapshot_GetPriority_Statics
	{
		struct DataSnapshot_eventGetPriority_Parms
		{
			FFirebaseVariant ReturnValue;
		};
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataSnapshot_GetPriority_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Priority" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDataSnapshot_GetPriority_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DataSnapshot_eventGetPriority_Parms, ReturnValue), Z_Construct_UScriptStruct_FFirebaseVariant, METADATA_PARAMS(Z_Construct_UFunction_UDataSnapshot_GetPriority_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataSnapshot_GetPriority_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDataSnapshot_GetPriority_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataSnapshot_GetPriority_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataSnapshot_GetPriority_Statics::Function_MetaDataParams[] = {
		{ "Category", "Firebase|Database|Snapshot" },
		{ "Comment", "/// @brief Get the priority of the data contained in this snapshot.\n///\n/// @returns The value of this location's Priority relative to its siblings.\n" },
		{ "ModuleRelativePath", "Public/Database/DatabaseReference.h" },
		{ "ToolTip", "@brief Get the priority of the data contained in this snapshot.\n\n@returns The value of this location's Priority relative to its siblings." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataSnapshot_GetPriority_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDataSnapshot, nullptr, "GetPriority", nullptr, nullptr, sizeof(DataSnapshot_eventGetPriority_Parms), Z_Construct_UFunction_UDataSnapshot_GetPriority_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataSnapshot_GetPriority_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDataSnapshot_GetPriority_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataSnapshot_GetPriority_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDataSnapshot_GetPriority()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDataSnapshot_GetPriority_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDataSnapshot_GetReference_Statics
	{
		struct DataSnapshot_eventGetReference_Parms
		{
			UDatabaseReference* ReturnValue;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataSnapshot_GetReference_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Reference" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDataSnapshot_GetReference_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DataSnapshot_eventGetReference_Parms, ReturnValue), Z_Construct_UClass_UDatabaseReference_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UDataSnapshot_GetReference_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataSnapshot_GetReference_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDataSnapshot_GetReference_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataSnapshot_GetReference_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataSnapshot_GetReference_Statics::Function_MetaDataParams[] = {
		{ "Category", "Firebase|Database|Snapshot" },
		{ "Comment", "/// @brief Obtain a DatabaseReference to the source location for this\n/// snapshot.\n///\n/// @returns A DatabaseReference corresponding to same location as\n/// this snapshot.\n" },
		{ "ModuleRelativePath", "Public/Database/DatabaseReference.h" },
		{ "ToolTip", "@brief Obtain a DatabaseReference to the source location for this\nsnapshot.\n\n@returns A DatabaseReference corresponding to same location as\nthis snapshot." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataSnapshot_GetReference_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDataSnapshot, nullptr, "GetReference", nullptr, nullptr, sizeof(DataSnapshot_eventGetReference_Parms), Z_Construct_UFunction_UDataSnapshot_GetReference_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataSnapshot_GetReference_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDataSnapshot_GetReference_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataSnapshot_GetReference_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDataSnapshot_GetReference()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDataSnapshot_GetReference_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDataSnapshot_GetValue_Statics
	{
		struct DataSnapshot_eventGetValue_Parms
		{
			FFirebaseVariant ReturnValue;
		};
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataSnapshot_GetValue_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Value" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDataSnapshot_GetValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DataSnapshot_eventGetValue_Parms, ReturnValue), Z_Construct_UScriptStruct_FFirebaseVariant, METADATA_PARAMS(Z_Construct_UFunction_UDataSnapshot_GetValue_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataSnapshot_GetValue_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDataSnapshot_GetValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataSnapshot_GetValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataSnapshot_GetValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Firebase|Database|Snapshot" },
		{ "Comment", "/// @brief Get the value of the data contained in this snapshot.\n///\n/// @returns The value of the data contained in this location.\n" },
		{ "ModuleRelativePath", "Public/Database/DatabaseReference.h" },
		{ "ToolTip", "@brief Get the value of the data contained in this snapshot.\n\n@returns The value of the data contained in this location." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataSnapshot_GetValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDataSnapshot, nullptr, "GetValue", nullptr, nullptr, sizeof(DataSnapshot_eventGetValue_Parms), Z_Construct_UFunction_UDataSnapshot_GetValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataSnapshot_GetValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDataSnapshot_GetValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataSnapshot_GetValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDataSnapshot_GetValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDataSnapshot_GetValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDataSnapshot_HasChild_Statics
	{
		struct DataSnapshot_eventHasChild_Parms
		{
			FString Path;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Path_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Path;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataSnapshot_HasChild_Statics::NewProp_Path_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDataSnapshot_HasChild_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DataSnapshot_eventHasChild_Parms, Path), METADATA_PARAMS(Z_Construct_UFunction_UDataSnapshot_HasChild_Statics::NewProp_Path_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataSnapshot_HasChild_Statics::NewProp_Path_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataSnapshot_HasChild_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Has Child" },
	};
#endif
	void Z_Construct_UFunction_UDataSnapshot_HasChild_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DataSnapshot_eventHasChild_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDataSnapshot_HasChild_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DataSnapshot_eventHasChild_Parms), &Z_Construct_UFunction_UDataSnapshot_HasChild_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UDataSnapshot_HasChild_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataSnapshot_HasChild_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDataSnapshot_HasChild_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataSnapshot_HasChild_Statics::NewProp_Path,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataSnapshot_HasChild_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataSnapshot_HasChild_Statics::Function_MetaDataParams[] = {
		{ "Category", "Firebase|Database|Snapshot" },
		{ "Comment", "/// @brief Does this DataSnapshot have data at a particular location?\n///\n/// @param[in] path Path relative to this snapshot's location.\n///\n/// @returns True if the snapshot has data at the specified location, false if\n/// not.\n" },
		{ "ModuleRelativePath", "Public/Database/DatabaseReference.h" },
		{ "ToolTip", "@brief Does this DataSnapshot have data at a particular location?\n\n@param[in] path Path relative to this snapshot's location.\n\n@returns True if the snapshot has data at the specified location, false if\nnot." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataSnapshot_HasChild_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDataSnapshot, nullptr, "HasChild", nullptr, nullptr, sizeof(DataSnapshot_eventHasChild_Parms), Z_Construct_UFunction_UDataSnapshot_HasChild_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataSnapshot_HasChild_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDataSnapshot_HasChild_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataSnapshot_HasChild_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDataSnapshot_HasChild()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDataSnapshot_HasChild_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDataSnapshot_HasChildren_Statics
	{
		struct DataSnapshot_eventHasChildren_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataSnapshot_HasChildren_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Has Childrend" },
	};
#endif
	void Z_Construct_UFunction_UDataSnapshot_HasChildren_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DataSnapshot_eventHasChildren_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDataSnapshot_HasChildren_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DataSnapshot_eventHasChildren_Parms), &Z_Construct_UFunction_UDataSnapshot_HasChildren_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UDataSnapshot_HasChildren_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataSnapshot_HasChildren_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDataSnapshot_HasChildren_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataSnapshot_HasChildren_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataSnapshot_HasChildren_Statics::Function_MetaDataParams[] = {
		{ "Category", "Firebase|Database|Snapshot" },
		{ "Comment", "/// @brief Does this DataSnapshot have any children at all?\n///\n/// @returns True if the snapshot has any children, false otherwise.\n" },
		{ "ModuleRelativePath", "Public/Database/DatabaseReference.h" },
		{ "ToolTip", "@brief Does this DataSnapshot have any children at all?\n\n@returns True if the snapshot has any children, false otherwise." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataSnapshot_HasChildren_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDataSnapshot, nullptr, "HasChildren", nullptr, nullptr, sizeof(DataSnapshot_eventHasChildren_Parms), Z_Construct_UFunction_UDataSnapshot_HasChildren_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataSnapshot_HasChildren_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDataSnapshot_HasChildren_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataSnapshot_HasChildren_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDataSnapshot_HasChildren()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDataSnapshot_HasChildren_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDataSnapshot_IsValid_Statics
	{
		struct DataSnapshot_eventIsValid_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataSnapshot_IsValid_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Is Valid" },
	};
#endif
	void Z_Construct_UFunction_UDataSnapshot_IsValid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DataSnapshot_eventIsValid_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDataSnapshot_IsValid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DataSnapshot_eventIsValid_Parms), &Z_Construct_UFunction_UDataSnapshot_IsValid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UDataSnapshot_IsValid_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataSnapshot_IsValid_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDataSnapshot_IsValid_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataSnapshot_IsValid_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataSnapshot_IsValid_Statics::Function_MetaDataParams[] = {
		{ "Category", "Firebase|Database|Snapshot" },
		{ "Comment", "/// @brief Returns true if this snapshot is valid, false if it is not\n/// valid. An invalid snapshot could be returned by a transaction where an\n/// error has occurred.\n///\n/// @returns true if this snapshot is valid, false if this snapshot is\n/// invalid.\n" },
		{ "ModuleRelativePath", "Public/Database/DatabaseReference.h" },
		{ "ToolTip", "@brief Returns true if this snapshot is valid, false if it is not\nvalid. An invalid snapshot could be returned by a transaction where an\nerror has occurred.\n\n@returns true if this snapshot is valid, false if this snapshot is\ninvalid." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataSnapshot_IsValid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDataSnapshot, nullptr, "IsValid", nullptr, nullptr, sizeof(DataSnapshot_eventIsValid_Parms), Z_Construct_UFunction_UDataSnapshot_IsValid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataSnapshot_IsValid_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDataSnapshot_IsValid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataSnapshot_IsValid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDataSnapshot_IsValid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDataSnapshot_IsValid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UDataSnapshot_NoRegister()
	{
		return UDataSnapshot::StaticClass();
	}
	struct Z_Construct_UClass_UDataSnapshot_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDataSnapshot_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_FirebaseFeatures,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDataSnapshot_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDataSnapshot_ChildrenCount, "ChildrenCount" }, // 3123169186
		{ &Z_Construct_UFunction_UDataSnapshot_Exists, "Exists" }, // 175435467
		{ &Z_Construct_UFunction_UDataSnapshot_GetChild, "GetChild" }, // 3135053533
		{ &Z_Construct_UFunction_UDataSnapshot_GetChildren, "GetChildren" }, // 404960865
		{ &Z_Construct_UFunction_UDataSnapshot_GetKey, "GetKey" }, // 4183401114
		{ &Z_Construct_UFunction_UDataSnapshot_GetPriority, "GetPriority" }, // 3189157612
		{ &Z_Construct_UFunction_UDataSnapshot_GetReference, "GetReference" }, // 3835841445
		{ &Z_Construct_UFunction_UDataSnapshot_GetValue, "GetValue" }, // 3314473319
		{ &Z_Construct_UFunction_UDataSnapshot_HasChild, "HasChild" }, // 4194840405
		{ &Z_Construct_UFunction_UDataSnapshot_HasChildren, "HasChildren" }, // 1405754959
		{ &Z_Construct_UFunction_UDataSnapshot_IsValid, "IsValid" }, // 2159114445
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataSnapshot_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/// A DataSnapshot instance contains data from a Firebase Database location. Any\n/// time you read Database data, you receive the data as a DataSnapshot. These\n/// are efficiently-generated and cannot be changed. To modify data,\n/// use UDatabaseReference::SetValue() or UDatabaseReference::RunTransaction().\n" },
		{ "IncludePath", "Database/DatabaseReference.h" },
		{ "ModuleRelativePath", "Public/Database/DatabaseReference.h" },
		{ "ToolTip", "A DataSnapshot instance contains data from a Firebase Database location. Any\ntime you read Database data, you receive the data as a DataSnapshot. These\nare efficiently-generated and cannot be changed. To modify data,\nuse UDatabaseReference::SetValue() or UDatabaseReference::RunTransaction()." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDataSnapshot_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDataSnapshot>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDataSnapshot_Statics::ClassParams = {
		&UDataSnapshot::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UDataSnapshot_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDataSnapshot_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDataSnapshot()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDataSnapshot_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDataSnapshot, 1140732932);
	template<> FIREBASEFEATURES_API UClass* StaticClass<UDataSnapshot>()
	{
		return UDataSnapshot::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDataSnapshot(Z_Construct_UClass_UDataSnapshot, &UDataSnapshot::StaticClass, TEXT("/Script/FirebaseFeatures"), TEXT("UDataSnapshot"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDataSnapshot);
	void UDisconnectionHandler::StaticRegisterNativesUDisconnectionHandler()
	{
	}
	UClass* Z_Construct_UClass_UDisconnectionHandler_NoRegister()
	{
		return UDisconnectionHandler::StaticClass();
	}
	struct Z_Construct_UClass_UDisconnectionHandler_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDisconnectionHandler_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_FirebaseFeatures,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDisconnectionHandler_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Database/DatabaseReference.h" },
		{ "ModuleRelativePath", "Public/Database/DatabaseReference.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDisconnectionHandler_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDisconnectionHandler>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDisconnectionHandler_Statics::ClassParams = {
		&UDisconnectionHandler::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDisconnectionHandler_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDisconnectionHandler_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDisconnectionHandler()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDisconnectionHandler_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDisconnectionHandler, 1870585201);
	template<> FIREBASEFEATURES_API UClass* StaticClass<UDisconnectionHandler>()
	{
		return UDisconnectionHandler::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDisconnectionHandler(Z_Construct_UClass_UDisconnectionHandler, &UDisconnectionHandler::StaticClass, TEXT("/Script/FirebaseFeatures"), TEXT("UDisconnectionHandler"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDisconnectionHandler);
	DEFINE_FUNCTION(UDatabaseQuery::execClearListeners)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearListeners();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDatabaseQuery::execSetupListeners)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetupListeners();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDatabaseQuery::execSetKeepSynchronized)
	{
		P_GET_UBOOL(Z_Param_bKeepSync);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetKeepSynchronized(Z_Param_bKeepSync);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDatabaseQuery::execIsValid)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsValid();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDatabaseQuery::execLimitToLast)
	{
		P_GET_PROPERTY(FInt64Property,Z_Param_Limit);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDatabaseQuery**)Z_Param__Result=P_THIS->LimitToLast(Z_Param_Limit);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDatabaseQuery::execLimitToFirst)
	{
		P_GET_PROPERTY(FInt64Property,Z_Param_Limit);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDatabaseQuery**)Z_Param__Result=P_THIS->LimitToFirst(Z_Param_Limit);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDatabaseQuery::execEqualToKey)
	{
		P_GET_STRUCT_REF(FFirebaseVariant,Z_Param_Out_OrderValue);
		P_GET_PROPERTY(FStrProperty,Z_Param_ChildKey);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDatabaseQuery**)Z_Param__Result=P_THIS->EqualToKey(Z_Param_Out_OrderValue,Z_Param_ChildKey);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDatabaseQuery::execEqualTo)
	{
		P_GET_STRUCT_REF(FFirebaseVariant,Z_Param_Out_OrderValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDatabaseQuery**)Z_Param__Result=P_THIS->EqualTo(Z_Param_Out_OrderValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDatabaseQuery::execEndAtKey)
	{
		P_GET_STRUCT_REF(FFirebaseVariant,Z_Param_Out_OrderValue);
		P_GET_PROPERTY(FStrProperty,Z_Param_ChildKey);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDatabaseQuery**)Z_Param__Result=P_THIS->EndAtKey(Z_Param_Out_OrderValue,Z_Param_ChildKey);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDatabaseQuery::execEndAt)
	{
		P_GET_STRUCT_REF(FFirebaseVariant,Z_Param_Out_OrderValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDatabaseQuery**)Z_Param__Result=P_THIS->EndAt(Z_Param_Out_OrderValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDatabaseQuery::execStartAtKey)
	{
		P_GET_STRUCT(FFirebaseVariant,Z_Param_OrderValue);
		P_GET_PROPERTY(FStrProperty,Z_Param_ChildKey);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDatabaseQuery**)Z_Param__Result=P_THIS->StartAtKey(Z_Param_OrderValue,Z_Param_ChildKey);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDatabaseQuery::execStartAt)
	{
		P_GET_STRUCT_REF(FFirebaseVariant,Z_Param_Out_OrderValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDatabaseQuery**)Z_Param__Result=P_THIS->StartAt(Z_Param_Out_OrderValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDatabaseQuery::execOrderByValue)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDatabaseQuery**)Z_Param__Result=P_THIS->OrderByValue();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDatabaseQuery::execOrderByPriority)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDatabaseQuery**)Z_Param__Result=P_THIS->OrderByPriority();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDatabaseQuery::execOrderByKey)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDatabaseQuery**)Z_Param__Result=P_THIS->OrderByKey();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDatabaseQuery::execOrderByChild)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Path);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDatabaseQuery**)Z_Param__Result=P_THIS->OrderByChild(Z_Param_Path);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDatabaseQuery::execGetReference)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDatabaseReference**)Z_Param__Result=P_THIS->GetReference();
		P_NATIVE_END;
	}
	void UDatabaseQuery::StaticRegisterNativesUDatabaseQuery()
	{
		UClass* Class = UDatabaseQuery::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ClearListeners", &UDatabaseQuery::execClearListeners },
			{ "EndAt", &UDatabaseQuery::execEndAt },
			{ "EndAtKey", &UDatabaseQuery::execEndAtKey },
			{ "EqualTo", &UDatabaseQuery::execEqualTo },
			{ "EqualToKey", &UDatabaseQuery::execEqualToKey },
			{ "GetReference", &UDatabaseQuery::execGetReference },
			{ "IsValid", &UDatabaseQuery::execIsValid },
			{ "LimitToFirst", &UDatabaseQuery::execLimitToFirst },
			{ "LimitToLast", &UDatabaseQuery::execLimitToLast },
			{ "OrderByChild", &UDatabaseQuery::execOrderByChild },
			{ "OrderByKey", &UDatabaseQuery::execOrderByKey },
			{ "OrderByPriority", &UDatabaseQuery::execOrderByPriority },
			{ "OrderByValue", &UDatabaseQuery::execOrderByValue },
			{ "SetKeepSynchronized", &UDatabaseQuery::execSetKeepSynchronized },
			{ "SetupListeners", &UDatabaseQuery::execSetupListeners },
			{ "StartAt", &UDatabaseQuery::execStartAt },
			{ "StartAtKey", &UDatabaseQuery::execStartAtKey },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDatabaseQuery_ClearListeners_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatabaseQuery_ClearListeners_Statics::Function_MetaDataParams[] = {
		{ "Category", "Firebase|Database|Query" },
		{ "Comment", "/**\n\x09 * Removes the privously setup listeners.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Database/DatabaseReference.h" },
		{ "ToolTip", "Removes the privously setup listeners." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatabaseQuery_ClearListeners_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatabaseQuery, nullptr, "ClearListeners", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDatabaseQuery_ClearListeners_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatabaseQuery_ClearListeners_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDatabaseQuery_ClearListeners()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDatabaseQuery_ClearListeners_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDatabaseQuery_EndAt_Statics
	{
		struct DatabaseQuery_eventEndAt_Parms
		{
			FFirebaseVariant OrderValue;
			UDatabaseQuery* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OrderValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OrderValue;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatabaseQuery_EndAt_Statics::NewProp_OrderValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDatabaseQuery_EndAt_Statics::NewProp_OrderValue = { "OrderValue", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DatabaseQuery_eventEndAt_Parms, OrderValue), Z_Construct_UScriptStruct_FFirebaseVariant, METADATA_PARAMS(Z_Construct_UFunction_UDatabaseQuery_EndAt_Statics::NewProp_OrderValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatabaseQuery_EndAt_Statics::NewProp_OrderValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatabaseQuery_EndAt_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Query" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDatabaseQuery_EndAt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DatabaseQuery_eventEndAt_Parms, ReturnValue), Z_Construct_UClass_UDatabaseQuery_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UDatabaseQuery_EndAt_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatabaseQuery_EndAt_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDatabaseQuery_EndAt_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatabaseQuery_EndAt_Statics::NewProp_OrderValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatabaseQuery_EndAt_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatabaseQuery_EndAt_Statics::Function_MetaDataParams[] = {
		{ "Category", "Firebase|Database|Query" },
		{ "Comment", "/// @brief Get a Query constrained to nodes with the given sort value or\n/// lower.\n///\n/// This method is used to generate a reference to a limited view of the data\n/// at this location. The Query returned will only refer to child nodes with a\n/// value less than or equal to the given value, using the given OrderBy\n/// directive (or priority as default).\n///\n/// @param[in] order_value The highest sort value the Query should refer\n/// to.\n///\n/// @returns A Query in this same location, filtering out child nodes that\n/// have a higher sort value or key than the sort value or key specified.\n" },
		{ "ModuleRelativePath", "Public/Database/DatabaseReference.h" },
		{ "ToolTip", "@brief Get a Query constrained to nodes with the given sort value or\nlower.\n\nThis method is used to generate a reference to a limited view of the data\nat this location. The Query returned will only refer to child nodes with a\nvalue less than or equal to the given value, using the given OrderBy\ndirective (or priority as default).\n\n@param[in] order_value The highest sort value the Query should refer\nto.\n\n@returns A Query in this same location, filtering out child nodes that\nhave a higher sort value or key than the sort value or key specified." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatabaseQuery_EndAt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatabaseQuery, nullptr, "EndAt", nullptr, nullptr, sizeof(DatabaseQuery_eventEndAt_Parms), Z_Construct_UFunction_UDatabaseQuery_EndAt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatabaseQuery_EndAt_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDatabaseQuery_EndAt_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatabaseQuery_EndAt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDatabaseQuery_EndAt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDatabaseQuery_EndAt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDatabaseQuery_EndAtKey_Statics
	{
		struct DatabaseQuery_eventEndAtKey_Parms
		{
			FFirebaseVariant OrderValue;
			FString ChildKey;
			UDatabaseQuery* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OrderValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OrderValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChildKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ChildKey;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatabaseQuery_EndAtKey_Statics::NewProp_OrderValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDatabaseQuery_EndAtKey_Statics::NewProp_OrderValue = { "OrderValue", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DatabaseQuery_eventEndAtKey_Parms, OrderValue), Z_Construct_UScriptStruct_FFirebaseVariant, METADATA_PARAMS(Z_Construct_UFunction_UDatabaseQuery_EndAtKey_Statics::NewProp_OrderValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatabaseQuery_EndAtKey_Statics::NewProp_OrderValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatabaseQuery_EndAtKey_Statics::NewProp_ChildKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDatabaseQuery_EndAtKey_Statics::NewProp_ChildKey = { "ChildKey", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DatabaseQuery_eventEndAtKey_Parms, ChildKey), METADATA_PARAMS(Z_Construct_UFunction_UDatabaseQuery_EndAtKey_Statics::NewProp_ChildKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatabaseQuery_EndAtKey_Statics::NewProp_ChildKey_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatabaseQuery_EndAtKey_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Query" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDatabaseQuery_EndAtKey_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DatabaseQuery_eventEndAtKey_Parms, ReturnValue), Z_Construct_UClass_UDatabaseQuery_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UDatabaseQuery_EndAtKey_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatabaseQuery_EndAtKey_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDatabaseQuery_EndAtKey_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatabaseQuery_EndAtKey_Statics::NewProp_OrderValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatabaseQuery_EndAtKey_Statics::NewProp_ChildKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatabaseQuery_EndAtKey_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatabaseQuery_EndAtKey_Statics::Function_MetaDataParams[] = {
		{ "Category", "Firebase|Database|Query" },
		{ "Comment", "/// @brief Get a Query constrained to nodes with the given sort value or\n/// lower, and the given key or lower.\n///\n/// This method is used to generate a reference to a limited view of\n/// the data at this location. The Query returned will only refer to child\n/// nodes with a value less than or equal to the given value, using the given\n/// OrderBy directive (or priority as default), and additionally only child\n/// nodes with a key less than or equal to the given key.\n///\n/// <b>Known issue</b> This currently does not work properly on all platforms.\n/// Please use EndAt(Variant order_value) instead.\n///\n/// @param[in] order_value The highest sort value the Query should include.\n/// @param[in] child_key The highest key the Query should include.\n///\n/// @returns A Query in this same location, filtering out child nodes that\n/// have a higher sort value than the sort value specified, or a higher key\n/// than the key specified.\n" },
		{ "ModuleRelativePath", "Public/Database/DatabaseReference.h" },
		{ "ToolTip", "@brief Get a Query constrained to nodes with the given sort value or\nlower, and the given key or lower.\n\nThis method is used to generate a reference to a limited view of\nthe data at this location. The Query returned will only refer to child\nnodes with a value less than or equal to the given value, using the given\nOrderBy directive (or priority as default), and additionally only child\nnodes with a key less than or equal to the given key.\n\n<b>Known issue</b> This currently does not work properly on all platforms.\nPlease use EndAt(Variant order_value) instead.\n\n@param[in] order_value The highest sort value the Query should include.\n@param[in] child_key The highest key the Query should include.\n\n@returns A Query in this same location, filtering out child nodes that\nhave a higher sort value than the sort value specified, or a higher key\nthan the key specified." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatabaseQuery_EndAtKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatabaseQuery, nullptr, "EndAtKey", nullptr, nullptr, sizeof(DatabaseQuery_eventEndAtKey_Parms), Z_Construct_UFunction_UDatabaseQuery_EndAtKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatabaseQuery_EndAtKey_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDatabaseQuery_EndAtKey_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatabaseQuery_EndAtKey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDatabaseQuery_EndAtKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDatabaseQuery_EndAtKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDatabaseQuery_EqualTo_Statics
	{
		struct DatabaseQuery_eventEqualTo_Parms
		{
			FFirebaseVariant OrderValue;
			UDatabaseQuery* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OrderValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OrderValue;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatabaseQuery_EqualTo_Statics::NewProp_OrderValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDatabaseQuery_EqualTo_Statics::NewProp_OrderValue = { "OrderValue", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DatabaseQuery_eventEqualTo_Parms, OrderValue), Z_Construct_UScriptStruct_FFirebaseVariant, METADATA_PARAMS(Z_Construct_UFunction_UDatabaseQuery_EqualTo_Statics::NewProp_OrderValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatabaseQuery_EqualTo_Statics::NewProp_OrderValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatabaseQuery_EqualTo_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Query" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDatabaseQuery_EqualTo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DatabaseQuery_eventEqualTo_Parms, ReturnValue), Z_Construct_UClass_UDatabaseQuery_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UDatabaseQuery_EqualTo_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatabaseQuery_EqualTo_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDatabaseQuery_EqualTo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatabaseQuery_EqualTo_Statics::NewProp_OrderValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatabaseQuery_EqualTo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatabaseQuery_EqualTo_Statics::Function_MetaDataParams[] = {
		{ "Category", "Firebase|Database|Query" },
		{ "Comment", "/// @brief Get a Query constrained to nodes with the exact given sort value.\n///\n/// This method is used to create a query constrained to only return child\n/// nodes with the given value, using the given OrderBy directive (or priority\n/// as default).\n///\n/// @param[in] order_value The exact sort value the Query should include.\n///\n/// @returns A Query in this same location, filtering out child nodes that\n/// have a different sort value than the sort value specified.\n" },
		{ "ModuleRelativePath", "Public/Database/DatabaseReference.h" },
		{ "ToolTip", "@brief Get a Query constrained to nodes with the exact given sort value.\n\nThis method is used to create a query constrained to only return child\nnodes with the given value, using the given OrderBy directive (or priority\nas default).\n\n@param[in] order_value The exact sort value the Query should include.\n\n@returns A Query in this same location, filtering out child nodes that\nhave a different sort value than the sort value specified." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatabaseQuery_EqualTo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatabaseQuery, nullptr, "EqualTo", nullptr, nullptr, sizeof(DatabaseQuery_eventEqualTo_Parms), Z_Construct_UFunction_UDatabaseQuery_EqualTo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatabaseQuery_EqualTo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDatabaseQuery_EqualTo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatabaseQuery_EqualTo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDatabaseQuery_EqualTo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDatabaseQuery_EqualTo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDatabaseQuery_EqualToKey_Statics
	{
		struct DatabaseQuery_eventEqualToKey_Parms
		{
			FFirebaseVariant OrderValue;
			FString ChildKey;
			UDatabaseQuery* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OrderValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OrderValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChildKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ChildKey;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatabaseQuery_EqualToKey_Statics::NewProp_OrderValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDatabaseQuery_EqualToKey_Statics::NewProp_OrderValue = { "OrderValue", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DatabaseQuery_eventEqualToKey_Parms, OrderValue), Z_Construct_UScriptStruct_FFirebaseVariant, METADATA_PARAMS(Z_Construct_UFunction_UDatabaseQuery_EqualToKey_Statics::NewProp_OrderValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatabaseQuery_EqualToKey_Statics::NewProp_OrderValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatabaseQuery_EqualToKey_Statics::NewProp_ChildKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDatabaseQuery_EqualToKey_Statics::NewProp_ChildKey = { "ChildKey", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DatabaseQuery_eventEqualToKey_Parms, ChildKey), METADATA_PARAMS(Z_Construct_UFunction_UDatabaseQuery_EqualToKey_Statics::NewProp_ChildKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatabaseQuery_EqualToKey_Statics::NewProp_ChildKey_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatabaseQuery_EqualToKey_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Query" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDatabaseQuery_EqualToKey_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DatabaseQuery_eventEqualToKey_Parms, ReturnValue), Z_Construct_UClass_UDatabaseQuery_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UDatabaseQuery_EqualToKey_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatabaseQuery_EqualToKey_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDatabaseQuery_EqualToKey_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatabaseQuery_EqualToKey_Statics::NewProp_OrderValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatabaseQuery_EqualToKey_Statics::NewProp_ChildKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatabaseQuery_EqualToKey_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatabaseQuery_EqualToKey_Statics::Function_MetaDataParams[] = {
		{ "Category", "Firebase|Database|Query" },
		{ "Comment", "/// @brief Get a Query constrained to nodes with the exact given sort value,\n/// and the exact given key.\n///\n/// This method is used to create a query constrained to only return the child\n/// node with the given value, using the given OrderBy directive (or priority\n/// as default), and the given key. Note that there is at most one such child\n/// as child key names are unique.\n///\n/// <b>Known issue</b> This currently does not work properly on iOS and\n/// desktop. Please use EqualTo(Variant order_value) instead.\n///\n/// @param[in] order_value The exact sort value the Query should include.\n/// @param[in] child_key The exact key the Query should include.\n///\n/// @returns A Query in this same location, filtering out child nodes that\n/// have a different sort value than the sort value specified, and containing\n/// at most one child with the exact key specified.\n" },
		{ "ModuleRelativePath", "Public/Database/DatabaseReference.h" },
		{ "ToolTip", "@brief Get a Query constrained to nodes with the exact given sort value,\nand the exact given key.\n\nThis method is used to create a query constrained to only return the child\nnode with the given value, using the given OrderBy directive (or priority\nas default), and the given key. Note that there is at most one such child\nas child key names are unique.\n\n<b>Known issue</b> This currently does not work properly on iOS and\ndesktop. Please use EqualTo(Variant order_value) instead.\n\n@param[in] order_value The exact sort value the Query should include.\n@param[in] child_key The exact key the Query should include.\n\n@returns A Query in this same location, filtering out child nodes that\nhave a different sort value than the sort value specified, and containing\nat most one child with the exact key specified." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatabaseQuery_EqualToKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatabaseQuery, nullptr, "EqualToKey", nullptr, nullptr, sizeof(DatabaseQuery_eventEqualToKey_Parms), Z_Construct_UFunction_UDatabaseQuery_EqualToKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatabaseQuery_EqualToKey_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDatabaseQuery_EqualToKey_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatabaseQuery_EqualToKey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDatabaseQuery_EqualToKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDatabaseQuery_EqualToKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDatabaseQuery_GetReference_Statics
	{
		struct DatabaseQuery_eventGetReference_Parms
		{
			UDatabaseReference* ReturnValue;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatabaseQuery_GetReference_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Query" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDatabaseQuery_GetReference_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DatabaseQuery_eventGetReference_Parms, ReturnValue), Z_Construct_UClass_UDatabaseReference_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UDatabaseQuery_GetReference_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatabaseQuery_GetReference_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDatabaseQuery_GetReference_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatabaseQuery_GetReference_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatabaseQuery_GetReference_Statics::Function_MetaDataParams[] = {
		{ "Category", "Firebase|Database|Query" },
		{ "Comment", "/// @brief Gets a DatabaseReference corresponding to the given location.\n///\n/// @returns A DatabaseReference corresponding to the same location as the\n/// Query, but without any of the ordering or filtering parameters.\n" },
		{ "ModuleRelativePath", "Public/Database/DatabaseReference.h" },
		{ "ToolTip", "@brief Gets a DatabaseReference corresponding to the given location.\n\n@returns A DatabaseReference corresponding to the same location as the\nQuery, but without any of the ordering or filtering parameters." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatabaseQuery_GetReference_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatabaseQuery, nullptr, "GetReference", nullptr, nullptr, sizeof(DatabaseQuery_eventGetReference_Parms), Z_Construct_UFunction_UDatabaseQuery_GetReference_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatabaseQuery_GetReference_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDatabaseQuery_GetReference_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatabaseQuery_GetReference_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDatabaseQuery_GetReference()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDatabaseQuery_GetReference_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDatabaseQuery_IsValid_Statics
	{
		struct DatabaseQuery_eventIsValid_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatabaseQuery_IsValid_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Is Valid" },
	};
#endif
	void Z_Construct_UFunction_UDatabaseQuery_IsValid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DatabaseQuery_eventIsValid_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDatabaseQuery_IsValid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DatabaseQuery_eventIsValid_Parms), &Z_Construct_UFunction_UDatabaseQuery_IsValid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UDatabaseQuery_IsValid_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatabaseQuery_IsValid_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDatabaseQuery_IsValid_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatabaseQuery_IsValid_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatabaseQuery_IsValid_Statics::Function_MetaDataParams[] = {
		{ "Category", "Firebase|Database|Query" },
		{ "Comment", "/// @brief Returns true if this query is valid, false if it is not valid. An\n/// invalid query could be returned by, say, attempting to OrderBy two\n/// different items, or calling OrderByChild() with an empty path, or by\n/// constructing a Query with the default constructor. If a Query\n/// is invalid, attempting to add more constraints will also result in an\n/// invalid Query.\n///\n/// @returns true if this query is valid, false if this query is\n/// invalid.\n" },
		{ "ModuleRelativePath", "Public/Database/DatabaseReference.h" },
		{ "ToolTip", "@brief Returns true if this query is valid, false if it is not valid. An\ninvalid query could be returned by, say, attempting to OrderBy two\ndifferent items, or calling OrderByChild() with an empty path, or by\nconstructing a Query with the default constructor. If a Query\nis invalid, attempting to add more constraints will also result in an\ninvalid Query.\n\n@returns true if this query is valid, false if this query is\ninvalid." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatabaseQuery_IsValid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatabaseQuery, nullptr, "IsValid", nullptr, nullptr, sizeof(DatabaseQuery_eventIsValid_Parms), Z_Construct_UFunction_UDatabaseQuery_IsValid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatabaseQuery_IsValid_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDatabaseQuery_IsValid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatabaseQuery_IsValid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDatabaseQuery_IsValid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDatabaseQuery_IsValid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDatabaseQuery_LimitToFirst_Statics
	{
		struct DatabaseQuery_eventLimitToFirst_Parms
		{
			int64 Limit;
			UDatabaseQuery* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Limit_MetaData[];
#endif
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_Limit;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatabaseQuery_LimitToFirst_Statics::NewProp_Limit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UDatabaseQuery_LimitToFirst_Statics::NewProp_Limit = { "Limit", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DatabaseQuery_eventLimitToFirst_Parms, Limit), METADATA_PARAMS(Z_Construct_UFunction_UDatabaseQuery_LimitToFirst_Statics::NewProp_Limit_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatabaseQuery_LimitToFirst_Statics::NewProp_Limit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatabaseQuery_LimitToFirst_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Query" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDatabaseQuery_LimitToFirst_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DatabaseQuery_eventLimitToFirst_Parms, ReturnValue), Z_Construct_UClass_UDatabaseQuery_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UDatabaseQuery_LimitToFirst_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatabaseQuery_LimitToFirst_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDatabaseQuery_LimitToFirst_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatabaseQuery_LimitToFirst_Statics::NewProp_Limit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatabaseQuery_LimitToFirst_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatabaseQuery_LimitToFirst_Statics::Function_MetaDataParams[] = {
		{ "Category", "Firebase|Database|Query" },
		{ "Comment", "/// @brief Gets a Query limited to only the first results.\n///\n/// Limits the query to reference only the first N child nodes, using the\n/// given OrderBy directive (or priority as default).\n///\n/// @param[in] limit Number of children to limit the Query to.\n///\n/// @returns A Query in this same location, limited to the specified number of\n/// children (taken from the beginning of the sorted list).\n" },
		{ "ModuleRelativePath", "Public/Database/DatabaseReference.h" },
		{ "ToolTip", "@brief Gets a Query limited to only the first results.\n\nLimits the query to reference only the first N child nodes, using the\ngiven OrderBy directive (or priority as default).\n\n@param[in] limit Number of children to limit the Query to.\n\n@returns A Query in this same location, limited to the specified number of\nchildren (taken from the beginning of the sorted list)." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatabaseQuery_LimitToFirst_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatabaseQuery, nullptr, "LimitToFirst", nullptr, nullptr, sizeof(DatabaseQuery_eventLimitToFirst_Parms), Z_Construct_UFunction_UDatabaseQuery_LimitToFirst_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatabaseQuery_LimitToFirst_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDatabaseQuery_LimitToFirst_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatabaseQuery_LimitToFirst_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDatabaseQuery_LimitToFirst()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDatabaseQuery_LimitToFirst_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDatabaseQuery_LimitToLast_Statics
	{
		struct DatabaseQuery_eventLimitToLast_Parms
		{
			int64 Limit;
			UDatabaseQuery* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Limit_MetaData[];
#endif
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_Limit;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatabaseQuery_LimitToLast_Statics::NewProp_Limit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UDatabaseQuery_LimitToLast_Statics::NewProp_Limit = { "Limit", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DatabaseQuery_eventLimitToLast_Parms, Limit), METADATA_PARAMS(Z_Construct_UFunction_UDatabaseQuery_LimitToLast_Statics::NewProp_Limit_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatabaseQuery_LimitToLast_Statics::NewProp_Limit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatabaseQuery_LimitToLast_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Query" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDatabaseQuery_LimitToLast_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DatabaseQuery_eventLimitToLast_Parms, ReturnValue), Z_Construct_UClass_UDatabaseQuery_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UDatabaseQuery_LimitToLast_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatabaseQuery_LimitToLast_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDatabaseQuery_LimitToLast_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatabaseQuery_LimitToLast_Statics::NewProp_Limit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatabaseQuery_LimitToLast_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatabaseQuery_LimitToLast_Statics::Function_MetaDataParams[] = {
		{ "Category", "Firebase|Database|Query" },
		{ "Comment", "/// @brief Gets a Query limited to only the last results.\n///\n/// @param[in] limit Number of children to limit the Query to.\n///\n/// @returns A Query in this same location, limited to the specified number of\n/// children (taken from the end of the sorted list).\n" },
		{ "ModuleRelativePath", "Public/Database/DatabaseReference.h" },
		{ "ToolTip", "@brief Gets a Query limited to only the last results.\n\n@param[in] limit Number of children to limit the Query to.\n\n@returns A Query in this same location, limited to the specified number of\nchildren (taken from the end of the sorted list)." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatabaseQuery_LimitToLast_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatabaseQuery, nullptr, "LimitToLast", nullptr, nullptr, sizeof(DatabaseQuery_eventLimitToLast_Parms), Z_Construct_UFunction_UDatabaseQuery_LimitToLast_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatabaseQuery_LimitToLast_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDatabaseQuery_LimitToLast_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatabaseQuery_LimitToLast_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDatabaseQuery_LimitToLast()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDatabaseQuery_LimitToLast_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDatabaseQuery_OrderByChild_Statics
	{
		struct DatabaseQuery_eventOrderByChild_Parms
		{
			FString Path;
			UDatabaseQuery* ReturnValue;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatabaseQuery_OrderByChild_Statics::NewProp_Path_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDatabaseQuery_OrderByChild_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DatabaseQuery_eventOrderByChild_Parms, Path), METADATA_PARAMS(Z_Construct_UFunction_UDatabaseQuery_OrderByChild_Statics::NewProp_Path_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatabaseQuery_OrderByChild_Statics::NewProp_Path_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatabaseQuery_OrderByChild_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Query" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDatabaseQuery_OrderByChild_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DatabaseQuery_eventOrderByChild_Parms, ReturnValue), Z_Construct_UClass_UDatabaseQuery_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UDatabaseQuery_OrderByChild_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatabaseQuery_OrderByChild_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDatabaseQuery_OrderByChild_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatabaseQuery_OrderByChild_Statics::NewProp_Path,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatabaseQuery_OrderByChild_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatabaseQuery_OrderByChild_Statics::Function_MetaDataParams[] = {
		{ "Category", "Firebase|Database|Query" },
		{ "Comment", "/// @brief Gets a query in which child nodes are ordered by the values of the\n/// specified path. Any previous OrderBy directive will be replaced in the\n/// returned Query.\n///\n/// @param Path Path to a child node. The value of this node will be used\n/// for sorting this query.\n///\n/// @returns A Query in this same location, with the children are sorted by\n/// the value of their own child specified here.\n" },
		{ "ModuleRelativePath", "Public/Database/DatabaseReference.h" },
		{ "ToolTip", "@brief Gets a query in which child nodes are ordered by the values of the\nspecified path. Any previous OrderBy directive will be replaced in the\nreturned Query.\n\n@param Path Path to a child node. The value of this node will be used\nfor sorting this query.\n\n@returns A Query in this same location, with the children are sorted by\nthe value of their own child specified here." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatabaseQuery_OrderByChild_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatabaseQuery, nullptr, "OrderByChild", nullptr, nullptr, sizeof(DatabaseQuery_eventOrderByChild_Parms), Z_Construct_UFunction_UDatabaseQuery_OrderByChild_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatabaseQuery_OrderByChild_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDatabaseQuery_OrderByChild_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatabaseQuery_OrderByChild_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDatabaseQuery_OrderByChild()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDatabaseQuery_OrderByChild_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDatabaseQuery_OrderByKey_Statics
	{
		struct DatabaseQuery_eventOrderByKey_Parms
		{
			UDatabaseQuery* ReturnValue;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatabaseQuery_OrderByKey_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Query" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDatabaseQuery_OrderByKey_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DatabaseQuery_eventOrderByKey_Parms, ReturnValue), Z_Construct_UClass_UDatabaseQuery_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UDatabaseQuery_OrderByKey_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatabaseQuery_OrderByKey_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDatabaseQuery_OrderByKey_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatabaseQuery_OrderByKey_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatabaseQuery_OrderByKey_Statics::Function_MetaDataParams[] = {
		{ "Category", "Firebase|Database|Query" },
		{ "Comment", "/// @brief Gets a query in which child nodes are ordered by their keys. Any\n/// previous OrderBy directive will be replaced in the returned Query.\n///\n/// @returns A Query in this same location, with the children are sorted by\n/// their key.\n" },
		{ "ModuleRelativePath", "Public/Database/DatabaseReference.h" },
		{ "ToolTip", "@brief Gets a query in which child nodes are ordered by their keys. Any\nprevious OrderBy directive will be replaced in the returned Query.\n\n@returns A Query in this same location, with the children are sorted by\ntheir key." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatabaseQuery_OrderByKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatabaseQuery, nullptr, "OrderByKey", nullptr, nullptr, sizeof(DatabaseQuery_eventOrderByKey_Parms), Z_Construct_UFunction_UDatabaseQuery_OrderByKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatabaseQuery_OrderByKey_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDatabaseQuery_OrderByKey_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatabaseQuery_OrderByKey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDatabaseQuery_OrderByKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDatabaseQuery_OrderByKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDatabaseQuery_OrderByPriority_Statics
	{
		struct DatabaseQuery_eventOrderByPriority_Parms
		{
			UDatabaseQuery* ReturnValue;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatabaseQuery_OrderByPriority_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Query" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDatabaseQuery_OrderByPriority_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DatabaseQuery_eventOrderByPriority_Parms, ReturnValue), Z_Construct_UClass_UDatabaseQuery_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UDatabaseQuery_OrderByPriority_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatabaseQuery_OrderByPriority_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDatabaseQuery_OrderByPriority_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatabaseQuery_OrderByPriority_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatabaseQuery_OrderByPriority_Statics::Function_MetaDataParams[] = {
		{ "Category", "Firebase|Database|Query" },
		{ "Comment", "/// @brief Gets a query in which child nodes are ordered by their priority.\n/// Any previous OrderBy directive will be replaced in the returned Query.\n///\n/// @returns A Query in this same location, with the children are sorted by\n/// their priority.\n" },
		{ "ModuleRelativePath", "Public/Database/DatabaseReference.h" },
		{ "ToolTip", "@brief Gets a query in which child nodes are ordered by their priority.\nAny previous OrderBy directive will be replaced in the returned Query.\n\n@returns A Query in this same location, with the children are sorted by\ntheir priority." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatabaseQuery_OrderByPriority_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatabaseQuery, nullptr, "OrderByPriority", nullptr, nullptr, sizeof(DatabaseQuery_eventOrderByPriority_Parms), Z_Construct_UFunction_UDatabaseQuery_OrderByPriority_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatabaseQuery_OrderByPriority_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDatabaseQuery_OrderByPriority_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatabaseQuery_OrderByPriority_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDatabaseQuery_OrderByPriority()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDatabaseQuery_OrderByPriority_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDatabaseQuery_OrderByValue_Statics
	{
		struct DatabaseQuery_eventOrderByValue_Parms
		{
			UDatabaseQuery* ReturnValue;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatabaseQuery_OrderByValue_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Query" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDatabaseQuery_OrderByValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DatabaseQuery_eventOrderByValue_Parms, ReturnValue), Z_Construct_UClass_UDatabaseQuery_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UDatabaseQuery_OrderByValue_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatabaseQuery_OrderByValue_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDatabaseQuery_OrderByValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatabaseQuery_OrderByValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatabaseQuery_OrderByValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Firebase|Database|Query" },
		{ "Comment", "/// @brief Create a query in which nodes are ordered by their value.\n///\n/// @returns A Query in this same location, with the children are sorted by\n/// their value.\n" },
		{ "ModuleRelativePath", "Public/Database/DatabaseReference.h" },
		{ "ToolTip", "@brief Create a query in which nodes are ordered by their value.\n\n@returns A Query in this same location, with the children are sorted by\ntheir value." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatabaseQuery_OrderByValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatabaseQuery, nullptr, "OrderByValue", nullptr, nullptr, sizeof(DatabaseQuery_eventOrderByValue_Parms), Z_Construct_UFunction_UDatabaseQuery_OrderByValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatabaseQuery_OrderByValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDatabaseQuery_OrderByValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatabaseQuery_OrderByValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDatabaseQuery_OrderByValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDatabaseQuery_OrderByValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDatabaseQuery_SetKeepSynchronized_Statics
	{
		struct DatabaseQuery_eventSetKeepSynchronized_Parms
		{
			bool bKeepSync;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bKeepSync_MetaData[];
#endif
		static void NewProp_bKeepSync_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bKeepSync;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatabaseQuery_SetKeepSynchronized_Statics::NewProp_bKeepSync_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UDatabaseQuery_SetKeepSynchronized_Statics::NewProp_bKeepSync_SetBit(void* Obj)
	{
		((DatabaseQuery_eventSetKeepSynchronized_Parms*)Obj)->bKeepSync = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDatabaseQuery_SetKeepSynchronized_Statics::NewProp_bKeepSync = { "bKeepSync", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DatabaseQuery_eventSetKeepSynchronized_Parms), &Z_Construct_UFunction_UDatabaseQuery_SetKeepSynchronized_Statics::NewProp_bKeepSync_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UDatabaseQuery_SetKeepSynchronized_Statics::NewProp_bKeepSync_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatabaseQuery_SetKeepSynchronized_Statics::NewProp_bKeepSync_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDatabaseQuery_SetKeepSynchronized_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatabaseQuery_SetKeepSynchronized_Statics::NewProp_bKeepSync,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatabaseQuery_SetKeepSynchronized_Statics::Function_MetaDataParams[] = {
		{ "Category", "Firebase|Database|Query" },
		{ "Comment", "/// @brief Sets whether this location's data should be kept in sync even if\n/// there are no active Listeners.\n///\n/// By calling SetKeepSynchronized(true) on a given database location, the\n/// data for that location will automatically be downloaded and kept in sync,\n/// even when no listeners are attached for that location. Additionally, while\n/// a location is kept synced, it will not be evicted from the persistent disk\n/// cache.\n///\n/// @param[in] bKeepSync If true, set this location to be synchronized. If\n/// false, set it to not be synchronized.\n" },
		{ "ModuleRelativePath", "Public/Database/DatabaseReference.h" },
		{ "ToolTip", "@brief Sets whether this location's data should be kept in sync even if\nthere are no active Listeners.\n\nBy calling SetKeepSynchronized(true) on a given database location, the\ndata for that location will automatically be downloaded and kept in sync,\neven when no listeners are attached for that location. Additionally, while\na location is kept synced, it will not be evicted from the persistent disk\ncache.\n\n@param[in] bKeepSync If true, set this location to be synchronized. If\nfalse, set it to not be synchronized." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatabaseQuery_SetKeepSynchronized_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatabaseQuery, nullptr, "SetKeepSynchronized", nullptr, nullptr, sizeof(DatabaseQuery_eventSetKeepSynchronized_Parms), Z_Construct_UFunction_UDatabaseQuery_SetKeepSynchronized_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatabaseQuery_SetKeepSynchronized_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDatabaseQuery_SetKeepSynchronized_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatabaseQuery_SetKeepSynchronized_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDatabaseQuery_SetKeepSynchronized()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDatabaseQuery_SetKeepSynchronized_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDatabaseQuery_SetupListeners_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatabaseQuery_SetupListeners_Statics::Function_MetaDataParams[] = {
		{ "Category", "Firebase|Database|Query" },
		{ "Comment", "/**\n\x09 * Setups the child and value listeners. Events won't be called unless you\n\x09 * call this function first.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Database/DatabaseReference.h" },
		{ "ToolTip", "Setups the child and value listeners. Events won't be called unless you\ncall this function first." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatabaseQuery_SetupListeners_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatabaseQuery, nullptr, "SetupListeners", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDatabaseQuery_SetupListeners_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatabaseQuery_SetupListeners_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDatabaseQuery_SetupListeners()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDatabaseQuery_SetupListeners_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDatabaseQuery_StartAt_Statics
	{
		struct DatabaseQuery_eventStartAt_Parms
		{
			FFirebaseVariant OrderValue;
			UDatabaseQuery* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OrderValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OrderValue;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatabaseQuery_StartAt_Statics::NewProp_OrderValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDatabaseQuery_StartAt_Statics::NewProp_OrderValue = { "OrderValue", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DatabaseQuery_eventStartAt_Parms, OrderValue), Z_Construct_UScriptStruct_FFirebaseVariant, METADATA_PARAMS(Z_Construct_UFunction_UDatabaseQuery_StartAt_Statics::NewProp_OrderValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatabaseQuery_StartAt_Statics::NewProp_OrderValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatabaseQuery_StartAt_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Query" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDatabaseQuery_StartAt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DatabaseQuery_eventStartAt_Parms, ReturnValue), Z_Construct_UClass_UDatabaseQuery_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UDatabaseQuery_StartAt_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatabaseQuery_StartAt_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDatabaseQuery_StartAt_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatabaseQuery_StartAt_Statics::NewProp_OrderValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatabaseQuery_StartAt_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatabaseQuery_StartAt_Statics::Function_MetaDataParams[] = {
		{ "Category", "Firebase|Database|Query" },
		{ "Comment", "/// @brief Get a Query constrained to nodes with the given sort value or\n/// higher.\n///\n/// This method is used to generate a reference to a limited view of the data\n/// at this location. The Query returned will only refer to child nodes with a\n/// value greater than or equal to the given value, using the given OrderBy\n/// directive (or priority as the default).\n///\n/// @param[in] order_value The lowest sort value the Query should include.\n///\n/// @returns A Query in this same location, filtering out child nodes that\n/// have a lower sort value than the sort value specified.\n" },
		{ "ModuleRelativePath", "Public/Database/DatabaseReference.h" },
		{ "ToolTip", "@brief Get a Query constrained to nodes with the given sort value or\nhigher.\n\nThis method is used to generate a reference to a limited view of the data\nat this location. The Query returned will only refer to child nodes with a\nvalue greater than or equal to the given value, using the given OrderBy\ndirective (or priority as the default).\n\n@param[in] order_value The lowest sort value the Query should include.\n\n@returns A Query in this same location, filtering out child nodes that\nhave a lower sort value than the sort value specified." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatabaseQuery_StartAt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatabaseQuery, nullptr, "StartAt", nullptr, nullptr, sizeof(DatabaseQuery_eventStartAt_Parms), Z_Construct_UFunction_UDatabaseQuery_StartAt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatabaseQuery_StartAt_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDatabaseQuery_StartAt_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatabaseQuery_StartAt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDatabaseQuery_StartAt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDatabaseQuery_StartAt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDatabaseQuery_StartAtKey_Statics
	{
		struct DatabaseQuery_eventStartAtKey_Parms
		{
			FFirebaseVariant OrderValue;
			FString ChildKey;
			UDatabaseQuery* ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OrderValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChildKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ChildKey;
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDatabaseQuery_StartAtKey_Statics::NewProp_OrderValue = { "OrderValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DatabaseQuery_eventStartAtKey_Parms, OrderValue), Z_Construct_UScriptStruct_FFirebaseVariant, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatabaseQuery_StartAtKey_Statics::NewProp_ChildKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDatabaseQuery_StartAtKey_Statics::NewProp_ChildKey = { "ChildKey", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DatabaseQuery_eventStartAtKey_Parms, ChildKey), METADATA_PARAMS(Z_Construct_UFunction_UDatabaseQuery_StartAtKey_Statics::NewProp_ChildKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatabaseQuery_StartAtKey_Statics::NewProp_ChildKey_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatabaseQuery_StartAtKey_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Query" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDatabaseQuery_StartAtKey_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DatabaseQuery_eventStartAtKey_Parms, ReturnValue), Z_Construct_UClass_UDatabaseQuery_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UDatabaseQuery_StartAtKey_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatabaseQuery_StartAtKey_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDatabaseQuery_StartAtKey_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatabaseQuery_StartAtKey_Statics::NewProp_OrderValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatabaseQuery_StartAtKey_Statics::NewProp_ChildKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatabaseQuery_StartAtKey_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatabaseQuery_StartAtKey_Statics::Function_MetaDataParams[] = {
		{ "Category", "Firebase|Database|Query" },
		{ "Comment", "/// @brief Get a Query constrained to nodes with the given sort value or\n/// higher, and the given key or higher.\n///\n/// This method is used to generate a reference to a limited view of the data\n/// at this location. The Query returned will only refer to child nodes with a\n/// value greater than or equal to the given value, using the given OrderBy\n/// directive (or priority as default), and additionally only child nodes with\n/// a key greater than or equal to the given key.\n///\n/// <b>Known issue</b> This currently does not work properly on all platforms.\n/// Please use StartAt(Variant order_value) instead.\n///\n/// @param[in] order_value The lowest sort value the Query should include.\n/// @param[in] child_key The lowest key the Query should include.\n///\n/// @returns A Query in this same location, filtering out child nodes that\n/// have a lower sort value than the sort value specified, or a lower key than\n/// the key specified.\n" },
		{ "ModuleRelativePath", "Public/Database/DatabaseReference.h" },
		{ "ToolTip", "@brief Get a Query constrained to nodes with the given sort value or\nhigher, and the given key or higher.\n\nThis method is used to generate a reference to a limited view of the data\nat this location. The Query returned will only refer to child nodes with a\nvalue greater than or equal to the given value, using the given OrderBy\ndirective (or priority as default), and additionally only child nodes with\na key greater than or equal to the given key.\n\n<b>Known issue</b> This currently does not work properly on all platforms.\nPlease use StartAt(Variant order_value) instead.\n\n@param[in] order_value The lowest sort value the Query should include.\n@param[in] child_key The lowest key the Query should include.\n\n@returns A Query in this same location, filtering out child nodes that\nhave a lower sort value than the sort value specified, or a lower key than\nthe key specified." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatabaseQuery_StartAtKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatabaseQuery, nullptr, "StartAtKey", nullptr, nullptr, sizeof(DatabaseQuery_eventStartAtKey_Parms), Z_Construct_UFunction_UDatabaseQuery_StartAtKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatabaseQuery_StartAtKey_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDatabaseQuery_StartAtKey_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatabaseQuery_StartAtKey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDatabaseQuery_StartAtKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDatabaseQuery_StartAtKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UDatabaseQuery_NoRegister()
	{
		return UDatabaseQuery::StaticClass();
	}
	struct Z_Construct_UClass_UDatabaseQuery_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnChildAdded_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnChildAdded;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnChildChanged_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnChildChanged;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnChildMoved_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnChildMoved;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnChildRemoved_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnChildRemoved;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnCancelled_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCancelled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnValueChanged_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnValueChanged;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDatabaseQuery_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_FirebaseFeatures,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDatabaseQuery_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDatabaseQuery_ClearListeners, "ClearListeners" }, // 567220728
		{ &Z_Construct_UFunction_UDatabaseQuery_EndAt, "EndAt" }, // 640788073
		{ &Z_Construct_UFunction_UDatabaseQuery_EndAtKey, "EndAtKey" }, // 2212548473
		{ &Z_Construct_UFunction_UDatabaseQuery_EqualTo, "EqualTo" }, // 1778556332
		{ &Z_Construct_UFunction_UDatabaseQuery_EqualToKey, "EqualToKey" }, // 304557553
		{ &Z_Construct_UFunction_UDatabaseQuery_GetReference, "GetReference" }, // 2372137581
		{ &Z_Construct_UFunction_UDatabaseQuery_IsValid, "IsValid" }, // 2717541454
		{ &Z_Construct_UFunction_UDatabaseQuery_LimitToFirst, "LimitToFirst" }, // 3353043844
		{ &Z_Construct_UFunction_UDatabaseQuery_LimitToLast, "LimitToLast" }, // 1511536657
		{ &Z_Construct_UFunction_UDatabaseQuery_OrderByChild, "OrderByChild" }, // 2083402528
		{ &Z_Construct_UFunction_UDatabaseQuery_OrderByKey, "OrderByKey" }, // 235995337
		{ &Z_Construct_UFunction_UDatabaseQuery_OrderByPriority, "OrderByPriority" }, // 446119873
		{ &Z_Construct_UFunction_UDatabaseQuery_OrderByValue, "OrderByValue" }, // 1872709424
		{ &Z_Construct_UFunction_UDatabaseQuery_SetKeepSynchronized, "SetKeepSynchronized" }, // 2289696891
		{ &Z_Construct_UFunction_UDatabaseQuery_SetupListeners, "SetupListeners" }, // 2893042401
		{ &Z_Construct_UFunction_UDatabaseQuery_StartAt, "StartAt" }, // 2368063219
		{ &Z_Construct_UFunction_UDatabaseQuery_StartAtKey, "StartAtKey" }, // 3457372221
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatabaseQuery_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Database/DatabaseReference.h" },
		{ "ModuleRelativePath", "Public/Database/DatabaseReference.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatabaseQuery_Statics::NewProp_OnChildAdded_MetaData[] = {
		{ "Category", "Firebase|Database|Query" },
		{ "ModuleRelativePath", "Public/Database/DatabaseReference.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UDatabaseQuery_Statics::NewProp_OnChildAdded = { "OnChildAdded", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDatabaseQuery, OnChildAdded), Z_Construct_UDelegateFunction_FirebaseFeatures_QueryChildEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UDatabaseQuery_Statics::NewProp_OnChildAdded_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDatabaseQuery_Statics::NewProp_OnChildAdded_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatabaseQuery_Statics::NewProp_OnChildChanged_MetaData[] = {
		{ "Category", "Firebase|Database|Query" },
		{ "ModuleRelativePath", "Public/Database/DatabaseReference.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UDatabaseQuery_Statics::NewProp_OnChildChanged = { "OnChildChanged", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDatabaseQuery, OnChildChanged), Z_Construct_UDelegateFunction_FirebaseFeatures_QueryChildEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UDatabaseQuery_Statics::NewProp_OnChildChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDatabaseQuery_Statics::NewProp_OnChildChanged_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatabaseQuery_Statics::NewProp_OnChildMoved_MetaData[] = {
		{ "Category", "Firebase|Database|Query" },
		{ "ModuleRelativePath", "Public/Database/DatabaseReference.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UDatabaseQuery_Statics::NewProp_OnChildMoved = { "OnChildMoved", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDatabaseQuery, OnChildMoved), Z_Construct_UDelegateFunction_FirebaseFeatures_QueryChildEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UDatabaseQuery_Statics::NewProp_OnChildMoved_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDatabaseQuery_Statics::NewProp_OnChildMoved_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatabaseQuery_Statics::NewProp_OnChildRemoved_MetaData[] = {
		{ "Category", "Firebase|Database|Query" },
		{ "ModuleRelativePath", "Public/Database/DatabaseReference.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UDatabaseQuery_Statics::NewProp_OnChildRemoved = { "OnChildRemoved", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDatabaseQuery, OnChildRemoved), Z_Construct_UDelegateFunction_FirebaseFeatures_QueryChildEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UDatabaseQuery_Statics::NewProp_OnChildRemoved_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDatabaseQuery_Statics::NewProp_OnChildRemoved_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatabaseQuery_Statics::NewProp_OnCancelled_MetaData[] = {
		{ "Category", "Firebase|Database|Query" },
		{ "ModuleRelativePath", "Public/Database/DatabaseReference.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UDatabaseQuery_Statics::NewProp_OnCancelled = { "OnCancelled", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDatabaseQuery, OnCancelled), Z_Construct_UDelegateFunction_FirebaseFeatures_QueryCancelEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UDatabaseQuery_Statics::NewProp_OnCancelled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDatabaseQuery_Statics::NewProp_OnCancelled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatabaseQuery_Statics::NewProp_OnValueChanged_MetaData[] = {
		{ "Category", "Firebase|Database|Query" },
		{ "ModuleRelativePath", "Public/Database/DatabaseReference.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UDatabaseQuery_Statics::NewProp_OnValueChanged = { "OnValueChanged", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDatabaseQuery, OnValueChanged), Z_Construct_UDelegateFunction_FirebaseFeatures_QueryValueEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UDatabaseQuery_Statics::NewProp_OnValueChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDatabaseQuery_Statics::NewProp_OnValueChanged_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDatabaseQuery_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatabaseQuery_Statics::NewProp_OnChildAdded,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatabaseQuery_Statics::NewProp_OnChildChanged,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatabaseQuery_Statics::NewProp_OnChildMoved,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatabaseQuery_Statics::NewProp_OnChildRemoved,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatabaseQuery_Statics::NewProp_OnCancelled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatabaseQuery_Statics::NewProp_OnValueChanged,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDatabaseQuery_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDatabaseQuery>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDatabaseQuery_Statics::ClassParams = {
		&UDatabaseQuery::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UDatabaseQuery_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UDatabaseQuery_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDatabaseQuery_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDatabaseQuery_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDatabaseQuery()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDatabaseQuery_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDatabaseQuery, 1787306590);
	template<> FIREBASEFEATURES_API UClass* StaticClass<UDatabaseQuery>()
	{
		return UDatabaseQuery::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDatabaseQuery(Z_Construct_UClass_UDatabaseQuery, &UDatabaseQuery::StaticClass, TEXT("/Script/FirebaseFeatures"), TEXT("UDatabaseQuery"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDatabaseQuery);
	DEFINE_FUNCTION(UDatabaseReference::execGetDisconnectionHandler)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDisconnectionHandler**)Z_Param__Result=P_THIS->GetDisconnectionHandler();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDatabaseReference::execGoOnline)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GoOnline();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDatabaseReference::execGoOffline)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GoOffline();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDatabaseReference::execGetUrl)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetUrl();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDatabaseReference::execPushChild)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDatabaseReference**)Z_Param__Result=P_THIS->PushChild();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDatabaseReference::execChild)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Path);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDatabaseReference**)Z_Param__Result=P_THIS->Child(Z_Param_Path);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDatabaseReference::execGetRoot)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDatabaseReference**)Z_Param__Result=P_THIS->GetRoot();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDatabaseReference::execGetParent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDatabaseReference**)Z_Param__Result=P_THIS->GetParent();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDatabaseReference::execIsRoot)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsRoot();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDatabaseReference::execGetKey)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetKey();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDatabaseReference::execGetDatabase)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDatabase**)Z_Param__Result=P_THIS->GetDatabase();
		P_NATIVE_END;
	}
	void UDatabaseReference::StaticRegisterNativesUDatabaseReference()
	{
		UClass* Class = UDatabaseReference::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Child", &UDatabaseReference::execChild },
			{ "GetDatabase", &UDatabaseReference::execGetDatabase },
			{ "GetDisconnectionHandler", &UDatabaseReference::execGetDisconnectionHandler },
			{ "GetKey", &UDatabaseReference::execGetKey },
			{ "GetParent", &UDatabaseReference::execGetParent },
			{ "GetRoot", &UDatabaseReference::execGetRoot },
			{ "GetUrl", &UDatabaseReference::execGetUrl },
			{ "GoOffline", &UDatabaseReference::execGoOffline },
			{ "GoOnline", &UDatabaseReference::execGoOnline },
			{ "IsRoot", &UDatabaseReference::execIsRoot },
			{ "PushChild", &UDatabaseReference::execPushChild },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDatabaseReference_Child_Statics
	{
		struct DatabaseReference_eventChild_Parms
		{
			FString Path;
			UDatabaseReference* ReturnValue;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatabaseReference_Child_Statics::NewProp_Path_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDatabaseReference_Child_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DatabaseReference_eventChild_Parms, Path), METADATA_PARAMS(Z_Construct_UFunction_UDatabaseReference_Child_Statics::NewProp_Path_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatabaseReference_Child_Statics::NewProp_Path_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatabaseReference_Child_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Reference" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDatabaseReference_Child_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DatabaseReference_eventChild_Parms, ReturnValue), Z_Construct_UClass_UDatabaseReference_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UDatabaseReference_Child_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatabaseReference_Child_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDatabaseReference_Child_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatabaseReference_Child_Statics::NewProp_Path,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatabaseReference_Child_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatabaseReference_Child_Statics::Function_MetaDataParams[] = {
		{ "Category", "Firebase|Database|Reference" },
		{ "Comment", "/// @brief Gets a reference to a location relative to this one.\n/// @param[in] path Path relative to this snapshot's location.\n/// @returns Child relative to this location.\n" },
		{ "ModuleRelativePath", "Public/Database/DatabaseReference.h" },
		{ "ToolTip", "@brief Gets a reference to a location relative to this one.\n@param[in] path Path relative to this snapshot's location.\n@returns Child relative to this location." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatabaseReference_Child_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatabaseReference, nullptr, "Child", nullptr, nullptr, sizeof(DatabaseReference_eventChild_Parms), Z_Construct_UFunction_UDatabaseReference_Child_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatabaseReference_Child_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDatabaseReference_Child_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatabaseReference_Child_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDatabaseReference_Child()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDatabaseReference_Child_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDatabaseReference_GetDatabase_Statics
	{
		struct DatabaseReference_eventGetDatabase_Parms
		{
			UDatabase* ReturnValue;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatabaseReference_GetDatabase_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Database" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDatabaseReference_GetDatabase_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DatabaseReference_eventGetDatabase_Parms, ReturnValue), Z_Construct_UClass_UDatabase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UDatabaseReference_GetDatabase_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatabaseReference_GetDatabase_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDatabaseReference_GetDatabase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatabaseReference_GetDatabase_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatabaseReference_GetDatabase_Statics::Function_MetaDataParams[] = {
		{ "Category", "Firebase|Database|Reference" },
		{ "Comment", "/// @brief Gets the database to which we refer.\n/// @returns Firebase Database instance that this DatabaseReference refers to.\n" },
		{ "ModuleRelativePath", "Public/Database/DatabaseReference.h" },
		{ "ToolTip", "@brief Gets the database to which we refer.\n@returns Firebase Database instance that this DatabaseReference refers to." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatabaseReference_GetDatabase_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatabaseReference, nullptr, "GetDatabase", nullptr, nullptr, sizeof(DatabaseReference_eventGetDatabase_Parms), Z_Construct_UFunction_UDatabaseReference_GetDatabase_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatabaseReference_GetDatabase_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDatabaseReference_GetDatabase_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatabaseReference_GetDatabase_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDatabaseReference_GetDatabase()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDatabaseReference_GetDatabase_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDatabaseReference_GetDisconnectionHandler_Statics
	{
		struct DatabaseReference_eventGetDisconnectionHandler_Parms
		{
			UDisconnectionHandler* ReturnValue;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatabaseReference_GetDisconnectionHandler_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Handler" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDatabaseReference_GetDisconnectionHandler_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DatabaseReference_eventGetDisconnectionHandler_Parms, ReturnValue), Z_Construct_UClass_UDisconnectionHandler_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UDatabaseReference_GetDisconnectionHandler_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatabaseReference_GetDisconnectionHandler_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDatabaseReference_GetDisconnectionHandler_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatabaseReference_GetDisconnectionHandler_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatabaseReference_GetDisconnectionHandler_Statics::Function_MetaDataParams[] = {
		{ "Category", "Firebase|Database|Reference" },
		{ "Comment", "/// @brief Get the disconnect handler, which controls what actions the server\n/// will perform to this location's data when this client disconnects.\n///\n/// @returns Disconnection handler for this location. You can use this to\n/// queue up operations on the server to be performed when the client\n/// disconnects.\n" },
		{ "ModuleRelativePath", "Public/Database/DatabaseReference.h" },
		{ "ToolTip", "@brief Get the disconnect handler, which controls what actions the server\nwill perform to this location's data when this client disconnects.\n\n@returns Disconnection handler for this location. You can use this to\nqueue up operations on the server to be performed when the client\ndisconnects." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatabaseReference_GetDisconnectionHandler_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatabaseReference, nullptr, "GetDisconnectionHandler", nullptr, nullptr, sizeof(DatabaseReference_eventGetDisconnectionHandler_Parms), Z_Construct_UFunction_UDatabaseReference_GetDisconnectionHandler_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatabaseReference_GetDisconnectionHandler_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDatabaseReference_GetDisconnectionHandler_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatabaseReference_GetDisconnectionHandler_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDatabaseReference_GetDisconnectionHandler()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDatabaseReference_GetDisconnectionHandler_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDatabaseReference_GetKey_Statics
	{
		struct DatabaseReference_eventGetKey_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatabaseReference_GetKey_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Key" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDatabaseReference_GetKey_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DatabaseReference_eventGetKey_Parms, ReturnValue), METADATA_PARAMS(Z_Construct_UFunction_UDatabaseReference_GetKey_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatabaseReference_GetKey_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDatabaseReference_GetKey_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatabaseReference_GetKey_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatabaseReference_GetKey_Statics::Function_MetaDataParams[] = {
		{ "Category", "Firebase|Database|Reference" },
		{ "Comment", "/// @brief Gets the string key of this database location.\n///\n/// The pointer is only valid while the DatabaseReference remains in memory.\n///\n/// @returns String key of this database location, which will remain valid in\n/// memory until the DatabaseReference itself goes away.\n" },
		{ "ModuleRelativePath", "Public/Database/DatabaseReference.h" },
		{ "ToolTip", "@brief Gets the string key of this database location.\n\nThe pointer is only valid while the DatabaseReference remains in memory.\n\n@returns String key of this database location, which will remain valid in\nmemory until the DatabaseReference itself goes away." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatabaseReference_GetKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatabaseReference, nullptr, "GetKey", nullptr, nullptr, sizeof(DatabaseReference_eventGetKey_Parms), Z_Construct_UFunction_UDatabaseReference_GetKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatabaseReference_GetKey_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDatabaseReference_GetKey_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatabaseReference_GetKey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDatabaseReference_GetKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDatabaseReference_GetKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDatabaseReference_GetParent_Statics
	{
		struct DatabaseReference_eventGetParent_Parms
		{
			UDatabaseReference* ReturnValue;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatabaseReference_GetParent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Reference" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDatabaseReference_GetParent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DatabaseReference_eventGetParent_Parms, ReturnValue), Z_Construct_UClass_UDatabaseReference_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UDatabaseReference_GetParent_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatabaseReference_GetParent_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDatabaseReference_GetParent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatabaseReference_GetParent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatabaseReference_GetParent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Firebase|Database|Reference" },
		{ "Comment", "/// @brief Gets the parent of this location, or get this location again if\n/// IsRoot().\n///\n/// @returns Parent of this location in the database, unless this location is\n/// the root, in which case it returns this same location again.\n" },
		{ "ModuleRelativePath", "Public/Database/DatabaseReference.h" },
		{ "ToolTip", "@brief Gets the parent of this location, or get this location again if\nIsRoot().\n\n@returns Parent of this location in the database, unless this location is\nthe root, in which case it returns this same location again." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatabaseReference_GetParent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatabaseReference, nullptr, "GetParent", nullptr, nullptr, sizeof(DatabaseReference_eventGetParent_Parms), Z_Construct_UFunction_UDatabaseReference_GetParent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatabaseReference_GetParent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDatabaseReference_GetParent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatabaseReference_GetParent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDatabaseReference_GetParent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDatabaseReference_GetParent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDatabaseReference_GetRoot_Statics
	{
		struct DatabaseReference_eventGetRoot_Parms
		{
			UDatabaseReference* ReturnValue;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatabaseReference_GetRoot_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Reference" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDatabaseReference_GetRoot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DatabaseReference_eventGetRoot_Parms, ReturnValue), Z_Construct_UClass_UDatabaseReference_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UDatabaseReference_GetRoot_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatabaseReference_GetRoot_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDatabaseReference_GetRoot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatabaseReference_GetRoot_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatabaseReference_GetRoot_Statics::Function_MetaDataParams[] = {
		{ "Category", "Firebase|Database|Reference" },
		{ "Comment", "/// @brief Gets the root of the database.\n///\n/// @returns Root of the database.\n" },
		{ "ModuleRelativePath", "Public/Database/DatabaseReference.h" },
		{ "ToolTip", "@brief Gets the root of the database.\n\n@returns Root of the database." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatabaseReference_GetRoot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatabaseReference, nullptr, "GetRoot", nullptr, nullptr, sizeof(DatabaseReference_eventGetRoot_Parms), Z_Construct_UFunction_UDatabaseReference_GetRoot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatabaseReference_GetRoot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDatabaseReference_GetRoot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatabaseReference_GetRoot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDatabaseReference_GetRoot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDatabaseReference_GetRoot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDatabaseReference_GetUrl_Statics
	{
		struct DatabaseReference_eventGetUrl_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatabaseReference_GetUrl_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "URL" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDatabaseReference_GetUrl_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DatabaseReference_eventGetUrl_Parms, ReturnValue), METADATA_PARAMS(Z_Construct_UFunction_UDatabaseReference_GetUrl_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatabaseReference_GetUrl_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDatabaseReference_GetUrl_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatabaseReference_GetUrl_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatabaseReference_GetUrl_Statics::Function_MetaDataParams[] = {
		{ "Category", "Firebase|Database|Reference" },
		{ "Comment", "/// @brief Get the absolute URL of this reference.\n///\n/// @returns The absolute URL of the location this reference refers to.\n" },
		{ "ModuleRelativePath", "Public/Database/DatabaseReference.h" },
		{ "ToolTip", "@brief Get the absolute URL of this reference.\n\n@returns The absolute URL of the location this reference refers to." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatabaseReference_GetUrl_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatabaseReference, nullptr, "GetUrl", nullptr, nullptr, sizeof(DatabaseReference_eventGetUrl_Parms), Z_Construct_UFunction_UDatabaseReference_GetUrl_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatabaseReference_GetUrl_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDatabaseReference_GetUrl_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatabaseReference_GetUrl_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDatabaseReference_GetUrl()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDatabaseReference_GetUrl_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDatabaseReference_GoOffline_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatabaseReference_GoOffline_Statics::Function_MetaDataParams[] = {
		{ "Category", "Firebase|Database|Reference" },
		{ "Comment", "/// @brief Manually disconnect Firebase Realtime Database from the server, and\n/// disable automatic reconnection. This will affect all other instances of\n/// DatabaseReference as well.\n" },
		{ "ModuleRelativePath", "Public/Database/DatabaseReference.h" },
		{ "ToolTip", "@brief Manually disconnect Firebase Realtime Database from the server, and\ndisable automatic reconnection. This will affect all other instances of\nDatabaseReference as well." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatabaseReference_GoOffline_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatabaseReference, nullptr, "GoOffline", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDatabaseReference_GoOffline_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatabaseReference_GoOffline_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDatabaseReference_GoOffline()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDatabaseReference_GoOffline_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDatabaseReference_GoOnline_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatabaseReference_GoOnline_Statics::Function_MetaDataParams[] = {
		{ "Category", "Firebase|Database|Reference" },
		{ "Comment", "/// @brief Manually reestablish connection to the Firebase Realtime Database\n/// server and enable automatic reconnection. This will affect all other\n/// instances of DatabaseReference as well.\n" },
		{ "ModuleRelativePath", "Public/Database/DatabaseReference.h" },
		{ "ToolTip", "@brief Manually reestablish connection to the Firebase Realtime Database\nserver and enable automatic reconnection. This will affect all other\ninstances of DatabaseReference as well." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatabaseReference_GoOnline_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatabaseReference, nullptr, "GoOnline", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDatabaseReference_GoOnline_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatabaseReference_GoOnline_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDatabaseReference_GoOnline()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDatabaseReference_GoOnline_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDatabaseReference_IsRoot_Statics
	{
		struct DatabaseReference_eventIsRoot_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatabaseReference_IsRoot_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Is Root" },
	};
#endif
	void Z_Construct_UFunction_UDatabaseReference_IsRoot_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DatabaseReference_eventIsRoot_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDatabaseReference_IsRoot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DatabaseReference_eventIsRoot_Parms), &Z_Construct_UFunction_UDatabaseReference_IsRoot_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UDatabaseReference_IsRoot_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatabaseReference_IsRoot_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDatabaseReference_IsRoot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatabaseReference_IsRoot_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatabaseReference_IsRoot_Statics::Function_MetaDataParams[] = {
		{ "Category", "Firebase|Database|Reference" },
		{ "Comment", "/// @brief Returns true if this reference refers to the root of the database.\n///\n/// @returns true if this reference refers to the root of the database, false\n/// otherwise.\n" },
		{ "ModuleRelativePath", "Public/Database/DatabaseReference.h" },
		{ "ToolTip", "@brief Returns true if this reference refers to the root of the database.\n\n@returns true if this reference refers to the root of the database, false\notherwise." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatabaseReference_IsRoot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatabaseReference, nullptr, "IsRoot", nullptr, nullptr, sizeof(DatabaseReference_eventIsRoot_Parms), Z_Construct_UFunction_UDatabaseReference_IsRoot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatabaseReference_IsRoot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDatabaseReference_IsRoot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatabaseReference_IsRoot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDatabaseReference_IsRoot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDatabaseReference_IsRoot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDatabaseReference_PushChild_Statics
	{
		struct DatabaseReference_eventPushChild_Parms
		{
			UDatabaseReference* ReturnValue;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatabaseReference_PushChild_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Reference" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDatabaseReference_PushChild_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DatabaseReference_eventPushChild_Parms, ReturnValue), Z_Construct_UClass_UDatabaseReference_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UDatabaseReference_PushChild_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatabaseReference_PushChild_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDatabaseReference_PushChild_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatabaseReference_PushChild_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatabaseReference_PushChild_Statics::Function_MetaDataParams[] = {
		{ "Category", "Firebase|Database|Reference" },
		{ "Comment", "/// @brief Automatically generates a child location, create a reference to it,\n/// and returns that reference to it.\n/// @returns A newly created child, with a unique key.\n" },
		{ "ModuleRelativePath", "Public/Database/DatabaseReference.h" },
		{ "ToolTip", "@brief Automatically generates a child location, create a reference to it,\nand returns that reference to it.\n@returns A newly created child, with a unique key." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatabaseReference_PushChild_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatabaseReference, nullptr, "PushChild", nullptr, nullptr, sizeof(DatabaseReference_eventPushChild_Parms), Z_Construct_UFunction_UDatabaseReference_PushChild_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatabaseReference_PushChild_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDatabaseReference_PushChild_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatabaseReference_PushChild_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDatabaseReference_PushChild()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDatabaseReference_PushChild_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UDatabaseReference_NoRegister()
	{
		return UDatabaseReference::StaticClass();
	}
	struct Z_Construct_UClass_UDatabaseReference_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDatabaseReference_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDatabaseQuery,
		(UObject* (*)())Z_Construct_UPackage__Script_FirebaseFeatures,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDatabaseReference_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDatabaseReference_Child, "Child" }, // 2788339252
		{ &Z_Construct_UFunction_UDatabaseReference_GetDatabase, "GetDatabase" }, // 4022962638
		{ &Z_Construct_UFunction_UDatabaseReference_GetDisconnectionHandler, "GetDisconnectionHandler" }, // 1393622306
		{ &Z_Construct_UFunction_UDatabaseReference_GetKey, "GetKey" }, // 1016264440
		{ &Z_Construct_UFunction_UDatabaseReference_GetParent, "GetParent" }, // 1300331618
		{ &Z_Construct_UFunction_UDatabaseReference_GetRoot, "GetRoot" }, // 2364809950
		{ &Z_Construct_UFunction_UDatabaseReference_GetUrl, "GetUrl" }, // 706853954
		{ &Z_Construct_UFunction_UDatabaseReference_GoOffline, "GoOffline" }, // 3062321156
		{ &Z_Construct_UFunction_UDatabaseReference_GoOnline, "GoOnline" }, // 1201921688
		{ &Z_Construct_UFunction_UDatabaseReference_IsRoot, "IsRoot" }, // 1570364312
		{ &Z_Construct_UFunction_UDatabaseReference_PushChild, "PushChild" }, // 1739920355
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatabaseReference_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/// DatabaseReference represents a particular location in your Database and can\n/// be used for reading or writing data to that Database location.\n/// This class is the starting point for all Database operations. After you've\n/// initialized it with a URL, you can use it to read data, write data, and to\n/// create new DatabaseReference instances.\n" },
		{ "IncludePath", "Database/DatabaseReference.h" },
		{ "ModuleRelativePath", "Public/Database/DatabaseReference.h" },
		{ "ToolTip", "DatabaseReference represents a particular location in your Database and can\nbe used for reading or writing data to that Database location.\nThis class is the starting point for all Database operations. After you've\ninitialized it with a URL, you can use it to read data, write data, and to\ncreate new DatabaseReference instances." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDatabaseReference_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDatabaseReference>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDatabaseReference_Statics::ClassParams = {
		&UDatabaseReference::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UDatabaseReference_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDatabaseReference_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDatabaseReference()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDatabaseReference_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDatabaseReference, 544158475);
	template<> FIREBASEFEATURES_API UClass* StaticClass<UDatabaseReference>()
	{
		return UDatabaseReference::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDatabaseReference(Z_Construct_UClass_UDatabaseReference, &UDatabaseReference::StaticClass, TEXT("/Script/FirebaseFeatures"), TEXT("UDatabaseReference"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDatabaseReference);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
