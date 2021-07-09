// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FIREBASEFEATURES_DocumentSnapshot_generated_h
#error "DocumentSnapshot.generated.h already included, missing '#pragma once' in DocumentSnapshot.h"
#endif
#define FIREBASEFEATURES_DocumentSnapshot_generated_h

#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Public_Firestore_DocumentSnapshot_h_77_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FFirestoreDocumentSnapshot_Statics; \
	static class UScriptStruct* StaticStruct();


template<> FIREBASEFEATURES_API UScriptStruct* StaticStruct<struct FFirestoreDocumentSnapshot>();

#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Public_Firestore_DocumentSnapshot_h_54_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FFirestoreSnapshotMetadata_Statics; \
	static class UScriptStruct* StaticStruct();


template<> FIREBASEFEATURES_API UScriptStruct* StaticStruct<struct FFirestoreSnapshotMetadata>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Public_Firestore_DocumentSnapshot_h


#define FOREACH_ENUM_EFIRESTORESERVERTIMESTAMPBEHAVIOR(op) \
	op(EFirestoreServerTimestampBehavior::Estimate) \
	op(EFirestoreServerTimestampBehavior::Previous) \
	op(EFirestoreServerTimestampBehavior::Default) 

enum class EFirestoreServerTimestampBehavior : uint8;
template<> FIREBASEFEATURES_API UEnum* StaticEnum<EFirestoreServerTimestampBehavior>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
