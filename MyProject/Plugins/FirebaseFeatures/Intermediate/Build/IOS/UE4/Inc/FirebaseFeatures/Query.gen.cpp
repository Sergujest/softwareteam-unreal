// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FirebaseFeatures/Public/Firestore/Query.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeQuery() {}
// Cross Module References
	FIREBASEFEATURES_API UFunction* Z_Construct_UDelegateFunction_FirebaseFeatures_QuerySnapshotListener__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_FirebaseFeatures();
	FIREBASEFEATURES_API UEnum* Z_Construct_UEnum_FirebaseFeatures_EFirestoreError();
	FIREBASEFEATURES_API UScriptStruct* Z_Construct_UScriptStruct_FFirestoreDocumentSnapshot();
	FIREBASEFEATURES_API UEnum* Z_Construct_UEnum_FirebaseFeatures_EFirestoreQueryDirection();
	FIREBASEFEATURES_API UClass* Z_Construct_UClass_UFirestoreQuery_NoRegister();
	FIREBASEFEATURES_API UClass* Z_Construct_UClass_UFirestoreQuery();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	FIREBASEFEATURES_API UScriptStruct* Z_Construct_UScriptStruct_FFirestoreFieldValue();
	FIREBASEFEATURES_API UScriptStruct* Z_Construct_UScriptStruct_FFirestoreFieldPath();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_FirebaseFeatures_QuerySnapshotListener__DelegateSignature_Statics
	{
		struct _Script_FirebaseFeatures_eventQuerySnapshotListener_Parms
		{
			EFirestoreError Error;
			TArray<FFirestoreDocumentSnapshot> DocumentSnapshots;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Error_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Error_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Error;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DocumentSnapshots_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DocumentSnapshots_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DocumentSnapshots;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_FirebaseFeatures_QuerySnapshotListener__DelegateSignature_Statics::NewProp_Error_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_FirebaseFeatures_QuerySnapshotListener__DelegateSignature_Statics::NewProp_Error_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_FirebaseFeatures_QuerySnapshotListener__DelegateSignature_Statics::NewProp_Error = { "Error", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_FirebaseFeatures_eventQuerySnapshotListener_Parms, Error), Z_Construct_UEnum_FirebaseFeatures_EFirestoreError, METADATA_PARAMS(Z_Construct_UDelegateFunction_FirebaseFeatures_QuerySnapshotListener__DelegateSignature_Statics::NewProp_Error_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_FirebaseFeatures_QuerySnapshotListener__DelegateSignature_Statics::NewProp_Error_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_FirebaseFeatures_QuerySnapshotListener__DelegateSignature_Statics::NewProp_DocumentSnapshots_Inner = { "DocumentSnapshots", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FFirestoreDocumentSnapshot, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_FirebaseFeatures_QuerySnapshotListener__DelegateSignature_Statics::NewProp_DocumentSnapshots_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_FirebaseFeatures_QuerySnapshotListener__DelegateSignature_Statics::NewProp_DocumentSnapshots = { "DocumentSnapshots", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_FirebaseFeatures_eventQuerySnapshotListener_Parms, DocumentSnapshots), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UDelegateFunction_FirebaseFeatures_QuerySnapshotListener__DelegateSignature_Statics::NewProp_DocumentSnapshots_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_FirebaseFeatures_QuerySnapshotListener__DelegateSignature_Statics::NewProp_DocumentSnapshots_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_FirebaseFeatures_QuerySnapshotListener__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_FirebaseFeatures_QuerySnapshotListener__DelegateSignature_Statics::NewProp_Error_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_FirebaseFeatures_QuerySnapshotListener__DelegateSignature_Statics::NewProp_Error,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_FirebaseFeatures_QuerySnapshotListener__DelegateSignature_Statics::NewProp_DocumentSnapshots_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_FirebaseFeatures_QuerySnapshotListener__DelegateSignature_Statics::NewProp_DocumentSnapshots,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_FirebaseFeatures_QuerySnapshotListener__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Firestore/Query.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_FirebaseFeatures_QuerySnapshotListener__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_FirebaseFeatures, nullptr, "QuerySnapshotListener__DelegateSignature", nullptr, nullptr, sizeof(_Script_FirebaseFeatures_eventQuerySnapshotListener_Parms), Z_Construct_UDelegateFunction_FirebaseFeatures_QuerySnapshotListener__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_FirebaseFeatures_QuerySnapshotListener__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_FirebaseFeatures_QuerySnapshotListener__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_FirebaseFeatures_QuerySnapshotListener__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_FirebaseFeatures_QuerySnapshotListener__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_FirebaseFeatures_QuerySnapshotListener__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	static UEnum* EFirestoreQueryDirection_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_FirebaseFeatures_EFirestoreQueryDirection, Z_Construct_UPackage__Script_FirebaseFeatures(), TEXT("EFirestoreQueryDirection"));
		}
		return Singleton;
	}
	template<> FIREBASEFEATURES_API UEnum* StaticEnum<EFirestoreQueryDirection>()
	{
		return EFirestoreQueryDirection_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EFirestoreQueryDirection(EFirestoreQueryDirection_StaticEnum, TEXT("/Script/FirebaseFeatures"), TEXT("EFirestoreQueryDirection"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_FirebaseFeatures_EFirestoreQueryDirection_Hash() { return 3414574343U; }
	UEnum* Z_Construct_UEnum_FirebaseFeatures_EFirestoreQueryDirection()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_FirebaseFeatures();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EFirestoreQueryDirection"), 0, Get_Z_Construct_UEnum_FirebaseFeatures_EFirestoreQueryDirection_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EFirestoreQueryDirection::Ascending", (int64)EFirestoreQueryDirection::Ascending },
				{ "EFirestoreQueryDirection::Descending", (int64)EFirestoreQueryDirection::Descending },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Ascending.Name", "EFirestoreQueryDirection::Ascending" },
				{ "BlueprintType", "true" },
				{ "Descending.Name", "EFirestoreQueryDirection::Descending" },
				{ "ModuleRelativePath", "Public/Firestore/Query.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_FirebaseFeatures,
				nullptr,
				"EFirestoreQueryDirection",
				"EFirestoreQueryDirection",
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
	DEFINE_FUNCTION(UFirestoreQuery::execEndAtValues)
	{
		P_GET_TARRAY_REF(FFirestoreFieldValue,Z_Param_Out_Values);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UFirestoreQuery**)Z_Param__Result=P_THIS->EndAtValues(Z_Param_Out_Values);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFirestoreQuery::execEndAt)
	{
		P_GET_STRUCT_REF(FFirestoreDocumentSnapshot,Z_Param_Out_Snapshot);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UFirestoreQuery**)Z_Param__Result=P_THIS->EndAt(Z_Param_Out_Snapshot);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFirestoreQuery::execEndBeforeFieldValue)
	{
		P_GET_TARRAY_REF(FFirestoreFieldValue,Z_Param_Out_Values);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UFirestoreQuery**)Z_Param__Result=P_THIS->EndBeforeFieldValue(Z_Param_Out_Values);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFirestoreQuery::execEndBefore)
	{
		P_GET_STRUCT_REF(FFirestoreDocumentSnapshot,Z_Param_Out_Snapshot);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UFirestoreQuery**)Z_Param__Result=P_THIS->EndBefore(Z_Param_Out_Snapshot);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFirestoreQuery::execStartAfterFieldValue)
	{
		P_GET_TARRAY_REF(FFirestoreFieldValue,Z_Param_Out_Values);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UFirestoreQuery**)Z_Param__Result=P_THIS->StartAfterFieldValue(Z_Param_Out_Values);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFirestoreQuery::execStartAfter)
	{
		P_GET_STRUCT_REF(FFirestoreDocumentSnapshot,Z_Param_Out_Snapshot);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UFirestoreQuery**)Z_Param__Result=P_THIS->StartAfter(Z_Param_Out_Snapshot);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFirestoreQuery::execStartAtFieldValue)
	{
		P_GET_TARRAY_REF(FFirestoreFieldValue,Z_Param_Out_Values);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UFirestoreQuery**)Z_Param__Result=P_THIS->StartAtFieldValue(Z_Param_Out_Values);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFirestoreQuery::execStartAt)
	{
		P_GET_STRUCT_REF(FFirestoreDocumentSnapshot,Z_Param_Out_Snapshot);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UFirestoreQuery**)Z_Param__Result=P_THIS->StartAt(Z_Param_Out_Snapshot);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFirestoreQuery::execLimitToLast)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Limit);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UFirestoreQuery**)Z_Param__Result=P_THIS->LimitToLast(Z_Param_Limit);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFirestoreQuery::execLimit)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Limit);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UFirestoreQuery**)Z_Param__Result=P_THIS->Limit(Z_Param_Limit);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFirestoreQuery::execOrderByFieldPath)
	{
		P_GET_STRUCT_REF(FFirestoreFieldPath,Z_Param_Out_Field);
		P_GET_ENUM(EFirestoreQueryDirection,Z_Param_Direction);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UFirestoreQuery**)Z_Param__Result=P_THIS->OrderByFieldPath(Z_Param_Out_Field,EFirestoreQueryDirection(Z_Param_Direction));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFirestoreQuery::execOrderBy)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Field);
		P_GET_ENUM(EFirestoreQueryDirection,Z_Param_Direction);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UFirestoreQuery**)Z_Param__Result=P_THIS->OrderBy(Z_Param_Field,EFirestoreQueryDirection(Z_Param_Direction));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFirestoreQuery::execWhereInFieldPath)
	{
		P_GET_STRUCT_REF(FFirestoreFieldPath,Z_Param_Out_Field);
		P_GET_TARRAY_REF(FFirestoreFieldValue,Z_Param_Out_Values);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UFirestoreQuery**)Z_Param__Result=P_THIS->WhereInFieldPath(Z_Param_Out_Field,Z_Param_Out_Values);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFirestoreQuery::execWhereIn)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Field);
		P_GET_TARRAY_REF(FFirestoreFieldValue,Z_Param_Out_Values);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UFirestoreQuery**)Z_Param__Result=P_THIS->WhereIn(Z_Param_Field,Z_Param_Out_Values);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFirestoreQuery::execWhereArrayContainsAnyFielPath)
	{
		P_GET_STRUCT_REF(FFirestoreFieldPath,Z_Param_Out_Field);
		P_GET_TARRAY_REF(FFirestoreFieldValue,Z_Param_Out_Values);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UFirestoreQuery**)Z_Param__Result=P_THIS->WhereArrayContainsAnyFielPath(Z_Param_Out_Field,Z_Param_Out_Values);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFirestoreQuery::execWhereArrayContainsAny)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Field);
		P_GET_TARRAY_REF(FFirestoreFieldValue,Z_Param_Out_Values);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UFirestoreQuery**)Z_Param__Result=P_THIS->WhereArrayContainsAny(Z_Param_Field,Z_Param_Out_Values);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFirestoreQuery::execWhereArrayContainsFieldPath)
	{
		P_GET_STRUCT_REF(FFirestoreFieldPath,Z_Param_Out_Field);
		P_GET_STRUCT_REF(FFirestoreFieldValue,Z_Param_Out_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UFirestoreQuery**)Z_Param__Result=P_THIS->WhereArrayContainsFieldPath(Z_Param_Out_Field,Z_Param_Out_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFirestoreQuery::execWhereArrayContains)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Field);
		P_GET_STRUCT_REF(FFirestoreFieldValue,Z_Param_Out_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UFirestoreQuery**)Z_Param__Result=P_THIS->WhereArrayContains(Z_Param_Field,Z_Param_Out_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFirestoreQuery::execWhereGreaterThanOrEqualToFielPath)
	{
		P_GET_STRUCT_REF(FFirestoreFieldPath,Z_Param_Out_Field);
		P_GET_STRUCT_REF(FFirestoreFieldValue,Z_Param_Out_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UFirestoreQuery**)Z_Param__Result=P_THIS->WhereGreaterThanOrEqualToFielPath(Z_Param_Out_Field,Z_Param_Out_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFirestoreQuery::execWhereGreaterThanOrEqualTo)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Field);
		P_GET_STRUCT_REF(FFirestoreFieldValue,Z_Param_Out_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UFirestoreQuery**)Z_Param__Result=P_THIS->WhereGreaterThanOrEqualTo(Z_Param_Field,Z_Param_Out_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFirestoreQuery::execWhereGreaterThanFieldPath)
	{
		P_GET_STRUCT_REF(FFirestoreFieldPath,Z_Param_Out_Field);
		P_GET_STRUCT_REF(FFirestoreFieldValue,Z_Param_Out_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UFirestoreQuery**)Z_Param__Result=P_THIS->WhereGreaterThanFieldPath(Z_Param_Out_Field,Z_Param_Out_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFirestoreQuery::execWhereGreaterThan)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Field);
		P_GET_STRUCT_REF(FFirestoreFieldValue,Z_Param_Out_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UFirestoreQuery**)Z_Param__Result=P_THIS->WhereGreaterThan(Z_Param_Field,Z_Param_Out_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFirestoreQuery::execWhereLessThanOrEqualToFieldPath)
	{
		P_GET_STRUCT_REF(FFirestoreFieldPath,Z_Param_Out_Field);
		P_GET_STRUCT_REF(FFirestoreFieldValue,Z_Param_Out_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UFirestoreQuery**)Z_Param__Result=P_THIS->WhereLessThanOrEqualToFieldPath(Z_Param_Out_Field,Z_Param_Out_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFirestoreQuery::execWhereLessThanOrEqualTo)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Field);
		P_GET_STRUCT_REF(FFirestoreFieldValue,Z_Param_Out_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UFirestoreQuery**)Z_Param__Result=P_THIS->WhereLessThanOrEqualTo(Z_Param_Field,Z_Param_Out_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFirestoreQuery::execWhereLessThanFieldPath)
	{
		P_GET_STRUCT_REF(FFirestoreFieldPath,Z_Param_Out_Field);
		P_GET_STRUCT_REF(FFirestoreFieldValue,Z_Param_Out_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UFirestoreQuery**)Z_Param__Result=P_THIS->WhereLessThanFieldPath(Z_Param_Out_Field,Z_Param_Out_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFirestoreQuery::execWhereLessThan)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Field);
		P_GET_STRUCT_REF(FFirestoreFieldValue,Z_Param_Out_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UFirestoreQuery**)Z_Param__Result=P_THIS->WhereLessThan(Z_Param_Field,Z_Param_Out_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFirestoreQuery::execWhereEqualToFieldPath)
	{
		P_GET_STRUCT_REF(FFirestoreFieldPath,Z_Param_Out_Field);
		P_GET_STRUCT_REF(FFirestoreFieldValue,Z_Param_Out_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UFirestoreQuery**)Z_Param__Result=P_THIS->WhereEqualToFieldPath(Z_Param_Out_Field,Z_Param_Out_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFirestoreQuery::execWhereEqualTo)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Field);
		P_GET_STRUCT_REF(FFirestoreFieldValue,Z_Param_Out_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UFirestoreQuery**)Z_Param__Result=P_THIS->WhereEqualTo(Z_Param_Field,Z_Param_Out_Value);
		P_NATIVE_END;
	}
	void UFirestoreQuery::StaticRegisterNativesUFirestoreQuery()
	{
		UClass* Class = UFirestoreQuery::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EndAt", &UFirestoreQuery::execEndAt },
			{ "EndAtValues", &UFirestoreQuery::execEndAtValues },
			{ "EndBefore", &UFirestoreQuery::execEndBefore },
			{ "EndBeforeFieldValue", &UFirestoreQuery::execEndBeforeFieldValue },
			{ "Limit", &UFirestoreQuery::execLimit },
			{ "LimitToLast", &UFirestoreQuery::execLimitToLast },
			{ "OrderBy", &UFirestoreQuery::execOrderBy },
			{ "OrderByFieldPath", &UFirestoreQuery::execOrderByFieldPath },
			{ "StartAfter", &UFirestoreQuery::execStartAfter },
			{ "StartAfterFieldValue", &UFirestoreQuery::execStartAfterFieldValue },
			{ "StartAt", &UFirestoreQuery::execStartAt },
			{ "StartAtFieldValue", &UFirestoreQuery::execStartAtFieldValue },
			{ "WhereArrayContains", &UFirestoreQuery::execWhereArrayContains },
			{ "WhereArrayContainsAny", &UFirestoreQuery::execWhereArrayContainsAny },
			{ "WhereArrayContainsAnyFielPath", &UFirestoreQuery::execWhereArrayContainsAnyFielPath },
			{ "WhereArrayContainsFieldPath", &UFirestoreQuery::execWhereArrayContainsFieldPath },
			{ "WhereEqualTo", &UFirestoreQuery::execWhereEqualTo },
			{ "WhereEqualToFieldPath", &UFirestoreQuery::execWhereEqualToFieldPath },
			{ "WhereGreaterThan", &UFirestoreQuery::execWhereGreaterThan },
			{ "WhereGreaterThanFieldPath", &UFirestoreQuery::execWhereGreaterThanFieldPath },
			{ "WhereGreaterThanOrEqualTo", &UFirestoreQuery::execWhereGreaterThanOrEqualTo },
			{ "WhereGreaterThanOrEqualToFielPath", &UFirestoreQuery::execWhereGreaterThanOrEqualToFielPath },
			{ "WhereIn", &UFirestoreQuery::execWhereIn },
			{ "WhereInFieldPath", &UFirestoreQuery::execWhereInFieldPath },
			{ "WhereLessThan", &UFirestoreQuery::execWhereLessThan },
			{ "WhereLessThanFieldPath", &UFirestoreQuery::execWhereLessThanFieldPath },
			{ "WhereLessThanOrEqualTo", &UFirestoreQuery::execWhereLessThanOrEqualTo },
			{ "WhereLessThanOrEqualToFieldPath", &UFirestoreQuery::execWhereLessThanOrEqualToFieldPath },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFirestoreQuery_EndAt_Statics
	{
		struct FirestoreQuery_eventEndAt_Parms
		{
			FFirestoreDocumentSnapshot Snapshot;
			UFirestoreQuery* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Snapshot_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Snapshot;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirestoreQuery_EndAt_Statics::NewProp_Snapshot_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFirestoreQuery_EndAt_Statics::NewProp_Snapshot = { "Snapshot", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirestoreQuery_eventEndAt_Parms, Snapshot), Z_Construct_UScriptStruct_FFirestoreDocumentSnapshot, METADATA_PARAMS(Z_Construct_UFunction_UFirestoreQuery_EndAt_Statics::NewProp_Snapshot_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirestoreQuery_EndAt_Statics::NewProp_Snapshot_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFirestoreQuery_EndAt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirestoreQuery_eventEndAt_Parms, ReturnValue), Z_Construct_UClass_UFirestoreQuery_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFirestoreQuery_EndAt_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirestoreQuery_EndAt_Statics::NewProp_Snapshot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirestoreQuery_EndAt_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirestoreQuery_EndAt_Statics::Function_MetaDataParams[] = {
		{ "Category", "Firebase|Firestore|Query" },
		{ "Comment", "/**\n\x09 * @brief Creates and returns a new Query that ends at the provided document\n\x09 * (inclusive). The end position is relative to the order of the query. The\n\x09 * document must contain all of the fields provided in the order by of this\n\x09 * query.\n\x09 *\n\x09 * @param[in] snapshot The snapshot of the document to end at.\n\x09 *\n\x09 * @return The created Query.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Firestore/Query.h" },
		{ "ToolTip", "@brief Creates and returns a new Query that ends at the provided document\n(inclusive). The end position is relative to the order of the query. The\ndocument must contain all of the fields provided in the order by of this\nquery.\n\n@param[in] snapshot The snapshot of the document to end at.\n\n@return The created Query." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFirestoreQuery_EndAt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFirestoreQuery, nullptr, "EndAt", nullptr, nullptr, sizeof(FirestoreQuery_eventEndAt_Parms), Z_Construct_UFunction_UFirestoreQuery_EndAt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirestoreQuery_EndAt_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFirestoreQuery_EndAt_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirestoreQuery_EndAt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFirestoreQuery_EndAt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFirestoreQuery_EndAt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFirestoreQuery_EndAtValues_Statics
	{
		struct FirestoreQuery_eventEndAtValues_Parms
		{
			TArray<FFirestoreFieldValue> Values;
			UFirestoreQuery* ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Values_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Values_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Values;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFirestoreQuery_EndAtValues_Statics::NewProp_Values_Inner = { "Values", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FFirestoreFieldValue, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirestoreQuery_EndAtValues_Statics::NewProp_Values_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFirestoreQuery_EndAtValues_Statics::NewProp_Values = { "Values", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirestoreQuery_eventEndAtValues_Parms, Values), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UFirestoreQuery_EndAtValues_Statics::NewProp_Values_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirestoreQuery_EndAtValues_Statics::NewProp_Values_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFirestoreQuery_EndAtValues_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirestoreQuery_eventEndAtValues_Parms, ReturnValue), Z_Construct_UClass_UFirestoreQuery_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFirestoreQuery_EndAtValues_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirestoreQuery_EndAtValues_Statics::NewProp_Values_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirestoreQuery_EndAtValues_Statics::NewProp_Values,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirestoreQuery_EndAtValues_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirestoreQuery_EndAtValues_Statics::Function_MetaDataParams[] = {
		{ "Category", "Firebase|Firestore|Query" },
		{ "Comment", "/**\n\x09 * @brief Creates and returns a new Query that ends at the provided fields\n\x09 * relative to the order of the query. The order of the field values must\n\x09 * match the order of the order by clauses of the query.\n\x09 *\n\x09 * @param[in] values The field values to end this query at, in order of the\n\x09 * query's order by.\n\x09 *\n\x09 * @return The created Query.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Firestore/Query.h" },
		{ "ToolTip", "@brief Creates and returns a new Query that ends at the provided fields\nrelative to the order of the query. The order of the field values must\nmatch the order of the order by clauses of the query.\n\n@param[in] values The field values to end this query at, in order of the\nquery's order by.\n\n@return The created Query." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFirestoreQuery_EndAtValues_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFirestoreQuery, nullptr, "EndAtValues", nullptr, nullptr, sizeof(FirestoreQuery_eventEndAtValues_Parms), Z_Construct_UFunction_UFirestoreQuery_EndAtValues_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirestoreQuery_EndAtValues_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFirestoreQuery_EndAtValues_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirestoreQuery_EndAtValues_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFirestoreQuery_EndAtValues()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFirestoreQuery_EndAtValues_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFirestoreQuery_EndBefore_Statics
	{
		struct FirestoreQuery_eventEndBefore_Parms
		{
			FFirestoreDocumentSnapshot Snapshot;
			UFirestoreQuery* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Snapshot_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Snapshot;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirestoreQuery_EndBefore_Statics::NewProp_Snapshot_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFirestoreQuery_EndBefore_Statics::NewProp_Snapshot = { "Snapshot", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirestoreQuery_eventEndBefore_Parms, Snapshot), Z_Construct_UScriptStruct_FFirestoreDocumentSnapshot, METADATA_PARAMS(Z_Construct_UFunction_UFirestoreQuery_EndBefore_Statics::NewProp_Snapshot_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirestoreQuery_EndBefore_Statics::NewProp_Snapshot_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFirestoreQuery_EndBefore_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirestoreQuery_eventEndBefore_Parms, ReturnValue), Z_Construct_UClass_UFirestoreQuery_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFirestoreQuery_EndBefore_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirestoreQuery_EndBefore_Statics::NewProp_Snapshot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirestoreQuery_EndBefore_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirestoreQuery_EndBefore_Statics::Function_MetaDataParams[] = {
		{ "Category", "Firebase|Firestore|Query" },
		{ "Comment", "/**\n\x09 * @brief Creates and returns a new Query that ends before the provided\n\x09 * document (inclusive). The end position is relative to the order of the\n\x09 * query. The document must contain all of the fields provided in the order by\n\x09 * of this query.\n\x09 *\n\x09 * @param[in] snapshot The snapshot of the document to end before.\n\x09 *\n\x09 * @return The created Query.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Firestore/Query.h" },
		{ "ToolTip", "@brief Creates and returns a new Query that ends before the provided\ndocument (inclusive). The end position is relative to the order of the\nquery. The document must contain all of the fields provided in the order by\nof this query.\n\n@param[in] snapshot The snapshot of the document to end before.\n\n@return The created Query." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFirestoreQuery_EndBefore_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFirestoreQuery, nullptr, "EndBefore", nullptr, nullptr, sizeof(FirestoreQuery_eventEndBefore_Parms), Z_Construct_UFunction_UFirestoreQuery_EndBefore_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirestoreQuery_EndBefore_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFirestoreQuery_EndBefore_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirestoreQuery_EndBefore_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFirestoreQuery_EndBefore()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFirestoreQuery_EndBefore_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFirestoreQuery_EndBeforeFieldValue_Statics
	{
		struct FirestoreQuery_eventEndBeforeFieldValue_Parms
		{
			TArray<FFirestoreFieldValue> Values;
			UFirestoreQuery* ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Values_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Values_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Values;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFirestoreQuery_EndBeforeFieldValue_Statics::NewProp_Values_Inner = { "Values", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FFirestoreFieldValue, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirestoreQuery_EndBeforeFieldValue_Statics::NewProp_Values_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFirestoreQuery_EndBeforeFieldValue_Statics::NewProp_Values = { "Values", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirestoreQuery_eventEndBeforeFieldValue_Parms, Values), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UFirestoreQuery_EndBeforeFieldValue_Statics::NewProp_Values_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirestoreQuery_EndBeforeFieldValue_Statics::NewProp_Values_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFirestoreQuery_EndBeforeFieldValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirestoreQuery_eventEndBeforeFieldValue_Parms, ReturnValue), Z_Construct_UClass_UFirestoreQuery_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFirestoreQuery_EndBeforeFieldValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirestoreQuery_EndBeforeFieldValue_Statics::NewProp_Values_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirestoreQuery_EndBeforeFieldValue_Statics::NewProp_Values,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirestoreQuery_EndBeforeFieldValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirestoreQuery_EndBeforeFieldValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Firebase|Firestore|Query" },
		{ "Comment", "/**\n\x09 * @brief Creates and returns a new Query that ends before the provided fields\n\x09 * relative to the order of the query. The order of the field values must\n\x09 * match the order of the order by clauses of the query.\n\x09 *\n\x09 * @param[in] values The field values to end this query before, in order of\n\x09 * the query's order by.\n\x09 *\n\x09 * @return The created Query.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Firestore/Query.h" },
		{ "ToolTip", "@brief Creates and returns a new Query that ends before the provided fields\nrelative to the order of the query. The order of the field values must\nmatch the order of the order by clauses of the query.\n\n@param[in] values The field values to end this query before, in order of\nthe query's order by.\n\n@return The created Query." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFirestoreQuery_EndBeforeFieldValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFirestoreQuery, nullptr, "EndBeforeFieldValue", nullptr, nullptr, sizeof(FirestoreQuery_eventEndBeforeFieldValue_Parms), Z_Construct_UFunction_UFirestoreQuery_EndBeforeFieldValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirestoreQuery_EndBeforeFieldValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFirestoreQuery_EndBeforeFieldValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirestoreQuery_EndBeforeFieldValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFirestoreQuery_EndBeforeFieldValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFirestoreQuery_EndBeforeFieldValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFirestoreQuery_Limit_Statics
	{
		struct FirestoreQuery_eventLimit_Parms
		{
			int32 Limit;
			UFirestoreQuery* ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Limit;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFirestoreQuery_Limit_Statics::NewProp_Limit = { "Limit", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirestoreQuery_eventLimit_Parms, Limit), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFirestoreQuery_Limit_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirestoreQuery_eventLimit_Parms, ReturnValue), Z_Construct_UClass_UFirestoreQuery_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFirestoreQuery_Limit_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirestoreQuery_Limit_Statics::NewProp_Limit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirestoreQuery_Limit_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirestoreQuery_Limit_Statics::Function_MetaDataParams[] = {
		{ "Category", "Firebase|Firestore|Query" },
		{ "Comment", "/**\n\x09 * @brief Creates and returns a new Query that only returns the first matching\n\x09 * documents up to the specified number.\n\x09 *\n\x09 * @param[in] limit A non-negative integer to specify the maximum number of\n\x09 * items to return.\n\x09 *\n\x09 * @return The created Query.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Firestore/Query.h" },
		{ "ToolTip", "@brief Creates and returns a new Query that only returns the first matching\ndocuments up to the specified number.\n\n@param[in] limit A non-negative integer to specify the maximum number of\nitems to return.\n\n@return The created Query." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFirestoreQuery_Limit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFirestoreQuery, nullptr, "Limit", nullptr, nullptr, sizeof(FirestoreQuery_eventLimit_Parms), Z_Construct_UFunction_UFirestoreQuery_Limit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirestoreQuery_Limit_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFirestoreQuery_Limit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirestoreQuery_Limit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFirestoreQuery_Limit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFirestoreQuery_Limit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFirestoreQuery_LimitToLast_Statics
	{
		struct FirestoreQuery_eventLimitToLast_Parms
		{
			int32 Limit;
			UFirestoreQuery* ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Limit;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFirestoreQuery_LimitToLast_Statics::NewProp_Limit = { "Limit", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirestoreQuery_eventLimitToLast_Parms, Limit), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFirestoreQuery_LimitToLast_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirestoreQuery_eventLimitToLast_Parms, ReturnValue), Z_Construct_UClass_UFirestoreQuery_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFirestoreQuery_LimitToLast_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirestoreQuery_LimitToLast_Statics::NewProp_Limit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirestoreQuery_LimitToLast_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirestoreQuery_LimitToLast_Statics::Function_MetaDataParams[] = {
		{ "Category", "Firebase|Firestore|Query" },
		{ "Comment", "/**\n\x09 * @brief Creates and returns a new Query that only returns the last matching\n\x09 * documents up to the specified number.\n\x09 *\n\x09 * @param[in] limit A non-negative integer to specify the maximum number of\n\x09 * items to return.\n\x09 *\n\x09 * @return The created Query.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Firestore/Query.h" },
		{ "ToolTip", "@brief Creates and returns a new Query that only returns the last matching\ndocuments up to the specified number.\n\n@param[in] limit A non-negative integer to specify the maximum number of\nitems to return.\n\n@return The created Query." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFirestoreQuery_LimitToLast_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFirestoreQuery, nullptr, "LimitToLast", nullptr, nullptr, sizeof(FirestoreQuery_eventLimitToLast_Parms), Z_Construct_UFunction_UFirestoreQuery_LimitToLast_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirestoreQuery_LimitToLast_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFirestoreQuery_LimitToLast_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirestoreQuery_LimitToLast_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFirestoreQuery_LimitToLast()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFirestoreQuery_LimitToLast_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFirestoreQuery_OrderBy_Statics
	{
		struct FirestoreQuery_eventOrderBy_Parms
		{
			FString Field;
			EFirestoreQueryDirection Direction;
			UFirestoreQuery* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Field_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Field;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Direction_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Direction;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirestoreQuery_OrderBy_Statics::NewProp_Field_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFirestoreQuery_OrderBy_Statics::NewProp_Field = { "Field", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirestoreQuery_eventOrderBy_Parms, Field), METADATA_PARAMS(Z_Construct_UFunction_UFirestoreQuery_OrderBy_Statics::NewProp_Field_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirestoreQuery_OrderBy_Statics::NewProp_Field_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFirestoreQuery_OrderBy_Statics::NewProp_Direction_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFirestoreQuery_OrderBy_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirestoreQuery_eventOrderBy_Parms, Direction), Z_Construct_UEnum_FirebaseFeatures_EFirestoreQueryDirection, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFirestoreQuery_OrderBy_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirestoreQuery_eventOrderBy_Parms, ReturnValue), Z_Construct_UClass_UFirestoreQuery_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFirestoreQuery_OrderBy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirestoreQuery_OrderBy_Statics::NewProp_Field,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirestoreQuery_OrderBy_Statics::NewProp_Direction_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirestoreQuery_OrderBy_Statics::NewProp_Direction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirestoreQuery_OrderBy_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirestoreQuery_OrderBy_Statics::Function_MetaDataParams[] = {
		{ "Category", "Firebase|Firestore|Query" },
		{ "Comment", "/**\n\x09 * @brief Creates and returns a new Query that's additionally sorted by the\n\x09 * specified field.\n\x09 *\n\x09 * @param[in] field The field to sort by.\n\x09 * @param[in] direction The direction to sort (optional). If not specified,\n\x09 * order will be ascending.\n\x09 *\n\x09 * @return The created Query.\n\x09 */" },
		{ "CPP_Default_Direction", "Ascending" },
		{ "ModuleRelativePath", "Public/Firestore/Query.h" },
		{ "ToolTip", "@brief Creates and returns a new Query that's additionally sorted by the\nspecified field.\n\n@param[in] field The field to sort by.\n@param[in] direction The direction to sort (optional). If not specified,\norder will be ascending.\n\n@return The created Query." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFirestoreQuery_OrderBy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFirestoreQuery, nullptr, "OrderBy", nullptr, nullptr, sizeof(FirestoreQuery_eventOrderBy_Parms), Z_Construct_UFunction_UFirestoreQuery_OrderBy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirestoreQuery_OrderBy_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFirestoreQuery_OrderBy_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirestoreQuery_OrderBy_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFirestoreQuery_OrderBy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFirestoreQuery_OrderBy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFirestoreQuery_OrderByFieldPath_Statics
	{
		struct FirestoreQuery_eventOrderByFieldPath_Parms
		{
			FFirestoreFieldPath Field;
			EFirestoreQueryDirection Direction;
			UFirestoreQuery* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Field_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Field;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Direction_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Direction;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirestoreQuery_OrderByFieldPath_Statics::NewProp_Field_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFirestoreQuery_OrderByFieldPath_Statics::NewProp_Field = { "Field", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirestoreQuery_eventOrderByFieldPath_Parms, Field), Z_Construct_UScriptStruct_FFirestoreFieldPath, METADATA_PARAMS(Z_Construct_UFunction_UFirestoreQuery_OrderByFieldPath_Statics::NewProp_Field_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirestoreQuery_OrderByFieldPath_Statics::NewProp_Field_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFirestoreQuery_OrderByFieldPath_Statics::NewProp_Direction_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFirestoreQuery_OrderByFieldPath_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirestoreQuery_eventOrderByFieldPath_Parms, Direction), Z_Construct_UEnum_FirebaseFeatures_EFirestoreQueryDirection, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFirestoreQuery_OrderByFieldPath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirestoreQuery_eventOrderByFieldPath_Parms, ReturnValue), Z_Construct_UClass_UFirestoreQuery_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFirestoreQuery_OrderByFieldPath_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirestoreQuery_OrderByFieldPath_Statics::NewProp_Field,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirestoreQuery_OrderByFieldPath_Statics::NewProp_Direction_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirestoreQuery_OrderByFieldPath_Statics::NewProp_Direction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirestoreQuery_OrderByFieldPath_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirestoreQuery_OrderByFieldPath_Statics::Function_MetaDataParams[] = {
		{ "Category", "Firebase|Firestore|Query" },
		{ "Comment", "/**\n\x09 * @brief Creates and returns a new Query that's additionally sorted by the\n\x09 * specified field.\n\x09 *\n\x09 * @param[in] field The field to sort by.\n\x09 * @param[in] direction The direction to sort (optional). If not specified,\n\x09 * order will be ascending.\n\x09 *\n\x09 * @return The created Query.\n\x09 */" },
		{ "CPP_Default_Direction", "Ascending" },
		{ "ModuleRelativePath", "Public/Firestore/Query.h" },
		{ "ToolTip", "@brief Creates and returns a new Query that's additionally sorted by the\nspecified field.\n\n@param[in] field The field to sort by.\n@param[in] direction The direction to sort (optional). If not specified,\norder will be ascending.\n\n@return The created Query." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFirestoreQuery_OrderByFieldPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFirestoreQuery, nullptr, "OrderByFieldPath", nullptr, nullptr, sizeof(FirestoreQuery_eventOrderByFieldPath_Parms), Z_Construct_UFunction_UFirestoreQuery_OrderByFieldPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirestoreQuery_OrderByFieldPath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFirestoreQuery_OrderByFieldPath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirestoreQuery_OrderByFieldPath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFirestoreQuery_OrderByFieldPath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFirestoreQuery_OrderByFieldPath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFirestoreQuery_StartAfter_Statics
	{
		struct FirestoreQuery_eventStartAfter_Parms
		{
			FFirestoreDocumentSnapshot Snapshot;
			UFirestoreQuery* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Snapshot_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Snapshot;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirestoreQuery_StartAfter_Statics::NewProp_Snapshot_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFirestoreQuery_StartAfter_Statics::NewProp_Snapshot = { "Snapshot", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirestoreQuery_eventStartAfter_Parms, Snapshot), Z_Construct_UScriptStruct_FFirestoreDocumentSnapshot, METADATA_PARAMS(Z_Construct_UFunction_UFirestoreQuery_StartAfter_Statics::NewProp_Snapshot_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirestoreQuery_StartAfter_Statics::NewProp_Snapshot_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFirestoreQuery_StartAfter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirestoreQuery_eventStartAfter_Parms, ReturnValue), Z_Construct_UClass_UFirestoreQuery_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFirestoreQuery_StartAfter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirestoreQuery_StartAfter_Statics::NewProp_Snapshot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirestoreQuery_StartAfter_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirestoreQuery_StartAfter_Statics::Function_MetaDataParams[] = {
		{ "Category", "Firebase|Firestore|Query" },
		{ "Comment", "/**\n\x09 * @brief Creates and returns a new Query that starts after the provided\n\x09 * document (inclusive). The starting position is relative to the order of the\n\x09 * query. The document must contain all of the fields provided in the order by\n\x09 * of this query.\n\x09 *\n\x09 * @param[in] snapshot The snapshot of the document to start after.\n\x09 *\n\x09 * @return The created Query.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Firestore/Query.h" },
		{ "ToolTip", "@brief Creates and returns a new Query that starts after the provided\ndocument (inclusive). The starting position is relative to the order of the\nquery. The document must contain all of the fields provided in the order by\nof this query.\n\n@param[in] snapshot The snapshot of the document to start after.\n\n@return The created Query." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFirestoreQuery_StartAfter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFirestoreQuery, nullptr, "StartAfter", nullptr, nullptr, sizeof(FirestoreQuery_eventStartAfter_Parms), Z_Construct_UFunction_UFirestoreQuery_StartAfter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirestoreQuery_StartAfter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFirestoreQuery_StartAfter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirestoreQuery_StartAfter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFirestoreQuery_StartAfter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFirestoreQuery_StartAfter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFirestoreQuery_StartAfterFieldValue_Statics
	{
		struct FirestoreQuery_eventStartAfterFieldValue_Parms
		{
			TArray<FFirestoreFieldValue> Values;
			UFirestoreQuery* ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Values_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Values_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Values;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFirestoreQuery_StartAfterFieldValue_Statics::NewProp_Values_Inner = { "Values", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FFirestoreFieldValue, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirestoreQuery_StartAfterFieldValue_Statics::NewProp_Values_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFirestoreQuery_StartAfterFieldValue_Statics::NewProp_Values = { "Values", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirestoreQuery_eventStartAfterFieldValue_Parms, Values), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UFirestoreQuery_StartAfterFieldValue_Statics::NewProp_Values_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirestoreQuery_StartAfterFieldValue_Statics::NewProp_Values_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFirestoreQuery_StartAfterFieldValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirestoreQuery_eventStartAfterFieldValue_Parms, ReturnValue), Z_Construct_UClass_UFirestoreQuery_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFirestoreQuery_StartAfterFieldValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirestoreQuery_StartAfterFieldValue_Statics::NewProp_Values_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirestoreQuery_StartAfterFieldValue_Statics::NewProp_Values,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirestoreQuery_StartAfterFieldValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirestoreQuery_StartAfterFieldValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Firebase|Firestore|Query" },
		{ "Comment", "/**\n\x09 * @brief Creates and returns a new Query that starts after the provided\n\x09 * fields relative to the order of the query. The order of the field values\n\x09 * must match the order of the order by clauses of the query.\n\x09 *\n\x09 * @param[in] values The field values to start this query after, in order of\n\x09 * the query's order by.\n\x09 *\n\x09 * @return The created Query.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Firestore/Query.h" },
		{ "ToolTip", "@brief Creates and returns a new Query that starts after the provided\nfields relative to the order of the query. The order of the field values\nmust match the order of the order by clauses of the query.\n\n@param[in] values The field values to start this query after, in order of\nthe query's order by.\n\n@return The created Query." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFirestoreQuery_StartAfterFieldValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFirestoreQuery, nullptr, "StartAfterFieldValue", nullptr, nullptr, sizeof(FirestoreQuery_eventStartAfterFieldValue_Parms), Z_Construct_UFunction_UFirestoreQuery_StartAfterFieldValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirestoreQuery_StartAfterFieldValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFirestoreQuery_StartAfterFieldValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirestoreQuery_StartAfterFieldValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFirestoreQuery_StartAfterFieldValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFirestoreQuery_StartAfterFieldValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFirestoreQuery_StartAt_Statics
	{
		struct FirestoreQuery_eventStartAt_Parms
		{
			FFirestoreDocumentSnapshot Snapshot;
			UFirestoreQuery* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Snapshot_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Snapshot;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirestoreQuery_StartAt_Statics::NewProp_Snapshot_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFirestoreQuery_StartAt_Statics::NewProp_Snapshot = { "Snapshot", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirestoreQuery_eventStartAt_Parms, Snapshot), Z_Construct_UScriptStruct_FFirestoreDocumentSnapshot, METADATA_PARAMS(Z_Construct_UFunction_UFirestoreQuery_StartAt_Statics::NewProp_Snapshot_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirestoreQuery_StartAt_Statics::NewProp_Snapshot_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFirestoreQuery_StartAt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirestoreQuery_eventStartAt_Parms, ReturnValue), Z_Construct_UClass_UFirestoreQuery_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFirestoreQuery_StartAt_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirestoreQuery_StartAt_Statics::NewProp_Snapshot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirestoreQuery_StartAt_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirestoreQuery_StartAt_Statics::Function_MetaDataParams[] = {
		{ "Category", "Firebase|Firestore|Query" },
		{ "Comment", "/**\n\x09 * @brief Creates and returns a new Query that starts at the provided document\n\x09 * (inclusive). The starting position is relative to the order of the query.\n\x09 * The document must contain all of the fields provided in the order by of\n\x09 * this query.\n\x09 *\n\x09 * @param[in] snapshot The snapshot of the document to start at.\n\x09 *\n\x09 * @return The created Query.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Firestore/Query.h" },
		{ "ToolTip", "@brief Creates and returns a new Query that starts at the provided document\n(inclusive). The starting position is relative to the order of the query.\nThe document must contain all of the fields provided in the order by of\nthis query.\n\n@param[in] snapshot The snapshot of the document to start at.\n\n@return The created Query." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFirestoreQuery_StartAt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFirestoreQuery, nullptr, "StartAt", nullptr, nullptr, sizeof(FirestoreQuery_eventStartAt_Parms), Z_Construct_UFunction_UFirestoreQuery_StartAt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirestoreQuery_StartAt_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFirestoreQuery_StartAt_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirestoreQuery_StartAt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFirestoreQuery_StartAt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFirestoreQuery_StartAt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFirestoreQuery_StartAtFieldValue_Statics
	{
		struct FirestoreQuery_eventStartAtFieldValue_Parms
		{
			TArray<FFirestoreFieldValue> Values;
			UFirestoreQuery* ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Values_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Values_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Values;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFirestoreQuery_StartAtFieldValue_Statics::NewProp_Values_Inner = { "Values", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FFirestoreFieldValue, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirestoreQuery_StartAtFieldValue_Statics::NewProp_Values_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFirestoreQuery_StartAtFieldValue_Statics::NewProp_Values = { "Values", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirestoreQuery_eventStartAtFieldValue_Parms, Values), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UFirestoreQuery_StartAtFieldValue_Statics::NewProp_Values_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirestoreQuery_StartAtFieldValue_Statics::NewProp_Values_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFirestoreQuery_StartAtFieldValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirestoreQuery_eventStartAtFieldValue_Parms, ReturnValue), Z_Construct_UClass_UFirestoreQuery_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFirestoreQuery_StartAtFieldValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirestoreQuery_StartAtFieldValue_Statics::NewProp_Values_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirestoreQuery_StartAtFieldValue_Statics::NewProp_Values,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirestoreQuery_StartAtFieldValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirestoreQuery_StartAtFieldValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Firebase|Firestore|Query" },
		{ "Comment", "/**\n\x09 * @brief Creates and returns a new Query that starts at the provided fields\n\x09 * relative to the order of the query. The order of the field values must\n\x09 * match the order of the order by clauses of the query.\n\x09 *\n\x09 * @param[in] values The field values to start this query at, in order of the\n\x09 * query's order by.\n\x09 *\n\x09 * @return The created Query.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Firestore/Query.h" },
		{ "ToolTip", "@brief Creates and returns a new Query that starts at the provided fields\nrelative to the order of the query. The order of the field values must\nmatch the order of the order by clauses of the query.\n\n@param[in] values The field values to start this query at, in order of the\nquery's order by.\n\n@return The created Query." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFirestoreQuery_StartAtFieldValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFirestoreQuery, nullptr, "StartAtFieldValue", nullptr, nullptr, sizeof(FirestoreQuery_eventStartAtFieldValue_Parms), Z_Construct_UFunction_UFirestoreQuery_StartAtFieldValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirestoreQuery_StartAtFieldValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFirestoreQuery_StartAtFieldValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirestoreQuery_StartAtFieldValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFirestoreQuery_StartAtFieldValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFirestoreQuery_StartAtFieldValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFirestoreQuery_WhereArrayContains_Statics
	{
		struct FirestoreQuery_eventWhereArrayContains_Parms
		{
			FString Field;
			FFirestoreFieldValue Value;
			UFirestoreQuery* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Field_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Field;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirestoreQuery_WhereArrayContains_Statics::NewProp_Field_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFirestoreQuery_WhereArrayContains_Statics::NewProp_Field = { "Field", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirestoreQuery_eventWhereArrayContains_Parms, Field), METADATA_PARAMS(Z_Construct_UFunction_UFirestoreQuery_WhereArrayContains_Statics::NewProp_Field_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirestoreQuery_WhereArrayContains_Statics::NewProp_Field_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirestoreQuery_WhereArrayContains_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFirestoreQuery_WhereArrayContains_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirestoreQuery_eventWhereArrayContains_Parms, Value), Z_Construct_UScriptStruct_FFirestoreFieldValue, METADATA_PARAMS(Z_Construct_UFunction_UFirestoreQuery_WhereArrayContains_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirestoreQuery_WhereArrayContains_Statics::NewProp_Value_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFirestoreQuery_WhereArrayContains_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirestoreQuery_eventWhereArrayContains_Parms, ReturnValue), Z_Construct_UClass_UFirestoreQuery_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFirestoreQuery_WhereArrayContains_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirestoreQuery_WhereArrayContains_Statics::NewProp_Field,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirestoreQuery_WhereArrayContains_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirestoreQuery_WhereArrayContains_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirestoreQuery_WhereArrayContains_Statics::Function_MetaDataParams[] = {
		{ "Category", "Firebase|Firestore|Query" },
		{ "Comment", "/**\n\x09 * @brief Creates and returns a new Query with the additional filter that\n\x09 * documents must contain the specified field, the value must be an array, and\n\x09 * that the array must contain the provided value.\n\x09 *\n\x09 * A Query can have only one `WhereArrayContains()` filter and it cannot be\n\x09 * combined with `WhereArrayContainsAny()` or `WhereIn()`.\n\x09 *\n\x09 * @param[in] field The name of the field containing an array to search.\n\x09 * @param[in] value The value that must be contained in the array.\n\x09 *\n\x09 * @return The created Query.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Firestore/Query.h" },
		{ "ToolTip", "@brief Creates and returns a new Query with the additional filter that\ndocuments must contain the specified field, the value must be an array, and\nthat the array must contain the provided value.\n\nA Query can have only one `WhereArrayContains()` filter and it cannot be\ncombined with `WhereArrayContainsAny()` or `WhereIn()`.\n\n@param[in] field The name of the field containing an array to search.\n@param[in] value The value that must be contained in the array.\n\n@return The created Query." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFirestoreQuery_WhereArrayContains_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFirestoreQuery, nullptr, "WhereArrayContains", nullptr, nullptr, sizeof(FirestoreQuery_eventWhereArrayContains_Parms), Z_Construct_UFunction_UFirestoreQuery_WhereArrayContains_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirestoreQuery_WhereArrayContains_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFirestoreQuery_WhereArrayContains_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirestoreQuery_WhereArrayContains_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFirestoreQuery_WhereArrayContains()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFirestoreQuery_WhereArrayContains_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFirestoreQuery_WhereArrayContainsAny_Statics
	{
		struct FirestoreQuery_eventWhereArrayContainsAny_Parms
		{
			FString Field;
			TArray<FFirestoreFieldValue> Values;
			UFirestoreQuery* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Field_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Field;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Values_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Values_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Values;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirestoreQuery_WhereArrayContainsAny_Statics::NewProp_Field_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFirestoreQuery_WhereArrayContainsAny_Statics::NewProp_Field = { "Field", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirestoreQuery_eventWhereArrayContainsAny_Parms, Field), METADATA_PARAMS(Z_Construct_UFunction_UFirestoreQuery_WhereArrayContainsAny_Statics::NewProp_Field_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirestoreQuery_WhereArrayContainsAny_Statics::NewProp_Field_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFirestoreQuery_WhereArrayContainsAny_Statics::NewProp_Values_Inner = { "Values", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FFirestoreFieldValue, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirestoreQuery_WhereArrayContainsAny_Statics::NewProp_Values_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFirestoreQuery_WhereArrayContainsAny_Statics::NewProp_Values = { "Values", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirestoreQuery_eventWhereArrayContainsAny_Parms, Values), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UFirestoreQuery_WhereArrayContainsAny_Statics::NewProp_Values_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirestoreQuery_WhereArrayContainsAny_Statics::NewProp_Values_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFirestoreQuery_WhereArrayContainsAny_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirestoreQuery_eventWhereArrayContainsAny_Parms, ReturnValue), Z_Construct_UClass_UFirestoreQuery_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFirestoreQuery_WhereArrayContainsAny_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirestoreQuery_WhereArrayContainsAny_Statics::NewProp_Field,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirestoreQuery_WhereArrayContainsAny_Statics::NewProp_Values_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirestoreQuery_WhereArrayContainsAny_Statics::NewProp_Values,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirestoreQuery_WhereArrayContainsAny_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirestoreQuery_WhereArrayContainsAny_Statics::Function_MetaDataParams[] = {
		{ "Category", "Firebase|Firestore|Query" },
		{ "Comment", "/**\n\x09 * @brief Creates and returns a new Query with the additional filter that\n\x09 * documents must contain the specified field, the value must be an array, and\n\x09 * that the array must contain at least one value from the provided list.\n\x09 *\n\x09 * A Query can have only one `WhereArrayContainsAny()` filter and it cannot be\n\x09 * combined with `WhereArrayContains()` or `WhereIn()`.\n\x09 *\n\x09 * @param[in] field The name of the field containing an array to search.\n\x09 * @param[in] values The list that contains the values to match.\n\x09 *\n\x09 * @return The created Query.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Firestore/Query.h" },
		{ "ToolTip", "@brief Creates and returns a new Query with the additional filter that\ndocuments must contain the specified field, the value must be an array, and\nthat the array must contain at least one value from the provided list.\n\nA Query can have only one `WhereArrayContainsAny()` filter and it cannot be\ncombined with `WhereArrayContains()` or `WhereIn()`.\n\n@param[in] field The name of the field containing an array to search.\n@param[in] values The list that contains the values to match.\n\n@return The created Query." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFirestoreQuery_WhereArrayContainsAny_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFirestoreQuery, nullptr, "WhereArrayContainsAny", nullptr, nullptr, sizeof(FirestoreQuery_eventWhereArrayContainsAny_Parms), Z_Construct_UFunction_UFirestoreQuery_WhereArrayContainsAny_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirestoreQuery_WhereArrayContainsAny_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFirestoreQuery_WhereArrayContainsAny_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirestoreQuery_WhereArrayContainsAny_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFirestoreQuery_WhereArrayContainsAny()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFirestoreQuery_WhereArrayContainsAny_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFirestoreQuery_WhereArrayContainsAnyFielPath_Statics
	{
		struct FirestoreQuery_eventWhereArrayContainsAnyFielPath_Parms
		{
			FFirestoreFieldPath Field;
			TArray<FFirestoreFieldValue> Values;
			UFirestoreQuery* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Field_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Field;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Values_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Values_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Values;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirestoreQuery_WhereArrayContainsAnyFielPath_Statics::NewProp_Field_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFirestoreQuery_WhereArrayContainsAnyFielPath_Statics::NewProp_Field = { "Field", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirestoreQuery_eventWhereArrayContainsAnyFielPath_Parms, Field), Z_Construct_UScriptStruct_FFirestoreFieldPath, METADATA_PARAMS(Z_Construct_UFunction_UFirestoreQuery_WhereArrayContainsAnyFielPath_Statics::NewProp_Field_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirestoreQuery_WhereArrayContainsAnyFielPath_Statics::NewProp_Field_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFirestoreQuery_WhereArrayContainsAnyFielPath_Statics::NewProp_Values_Inner = { "Values", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FFirestoreFieldValue, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirestoreQuery_WhereArrayContainsAnyFielPath_Statics::NewProp_Values_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFirestoreQuery_WhereArrayContainsAnyFielPath_Statics::NewProp_Values = { "Values", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirestoreQuery_eventWhereArrayContainsAnyFielPath_Parms, Values), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UFirestoreQuery_WhereArrayContainsAnyFielPath_Statics::NewProp_Values_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirestoreQuery_WhereArrayContainsAnyFielPath_Statics::NewProp_Values_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFirestoreQuery_WhereArrayContainsAnyFielPath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirestoreQuery_eventWhereArrayContainsAnyFielPath_Parms, ReturnValue), Z_Construct_UClass_UFirestoreQuery_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFirestoreQuery_WhereArrayContainsAnyFielPath_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirestoreQuery_WhereArrayContainsAnyFielPath_Statics::NewProp_Field,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirestoreQuery_WhereArrayContainsAnyFielPath_Statics::NewProp_Values_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirestoreQuery_WhereArrayContainsAnyFielPath_Statics::NewProp_Values,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirestoreQuery_WhereArrayContainsAnyFielPath_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirestoreQuery_WhereArrayContainsAnyFielPath_Statics::Function_MetaDataParams[] = {
		{ "Category", "Firebase|Firestore|Query" },
		{ "Comment", "/**\n\x09 * @brief Creates and returns a new Query with the additional filter that\n\x09 * documents must contain the specified field, the value must be an array, and\n\x09 * that the array must contain at least one value from the provided list.\n\x09 *\n\x09 * A Query can have only one `WhereArrayContainsAny()` filter and it cannot be\n\x09 * combined with` WhereArrayContains()` or `WhereIn()`.\n\x09 *\n\x09 * @param[in] field The path of the field containing an array to search.\n\x09 * @param[in] values The list that contains the values to match.\n\x09 *\n\x09 * @return The created Query.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Firestore/Query.h" },
		{ "ToolTip", "@brief Creates and returns a new Query with the additional filter that\ndocuments must contain the specified field, the value must be an array, and\nthat the array must contain at least one value from the provided list.\n\nA Query can have only one `WhereArrayContainsAny()` filter and it cannot be\ncombined with` WhereArrayContains()` or `WhereIn()`.\n\n@param[in] field The path of the field containing an array to search.\n@param[in] values The list that contains the values to match.\n\n@return The created Query." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFirestoreQuery_WhereArrayContainsAnyFielPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFirestoreQuery, nullptr, "WhereArrayContainsAnyFielPath", nullptr, nullptr, sizeof(FirestoreQuery_eventWhereArrayContainsAnyFielPath_Parms), Z_Construct_UFunction_UFirestoreQuery_WhereArrayContainsAnyFielPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirestoreQuery_WhereArrayContainsAnyFielPath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFirestoreQuery_WhereArrayContainsAnyFielPath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirestoreQuery_WhereArrayContainsAnyFielPath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFirestoreQuery_WhereArrayContainsAnyFielPath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFirestoreQuery_WhereArrayContainsAnyFielPath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFirestoreQuery_WhereArrayContainsFieldPath_Statics
	{
		struct FirestoreQuery_eventWhereArrayContainsFieldPath_Parms
		{
			FFirestoreFieldPath Field;
			FFirestoreFieldValue Value;
			UFirestoreQuery* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Field_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Field;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirestoreQuery_WhereArrayContainsFieldPath_Statics::NewProp_Field_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFirestoreQuery_WhereArrayContainsFieldPath_Statics::NewProp_Field = { "Field", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirestoreQuery_eventWhereArrayContainsFieldPath_Parms, Field), Z_Construct_UScriptStruct_FFirestoreFieldPath, METADATA_PARAMS(Z_Construct_UFunction_UFirestoreQuery_WhereArrayContainsFieldPath_Statics::NewProp_Field_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirestoreQuery_WhereArrayContainsFieldPath_Statics::NewProp_Field_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirestoreQuery_WhereArrayContainsFieldPath_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFirestoreQuery_WhereArrayContainsFieldPath_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirestoreQuery_eventWhereArrayContainsFieldPath_Parms, Value), Z_Construct_UScriptStruct_FFirestoreFieldValue, METADATA_PARAMS(Z_Construct_UFunction_UFirestoreQuery_WhereArrayContainsFieldPath_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirestoreQuery_WhereArrayContainsFieldPath_Statics::NewProp_Value_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFirestoreQuery_WhereArrayContainsFieldPath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirestoreQuery_eventWhereArrayContainsFieldPath_Parms, ReturnValue), Z_Construct_UClass_UFirestoreQuery_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFirestoreQuery_WhereArrayContainsFieldPath_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirestoreQuery_WhereArrayContainsFieldPath_Statics::NewProp_Field,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirestoreQuery_WhereArrayContainsFieldPath_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirestoreQuery_WhereArrayContainsFieldPath_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirestoreQuery_WhereArrayContainsFieldPath_Statics::Function_MetaDataParams[] = {
		{ "Category", "Firebase|Firestore|Query" },
		{ "Comment", "/**\n\x09 * @brief Creates and returns a new Query with the additional filter that\n\x09 * documents must contain the specified field, the value must be an array, and\n\x09 * that the array must contain the provided value.\n\x09 *\n\x09 * A Query can have only one `WhereArrayContains()` filter and it cannot be\n\x09 * combined with `WhereArrayContainsAny()` or `WhereIn()`.\n\x09 *\n\x09 * @param[in] field The path of the field containing an array to search.\n\x09 * @param[in] value The value that must be contained in the array.\n\x09 *\n\x09 * @return The created Query.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Firestore/Query.h" },
		{ "ToolTip", "@brief Creates and returns a new Query with the additional filter that\ndocuments must contain the specified field, the value must be an array, and\nthat the array must contain the provided value.\n\nA Query can have only one `WhereArrayContains()` filter and it cannot be\ncombined with `WhereArrayContainsAny()` or `WhereIn()`.\n\n@param[in] field The path of the field containing an array to search.\n@param[in] value The value that must be contained in the array.\n\n@return The created Query." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFirestoreQuery_WhereArrayContainsFieldPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFirestoreQuery, nullptr, "WhereArrayContainsFieldPath", nullptr, nullptr, sizeof(FirestoreQuery_eventWhereArrayContainsFieldPath_Parms), Z_Construct_UFunction_UFirestoreQuery_WhereArrayContainsFieldPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirestoreQuery_WhereArrayContainsFieldPath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFirestoreQuery_WhereArrayContainsFieldPath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirestoreQuery_WhereArrayContainsFieldPath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFirestoreQuery_WhereArrayContainsFieldPath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFirestoreQuery_WhereArrayContainsFieldPath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFirestoreQuery_WhereEqualTo_Statics
	{
		struct FirestoreQuery_eventWhereEqualTo_Parms
		{
			FString Field;
			FFirestoreFieldValue Value;
			UFirestoreQuery* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Field_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Field;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirestoreQuery_WhereEqualTo_Statics::NewProp_Field_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFirestoreQuery_WhereEqualTo_Statics::NewProp_Field = { "Field", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirestoreQuery_eventWhereEqualTo_Parms, Field), METADATA_PARAMS(Z_Construct_UFunction_UFirestoreQuery_WhereEqualTo_Statics::NewProp_Field_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirestoreQuery_WhereEqualTo_Statics::NewProp_Field_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirestoreQuery_WhereEqualTo_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFirestoreQuery_WhereEqualTo_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirestoreQuery_eventWhereEqualTo_Parms, Value), Z_Construct_UScriptStruct_FFirestoreFieldValue, METADATA_PARAMS(Z_Construct_UFunction_UFirestoreQuery_WhereEqualTo_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirestoreQuery_WhereEqualTo_Statics::NewProp_Value_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFirestoreQuery_WhereEqualTo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirestoreQuery_eventWhereEqualTo_Parms, ReturnValue), Z_Construct_UClass_UFirestoreQuery_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFirestoreQuery_WhereEqualTo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirestoreQuery_WhereEqualTo_Statics::NewProp_Field,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirestoreQuery_WhereEqualTo_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirestoreQuery_WhereEqualTo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirestoreQuery_WhereEqualTo_Statics::Function_MetaDataParams[] = {
		{ "Category", "Firebase|Firestore|Query" },
		{ "Comment", "/**\n\x09 * @brief Creates and returns a new Query with the additional filter that\n\x09 * documents must contain the specified field and the value should be equal to\n\x09 * the specified value.\n\x09 *\n\x09 * @param Field The name of the field to compare.\n\x09 * @param Value The value for comparison.\n\x09 *\n\x09 * @return The created Query.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Firestore/Query.h" },
		{ "ToolTip", "@brief Creates and returns a new Query with the additional filter that\ndocuments must contain the specified field and the value should be equal to\nthe specified value.\n\n@param Field The name of the field to compare.\n@param Value The value for comparison.\n\n@return The created Query." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFirestoreQuery_WhereEqualTo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFirestoreQuery, nullptr, "WhereEqualTo", nullptr, nullptr, sizeof(FirestoreQuery_eventWhereEqualTo_Parms), Z_Construct_UFunction_UFirestoreQuery_WhereEqualTo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirestoreQuery_WhereEqualTo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFirestoreQuery_WhereEqualTo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirestoreQuery_WhereEqualTo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFirestoreQuery_WhereEqualTo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFirestoreQuery_WhereEqualTo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFirestoreQuery_WhereEqualToFieldPath_Statics
	{
		struct FirestoreQuery_eventWhereEqualToFieldPath_Parms
		{
			FFirestoreFieldPath Field;
			FFirestoreFieldValue Value;
			UFirestoreQuery* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Field_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Field;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirestoreQuery_WhereEqualToFieldPath_Statics::NewProp_Field_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFirestoreQuery_WhereEqualToFieldPath_Statics::NewProp_Field = { "Field", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirestoreQuery_eventWhereEqualToFieldPath_Parms, Field), Z_Construct_UScriptStruct_FFirestoreFieldPath, METADATA_PARAMS(Z_Construct_UFunction_UFirestoreQuery_WhereEqualToFieldPath_Statics::NewProp_Field_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirestoreQuery_WhereEqualToFieldPath_Statics::NewProp_Field_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirestoreQuery_WhereEqualToFieldPath_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFirestoreQuery_WhereEqualToFieldPath_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirestoreQuery_eventWhereEqualToFieldPath_Parms, Value), Z_Construct_UScriptStruct_FFirestoreFieldValue, METADATA_PARAMS(Z_Construct_UFunction_UFirestoreQuery_WhereEqualToFieldPath_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirestoreQuery_WhereEqualToFieldPath_Statics::NewProp_Value_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFirestoreQuery_WhereEqualToFieldPath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirestoreQuery_eventWhereEqualToFieldPath_Parms, ReturnValue), Z_Construct_UClass_UFirestoreQuery_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFirestoreQuery_WhereEqualToFieldPath_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirestoreQuery_WhereEqualToFieldPath_Statics::NewProp_Field,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirestoreQuery_WhereEqualToFieldPath_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirestoreQuery_WhereEqualToFieldPath_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirestoreQuery_WhereEqualToFieldPath_Statics::Function_MetaDataParams[] = {
		{ "Category", "Firebase|Firestore|Query" },
		{ "Comment", "/**\n\x09 * @brief Creates and returns a new Query with the additional filter that\n\x09 * documents must contain the specified field and the value should be equal to\n\x09 * the specified value.\n\x09 *\n\x09 * @param Field The path of the field to compare.\n\x09 * @param Value The value for comparison.\n\x09 *\n\x09 * @return The created Query.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Firestore/Query.h" },
		{ "ToolTip", "@brief Creates and returns a new Query with the additional filter that\ndocuments must contain the specified field and the value should be equal to\nthe specified value.\n\n@param Field The path of the field to compare.\n@param Value The value for comparison.\n\n@return The created Query." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFirestoreQuery_WhereEqualToFieldPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFirestoreQuery, nullptr, "WhereEqualToFieldPath", nullptr, nullptr, sizeof(FirestoreQuery_eventWhereEqualToFieldPath_Parms), Z_Construct_UFunction_UFirestoreQuery_WhereEqualToFieldPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirestoreQuery_WhereEqualToFieldPath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFirestoreQuery_WhereEqualToFieldPath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirestoreQuery_WhereEqualToFieldPath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFirestoreQuery_WhereEqualToFieldPath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFirestoreQuery_WhereEqualToFieldPath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFirestoreQuery_WhereGreaterThan_Statics
	{
		struct FirestoreQuery_eventWhereGreaterThan_Parms
		{
			FString Field;
			FFirestoreFieldValue Value;
			UFirestoreQuery* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Field_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Field;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirestoreQuery_WhereGreaterThan_Statics::NewProp_Field_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFirestoreQuery_WhereGreaterThan_Statics::NewProp_Field = { "Field", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirestoreQuery_eventWhereGreaterThan_Parms, Field), METADATA_PARAMS(Z_Construct_UFunction_UFirestoreQuery_WhereGreaterThan_Statics::NewProp_Field_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirestoreQuery_WhereGreaterThan_Statics::NewProp_Field_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirestoreQuery_WhereGreaterThan_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFirestoreQuery_WhereGreaterThan_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirestoreQuery_eventWhereGreaterThan_Parms, Value), Z_Construct_UScriptStruct_FFirestoreFieldValue, METADATA_PARAMS(Z_Construct_UFunction_UFirestoreQuery_WhereGreaterThan_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirestoreQuery_WhereGreaterThan_Statics::NewProp_Value_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFirestoreQuery_WhereGreaterThan_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirestoreQuery_eventWhereGreaterThan_Parms, ReturnValue), Z_Construct_UClass_UFirestoreQuery_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFirestoreQuery_WhereGreaterThan_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirestoreQuery_WhereGreaterThan_Statics::NewProp_Field,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirestoreQuery_WhereGreaterThan_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirestoreQuery_WhereGreaterThan_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirestoreQuery_WhereGreaterThan_Statics::Function_MetaDataParams[] = {
		{ "Category", "Firebase|Firestore|Query" },
		{ "Comment", "/**\n\x09 * @brief Creates and returns a new Query with the additional filter that\n\x09 * documents must contain the specified field and the value should be greater\n\x09 * than the specified value.\n\x09 *\n\x09 * @param[in] field The name of the field to compare.\n\x09 * @param[in] value The value for comparison.\n\x09 *\n\x09 * @return The created Query.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Firestore/Query.h" },
		{ "ToolTip", "@brief Creates and returns a new Query with the additional filter that\ndocuments must contain the specified field and the value should be greater\nthan the specified value.\n\n@param[in] field The name of the field to compare.\n@param[in] value The value for comparison.\n\n@return The created Query." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFirestoreQuery_WhereGreaterThan_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFirestoreQuery, nullptr, "WhereGreaterThan", nullptr, nullptr, sizeof(FirestoreQuery_eventWhereGreaterThan_Parms), Z_Construct_UFunction_UFirestoreQuery_WhereGreaterThan_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirestoreQuery_WhereGreaterThan_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFirestoreQuery_WhereGreaterThan_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirestoreQuery_WhereGreaterThan_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFirestoreQuery_WhereGreaterThan()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFirestoreQuery_WhereGreaterThan_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFirestoreQuery_WhereGreaterThanFieldPath_Statics
	{
		struct FirestoreQuery_eventWhereGreaterThanFieldPath_Parms
		{
			FFirestoreFieldPath Field;
			FFirestoreFieldValue Value;
			UFirestoreQuery* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Field_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Field;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirestoreQuery_WhereGreaterThanFieldPath_Statics::NewProp_Field_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFirestoreQuery_WhereGreaterThanFieldPath_Statics::NewProp_Field = { "Field", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirestoreQuery_eventWhereGreaterThanFieldPath_Parms, Field), Z_Construct_UScriptStruct_FFirestoreFieldPath, METADATA_PARAMS(Z_Construct_UFunction_UFirestoreQuery_WhereGreaterThanFieldPath_Statics::NewProp_Field_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirestoreQuery_WhereGreaterThanFieldPath_Statics::NewProp_Field_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirestoreQuery_WhereGreaterThanFieldPath_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFirestoreQuery_WhereGreaterThanFieldPath_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirestoreQuery_eventWhereGreaterThanFieldPath_Parms, Value), Z_Construct_UScriptStruct_FFirestoreFieldValue, METADATA_PARAMS(Z_Construct_UFunction_UFirestoreQuery_WhereGreaterThanFieldPath_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirestoreQuery_WhereGreaterThanFieldPath_Statics::NewProp_Value_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFirestoreQuery_WhereGreaterThanFieldPath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirestoreQuery_eventWhereGreaterThanFieldPath_Parms, ReturnValue), Z_Construct_UClass_UFirestoreQuery_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFirestoreQuery_WhereGreaterThanFieldPath_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirestoreQuery_WhereGreaterThanFieldPath_Statics::NewProp_Field,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirestoreQuery_WhereGreaterThanFieldPath_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirestoreQuery_WhereGreaterThanFieldPath_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirestoreQuery_WhereGreaterThanFieldPath_Statics::Function_MetaDataParams[] = {
		{ "Category", "Firebase|Firestore|Query" },
		{ "Comment", "/**\n\x09 * @brief Creates and returns a new Query with the additional filter that\n\x09 * documents must contain the specified field and the value should be greater\n\x09 * than the specified value.\n\x09 *\n\x09 * @param[in] field The path of the field to compare.\n\x09 * @param[in] value The value for comparison.\n\x09 *\n\x09 * @return The created Query.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Firestore/Query.h" },
		{ "ToolTip", "@brief Creates and returns a new Query with the additional filter that\ndocuments must contain the specified field and the value should be greater\nthan the specified value.\n\n@param[in] field The path of the field to compare.\n@param[in] value The value for comparison.\n\n@return The created Query." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFirestoreQuery_WhereGreaterThanFieldPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFirestoreQuery, nullptr, "WhereGreaterThanFieldPath", nullptr, nullptr, sizeof(FirestoreQuery_eventWhereGreaterThanFieldPath_Parms), Z_Construct_UFunction_UFirestoreQuery_WhereGreaterThanFieldPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirestoreQuery_WhereGreaterThanFieldPath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFirestoreQuery_WhereGreaterThanFieldPath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirestoreQuery_WhereGreaterThanFieldPath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFirestoreQuery_WhereGreaterThanFieldPath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFirestoreQuery_WhereGreaterThanFieldPath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFirestoreQuery_WhereGreaterThanOrEqualTo_Statics
	{
		struct FirestoreQuery_eventWhereGreaterThanOrEqualTo_Parms
		{
			FString Field;
			FFirestoreFieldValue Value;
			UFirestoreQuery* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Field_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Field;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirestoreQuery_WhereGreaterThanOrEqualTo_Statics::NewProp_Field_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFirestoreQuery_WhereGreaterThanOrEqualTo_Statics::NewProp_Field = { "Field", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirestoreQuery_eventWhereGreaterThanOrEqualTo_Parms, Field), METADATA_PARAMS(Z_Construct_UFunction_UFirestoreQuery_WhereGreaterThanOrEqualTo_Statics::NewProp_Field_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirestoreQuery_WhereGreaterThanOrEqualTo_Statics::NewProp_Field_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirestoreQuery_WhereGreaterThanOrEqualTo_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFirestoreQuery_WhereGreaterThanOrEqualTo_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirestoreQuery_eventWhereGreaterThanOrEqualTo_Parms, Value), Z_Construct_UScriptStruct_FFirestoreFieldValue, METADATA_PARAMS(Z_Construct_UFunction_UFirestoreQuery_WhereGreaterThanOrEqualTo_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirestoreQuery_WhereGreaterThanOrEqualTo_Statics::NewProp_Value_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFirestoreQuery_WhereGreaterThanOrEqualTo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirestoreQuery_eventWhereGreaterThanOrEqualTo_Parms, ReturnValue), Z_Construct_UClass_UFirestoreQuery_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFirestoreQuery_WhereGreaterThanOrEqualTo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirestoreQuery_WhereGreaterThanOrEqualTo_Statics::NewProp_Field,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirestoreQuery_WhereGreaterThanOrEqualTo_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirestoreQuery_WhereGreaterThanOrEqualTo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirestoreQuery_WhereGreaterThanOrEqualTo_Statics::Function_MetaDataParams[] = {
		{ "Category", "Firebase|Firestore|Query" },
		{ "Comment", "/**\n\x09 * @brief Creates and returns a new Query with the additional filter that\n\x09 * documents must contain the specified field and the value should be greater\n\x09 * than or equal to the specified value.\n\x09 *\n\x09 * @param[in] field The name of the field to compare.\n\x09 * @param[in] value The value for comparison.\n\x09 *\n\x09 * @return The created Query.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Firestore/Query.h" },
		{ "ToolTip", "@brief Creates and returns a new Query with the additional filter that\ndocuments must contain the specified field and the value should be greater\nthan or equal to the specified value.\n\n@param[in] field The name of the field to compare.\n@param[in] value The value for comparison.\n\n@return The created Query." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFirestoreQuery_WhereGreaterThanOrEqualTo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFirestoreQuery, nullptr, "WhereGreaterThanOrEqualTo", nullptr, nullptr, sizeof(FirestoreQuery_eventWhereGreaterThanOrEqualTo_Parms), Z_Construct_UFunction_UFirestoreQuery_WhereGreaterThanOrEqualTo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirestoreQuery_WhereGreaterThanOrEqualTo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFirestoreQuery_WhereGreaterThanOrEqualTo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirestoreQuery_WhereGreaterThanOrEqualTo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFirestoreQuery_WhereGreaterThanOrEqualTo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFirestoreQuery_WhereGreaterThanOrEqualTo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFirestoreQuery_WhereGreaterThanOrEqualToFielPath_Statics
	{
		struct FirestoreQuery_eventWhereGreaterThanOrEqualToFielPath_Parms
		{
			FFirestoreFieldPath Field;
			FFirestoreFieldValue Value;
			UFirestoreQuery* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Field_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Field;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirestoreQuery_WhereGreaterThanOrEqualToFielPath_Statics::NewProp_Field_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFirestoreQuery_WhereGreaterThanOrEqualToFielPath_Statics::NewProp_Field = { "Field", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirestoreQuery_eventWhereGreaterThanOrEqualToFielPath_Parms, Field), Z_Construct_UScriptStruct_FFirestoreFieldPath, METADATA_PARAMS(Z_Construct_UFunction_UFirestoreQuery_WhereGreaterThanOrEqualToFielPath_Statics::NewProp_Field_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirestoreQuery_WhereGreaterThanOrEqualToFielPath_Statics::NewProp_Field_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirestoreQuery_WhereGreaterThanOrEqualToFielPath_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFirestoreQuery_WhereGreaterThanOrEqualToFielPath_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirestoreQuery_eventWhereGreaterThanOrEqualToFielPath_Parms, Value), Z_Construct_UScriptStruct_FFirestoreFieldValue, METADATA_PARAMS(Z_Construct_UFunction_UFirestoreQuery_WhereGreaterThanOrEqualToFielPath_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirestoreQuery_WhereGreaterThanOrEqualToFielPath_Statics::NewProp_Value_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFirestoreQuery_WhereGreaterThanOrEqualToFielPath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirestoreQuery_eventWhereGreaterThanOrEqualToFielPath_Parms, ReturnValue), Z_Construct_UClass_UFirestoreQuery_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFirestoreQuery_WhereGreaterThanOrEqualToFielPath_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirestoreQuery_WhereGreaterThanOrEqualToFielPath_Statics::NewProp_Field,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirestoreQuery_WhereGreaterThanOrEqualToFielPath_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirestoreQuery_WhereGreaterThanOrEqualToFielPath_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirestoreQuery_WhereGreaterThanOrEqualToFielPath_Statics::Function_MetaDataParams[] = {
		{ "Category", "Firebase|Firestore|Query" },
		{ "Comment", "/**\n\x09 * @brief Creates and returns a new Query with the additional filter that\n\x09 * documents must contain the specified field and the value should be greater\n\x09 * than or equal to the specified value.\n\x09 *\n\x09 * @param[in] field The path of the field to compare.\n\x09 * @param[in] value The value for comparison.\n\x09 *\n\x09 * @return The created Query.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Firestore/Query.h" },
		{ "ToolTip", "@brief Creates and returns a new Query with the additional filter that\ndocuments must contain the specified field and the value should be greater\nthan or equal to the specified value.\n\n@param[in] field The path of the field to compare.\n@param[in] value The value for comparison.\n\n@return The created Query." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFirestoreQuery_WhereGreaterThanOrEqualToFielPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFirestoreQuery, nullptr, "WhereGreaterThanOrEqualToFielPath", nullptr, nullptr, sizeof(FirestoreQuery_eventWhereGreaterThanOrEqualToFielPath_Parms), Z_Construct_UFunction_UFirestoreQuery_WhereGreaterThanOrEqualToFielPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirestoreQuery_WhereGreaterThanOrEqualToFielPath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFirestoreQuery_WhereGreaterThanOrEqualToFielPath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirestoreQuery_WhereGreaterThanOrEqualToFielPath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFirestoreQuery_WhereGreaterThanOrEqualToFielPath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFirestoreQuery_WhereGreaterThanOrEqualToFielPath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFirestoreQuery_WhereIn_Statics
	{
		struct FirestoreQuery_eventWhereIn_Parms
		{
			FString Field;
			TArray<FFirestoreFieldValue> Values;
			UFirestoreQuery* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Field_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Field;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Values_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Values_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Values;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirestoreQuery_WhereIn_Statics::NewProp_Field_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFirestoreQuery_WhereIn_Statics::NewProp_Field = { "Field", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirestoreQuery_eventWhereIn_Parms, Field), METADATA_PARAMS(Z_Construct_UFunction_UFirestoreQuery_WhereIn_Statics::NewProp_Field_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirestoreQuery_WhereIn_Statics::NewProp_Field_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFirestoreQuery_WhereIn_Statics::NewProp_Values_Inner = { "Values", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FFirestoreFieldValue, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirestoreQuery_WhereIn_Statics::NewProp_Values_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFirestoreQuery_WhereIn_Statics::NewProp_Values = { "Values", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirestoreQuery_eventWhereIn_Parms, Values), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UFirestoreQuery_WhereIn_Statics::NewProp_Values_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirestoreQuery_WhereIn_Statics::NewProp_Values_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFirestoreQuery_WhereIn_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirestoreQuery_eventWhereIn_Parms, ReturnValue), Z_Construct_UClass_UFirestoreQuery_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFirestoreQuery_WhereIn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirestoreQuery_WhereIn_Statics::NewProp_Field,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirestoreQuery_WhereIn_Statics::NewProp_Values_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirestoreQuery_WhereIn_Statics::NewProp_Values,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirestoreQuery_WhereIn_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirestoreQuery_WhereIn_Statics::Function_MetaDataParams[] = {
		{ "Category", "Firebase|Firestore|Query" },
		{ "Comment", "/**\n\x09 * @brief Creates and returns a new Query with the additional filter that\n\x09 * documents must contain the specified field and the value must equal one of\n\x09 * the values from the provided list.\n\x09 *\n\x09 * A Query can have only one `WhereIn()` filter and it cannot be\n\x09 * combined with `WhereArrayContainsAny()`.\n\x09 *\n\x09 * @param[in] field The name of the field containing an array to search.\n\x09 * @param[in] values The list that contains the values to match.\n\x09 *\n\x09 * @return The created Query.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Firestore/Query.h" },
		{ "ToolTip", "@brief Creates and returns a new Query with the additional filter that\ndocuments must contain the specified field and the value must equal one of\nthe values from the provided list.\n\nA Query can have only one `WhereIn()` filter and it cannot be\ncombined with `WhereArrayContainsAny()`.\n\n@param[in] field The name of the field containing an array to search.\n@param[in] values The list that contains the values to match.\n\n@return The created Query." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFirestoreQuery_WhereIn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFirestoreQuery, nullptr, "WhereIn", nullptr, nullptr, sizeof(FirestoreQuery_eventWhereIn_Parms), Z_Construct_UFunction_UFirestoreQuery_WhereIn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirestoreQuery_WhereIn_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFirestoreQuery_WhereIn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirestoreQuery_WhereIn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFirestoreQuery_WhereIn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFirestoreQuery_WhereIn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFirestoreQuery_WhereInFieldPath_Statics
	{
		struct FirestoreQuery_eventWhereInFieldPath_Parms
		{
			FFirestoreFieldPath Field;
			TArray<FFirestoreFieldValue> Values;
			UFirestoreQuery* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Field_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Field;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Values_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Values_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Values;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirestoreQuery_WhereInFieldPath_Statics::NewProp_Field_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFirestoreQuery_WhereInFieldPath_Statics::NewProp_Field = { "Field", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirestoreQuery_eventWhereInFieldPath_Parms, Field), Z_Construct_UScriptStruct_FFirestoreFieldPath, METADATA_PARAMS(Z_Construct_UFunction_UFirestoreQuery_WhereInFieldPath_Statics::NewProp_Field_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirestoreQuery_WhereInFieldPath_Statics::NewProp_Field_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFirestoreQuery_WhereInFieldPath_Statics::NewProp_Values_Inner = { "Values", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FFirestoreFieldValue, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirestoreQuery_WhereInFieldPath_Statics::NewProp_Values_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFirestoreQuery_WhereInFieldPath_Statics::NewProp_Values = { "Values", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirestoreQuery_eventWhereInFieldPath_Parms, Values), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UFirestoreQuery_WhereInFieldPath_Statics::NewProp_Values_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirestoreQuery_WhereInFieldPath_Statics::NewProp_Values_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFirestoreQuery_WhereInFieldPath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirestoreQuery_eventWhereInFieldPath_Parms, ReturnValue), Z_Construct_UClass_UFirestoreQuery_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFirestoreQuery_WhereInFieldPath_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirestoreQuery_WhereInFieldPath_Statics::NewProp_Field,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirestoreQuery_WhereInFieldPath_Statics::NewProp_Values_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirestoreQuery_WhereInFieldPath_Statics::NewProp_Values,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirestoreQuery_WhereInFieldPath_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirestoreQuery_WhereInFieldPath_Statics::Function_MetaDataParams[] = {
		{ "Category", "Firebase|Firestore|Query" },
		{ "Comment", "/**\n\x09 * @brief Creates and returns a new Query with the additional filter that\n\x09 * documents must contain the specified field and the value must equal one of\n\x09 * the values from the provided list.\n\x09 *\n\x09 * A Query can have only one `WhereIn()` filter and it cannot be\n\x09 * combined with `WhereArrayContainsAny()`.\n\x09 *\n\x09 * @param[in] field The path of the field containing an array to search.\n\x09 * @param[in] values The list that contains the values to match.\n\x09 *\n\x09 * @return The created Query.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Firestore/Query.h" },
		{ "ToolTip", "@brief Creates and returns a new Query with the additional filter that\ndocuments must contain the specified field and the value must equal one of\nthe values from the provided list.\n\nA Query can have only one `WhereIn()` filter and it cannot be\ncombined with `WhereArrayContainsAny()`.\n\n@param[in] field The path of the field containing an array to search.\n@param[in] values The list that contains the values to match.\n\n@return The created Query." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFirestoreQuery_WhereInFieldPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFirestoreQuery, nullptr, "WhereInFieldPath", nullptr, nullptr, sizeof(FirestoreQuery_eventWhereInFieldPath_Parms), Z_Construct_UFunction_UFirestoreQuery_WhereInFieldPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirestoreQuery_WhereInFieldPath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFirestoreQuery_WhereInFieldPath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirestoreQuery_WhereInFieldPath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFirestoreQuery_WhereInFieldPath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFirestoreQuery_WhereInFieldPath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFirestoreQuery_WhereLessThan_Statics
	{
		struct FirestoreQuery_eventWhereLessThan_Parms
		{
			FString Field;
			FFirestoreFieldValue Value;
			UFirestoreQuery* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Field_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Field;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirestoreQuery_WhereLessThan_Statics::NewProp_Field_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFirestoreQuery_WhereLessThan_Statics::NewProp_Field = { "Field", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirestoreQuery_eventWhereLessThan_Parms, Field), METADATA_PARAMS(Z_Construct_UFunction_UFirestoreQuery_WhereLessThan_Statics::NewProp_Field_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirestoreQuery_WhereLessThan_Statics::NewProp_Field_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirestoreQuery_WhereLessThan_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFirestoreQuery_WhereLessThan_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirestoreQuery_eventWhereLessThan_Parms, Value), Z_Construct_UScriptStruct_FFirestoreFieldValue, METADATA_PARAMS(Z_Construct_UFunction_UFirestoreQuery_WhereLessThan_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirestoreQuery_WhereLessThan_Statics::NewProp_Value_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFirestoreQuery_WhereLessThan_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirestoreQuery_eventWhereLessThan_Parms, ReturnValue), Z_Construct_UClass_UFirestoreQuery_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFirestoreQuery_WhereLessThan_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirestoreQuery_WhereLessThan_Statics::NewProp_Field,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirestoreQuery_WhereLessThan_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirestoreQuery_WhereLessThan_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirestoreQuery_WhereLessThan_Statics::Function_MetaDataParams[] = {
		{ "Category", "Firebase|Firestore|Query" },
		{ "Comment", "/**\n\x09 * @brief Creates and returns a new Query with the additional filter that\n\x09 * documents must contain the specified field and the value should be less\n\x09 * than the specified value.\n\x09 *\n\x09 * @param[in] field The name of the field to compare.\n\x09 * @param[in] value The value for comparison.\n\x09 *\n\x09 * @return The created Query.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Firestore/Query.h" },
		{ "ToolTip", "@brief Creates and returns a new Query with the additional filter that\ndocuments must contain the specified field and the value should be less\nthan the specified value.\n\n@param[in] field The name of the field to compare.\n@param[in] value The value for comparison.\n\n@return The created Query." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFirestoreQuery_WhereLessThan_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFirestoreQuery, nullptr, "WhereLessThan", nullptr, nullptr, sizeof(FirestoreQuery_eventWhereLessThan_Parms), Z_Construct_UFunction_UFirestoreQuery_WhereLessThan_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirestoreQuery_WhereLessThan_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFirestoreQuery_WhereLessThan_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirestoreQuery_WhereLessThan_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFirestoreQuery_WhereLessThan()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFirestoreQuery_WhereLessThan_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFirestoreQuery_WhereLessThanFieldPath_Statics
	{
		struct FirestoreQuery_eventWhereLessThanFieldPath_Parms
		{
			FFirestoreFieldPath Field;
			FFirestoreFieldValue Value;
			UFirestoreQuery* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Field_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Field;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirestoreQuery_WhereLessThanFieldPath_Statics::NewProp_Field_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFirestoreQuery_WhereLessThanFieldPath_Statics::NewProp_Field = { "Field", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirestoreQuery_eventWhereLessThanFieldPath_Parms, Field), Z_Construct_UScriptStruct_FFirestoreFieldPath, METADATA_PARAMS(Z_Construct_UFunction_UFirestoreQuery_WhereLessThanFieldPath_Statics::NewProp_Field_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirestoreQuery_WhereLessThanFieldPath_Statics::NewProp_Field_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirestoreQuery_WhereLessThanFieldPath_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFirestoreQuery_WhereLessThanFieldPath_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirestoreQuery_eventWhereLessThanFieldPath_Parms, Value), Z_Construct_UScriptStruct_FFirestoreFieldValue, METADATA_PARAMS(Z_Construct_UFunction_UFirestoreQuery_WhereLessThanFieldPath_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirestoreQuery_WhereLessThanFieldPath_Statics::NewProp_Value_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFirestoreQuery_WhereLessThanFieldPath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirestoreQuery_eventWhereLessThanFieldPath_Parms, ReturnValue), Z_Construct_UClass_UFirestoreQuery_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFirestoreQuery_WhereLessThanFieldPath_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirestoreQuery_WhereLessThanFieldPath_Statics::NewProp_Field,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirestoreQuery_WhereLessThanFieldPath_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirestoreQuery_WhereLessThanFieldPath_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirestoreQuery_WhereLessThanFieldPath_Statics::Function_MetaDataParams[] = {
		{ "Category", "Firebase|Firestore|Query" },
		{ "Comment", "/**\n\x09 * @brief Creates and returns a new Query with the additional filter that\n\x09 * documents must contain the specified field and the value should be less\n\x09 * than the specified value.\n\x09 *\n\x09 * @param[in] field The path of the field to compare.\n\x09 * @param[in] value The value for comparison.\n\x09 *\n\x09 * @return The created Query.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Firestore/Query.h" },
		{ "ToolTip", "@brief Creates and returns a new Query with the additional filter that\ndocuments must contain the specified field and the value should be less\nthan the specified value.\n\n@param[in] field The path of the field to compare.\n@param[in] value The value for comparison.\n\n@return The created Query." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFirestoreQuery_WhereLessThanFieldPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFirestoreQuery, nullptr, "WhereLessThanFieldPath", nullptr, nullptr, sizeof(FirestoreQuery_eventWhereLessThanFieldPath_Parms), Z_Construct_UFunction_UFirestoreQuery_WhereLessThanFieldPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirestoreQuery_WhereLessThanFieldPath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFirestoreQuery_WhereLessThanFieldPath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirestoreQuery_WhereLessThanFieldPath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFirestoreQuery_WhereLessThanFieldPath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFirestoreQuery_WhereLessThanFieldPath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFirestoreQuery_WhereLessThanOrEqualTo_Statics
	{
		struct FirestoreQuery_eventWhereLessThanOrEqualTo_Parms
		{
			FString Field;
			FFirestoreFieldValue Value;
			UFirestoreQuery* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Field_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Field;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirestoreQuery_WhereLessThanOrEqualTo_Statics::NewProp_Field_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFirestoreQuery_WhereLessThanOrEqualTo_Statics::NewProp_Field = { "Field", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirestoreQuery_eventWhereLessThanOrEqualTo_Parms, Field), METADATA_PARAMS(Z_Construct_UFunction_UFirestoreQuery_WhereLessThanOrEqualTo_Statics::NewProp_Field_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirestoreQuery_WhereLessThanOrEqualTo_Statics::NewProp_Field_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirestoreQuery_WhereLessThanOrEqualTo_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFirestoreQuery_WhereLessThanOrEqualTo_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirestoreQuery_eventWhereLessThanOrEqualTo_Parms, Value), Z_Construct_UScriptStruct_FFirestoreFieldValue, METADATA_PARAMS(Z_Construct_UFunction_UFirestoreQuery_WhereLessThanOrEqualTo_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirestoreQuery_WhereLessThanOrEqualTo_Statics::NewProp_Value_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFirestoreQuery_WhereLessThanOrEqualTo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirestoreQuery_eventWhereLessThanOrEqualTo_Parms, ReturnValue), Z_Construct_UClass_UFirestoreQuery_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFirestoreQuery_WhereLessThanOrEqualTo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirestoreQuery_WhereLessThanOrEqualTo_Statics::NewProp_Field,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirestoreQuery_WhereLessThanOrEqualTo_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirestoreQuery_WhereLessThanOrEqualTo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirestoreQuery_WhereLessThanOrEqualTo_Statics::Function_MetaDataParams[] = {
		{ "Category", "Firebase|Firestore|Query" },
		{ "Comment", "/**\n\x09 * @brief Creates and returns a new Query with the additional filter that\n\x09 * documents must contain the specified field and the value should be less\n\x09 * than or equal to the specified value.\n\x09 *\n\x09 * @param[in] field The name of the field to compare.\n\x09 * @param[in] value The value for comparison.\n\x09 *\n\x09 * @return The created Query.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Firestore/Query.h" },
		{ "ToolTip", "@brief Creates and returns a new Query with the additional filter that\ndocuments must contain the specified field and the value should be less\nthan or equal to the specified value.\n\n@param[in] field The name of the field to compare.\n@param[in] value The value for comparison.\n\n@return The created Query." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFirestoreQuery_WhereLessThanOrEqualTo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFirestoreQuery, nullptr, "WhereLessThanOrEqualTo", nullptr, nullptr, sizeof(FirestoreQuery_eventWhereLessThanOrEqualTo_Parms), Z_Construct_UFunction_UFirestoreQuery_WhereLessThanOrEqualTo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirestoreQuery_WhereLessThanOrEqualTo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFirestoreQuery_WhereLessThanOrEqualTo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirestoreQuery_WhereLessThanOrEqualTo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFirestoreQuery_WhereLessThanOrEqualTo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFirestoreQuery_WhereLessThanOrEqualTo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFirestoreQuery_WhereLessThanOrEqualToFieldPath_Statics
	{
		struct FirestoreQuery_eventWhereLessThanOrEqualToFieldPath_Parms
		{
			FFirestoreFieldPath Field;
			FFirestoreFieldValue Value;
			UFirestoreQuery* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Field_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Field;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirestoreQuery_WhereLessThanOrEqualToFieldPath_Statics::NewProp_Field_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFirestoreQuery_WhereLessThanOrEqualToFieldPath_Statics::NewProp_Field = { "Field", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirestoreQuery_eventWhereLessThanOrEqualToFieldPath_Parms, Field), Z_Construct_UScriptStruct_FFirestoreFieldPath, METADATA_PARAMS(Z_Construct_UFunction_UFirestoreQuery_WhereLessThanOrEqualToFieldPath_Statics::NewProp_Field_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirestoreQuery_WhereLessThanOrEqualToFieldPath_Statics::NewProp_Field_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirestoreQuery_WhereLessThanOrEqualToFieldPath_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFirestoreQuery_WhereLessThanOrEqualToFieldPath_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirestoreQuery_eventWhereLessThanOrEqualToFieldPath_Parms, Value), Z_Construct_UScriptStruct_FFirestoreFieldValue, METADATA_PARAMS(Z_Construct_UFunction_UFirestoreQuery_WhereLessThanOrEqualToFieldPath_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirestoreQuery_WhereLessThanOrEqualToFieldPath_Statics::NewProp_Value_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFirestoreQuery_WhereLessThanOrEqualToFieldPath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirestoreQuery_eventWhereLessThanOrEqualToFieldPath_Parms, ReturnValue), Z_Construct_UClass_UFirestoreQuery_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFirestoreQuery_WhereLessThanOrEqualToFieldPath_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirestoreQuery_WhereLessThanOrEqualToFieldPath_Statics::NewProp_Field,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirestoreQuery_WhereLessThanOrEqualToFieldPath_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirestoreQuery_WhereLessThanOrEqualToFieldPath_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirestoreQuery_WhereLessThanOrEqualToFieldPath_Statics::Function_MetaDataParams[] = {
		{ "Category", "Firebase|Firestore|Query" },
		{ "Comment", "/**\n\x09 * @brief Creates and returns a new Query with the additional filter that\n\x09 * documents must contain the specified field and the value should be less\n\x09 * than or equal to the specified value.\n\x09 *\n\x09 * @param[in] field The path of the field to compare.\n\x09 * @param[in] value The value for comparison.\n\x09 *\n\x09 * @return The created Query.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Firestore/Query.h" },
		{ "ToolTip", "@brief Creates and returns a new Query with the additional filter that\ndocuments must contain the specified field and the value should be less\nthan or equal to the specified value.\n\n@param[in] field The path of the field to compare.\n@param[in] value The value for comparison.\n\n@return The created Query." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFirestoreQuery_WhereLessThanOrEqualToFieldPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFirestoreQuery, nullptr, "WhereLessThanOrEqualToFieldPath", nullptr, nullptr, sizeof(FirestoreQuery_eventWhereLessThanOrEqualToFieldPath_Parms), Z_Construct_UFunction_UFirestoreQuery_WhereLessThanOrEqualToFieldPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirestoreQuery_WhereLessThanOrEqualToFieldPath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFirestoreQuery_WhereLessThanOrEqualToFieldPath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirestoreQuery_WhereLessThanOrEqualToFieldPath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFirestoreQuery_WhereLessThanOrEqualToFieldPath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFirestoreQuery_WhereLessThanOrEqualToFieldPath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFirestoreQuery_NoRegister()
	{
		return UFirestoreQuery::StaticClass();
	}
	struct Z_Construct_UClass_UFirestoreQuery_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFirestoreQuery_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_FirebaseFeatures,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFirestoreQuery_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFirestoreQuery_EndAt, "EndAt" }, // 2387454695
		{ &Z_Construct_UFunction_UFirestoreQuery_EndAtValues, "EndAtValues" }, // 4210006576
		{ &Z_Construct_UFunction_UFirestoreQuery_EndBefore, "EndBefore" }, // 3699760048
		{ &Z_Construct_UFunction_UFirestoreQuery_EndBeforeFieldValue, "EndBeforeFieldValue" }, // 868092797
		{ &Z_Construct_UFunction_UFirestoreQuery_Limit, "Limit" }, // 3354040757
		{ &Z_Construct_UFunction_UFirestoreQuery_LimitToLast, "LimitToLast" }, // 521404760
		{ &Z_Construct_UFunction_UFirestoreQuery_OrderBy, "OrderBy" }, // 2826809219
		{ &Z_Construct_UFunction_UFirestoreQuery_OrderByFieldPath, "OrderByFieldPath" }, // 614578876
		{ &Z_Construct_UFunction_UFirestoreQuery_StartAfter, "StartAfter" }, // 163024015
		{ &Z_Construct_UFunction_UFirestoreQuery_StartAfterFieldValue, "StartAfterFieldValue" }, // 2344820307
		{ &Z_Construct_UFunction_UFirestoreQuery_StartAt, "StartAt" }, // 2976821132
		{ &Z_Construct_UFunction_UFirestoreQuery_StartAtFieldValue, "StartAtFieldValue" }, // 3175282588
		{ &Z_Construct_UFunction_UFirestoreQuery_WhereArrayContains, "WhereArrayContains" }, // 3033652364
		{ &Z_Construct_UFunction_UFirestoreQuery_WhereArrayContainsAny, "WhereArrayContainsAny" }, // 2940716227
		{ &Z_Construct_UFunction_UFirestoreQuery_WhereArrayContainsAnyFielPath, "WhereArrayContainsAnyFielPath" }, // 1022326773
		{ &Z_Construct_UFunction_UFirestoreQuery_WhereArrayContainsFieldPath, "WhereArrayContainsFieldPath" }, // 709371942
		{ &Z_Construct_UFunction_UFirestoreQuery_WhereEqualTo, "WhereEqualTo" }, // 2791295760
		{ &Z_Construct_UFunction_UFirestoreQuery_WhereEqualToFieldPath, "WhereEqualToFieldPath" }, // 1596271208
		{ &Z_Construct_UFunction_UFirestoreQuery_WhereGreaterThan, "WhereGreaterThan" }, // 3837292804
		{ &Z_Construct_UFunction_UFirestoreQuery_WhereGreaterThanFieldPath, "WhereGreaterThanFieldPath" }, // 4073023469
		{ &Z_Construct_UFunction_UFirestoreQuery_WhereGreaterThanOrEqualTo, "WhereGreaterThanOrEqualTo" }, // 569286045
		{ &Z_Construct_UFunction_UFirestoreQuery_WhereGreaterThanOrEqualToFielPath, "WhereGreaterThanOrEqualToFielPath" }, // 1720869305
		{ &Z_Construct_UFunction_UFirestoreQuery_WhereIn, "WhereIn" }, // 866178753
		{ &Z_Construct_UFunction_UFirestoreQuery_WhereInFieldPath, "WhereInFieldPath" }, // 3658726656
		{ &Z_Construct_UFunction_UFirestoreQuery_WhereLessThan, "WhereLessThan" }, // 1179251014
		{ &Z_Construct_UFunction_UFirestoreQuery_WhereLessThanFieldPath, "WhereLessThanFieldPath" }, // 4064642337
		{ &Z_Construct_UFunction_UFirestoreQuery_WhereLessThanOrEqualTo, "WhereLessThanOrEqualTo" }, // 1347294165
		{ &Z_Construct_UFunction_UFirestoreQuery_WhereLessThanOrEqualToFieldPath, "WhereLessThanOrEqualToFieldPath" }, // 3091700557
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFirestoreQuery_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Firestore/Query.h" },
		{ "ModuleRelativePath", "Public/Firestore/Query.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFirestoreQuery_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFirestoreQuery>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFirestoreQuery_Statics::ClassParams = {
		&UFirestoreQuery::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UFirestoreQuery_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFirestoreQuery_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFirestoreQuery()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFirestoreQuery_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFirestoreQuery, 2008297447);
	template<> FIREBASEFEATURES_API UClass* StaticClass<UFirestoreQuery>()
	{
		return UFirestoreQuery::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFirestoreQuery(Z_Construct_UClass_UFirestoreQuery, &UFirestoreQuery::StaticClass, TEXT("/Script/FirebaseFeatures"), TEXT("UFirestoreQuery"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFirestoreQuery);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
