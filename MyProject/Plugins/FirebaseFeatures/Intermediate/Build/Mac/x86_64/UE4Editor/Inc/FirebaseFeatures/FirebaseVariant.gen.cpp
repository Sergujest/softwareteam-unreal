// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FirebaseFeatures/Public/FirebaseSdk/FirebaseVariant.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFirebaseVariant() {}
// Cross Module References
	FIREBASEFEATURES_API UEnum* Z_Construct_UEnum_FirebaseFeatures_EFirebaseVariantType();
	UPackage* Z_Construct_UPackage__Script_FirebaseFeatures();
	FIREBASEFEATURES_API UScriptStruct* Z_Construct_UScriptStruct_FFirebaseVariant();
	FIREBASEFEATURES_API UClass* Z_Construct_UClass_UVariantLibrary_NoRegister();
	FIREBASEFEATURES_API UClass* Z_Construct_UClass_UVariantLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
// End Cross Module References
	static UEnum* EFirebaseVariantType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_FirebaseFeatures_EFirebaseVariantType, Z_Construct_UPackage__Script_FirebaseFeatures(), TEXT("EFirebaseVariantType"));
		}
		return Singleton;
	}
	template<> FIREBASEFEATURES_API UEnum* StaticEnum<EFirebaseVariantType>()
	{
		return EFirebaseVariantType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EFirebaseVariantType(EFirebaseVariantType_StaticEnum, TEXT("/Script/FirebaseFeatures"), TEXT("EFirebaseVariantType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_FirebaseFeatures_EFirebaseVariantType_Hash() { return 1531417885U; }
	UEnum* Z_Construct_UEnum_FirebaseFeatures_EFirebaseVariantType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_FirebaseFeatures();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EFirebaseVariantType"), 0, Get_Z_Construct_UEnum_FirebaseFeatures_EFirebaseVariantType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EFirebaseVariantType::Null", (int64)EFirebaseVariantType::Null },
				{ "EFirebaseVariantType::Int64", (int64)EFirebaseVariantType::Int64 },
				{ "EFirebaseVariantType::Double", (int64)EFirebaseVariantType::Double },
				{ "EFirebaseVariantType::Bool", (int64)EFirebaseVariantType::Bool },
				{ "EFirebaseVariantType::StaticString", (int64)EFirebaseVariantType::StaticString },
				{ "EFirebaseVariantType::MutableString", (int64)EFirebaseVariantType::MutableString },
				{ "EFirebaseVariantType::Vector", (int64)EFirebaseVariantType::Vector },
				{ "EFirebaseVariantType::Map", (int64)EFirebaseVariantType::Map },
				{ "EFirebaseVariantType::StaticBlob", (int64)EFirebaseVariantType::StaticBlob },
				{ "EFirebaseVariantType::MutableBlob", (int64)EFirebaseVariantType::MutableBlob },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Bool.Comment", "/// A boolean value.\n" },
				{ "Bool.Name", "EFirebaseVariantType::Bool" },
				{ "Bool.ToolTip", "A boolean value." },
				{ "Comment", "/// Type of data that this variant object contains.\n" },
				{ "Double.Comment", "/// A double-precision floating point number.\n" },
				{ "Double.Name", "EFirebaseVariantType::Double" },
				{ "Double.ToolTip", "A double-precision floating point number." },
				{ "Int64.Comment", "/// A 64-bit integer.\n" },
				{ "Int64.Name", "EFirebaseVariantType::Int64" },
				{ "Int64.ToolTip", "A 64-bit integer." },
				{ "Map.Comment", "/// A TMap , mapping Variant to Variant.\n" },
				{ "Map.Name", "EFirebaseVariantType::Map" },
				{ "Map.ToolTip", "A TMap , mapping Variant to Variant." },
				{ "ModuleRelativePath", "Public/FirebaseSdk/FirebaseVariant.h" },
				{ "MutableBlob.Comment", "/// A blob of data that the Variant holds. Never constructed by default.\n" },
				{ "MutableBlob.Name", "EFirebaseVariantType::MutableBlob" },
				{ "MutableBlob.ToolTip", "A blob of data that the Variant holds. Never constructed by default." },
				{ "MutableString.Comment", "/// A FString.\n" },
				{ "MutableString.Name", "EFirebaseVariantType::MutableString" },
				{ "MutableString.ToolTip", "A FString." },
				{ "Null.Comment", "/// Null, or no data.\n" },
				{ "Null.Name", "EFirebaseVariantType::Null" },
				{ "Null.ToolTip", "Null, or no data." },
				{ "StaticBlob.Comment", "/// A statically-allocated blob of data that we point to.\n" },
				{ "StaticBlob.Name", "EFirebaseVariantType::StaticBlob" },
				{ "StaticBlob.ToolTip", "A statically-allocated blob of data that we point to." },
				{ "StaticString.Comment", "/// A statically-allocated string we point to.\n" },
				{ "StaticString.Name", "EFirebaseVariantType::StaticString" },
				{ "StaticString.ToolTip", "A statically-allocated string we point to." },
				{ "ToolTip", "Type of data that this variant object contains." },
				{ "Vector.Comment", "/// A TArray of Variant.\n" },
				{ "Vector.Name", "EFirebaseVariantType::Vector" },
				{ "Vector.ToolTip", "A TArray of Variant." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_FirebaseFeatures,
				nullptr,
				"EFirebaseVariantType",
				"EFirebaseVariantType",
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
class UScriptStruct* FFirebaseVariant::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FIREBASEFEATURES_API uint32 Get_Z_Construct_UScriptStruct_FFirebaseVariant_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FFirebaseVariant, Z_Construct_UPackage__Script_FirebaseFeatures(), TEXT("FirebaseVariant"), sizeof(FFirebaseVariant), Get_Z_Construct_UScriptStruct_FFirebaseVariant_Hash());
	}
	return Singleton;
}
template<> FIREBASEFEATURES_API UScriptStruct* StaticStruct<FFirebaseVariant>()
{
	return FFirebaseVariant::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FFirebaseVariant(FFirebaseVariant::StaticStruct, TEXT("/Script/FirebaseFeatures"), TEXT("FirebaseVariant"), false, nullptr, nullptr);
static struct FScriptStruct_FirebaseFeatures_StaticRegisterNativesFFirebaseVariant
{
	FScriptStruct_FirebaseFeatures_StaticRegisterNativesFFirebaseVariant()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("FirebaseVariant")),new UScriptStruct::TCppStructOps<FFirebaseVariant>);
	}
} ScriptStruct_FirebaseFeatures_StaticRegisterNativesFFirebaseVariant;
	struct Z_Construct_UScriptStruct_FFirebaseVariant_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFirebaseVariant_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * A variant type that can contain one of the following types:\n *      Null, FString, double, float, int64, int32, bool, TArray<FFirebaseVariant>, TMap<FFirebaseVariant, FFirebaseVariant>\n*/" },
		{ "ModuleRelativePath", "Public/FirebaseSdk/FirebaseVariant.h" },
		{ "ToolTip", "A variant type that can contain one of the following types:\n     Null, FString, double, float, int64, int32, bool, TArray<FFirebaseVariant>, TMap<FFirebaseVariant, FFirebaseVariant>" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFirebaseVariant_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFirebaseVariant>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFirebaseVariant_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FirebaseFeatures,
		nullptr,
		&NewStructOps,
		"FirebaseVariant",
		sizeof(FFirebaseVariant),
		alignof(FFirebaseVariant),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFirebaseVariant_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFirebaseVariant_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFirebaseVariant()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FFirebaseVariant_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_FirebaseFeatures();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("FirebaseVariant"), sizeof(FFirebaseVariant), Get_Z_Construct_UScriptStruct_FFirebaseVariant_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FFirebaseVariant_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FFirebaseVariant_Hash() { return 1844658913U; }
	DEFINE_FUNCTION(UVariantLibrary::execMakeVariantMap)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TMap<FFirebaseVariant,FFirebaseVariant>*)Z_Param__Result=UVariantLibrary::MakeVariantMap();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVariantLibrary::execServerTimestamp)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FFirebaseVariant*)Z_Param__Result=UVariantLibrary::ServerTimestamp();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVariantLibrary::execToArray)
	{
		P_GET_STRUCT_REF(FFirebaseVariant,Z_Param_Out_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FFirebaseVariant>*)Z_Param__Result=UVariantLibrary::ToArray(Z_Param_Out_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVariantLibrary::execToMap)
	{
		P_GET_STRUCT_REF(FFirebaseVariant,Z_Param_Out_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TMap<FFirebaseVariant,FFirebaseVariant>*)Z_Param__Result=UVariantLibrary::ToMap(Z_Param_Out_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVariantLibrary::execToBinary)
	{
		P_GET_STRUCT_REF(FFirebaseVariant,Z_Param_Out_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<uint8>*)Z_Param__Result=UVariantLibrary::ToBinary(Z_Param_Out_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVariantLibrary::execToFloat)
	{
		P_GET_STRUCT_REF(FFirebaseVariant,Z_Param_Out_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UVariantLibrary::ToFloat(Z_Param_Out_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVariantLibrary::execToInt64)
	{
		P_GET_STRUCT_REF(FFirebaseVariant,Z_Param_Out_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int64*)Z_Param__Result=UVariantLibrary::ToInt64(Z_Param_Out_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVariantLibrary::execToInt32)
	{
		P_GET_STRUCT_REF(FFirebaseVariant,Z_Param_Out_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UVariantLibrary::ToInt32(Z_Param_Out_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVariantLibrary::execToBool)
	{
		P_GET_STRUCT_REF(FFirebaseVariant,Z_Param_Out_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UVariantLibrary::ToBool(Z_Param_Out_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVariantLibrary::execToString)
	{
		P_GET_STRUCT_REF(FFirebaseVariant,Z_Param_Out_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UVariantLibrary::ToString(Z_Param_Out_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVariantLibrary::execFromArray)
	{
		P_GET_TARRAY_REF(FFirebaseVariant,Z_Param_Out_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FFirebaseVariant*)Z_Param__Result=UVariantLibrary::FromArray(Z_Param_Out_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVariantLibrary::execFromStringMap)
	{
		P_GET_TMAP_REF(FString,FFirebaseVariant,Z_Param_Out_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FFirebaseVariant*)Z_Param__Result=UVariantLibrary::FromStringMap(Z_Param_Out_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVariantLibrary::execFromMap)
	{
		P_GET_TMAP_REF(FFirebaseVariant,FFirebaseVariant,Z_Param_Out_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FFirebaseVariant*)Z_Param__Result=UVariantLibrary::FromMap(Z_Param_Out_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVariantLibrary::execFromString)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FFirebaseVariant*)Z_Param__Result=UVariantLibrary::FromString(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVariantLibrary::execFromFloat)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FFirebaseVariant*)Z_Param__Result=UVariantLibrary::FromFloat(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVariantLibrary::execFromInt64)
	{
		P_GET_PROPERTY(FInt64Property,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FFirebaseVariant*)Z_Param__Result=UVariantLibrary::FromInt64(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVariantLibrary::execFromInt32)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FFirebaseVariant*)Z_Param__Result=UVariantLibrary::FromInt32(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVariantLibrary::execFromBool)
	{
		P_GET_UBOOL(Z_Param_bValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FFirebaseVariant*)Z_Param__Result=UVariantLibrary::FromBool(Z_Param_bValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVariantLibrary::execFromNull)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FFirebaseVariant*)Z_Param__Result=UVariantLibrary::FromNull();
		P_NATIVE_END;
	}
	void UVariantLibrary::StaticRegisterNativesUVariantLibrary()
	{
		UClass* Class = UVariantLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FromArray", &UVariantLibrary::execFromArray },
			{ "FromBool", &UVariantLibrary::execFromBool },
			{ "FromFloat", &UVariantLibrary::execFromFloat },
			{ "FromInt32", &UVariantLibrary::execFromInt32 },
			{ "FromInt64", &UVariantLibrary::execFromInt64 },
			{ "FromMap", &UVariantLibrary::execFromMap },
			{ "FromNull", &UVariantLibrary::execFromNull },
			{ "FromString", &UVariantLibrary::execFromString },
			{ "FromStringMap", &UVariantLibrary::execFromStringMap },
			{ "MakeVariantMap", &UVariantLibrary::execMakeVariantMap },
			{ "ServerTimestamp", &UVariantLibrary::execServerTimestamp },
			{ "ToArray", &UVariantLibrary::execToArray },
			{ "ToBinary", &UVariantLibrary::execToBinary },
			{ "ToBool", &UVariantLibrary::execToBool },
			{ "ToFloat", &UVariantLibrary::execToFloat },
			{ "ToInt32", &UVariantLibrary::execToInt32 },
			{ "ToInt64", &UVariantLibrary::execToInt64 },
			{ "ToMap", &UVariantLibrary::execToMap },
			{ "ToString", &UVariantLibrary::execToString },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UVariantLibrary_FromArray_Statics
	{
		struct VariantLibrary_eventFromArray_Parms
		{
			TArray<FFirebaseVariant> Value;
			FFirebaseVariant ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Value_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVariantLibrary_FromArray_Statics::NewProp_Value_Inner = { "Value", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FFirebaseVariant, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVariantLibrary_FromArray_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVariantLibrary_FromArray_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VariantLibrary_eventFromArray_Parms, Value), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UVariantLibrary_FromArray_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVariantLibrary_FromArray_Statics::NewProp_Value_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVariantLibrary_FromArray_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VariantLibrary_eventFromArray_Parms, ReturnValue), Z_Construct_UScriptStruct_FFirebaseVariant, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVariantLibrary_FromArray_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVariantLibrary_FromArray_Statics::NewProp_Value_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVariantLibrary_FromArray_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVariantLibrary_FromArray_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVariantLibrary_FromArray_Statics::Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "Firebase|Misc|Variant" },
		{ "CompactNodeTitle", "->" },
		{ "ModuleRelativePath", "Public/FirebaseSdk/FirebaseVariant.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVariantLibrary_FromArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVariantLibrary, nullptr, "FromArray", nullptr, nullptr, sizeof(VariantLibrary_eventFromArray_Parms), Z_Construct_UFunction_UVariantLibrary_FromArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVariantLibrary_FromArray_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVariantLibrary_FromArray_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVariantLibrary_FromArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVariantLibrary_FromArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVariantLibrary_FromArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVariantLibrary_FromBool_Statics
	{
		struct VariantLibrary_eventFromBool_Parms
		{
			bool bValue;
			FFirebaseVariant ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bValue_MetaData[];
#endif
		static void NewProp_bValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVariantLibrary_FromBool_Statics::NewProp_bValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UVariantLibrary_FromBool_Statics::NewProp_bValue_SetBit(void* Obj)
	{
		((VariantLibrary_eventFromBool_Parms*)Obj)->bValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVariantLibrary_FromBool_Statics::NewProp_bValue = { "bValue", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VariantLibrary_eventFromBool_Parms), &Z_Construct_UFunction_UVariantLibrary_FromBool_Statics::NewProp_bValue_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UVariantLibrary_FromBool_Statics::NewProp_bValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVariantLibrary_FromBool_Statics::NewProp_bValue_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVariantLibrary_FromBool_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VariantLibrary_eventFromBool_Parms, ReturnValue), Z_Construct_UScriptStruct_FFirebaseVariant, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVariantLibrary_FromBool_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVariantLibrary_FromBool_Statics::NewProp_bValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVariantLibrary_FromBool_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVariantLibrary_FromBool_Statics::Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "Firebase|Misc|Variant" },
		{ "CompactNodeTitle", "->" },
		{ "ModuleRelativePath", "Public/FirebaseSdk/FirebaseVariant.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVariantLibrary_FromBool_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVariantLibrary, nullptr, "FromBool", nullptr, nullptr, sizeof(VariantLibrary_eventFromBool_Parms), Z_Construct_UFunction_UVariantLibrary_FromBool_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVariantLibrary_FromBool_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVariantLibrary_FromBool_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVariantLibrary_FromBool_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVariantLibrary_FromBool()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVariantLibrary_FromBool_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVariantLibrary_FromFloat_Statics
	{
		struct VariantLibrary_eventFromFloat_Parms
		{
			float Value;
			FFirebaseVariant ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVariantLibrary_FromFloat_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VariantLibrary_eventFromFloat_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVariantLibrary_FromFloat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VariantLibrary_eventFromFloat_Parms, ReturnValue), Z_Construct_UScriptStruct_FFirebaseVariant, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVariantLibrary_FromFloat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVariantLibrary_FromFloat_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVariantLibrary_FromFloat_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVariantLibrary_FromFloat_Statics::Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "Firebase|Misc|Variant" },
		{ "CompactNodeTitle", "->" },
		{ "ModuleRelativePath", "Public/FirebaseSdk/FirebaseVariant.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVariantLibrary_FromFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVariantLibrary, nullptr, "FromFloat", nullptr, nullptr, sizeof(VariantLibrary_eventFromFloat_Parms), Z_Construct_UFunction_UVariantLibrary_FromFloat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVariantLibrary_FromFloat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVariantLibrary_FromFloat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVariantLibrary_FromFloat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVariantLibrary_FromFloat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVariantLibrary_FromFloat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVariantLibrary_FromInt32_Statics
	{
		struct VariantLibrary_eventFromInt32_Parms
		{
			int32 Value;
			FFirebaseVariant ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVariantLibrary_FromInt32_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VariantLibrary_eventFromInt32_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVariantLibrary_FromInt32_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VariantLibrary_eventFromInt32_Parms, ReturnValue), Z_Construct_UScriptStruct_FFirebaseVariant, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVariantLibrary_FromInt32_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVariantLibrary_FromInt32_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVariantLibrary_FromInt32_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVariantLibrary_FromInt32_Statics::Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "Firebase|Misc|Variant" },
		{ "CompactNodeTitle", "->" },
		{ "ModuleRelativePath", "Public/FirebaseSdk/FirebaseVariant.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVariantLibrary_FromInt32_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVariantLibrary, nullptr, "FromInt32", nullptr, nullptr, sizeof(VariantLibrary_eventFromInt32_Parms), Z_Construct_UFunction_UVariantLibrary_FromInt32_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVariantLibrary_FromInt32_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVariantLibrary_FromInt32_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVariantLibrary_FromInt32_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVariantLibrary_FromInt32()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVariantLibrary_FromInt32_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVariantLibrary_FromInt64_Statics
	{
		struct VariantLibrary_eventFromInt64_Parms
		{
			int64 Value;
			FFirebaseVariant ReturnValue;
		};
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UVariantLibrary_FromInt64_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VariantLibrary_eventFromInt64_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVariantLibrary_FromInt64_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VariantLibrary_eventFromInt64_Parms, ReturnValue), Z_Construct_UScriptStruct_FFirebaseVariant, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVariantLibrary_FromInt64_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVariantLibrary_FromInt64_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVariantLibrary_FromInt64_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVariantLibrary_FromInt64_Statics::Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "Firebase|Misc|Variant" },
		{ "CompactNodeTitle", "->" },
		{ "ModuleRelativePath", "Public/FirebaseSdk/FirebaseVariant.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVariantLibrary_FromInt64_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVariantLibrary, nullptr, "FromInt64", nullptr, nullptr, sizeof(VariantLibrary_eventFromInt64_Parms), Z_Construct_UFunction_UVariantLibrary_FromInt64_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVariantLibrary_FromInt64_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVariantLibrary_FromInt64_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVariantLibrary_FromInt64_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVariantLibrary_FromInt64()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVariantLibrary_FromInt64_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVariantLibrary_FromMap_Statics
	{
		struct VariantLibrary_eventFromMap_Parms
		{
			TMap<FFirebaseVariant,FFirebaseVariant> Value;
			FFirebaseVariant ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Value_ValueProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Value_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVariantLibrary_FromMap_Statics::NewProp_Value_ValueProp = { "Value", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FFirebaseVariant, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVariantLibrary_FromMap_Statics::NewProp_Value_Key_KeyProp = { "Value_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FFirebaseVariant, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVariantLibrary_FromMap_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UVariantLibrary_FromMap_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VariantLibrary_eventFromMap_Parms, Value), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UVariantLibrary_FromMap_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVariantLibrary_FromMap_Statics::NewProp_Value_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVariantLibrary_FromMap_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VariantLibrary_eventFromMap_Parms, ReturnValue), Z_Construct_UScriptStruct_FFirebaseVariant, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVariantLibrary_FromMap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVariantLibrary_FromMap_Statics::NewProp_Value_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVariantLibrary_FromMap_Statics::NewProp_Value_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVariantLibrary_FromMap_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVariantLibrary_FromMap_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVariantLibrary_FromMap_Statics::Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "Firebase|Misc|Variant" },
		{ "CompactNodeTitle", "->" },
		{ "ModuleRelativePath", "Public/FirebaseSdk/FirebaseVariant.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVariantLibrary_FromMap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVariantLibrary, nullptr, "FromMap", nullptr, nullptr, sizeof(VariantLibrary_eventFromMap_Parms), Z_Construct_UFunction_UVariantLibrary_FromMap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVariantLibrary_FromMap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVariantLibrary_FromMap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVariantLibrary_FromMap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVariantLibrary_FromMap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVariantLibrary_FromMap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVariantLibrary_FromNull_Statics
	{
		struct VariantLibrary_eventFromNull_Parms
		{
			FFirebaseVariant ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVariantLibrary_FromNull_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VariantLibrary_eventFromNull_Parms, ReturnValue), Z_Construct_UScriptStruct_FFirebaseVariant, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVariantLibrary_FromNull_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVariantLibrary_FromNull_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVariantLibrary_FromNull_Statics::Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "Firebase|Misc|Variant" },
		{ "CompactNodeTitle", "->" },
		{ "ModuleRelativePath", "Public/FirebaseSdk/FirebaseVariant.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVariantLibrary_FromNull_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVariantLibrary, nullptr, "FromNull", nullptr, nullptr, sizeof(VariantLibrary_eventFromNull_Parms), Z_Construct_UFunction_UVariantLibrary_FromNull_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVariantLibrary_FromNull_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVariantLibrary_FromNull_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVariantLibrary_FromNull_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVariantLibrary_FromNull()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVariantLibrary_FromNull_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVariantLibrary_FromString_Statics
	{
		struct VariantLibrary_eventFromString_Parms
		{
			FString Value;
			FFirebaseVariant ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVariantLibrary_FromString_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVariantLibrary_FromString_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VariantLibrary_eventFromString_Parms, Value), METADATA_PARAMS(Z_Construct_UFunction_UVariantLibrary_FromString_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVariantLibrary_FromString_Statics::NewProp_Value_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVariantLibrary_FromString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VariantLibrary_eventFromString_Parms, ReturnValue), Z_Construct_UScriptStruct_FFirebaseVariant, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVariantLibrary_FromString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVariantLibrary_FromString_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVariantLibrary_FromString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVariantLibrary_FromString_Statics::Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "Firebase|Misc|Variant" },
		{ "CompactNodeTitle", "->" },
		{ "ModuleRelativePath", "Public/FirebaseSdk/FirebaseVariant.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVariantLibrary_FromString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVariantLibrary, nullptr, "FromString", nullptr, nullptr, sizeof(VariantLibrary_eventFromString_Parms), Z_Construct_UFunction_UVariantLibrary_FromString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVariantLibrary_FromString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVariantLibrary_FromString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVariantLibrary_FromString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVariantLibrary_FromString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVariantLibrary_FromString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVariantLibrary_FromStringMap_Statics
	{
		struct VariantLibrary_eventFromStringMap_Parms
		{
			TMap<FString,FFirebaseVariant> Value;
			FFirebaseVariant ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Value_ValueProp;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Value_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVariantLibrary_FromStringMap_Statics::NewProp_Value_ValueProp = { "Value", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FFirebaseVariant, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVariantLibrary_FromStringMap_Statics::NewProp_Value_Key_KeyProp = { "Value_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVariantLibrary_FromStringMap_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UVariantLibrary_FromStringMap_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VariantLibrary_eventFromStringMap_Parms, Value), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UVariantLibrary_FromStringMap_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVariantLibrary_FromStringMap_Statics::NewProp_Value_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVariantLibrary_FromStringMap_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VariantLibrary_eventFromStringMap_Parms, ReturnValue), Z_Construct_UScriptStruct_FFirebaseVariant, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVariantLibrary_FromStringMap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVariantLibrary_FromStringMap_Statics::NewProp_Value_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVariantLibrary_FromStringMap_Statics::NewProp_Value_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVariantLibrary_FromStringMap_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVariantLibrary_FromStringMap_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVariantLibrary_FromStringMap_Statics::Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "Firebase|Misc|Variant" },
		{ "CompactNodeTitle", "->" },
		{ "ModuleRelativePath", "Public/FirebaseSdk/FirebaseVariant.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVariantLibrary_FromStringMap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVariantLibrary, nullptr, "FromStringMap", nullptr, nullptr, sizeof(VariantLibrary_eventFromStringMap_Parms), Z_Construct_UFunction_UVariantLibrary_FromStringMap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVariantLibrary_FromStringMap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVariantLibrary_FromStringMap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVariantLibrary_FromStringMap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVariantLibrary_FromStringMap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVariantLibrary_FromStringMap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVariantLibrary_MakeVariantMap_Statics
	{
		struct VariantLibrary_eventMakeVariantMap_Parms
		{
			TMap<FFirebaseVariant,FFirebaseVariant> ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_ValueProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Key_KeyProp;
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVariantLibrary_MakeVariantMap_Statics::NewProp_ReturnValue_ValueProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FFirebaseVariant, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVariantLibrary_MakeVariantMap_Statics::NewProp_ReturnValue_Key_KeyProp = { "ReturnValue_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FFirebaseVariant, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UVariantLibrary_MakeVariantMap_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VariantLibrary_eventMakeVariantMap_Parms, ReturnValue), EMapPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVariantLibrary_MakeVariantMap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVariantLibrary_MakeVariantMap_Statics::NewProp_ReturnValue_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVariantLibrary_MakeVariantMap_Statics::NewProp_ReturnValue_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVariantLibrary_MakeVariantMap_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVariantLibrary_MakeVariantMap_Statics::Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "Firebase|Misc|Variant" },
		{ "CompactNodeTitle", "MAKE" },
		{ "ModuleRelativePath", "Public/FirebaseSdk/FirebaseVariant.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVariantLibrary_MakeVariantMap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVariantLibrary, nullptr, "MakeVariantMap", nullptr, nullptr, sizeof(VariantLibrary_eventMakeVariantMap_Parms), Z_Construct_UFunction_UVariantLibrary_MakeVariantMap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVariantLibrary_MakeVariantMap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVariantLibrary_MakeVariantMap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVariantLibrary_MakeVariantMap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVariantLibrary_MakeVariantMap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVariantLibrary_MakeVariantMap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVariantLibrary_ServerTimestamp_Statics
	{
		struct VariantLibrary_eventServerTimestamp_Parms
		{
			FFirebaseVariant ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVariantLibrary_ServerTimestamp_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VariantLibrary_eventServerTimestamp_Parms, ReturnValue), Z_Construct_UScriptStruct_FFirebaseVariant, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVariantLibrary_ServerTimestamp_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVariantLibrary_ServerTimestamp_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVariantLibrary_ServerTimestamp_Statics::Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "Firebase|Misc|Variant" },
		{ "Comment", "/// Get a server-populated value corresponding to the current\n/// timestamp.\n///\n/// When inserting values into the database, you can use the special value\n/// ServerTimestamp() to have the server auto-populate the current timestamp, \n/// which is represented as milliseconds since the Unix epoch, into the field.\n///\n/// @returns A special value that tells the server to use the current timestamp.\n" },
		{ "CompactNodeTitle", "SERVER TIMESTAMP" },
		{ "ModuleRelativePath", "Public/FirebaseSdk/FirebaseVariant.h" },
		{ "ToolTip", "Get a server-populated value corresponding to the current\ntimestamp.\n\nWhen inserting values into the database, you can use the special value\nServerTimestamp() to have the server auto-populate the current timestamp,\nwhich is represented as milliseconds since the Unix epoch, into the field.\n\n@returns A special value that tells the server to use the current timestamp." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVariantLibrary_ServerTimestamp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVariantLibrary, nullptr, "ServerTimestamp", nullptr, nullptr, sizeof(VariantLibrary_eventServerTimestamp_Parms), Z_Construct_UFunction_UVariantLibrary_ServerTimestamp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVariantLibrary_ServerTimestamp_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVariantLibrary_ServerTimestamp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVariantLibrary_ServerTimestamp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVariantLibrary_ServerTimestamp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVariantLibrary_ServerTimestamp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVariantLibrary_ToArray_Statics
	{
		struct VariantLibrary_eventToArray_Parms
		{
			FFirebaseVariant Value;
			TArray<FFirebaseVariant> ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVariantLibrary_ToArray_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVariantLibrary_ToArray_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VariantLibrary_eventToArray_Parms, Value), Z_Construct_UScriptStruct_FFirebaseVariant, METADATA_PARAMS(Z_Construct_UFunction_UVariantLibrary_ToArray_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVariantLibrary_ToArray_Statics::NewProp_Value_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVariantLibrary_ToArray_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FFirebaseVariant, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVariantLibrary_ToArray_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VariantLibrary_eventToArray_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVariantLibrary_ToArray_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVariantLibrary_ToArray_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVariantLibrary_ToArray_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVariantLibrary_ToArray_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVariantLibrary_ToArray_Statics::Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "Firebase|Misc|Variant" },
		{ "CompactNodeTitle", "->" },
		{ "ModuleRelativePath", "Public/FirebaseSdk/FirebaseVariant.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVariantLibrary_ToArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVariantLibrary, nullptr, "ToArray", nullptr, nullptr, sizeof(VariantLibrary_eventToArray_Parms), Z_Construct_UFunction_UVariantLibrary_ToArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVariantLibrary_ToArray_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVariantLibrary_ToArray_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVariantLibrary_ToArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVariantLibrary_ToArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVariantLibrary_ToArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVariantLibrary_ToBinary_Statics
	{
		struct VariantLibrary_eventToBinary_Parms
		{
			FFirebaseVariant Value;
			TArray<uint8> ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVariantLibrary_ToBinary_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVariantLibrary_ToBinary_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VariantLibrary_eventToBinary_Parms, Value), Z_Construct_UScriptStruct_FFirebaseVariant, METADATA_PARAMS(Z_Construct_UFunction_UVariantLibrary_ToBinary_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVariantLibrary_ToBinary_Statics::NewProp_Value_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVariantLibrary_ToBinary_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVariantLibrary_ToBinary_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VariantLibrary_eventToBinary_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVariantLibrary_ToBinary_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVariantLibrary_ToBinary_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVariantLibrary_ToBinary_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVariantLibrary_ToBinary_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVariantLibrary_ToBinary_Statics::Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "Firebase|Misc|Variant" },
		{ "CompactNodeTitle", "->" },
		{ "ModuleRelativePath", "Public/FirebaseSdk/FirebaseVariant.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVariantLibrary_ToBinary_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVariantLibrary, nullptr, "ToBinary", nullptr, nullptr, sizeof(VariantLibrary_eventToBinary_Parms), Z_Construct_UFunction_UVariantLibrary_ToBinary_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVariantLibrary_ToBinary_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVariantLibrary_ToBinary_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVariantLibrary_ToBinary_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVariantLibrary_ToBinary()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVariantLibrary_ToBinary_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVariantLibrary_ToBool_Statics
	{
		struct VariantLibrary_eventToBool_Parms
		{
			FFirebaseVariant Value;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Value;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVariantLibrary_ToBool_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVariantLibrary_ToBool_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VariantLibrary_eventToBool_Parms, Value), Z_Construct_UScriptStruct_FFirebaseVariant, METADATA_PARAMS(Z_Construct_UFunction_UVariantLibrary_ToBool_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVariantLibrary_ToBool_Statics::NewProp_Value_MetaData)) };
	void Z_Construct_UFunction_UVariantLibrary_ToBool_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VariantLibrary_eventToBool_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVariantLibrary_ToBool_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VariantLibrary_eventToBool_Parms), &Z_Construct_UFunction_UVariantLibrary_ToBool_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVariantLibrary_ToBool_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVariantLibrary_ToBool_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVariantLibrary_ToBool_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVariantLibrary_ToBool_Statics::Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "Firebase|Misc|Variant" },
		{ "CompactNodeTitle", "->" },
		{ "ModuleRelativePath", "Public/FirebaseSdk/FirebaseVariant.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVariantLibrary_ToBool_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVariantLibrary, nullptr, "ToBool", nullptr, nullptr, sizeof(VariantLibrary_eventToBool_Parms), Z_Construct_UFunction_UVariantLibrary_ToBool_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVariantLibrary_ToBool_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVariantLibrary_ToBool_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVariantLibrary_ToBool_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVariantLibrary_ToBool()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVariantLibrary_ToBool_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVariantLibrary_ToFloat_Statics
	{
		struct VariantLibrary_eventToFloat_Parms
		{
			FFirebaseVariant Value;
			float ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVariantLibrary_ToFloat_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVariantLibrary_ToFloat_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VariantLibrary_eventToFloat_Parms, Value), Z_Construct_UScriptStruct_FFirebaseVariant, METADATA_PARAMS(Z_Construct_UFunction_UVariantLibrary_ToFloat_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVariantLibrary_ToFloat_Statics::NewProp_Value_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVariantLibrary_ToFloat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VariantLibrary_eventToFloat_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVariantLibrary_ToFloat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVariantLibrary_ToFloat_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVariantLibrary_ToFloat_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVariantLibrary_ToFloat_Statics::Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "Firebase|Misc|Variant" },
		{ "CompactNodeTitle", "->" },
		{ "ModuleRelativePath", "Public/FirebaseSdk/FirebaseVariant.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVariantLibrary_ToFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVariantLibrary, nullptr, "ToFloat", nullptr, nullptr, sizeof(VariantLibrary_eventToFloat_Parms), Z_Construct_UFunction_UVariantLibrary_ToFloat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVariantLibrary_ToFloat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVariantLibrary_ToFloat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVariantLibrary_ToFloat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVariantLibrary_ToFloat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVariantLibrary_ToFloat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVariantLibrary_ToInt32_Statics
	{
		struct VariantLibrary_eventToInt32_Parms
		{
			FFirebaseVariant Value;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVariantLibrary_ToInt32_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVariantLibrary_ToInt32_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VariantLibrary_eventToInt32_Parms, Value), Z_Construct_UScriptStruct_FFirebaseVariant, METADATA_PARAMS(Z_Construct_UFunction_UVariantLibrary_ToInt32_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVariantLibrary_ToInt32_Statics::NewProp_Value_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVariantLibrary_ToInt32_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VariantLibrary_eventToInt32_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVariantLibrary_ToInt32_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVariantLibrary_ToInt32_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVariantLibrary_ToInt32_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVariantLibrary_ToInt32_Statics::Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "Firebase|Misc|Variant" },
		{ "CompactNodeTitle", "->" },
		{ "ModuleRelativePath", "Public/FirebaseSdk/FirebaseVariant.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVariantLibrary_ToInt32_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVariantLibrary, nullptr, "ToInt32", nullptr, nullptr, sizeof(VariantLibrary_eventToInt32_Parms), Z_Construct_UFunction_UVariantLibrary_ToInt32_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVariantLibrary_ToInt32_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVariantLibrary_ToInt32_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVariantLibrary_ToInt32_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVariantLibrary_ToInt32()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVariantLibrary_ToInt32_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVariantLibrary_ToInt64_Statics
	{
		struct VariantLibrary_eventToInt64_Parms
		{
			FFirebaseVariant Value;
			int64 ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVariantLibrary_ToInt64_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVariantLibrary_ToInt64_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VariantLibrary_eventToInt64_Parms, Value), Z_Construct_UScriptStruct_FFirebaseVariant, METADATA_PARAMS(Z_Construct_UFunction_UVariantLibrary_ToInt64_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVariantLibrary_ToInt64_Statics::NewProp_Value_MetaData)) };
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UVariantLibrary_ToInt64_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VariantLibrary_eventToInt64_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVariantLibrary_ToInt64_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVariantLibrary_ToInt64_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVariantLibrary_ToInt64_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVariantLibrary_ToInt64_Statics::Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "Firebase|Misc|Variant" },
		{ "CompactNodeTitle", "->" },
		{ "ModuleRelativePath", "Public/FirebaseSdk/FirebaseVariant.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVariantLibrary_ToInt64_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVariantLibrary, nullptr, "ToInt64", nullptr, nullptr, sizeof(VariantLibrary_eventToInt64_Parms), Z_Construct_UFunction_UVariantLibrary_ToInt64_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVariantLibrary_ToInt64_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVariantLibrary_ToInt64_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVariantLibrary_ToInt64_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVariantLibrary_ToInt64()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVariantLibrary_ToInt64_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVariantLibrary_ToMap_Statics
	{
		struct VariantLibrary_eventToMap_Parms
		{
			FFirebaseVariant Value;
			TMap<FFirebaseVariant,FFirebaseVariant> ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_ValueProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Key_KeyProp;
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVariantLibrary_ToMap_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVariantLibrary_ToMap_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VariantLibrary_eventToMap_Parms, Value), Z_Construct_UScriptStruct_FFirebaseVariant, METADATA_PARAMS(Z_Construct_UFunction_UVariantLibrary_ToMap_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVariantLibrary_ToMap_Statics::NewProp_Value_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVariantLibrary_ToMap_Statics::NewProp_ReturnValue_ValueProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FFirebaseVariant, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVariantLibrary_ToMap_Statics::NewProp_ReturnValue_Key_KeyProp = { "ReturnValue_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FFirebaseVariant, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UVariantLibrary_ToMap_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VariantLibrary_eventToMap_Parms, ReturnValue), EMapPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVariantLibrary_ToMap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVariantLibrary_ToMap_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVariantLibrary_ToMap_Statics::NewProp_ReturnValue_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVariantLibrary_ToMap_Statics::NewProp_ReturnValue_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVariantLibrary_ToMap_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVariantLibrary_ToMap_Statics::Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "Firebase|Misc|Variant" },
		{ "CompactNodeTitle", "->" },
		{ "ModuleRelativePath", "Public/FirebaseSdk/FirebaseVariant.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVariantLibrary_ToMap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVariantLibrary, nullptr, "ToMap", nullptr, nullptr, sizeof(VariantLibrary_eventToMap_Parms), Z_Construct_UFunction_UVariantLibrary_ToMap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVariantLibrary_ToMap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVariantLibrary_ToMap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVariantLibrary_ToMap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVariantLibrary_ToMap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVariantLibrary_ToMap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVariantLibrary_ToString_Statics
	{
		struct VariantLibrary_eventToString_Parms
		{
			FFirebaseVariant Value;
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVariantLibrary_ToString_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVariantLibrary_ToString_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VariantLibrary_eventToString_Parms, Value), Z_Construct_UScriptStruct_FFirebaseVariant, METADATA_PARAMS(Z_Construct_UFunction_UVariantLibrary_ToString_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVariantLibrary_ToString_Statics::NewProp_Value_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVariantLibrary_ToString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VariantLibrary_eventToString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVariantLibrary_ToString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVariantLibrary_ToString_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVariantLibrary_ToString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVariantLibrary_ToString_Statics::Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "Firebase|Misc|Variant" },
		{ "CompactNodeTitle", "->" },
		{ "ModuleRelativePath", "Public/FirebaseSdk/FirebaseVariant.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVariantLibrary_ToString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVariantLibrary, nullptr, "ToString", nullptr, nullptr, sizeof(VariantLibrary_eventToString_Parms), Z_Construct_UFunction_UVariantLibrary_ToString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVariantLibrary_ToString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVariantLibrary_ToString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVariantLibrary_ToString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVariantLibrary_ToString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVariantLibrary_ToString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UVariantLibrary_NoRegister()
	{
		return UVariantLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UVariantLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVariantLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_FirebaseFeatures,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UVariantLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UVariantLibrary_FromArray, "FromArray" }, // 862078223
		{ &Z_Construct_UFunction_UVariantLibrary_FromBool, "FromBool" }, // 351781929
		{ &Z_Construct_UFunction_UVariantLibrary_FromFloat, "FromFloat" }, // 469427587
		{ &Z_Construct_UFunction_UVariantLibrary_FromInt32, "FromInt32" }, // 4214600863
		{ &Z_Construct_UFunction_UVariantLibrary_FromInt64, "FromInt64" }, // 1090168554
		{ &Z_Construct_UFunction_UVariantLibrary_FromMap, "FromMap" }, // 762595755
		{ &Z_Construct_UFunction_UVariantLibrary_FromNull, "FromNull" }, // 3284025165
		{ &Z_Construct_UFunction_UVariantLibrary_FromString, "FromString" }, // 1205914271
		{ &Z_Construct_UFunction_UVariantLibrary_FromStringMap, "FromStringMap" }, // 2674101270
		{ &Z_Construct_UFunction_UVariantLibrary_MakeVariantMap, "MakeVariantMap" }, // 453523635
		{ &Z_Construct_UFunction_UVariantLibrary_ServerTimestamp, "ServerTimestamp" }, // 2440597056
		{ &Z_Construct_UFunction_UVariantLibrary_ToArray, "ToArray" }, // 3044215231
		{ &Z_Construct_UFunction_UVariantLibrary_ToBinary, "ToBinary" }, // 3873735459
		{ &Z_Construct_UFunction_UVariantLibrary_ToBool, "ToBool" }, // 250415373
		{ &Z_Construct_UFunction_UVariantLibrary_ToFloat, "ToFloat" }, // 661815162
		{ &Z_Construct_UFunction_UVariantLibrary_ToInt32, "ToInt32" }, // 2179383036
		{ &Z_Construct_UFunction_UVariantLibrary_ToInt64, "ToInt64" }, // 1792558354
		{ &Z_Construct_UFunction_UVariantLibrary_ToMap, "ToMap" }, // 2445790783
		{ &Z_Construct_UFunction_UVariantLibrary_ToString, "ToString" }, // 3783067044
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVariantLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *  Not exported, meant for Blueprints.\n **/" },
		{ "IncludePath", "FirebaseSdk/FirebaseVariant.h" },
		{ "ModuleRelativePath", "Public/FirebaseSdk/FirebaseVariant.h" },
		{ "ToolTip", "Not exported, meant for Blueprints." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVariantLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVariantLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVariantLibrary_Statics::ClassParams = {
		&UVariantLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UVariantLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVariantLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVariantLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVariantLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVariantLibrary, 3227275042);
	template<> FIREBASEFEATURES_API UClass* StaticClass<UVariantLibrary>()
	{
		return UVariantLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVariantLibrary(Z_Construct_UClass_UVariantLibrary, &UVariantLibrary::StaticClass, TEXT("/Script/FirebaseFeatures"), TEXT("UVariantLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVariantLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
