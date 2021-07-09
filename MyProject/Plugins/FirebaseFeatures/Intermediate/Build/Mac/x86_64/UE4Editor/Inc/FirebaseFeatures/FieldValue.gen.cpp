// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FirebaseFeatures/Public/Firestore/FieldValue.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFieldValue() {}
// Cross Module References
	FIREBASEFEATURES_API UEnum* Z_Construct_UEnum_FirebaseFeatures_EFirestoreFieldValueType();
	UPackage* Z_Construct_UPackage__Script_FirebaseFeatures();
	FIREBASEFEATURES_API UScriptStruct* Z_Construct_UScriptStruct_FFirestoreFieldValue();
	FIREBASEFEATURES_API UScriptStruct* Z_Construct_UScriptStruct_FFirestoreGeoPoint();
	FIREBASEFEATURES_API UScriptStruct* Z_Construct_UScriptStruct_FFirestoreTimestamp();
// End Cross Module References
	static UEnum* EFirestoreFieldValueType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_FirebaseFeatures_EFirestoreFieldValueType, Z_Construct_UPackage__Script_FirebaseFeatures(), TEXT("EFirestoreFieldValueType"));
		}
		return Singleton;
	}
	template<> FIREBASEFEATURES_API UEnum* StaticEnum<EFirestoreFieldValueType>()
	{
		return EFirestoreFieldValueType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EFirestoreFieldValueType(EFirestoreFieldValueType_StaticEnum, TEXT("/Script/FirebaseFeatures"), TEXT("EFirestoreFieldValueType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_FirebaseFeatures_EFirestoreFieldValueType_Hash() { return 4285401494U; }
	UEnum* Z_Construct_UEnum_FirebaseFeatures_EFirestoreFieldValueType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_FirebaseFeatures();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EFirestoreFieldValueType"), 0, Get_Z_Construct_UEnum_FirebaseFeatures_EFirestoreFieldValueType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EFirestoreFieldValueType::Null", (int64)EFirestoreFieldValueType::Null },
				{ "EFirestoreFieldValueType::Boolean", (int64)EFirestoreFieldValueType::Boolean },
				{ "EFirestoreFieldValueType::Integer", (int64)EFirestoreFieldValueType::Integer },
				{ "EFirestoreFieldValueType::Double", (int64)EFirestoreFieldValueType::Double },
				{ "EFirestoreFieldValueType::Timestamp", (int64)EFirestoreFieldValueType::Timestamp },
				{ "EFirestoreFieldValueType::String", (int64)EFirestoreFieldValueType::String },
				{ "EFirestoreFieldValueType::Blob", (int64)EFirestoreFieldValueType::Blob },
				{ "EFirestoreFieldValueType::Reference", (int64)EFirestoreFieldValueType::Reference },
				{ "EFirestoreFieldValueType::GeoPoint", (int64)EFirestoreFieldValueType::GeoPoint },
				{ "EFirestoreFieldValueType::Array", (int64)EFirestoreFieldValueType::Array },
				{ "EFirestoreFieldValueType::Map", (int64)EFirestoreFieldValueType::Map },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Array.Name", "EFirestoreFieldValueType::Array" },
				{ "Blob.Name", "EFirestoreFieldValueType::Blob" },
				{ "BlueprintType", "true" },
				{ "Boolean.Name", "EFirestoreFieldValueType::Boolean" },
				{ "Double.Name", "EFirestoreFieldValueType::Double" },
				{ "GeoPoint.Name", "EFirestoreFieldValueType::GeoPoint" },
				{ "Integer.Name", "EFirestoreFieldValueType::Integer" },
				{ "Map.Name", "EFirestoreFieldValueType::Map" },
				{ "ModuleRelativePath", "Public/Firestore/FieldValue.h" },
				{ "Null.Name", "EFirestoreFieldValueType::Null" },
				{ "Reference.Name", "EFirestoreFieldValueType::Reference" },
				{ "String.Name", "EFirestoreFieldValueType::String" },
				{ "Timestamp.Name", "EFirestoreFieldValueType::Timestamp" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_FirebaseFeatures,
				nullptr,
				"EFirestoreFieldValueType",
				"EFirestoreFieldValueType",
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
class UScriptStruct* FFirestoreFieldValue::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FIREBASEFEATURES_API uint32 Get_Z_Construct_UScriptStruct_FFirestoreFieldValue_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FFirestoreFieldValue, Z_Construct_UPackage__Script_FirebaseFeatures(), TEXT("FirestoreFieldValue"), sizeof(FFirestoreFieldValue), Get_Z_Construct_UScriptStruct_FFirestoreFieldValue_Hash());
	}
	return Singleton;
}
template<> FIREBASEFEATURES_API UScriptStruct* StaticStruct<FFirestoreFieldValue>()
{
	return FFirestoreFieldValue::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FFirestoreFieldValue(FFirestoreFieldValue::StaticStruct, TEXT("/Script/FirebaseFeatures"), TEXT("FirestoreFieldValue"), false, nullptr, nullptr);
static struct FScriptStruct_FirebaseFeatures_StaticRegisterNativesFFirestoreFieldValue
{
	FScriptStruct_FirebaseFeatures_StaticRegisterNativesFFirestoreFieldValue()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("FirestoreFieldValue")),new UScriptStruct::TCppStructOps<FFirestoreFieldValue>);
	}
} ScriptStruct_FirebaseFeatures_StaticRegisterNativesFFirestoreFieldValue;
	struct Z_Construct_UScriptStruct_FFirestoreFieldValue_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFirestoreFieldValue_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * A field value represents variant datatypes as stored by Firestore.\n *\n * FieldValue can be used when reading a particular field with\n * DocumentSnapshot::Get() or fields with DocumentSnapshot::GetData(). When\n * writing document fields with DocumentReference::Set() or\n * DocumentReference::Update(), it can also represent sentinel values in\n * addition to real data values.\n */" },
		{ "ModuleRelativePath", "Public/Firestore/FieldValue.h" },
		{ "ToolTip", "A field value represents variant datatypes as stored by Firestore.\n\nFieldValue can be used when reading a particular field with\nDocumentSnapshot::Get() or fields with DocumentSnapshot::GetData(). When\nwriting document fields with DocumentReference::Set() or\nDocumentReference::Update(), it can also represent sentinel values in\naddition to real data values." },
	};
