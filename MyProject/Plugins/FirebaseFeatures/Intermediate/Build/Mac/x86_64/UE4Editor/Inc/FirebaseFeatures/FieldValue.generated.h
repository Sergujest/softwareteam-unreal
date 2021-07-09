// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FIREBASEFEATURES_FieldValue_generated_h
#error "FieldValue.generated.h already included, missing '#pragma once' in FieldValue.h"
#endif
#define FIREBASEFEATURES_FieldValue_generated_h

#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Public_Firestore_FieldValue_h_124_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FFirestoreFieldValue_Statics; \
	static class UScriptStruct* StaticStruct();


template<> FIREBASEFEATURES_API UScriptStruct* StaticStruct<struct FFirestoreFieldValue>();

#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Public_Firestore_FieldValue_h_98_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FFirestoreGeoPoint_Statics; \
	static class UScriptStruct* StaticStruct();


template<> FIREBASEFEATURES_API UScriptStruct* StaticStruct<struct FFirestoreGeoPoint>();

#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Public_Firestore_FieldValue_h_52_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FFirestoreTimestamp_Statics; \
	static class UScriptStruct* StaticStruct();


template<> FIREBASEFEATURES_API UScriptStruct* StaticStruct<struct FFirestoreTimestamp>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Public_Firestore_FieldValue_h


#define FOREACH_ENUM_EFIRESTOREFIELDVALUETYPE(op) \
	op(EFirestoreFieldValueType::Null) \
	op(EFirestoreFieldValueType::Boolean) \
	op(EFirestoreFieldValueType::Integer) \
	op(EFirestoreFieldValueType::Double) \
	op(EFirestoreFieldValueType::Timestamp) \
	op(EFirestoreFieldValueType::String) \
	op(EFirestoreFieldValueType::Blob) \
	op(EFirestoreFieldValueType::Reference) \
	op(EFirestoreFieldValueType::GeoPoint) \
	op(EFirestoreFieldValueType::Array) \
	op(EFirestoreFieldValueType::Map) 

enum class EFirestoreFieldValueType : uint8;
template<> FIREBASEFEATURES_API UEnum* StaticEnum<EFirestoreFieldValueType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
