// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EDatabaseLogLevel : uint8;
class UDatabaseReference;
class UDatabase;
#ifdef FIREBASEFEATURES_Database_generated_h
#error "Database.generated.h already included, missing '#pragma once' in Database.h"
#endif
#define FIREBASEFEATURES_Database_generated_h

#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Public_Database_Database_h_81_SPARSE_DATA
#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Public_Database_Database_h_81_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetLogLevel); \
	DECLARE_FUNCTION(execSetPersistenceEnabled); \
	DECLARE_FUNCTION(execPurgeOutstandingWrites); \
	DECLARE_FUNCTION(execGoOnline); \
	DECLARE_FUNCTION(execGoOffline); \
	DECLARE_FUNCTION(execGetUrl); \
	DECLARE_FUNCTION(execGetReferenceFromUrl); \
	DECLARE_FUNCTION(execGetReferenceFromPath); \
	DECLARE_FUNCTION(execGetReference); \
	DECLARE_FUNCTION(execGetInstanceFromUrl); \
	DECLARE_FUNCTION(execGetInstance);


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Public_Database_Database_h_81_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetLogLevel); \
	DECLARE_FUNCTION(execSetPersistenceEnabled); \
	DECLARE_FUNCTION(execPurgeOutstandingWrites); \
	DECLARE_FUNCTION(execGoOnline); \
	DECLARE_FUNCTION(execGoOffline); \
	DECLARE_FUNCTION(execGetUrl); \
	DECLARE_FUNCTION(execGetReferenceFromUrl); \
	DECLARE_FUNCTION(execGetReferenceFromPath); \
	DECLARE_FUNCTION(execGetReference); \
	DECLARE_FUNCTION(execGetInstanceFromUrl); \
	DECLARE_FUNCTION(execGetInstance);


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Public_Database_Database_h_81_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDatabase(); \
	friend struct Z_Construct_UClass_UDatabase_Statics; \
public: \
	DECLARE_CLASS(UDatabase, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FirebaseFeatures"), NO_API) \
	DECLARE_SERIALIZER(UDatabase)


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Public_Database_Database_h_81_INCLASS \
private: \
	static void StaticRegisterNativesUDatabase(); \
	friend struct Z_Construct_UClass_UDatabase_Statics; \
public: \
	DECLARE_CLASS(UDatabase, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FirebaseFeatures"), NO_API) \
	DECLARE_SERIALIZER(UDatabase)


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Public_Database_Database_h_81_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDatabase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDatabase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDatabase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDatabase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDatabase(UDatabase&&); \
	NO_API UDatabase(const UDatabase&); \
public:


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Public_Database_Database_h_81_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDatabase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDatabase(UDatabase&&); \
	NO_API UDatabase(const UDatabase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDatabase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDatabase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDatabase)


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Public_Database_Database_h_81_PRIVATE_PROPERTY_OFFSET
#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Public_Database_Database_h_78_PROLOG
#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Public_Database_Database_h_81_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Public_Database_Database_h_81_PRIVATE_PROPERTY_OFFSET \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Public_Database_Database_h_81_SPARSE_DATA \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Public_Database_Database_h_81_RPC_WRAPPERS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Public_Database_Database_h_81_INCLASS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Public_Database_Database_h_81_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Public_Database_Database_h_81_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Public_Database_Database_h_81_PRIVATE_PROPERTY_OFFSET \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Public_Database_Database_h_81_SPARSE_DATA \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Public_Database_Database_h_81_RPC_WRAPPERS_NO_PURE_DECLS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Public_Database_Database_h_81_INCLASS_NO_PURE_DECLS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Public_Database_Database_h_81_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FIREBASEFEATURES_API UClass* StaticClass<class UDatabase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Public_Database_Database_h


#define FOREACH_ENUM_EFIREBASEDATABASEERROR(op) \
	op(EFirebaseDatabaseError::None) \
	op(EFirebaseDatabaseError::Disconnected) \
	op(EFirebaseDatabaseError::ExpiredToken) \
	op(EFirebaseDatabaseError::InvalidToken) \
	op(EFirebaseDatabaseError::MaxRetries) \
	op(EFirebaseDatabaseError::NetworkError) \
	op(EFirebaseDatabaseError::OperationFailed) \
	op(EFirebaseDatabaseError::OverriddenBySet) \
	op(EFirebaseDatabaseError::PermissionDenied) \
	op(EFirebaseDatabaseError::Unavailable) \
	op(EFirebaseDatabaseError::UnknownError) \
	op(EFirebaseDatabaseError::WriteCanceled) \
	op(EFirebaseDatabaseError::InvalidVariantType) \
	op(EFirebaseDatabaseError::ConflictingOperationInProgress) \
	op(EFirebaseDatabaseError::TransactionAbortedByUser) 

enum class EFirebaseDatabaseError : uint8;
template<> FIREBASEFEATURES_API UEnum* StaticEnum<EFirebaseDatabaseError>();

#define FOREACH_ENUM_EDATABASELOGLEVEL(op) \
	op(EDatabaseLogLevel::Verbose) \
	op(EDatabaseLogLevel::Debug) \
	op(EDatabaseLogLevel::Info) \
	op(EDatabaseLogLevel::Warning) \
	op(EDatabaseLogLevel::Error) \
	op(EDatabaseLogLevel::Assert) 

enum class EDatabaseLogLevel : uint8;
template<> FIREBASEFEATURES_API UEnum* StaticEnum<EDatabaseLogLevel>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
