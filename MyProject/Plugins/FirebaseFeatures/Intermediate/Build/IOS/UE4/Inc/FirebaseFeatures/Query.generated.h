// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EFirestoreError : uint8;
struct FFirestoreDocumentSnapshot;
struct FFirestoreFieldValue;
class UFirestoreQuery;
struct FFirestoreFieldPath;
enum class EFirestoreQueryDirection : uint8;
#ifdef FIREBASEFEATURES_Query_generated_h
#error "Query.generated.h already included, missing '#pragma once' in Query.h"
#endif
#define FIREBASEFEATURES_Query_generated_h

#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Public_Firestore_Query_h_31_DELEGATE \
struct _Script_FirebaseFeatures_eventQuerySnapshotListener_Parms \
{ \
	EFirestoreError Error; \
	TArray<FFirestoreDocumentSnapshot> DocumentSnapshots; \
}; \
static inline void FQuerySnapshotListener_DelegateWrapper(const FScriptDelegate& QuerySnapshotListener, const EFirestoreError Error, TArray<FFirestoreDocumentSnapshot> const& DocumentSnapshots) \
{ \
	_Script_FirebaseFeatures_eventQuerySnapshotListener_Parms Parms; \
	Parms.Error=Error; \
	Parms.DocumentSnapshots=DocumentSnapshots; \
	QuerySnapshotListener.ProcessDelegate<UObject>(&Parms); \
}


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Public_Firestore_Query_h_43_SPARSE_DATA
#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Public_Firestore_Query_h_43_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execEndAtValues); \
	DECLARE_FUNCTION(execEndAt); \
	DECLARE_FUNCTION(execEndBeforeFieldValue); \
	DECLARE_FUNCTION(execEndBefore); \
	DECLARE_FUNCTION(execStartAfterFieldValue); \
	DECLARE_FUNCTION(execStartAfter); \
	DECLARE_FUNCTION(execStartAtFieldValue); \
	DECLARE_FUNCTION(execStartAt); \
	DECLARE_FUNCTION(execLimitToLast); \
	DECLARE_FUNCTION(execLimit); \
	DECLARE_FUNCTION(execOrderByFieldPath); \
	DECLARE_FUNCTION(execOrderBy); \
	DECLARE_FUNCTION(execWhereInFieldPath); \
	DECLARE_FUNCTION(execWhereIn); \
	DECLARE_FUNCTION(execWhereArrayContainsAnyFielPath); \
	DECLARE_FUNCTION(execWhereArrayContainsAny); \
	DECLARE_FUNCTION(execWhereArrayContainsFieldPath); \
	DECLARE_FUNCTION(execWhereArrayContains); \
	DECLARE_FUNCTION(execWhereGreaterThanOrEqualToFielPath); \
	DECLARE_FUNCTION(execWhereGreaterThanOrEqualTo); \
	DECLARE_FUNCTION(execWhereGreaterThanFieldPath); \
	DECLARE_FUNCTION(execWhereGreaterThan); \
	DECLARE_FUNCTION(execWhereLessThanOrEqualToFieldPath); \
	DECLARE_FUNCTION(execWhereLessThanOrEqualTo); \
	DECLARE_FUNCTION(execWhereLessThanFieldPath); \
	DECLARE_FUNCTION(execWhereLessThan); \
	DECLARE_FUNCTION(execWhereEqualToFieldPath); \
	DECLARE_FUNCTION(execWhereEqualTo);


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Public_Firestore_Query_h_43_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execEndAtValues); \
	DECLARE_FUNCTION(execEndAt); \
	DECLARE_FUNCTION(execEndBeforeFieldValue); \
	DECLARE_FUNCTION(execEndBefore); \
	DECLARE_FUNCTION(execStartAfterFieldValue); \
	DECLARE_FUNCTION(execStartAfter); \
	DECLARE_FUNCTION(execStartAtFieldValue); \
	DECLARE_FUNCTION(execStartAt); \
	DECLARE_FUNCTION(execLimitToLast); \
	DECLARE_FUNCTION(execLimit); \
	DECLARE_FUNCTION(execOrderByFieldPath); \
	DECLARE_FUNCTION(execOrderBy); \
	DECLARE_FUNCTION(execWhereInFieldPath); \
	DECLARE_FUNCTION(execWhereIn); \
	DECLARE_FUNCTION(execWhereArrayContainsAnyFielPath); \
	DECLARE_FUNCTION(execWhereArrayContainsAny); \
	DECLARE_FUNCTION(execWhereArrayContainsFieldPath); \
	DECLARE_FUNCTION(execWhereArrayContains); \
	DECLARE_FUNCTION(execWhereGreaterThanOrEqualToFielPath); \
	DECLARE_FUNCTION(execWhereGreaterThanOrEqualTo); \
	DECLARE_FUNCTION(execWhereGreaterThanFieldPath); \
	DECLARE_FUNCTION(execWhereGreaterThan); \
	DECLARE_FUNCTION(execWhereLessThanOrEqualToFieldPath); \
	DECLARE_FUNCTION(execWhereLessThanOrEqualTo); \
	DECLARE_FUNCTION(execWhereLessThanFieldPath); \
	DECLARE_FUNCTION(execWhereLessThan); \
	DECLARE_FUNCTION(execWhereEqualToFieldPath); \
	DECLARE_FUNCTION(execWhereEqualTo);


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Public_Firestore_Query_h_43_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFirestoreQuery(); \
	friend struct Z_Construct_UClass_UFirestoreQuery_Statics; \