#endif
	void* Z_Construct_UScriptStruct_FFirestoreFieldValue_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFirestoreFieldValue>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFirestoreFieldValue_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FirebaseFeatures,
		nullptr,
		&NewStructOps,
		"FirestoreFieldValue",
		sizeof(FFirestoreFieldValue),
		alignof(FFirestoreFieldValue),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFirestoreFieldValue_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFirestoreFieldValue_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFirestoreFieldValue()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FFirestoreFieldValue_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_FirebaseFeatures();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("FirestoreFieldValue"), sizeof(FFirestoreFieldValue), Get_Z_Construct_UScriptStruct_FFirestoreFieldValue_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FFirestoreFieldValue_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FFirestoreFieldValue_Hash() { return 4132416354U; }
class UScriptStruct* FFirestoreGeoPoint::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FIREBASEFEATURES_API uint32 Get_Z_Construct_UScriptStruct_FFirestoreGeoPoint_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FFirestoreGeoPoint, Z_Construct_UPackage__Script_FirebaseFeatures(), TEXT("FirestoreGeoPoint"), sizeof(FFirestoreGeoPoint), Get_Z_Construct_UScriptStruct_FFirestoreGeoPoint_Hash());
	}
	return Singleton;
}
template<> FIREBASEFEATURES_API UScriptStruct* StaticStruct<FFirestoreGeoPoint>()
{
	return FFirestoreGeoPoint::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FFirestoreGeoPoint(FFirestoreGeoPoint::StaticStruct, TEXT("/Script/FirebaseFeatures"), TEXT("FirestoreGeoPoint"), false, nullptr, nullptr);
static struct FScriptStruct_FirebaseFeatures_StaticRegisterNativesFFirestoreGeoPoint
{
	FScriptStruct_FirebaseFeatures_StaticRegisterNativesFFirestoreGeoPoint()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("FirestoreGeoPoint")),new UScriptStruct::TCppStructOps<FFirestoreGeoPoint>);
	}
} ScriptStruct_FirebaseFeatures_StaticRegisterNativesFFirestoreGeoPoint;
	struct Z_Construct_UScriptStruct_FFirestoreGeoPoint_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Latitude_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Latitude;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Longitude_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Longitude;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFirestoreGeoPoint_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * An immutable object representing a geographical point in Firestore. The point\n * is represented as a latitude/longitude pair.\n *\n * Latitude values are in the range of [-90, 90].\n * Longitude values are in the range of [-180, 180].\n */" },
		{ "ModuleRelativePath", "Public/Firestore/FieldValue.h" },
		{ "ToolTip", "An immutable object representing a geographical point in Firestore. The point\nis represented as a latitude/longitude pair.\n\nLatitude values are in the range of [-90, 90].\nLongitude values are in the range of [-180, 180]." },
	};