public: \
	DECLARE_CLASS(UFirestoreQuery, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FirebaseFeatures"), NO_API) \
	DECLARE_SERIALIZER(UFirestoreQuery)


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Public_Firestore_Query_h_43_INCLASS \
private: \
	static void StaticRegisterNativesUFirestoreQuery(); \
	friend struct Z_Construct_UClass_UFirestoreQuery_Statics; \
public: \
	DECLARE_CLASS(UFirestoreQuery, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FirebaseFeatures"), NO_API) \
	DECLARE_SERIALIZER(UFirestoreQuery)


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Public_Firestore_Query_h_43_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFirestoreQuery(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFirestoreQuery) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFirestoreQuery); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFirestoreQuery); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFirestoreQuery(UFirestoreQuery&&); \
	NO_API UFirestoreQuery(const UFirestoreQuery&); \
public:


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Public_Firestore_Query_h_43_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFirestoreQuery(UFirestoreQuery&&); \
	NO_API UFirestoreQuery(const UFirestoreQuery&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFirestoreQuery); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFirestoreQuery); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UFirestoreQuery)


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Public_Firestore_Query_h_43_PRIVATE_PROPERTY_OFFSET
#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Public_Firestore_Query_h_40_PROLOG
#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Public_Firestore_Query_h_43_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Public_Firestore_Query_h_43_PRIVATE_PROPERTY_OFFSET \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Public_Firestore_Query_h_43_SPARSE_DATA \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Public_Firestore_Query_h_43_RPC_WRAPPERS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Public_Firestore_Query_h_43_INCLASS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Public_Firestore_Query_h_43_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Public_Firestore_Query_h_43_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Public_Firestore_Query_h_43_PRIVATE_PROPERTY_OFFSET \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Public_Firestore_Query_h_43_SPARSE_DATA \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Public_Firestore_Query_h_43_RPC_WRAPPERS_NO_PURE_DECLS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Public_Firestore_Query_h_43_INCLASS_NO_PURE_DECLS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Public_Firestore_Query_h_43_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FIREBASEFEATURES_API UClass* StaticClass<class UFirestoreQuery>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Public_Firestore_Query_h


#define FOREACH_ENUM_EFIRESTOREQUERYDIRECTION(op) \
	op(EFirestoreQueryDirection::Ascending) \
	op(EFirestoreQueryDirection::Descending) 

enum class EFirestoreQueryDirection : uint8;
template<> FIREBASEFEATURES_API UEnum* StaticEnum<EFirestoreQueryDirection>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