#endif
	void* Z_Construct_UScriptStruct_FFirestoreGeoPoint_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFirestoreGeoPoint>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFirestoreGeoPoint_Statics::NewProp_Latitude_MetaData[] = {
		{ "Category", "GeoPoint" },
		{ "Comment", "/** The latitude value of this `GeoPoint`. */" },
		{ "ModuleRelativePath", "Public/Firestore/FieldValue.h" },
		{ "ToolTip", "The latitude value of this `GeoPoint`." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFirestoreGeoPoint_Statics::NewProp_Latitude = { "Latitude", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFirestoreGeoPoint, Latitude), METADATA_PARAMS(Z_Construct_UScriptStruct_FFirestoreGeoPoint_Statics::NewProp_Latitude_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFirestoreGeoPoint_Statics::NewProp_Latitude_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFirestoreGeoPoint_Statics::NewProp_Longitude_MetaData[] = {
		{ "Category", "GeoPoint" },
		{ "Comment", "/** The latitude value of this `GeoPoint`. */" },
		{ "ModuleRelativePath", "Public/Firestore/FieldValue.h" },
		{ "ToolTip", "The latitude value of this `GeoPoint`." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFirestoreGeoPoint_Statics::NewProp_Longitude = { "Longitude", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFirestoreGeoPoint, Longitude), METADATA_PARAMS(Z_Construct_UScriptStruct_FFirestoreGeoPoint_Statics::NewProp_Longitude_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFirestoreGeoPoint_Statics::NewProp_Longitude_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFirestoreGeoPoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFirestoreGeoPoint_Statics::NewProp_Latitude,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFirestoreGeoPoint_Statics::NewProp_Longitude,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFirestoreGeoPoint_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FirebaseFeatures,
		nullptr,
		&NewStructOps,
		"FirestoreGeoPoint",
		sizeof(FFirestoreGeoPoint),
		alignof(FFirestoreGeoPoint),
		Z_Construct_UScriptStruct_FFirestoreGeoPoint_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFirestoreGeoPoint_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFirestoreGeoPoint_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFirestoreGeoPoint_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFirestoreGeoPoint()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FFirestoreGeoPoint_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_FirebaseFeatures();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("FirestoreGeoPoint"), sizeof(FFirestoreGeoPoint), Get_Z_Construct_UScriptStruct_FFirestoreGeoPoint_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FFirestoreGeoPoint_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FFirestoreGeoPoint_Hash() { return 18310869U; }
class UScriptStruct* FFirestoreTimestamp::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FIREBASEFEATURES_API uint32 Get_Z_Construct_UScriptStruct_FFirestoreTimestamp_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FFirestoreTimestamp, Z_Construct_UPackage__Script_FirebaseFeatures(), TEXT("FirestoreTimestamp"), sizeof(FFirestoreTimestamp), Get_Z_Construct_UScriptStruct_FFirestoreTimestamp_Hash());
	}
	return Singleton;
}
template<> FIREBASEFEATURES_API UScriptStruct* StaticStruct<FFirestoreTimestamp>()
{
	return FFirestoreTimestamp::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FFirestoreTimestamp(FFirestoreTimestamp::StaticStruct, TEXT("/Script/FirebaseFeatures"), TEXT("FirestoreTimestamp"), false, nullptr, nullptr);
static struct FScriptStruct_FirebaseFeatures_StaticRegisterNativesFFirestoreTimestamp
{
	FScriptStruct_FirebaseFeatures_StaticRegisterNativesFFirestoreTimestamp()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("FirestoreTimestamp")),new UScriptStruct::TCppStructOps<FFirestoreTimestamp>);
	}
} ScriptStruct_FirebaseFeatures_StaticRegisterNativesFFirestoreTimestamp;
	struct Z_Construct_UScriptStruct_FFirestoreTimestamp_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Seconds_MetaData[];
#endif
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_Seconds;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Nanoseconds_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Nanoseconds;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFirestoreTimestamp_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * A Timestamp represents a point in time independent of any time zone or\n * calendar, represented as seconds and fractions of seconds at nanosecond\n * resolution in UTC Epoch time. It is encoded using the Proleptic Gregorian\n * Calendar which extends the Gregorian calendar backwards to year one. It is\n * encoded assuming all minutes are 60 seconds long, i.e. leap seconds are\n * \"smeared\" so that no leap second table is needed for interpretation. Range is\n * from 0001-01-01T00:00:00Z to 9999-12-31T23:59:59.999999999Z.\n *\n * @see\n * https://github.com/google/protobuf/blob/master/src/google/protobuf/timestamp.proto\n */" },
		{ "ModuleRelativePath", "Public/Firestore/FieldValue.h" },
		{ "ToolTip", "A Timestamp represents a point in time independent of any time zone or\ncalendar, represented as seconds and fractions of seconds at nanosecond\nresolution in UTC Epoch time. It is encoded using the Proleptic Gregorian\nCalendar which extends the Gregorian calendar backwards to year one. It is\nencoded assuming all minutes are 60 seconds long, i.e. leap seconds are\n\"smeared\" so that no leap second table is needed for interpretation. Range is\nfrom 0001-01-01T00:00:00Z to 9999-12-31T23:59:59.999999999Z.\n\n@see\nhttps://github.com/google/protobuf/blob/master/src/google/protobuf/timestamp.proto" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFirestoreTimestamp_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFirestoreTimestamp>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFirestoreTimestamp_Statics::NewProp_Seconds_MetaData[] = {
		{ "Category", "Timestamp" },
		{ "Comment", "/**\n\x09 * The number of seconds of UTC time since Unix epoch 1970-01-01T00:00:00Z.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Firestore/FieldValue.h" },
		{ "ToolTip", "The number of seconds of UTC time since Unix epoch 1970-01-01T00:00:00Z." },
	};
#endif
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FFirestoreTimestamp_Statics::NewProp_Seconds = { "Seconds", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFirestoreTimestamp, Seconds), METADATA_PARAMS(Z_Construct_UScriptStruct_FFirestoreTimestamp_Statics::NewProp_Seconds_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFirestoreTimestamp_Statics::NewProp_Seconds_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFirestoreTimestamp_Statics::NewProp_Nanoseconds_MetaData[] = {
		{ "Category", "Timestamp" },
		{ "Comment", "/**\n\x09 * The non-negative fractions of a second at nanosecond resolution. Negative\n\x09 * second values with fractions still have non-negative nanoseconds values\n\x09 * that count forward in time.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Firestore/FieldValue.h" },
		{ "ToolTip", "The non-negative fractions of a second at nanosecond resolution. Negative\nsecond values with fractions still have non-negative nanoseconds values\nthat count forward in time." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFirestoreTimestamp_Statics::NewProp_Nanoseconds = { "Nanoseconds", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFirestoreTimestamp, Nanoseconds), METADATA_PARAMS(Z_Construct_UScriptStruct_FFirestoreTimestamp_Statics::NewProp_Nanoseconds_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFirestoreTimestamp_Statics::NewProp_Nanoseconds_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFirestoreTimestamp_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFirestoreTimestamp_Statics::NewProp_Seconds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFirestoreTimestamp_Statics::NewProp_Nanoseconds,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFirestoreTimestamp_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FirebaseFeatures,
		nullptr,
		&NewStructOps,
		"FirestoreTimestamp",
		sizeof(FFirestoreTimestamp),
		alignof(FFirestoreTimestamp),
		Z_Construct_UScriptStruct_FFirestoreTimestamp_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFirestoreTimestamp_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFirestoreTimestamp_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFirestoreTimestamp_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFirestoreTimestamp()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FFirestoreTimestamp_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_FirebaseFeatures();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("FirestoreTimestamp"), sizeof(FFirestoreTimestamp), Get_Z_Construct_UScriptStruct_FFirestoreTimestamp_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FFirestoreTimestamp_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FFirestoreTimestamp_Hash() { return 1940793425U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
