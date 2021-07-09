// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FFirestoreSettings;
class UFirestoreQuery;
class UFirestoreDocumentReference;
class UFirestoreCollectionReference;
#ifdef FIREBASEFEATURES_Firestore_generated_h
#error "Firestore.generated.h already included, missing '#pragma once' in Firestore.h"
#endif
#define FIREBASEFEATURES_Firestore_generated_h

#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Public_Firestore_Firestore_h_246_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FWriteBatch_Statics; \
	static class UScriptStruct* StaticStruct();


template<> FIREBASEFEATURES_API UScriptStruct* StaticStruct<struct FWriteBatch>();

#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Public_Firestore_Firestore_h_170_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FFirestoreTransaction_Statics; \
	static class UScriptStruct* StaticStruct();


template<> FIREBASEFEATURES_API UScriptStruct* StaticStruct<struct FFirestoreTransaction>();

#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Public_Firestore_Firestore_h_106_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FFirestoreSetOptions_Statics; \
	static class UScriptStruct* StaticStruct();


template<> FIREBASEFEATURES_API UScriptStruct* StaticStruct<struct FFirestoreSetOptions>();

#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Public_Firestore_Firestore_h_91_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FFirestoreSettings_Statics; \
	static class UScriptStruct* StaticStruct();


template<> FIREBASEFEATURES_API UScriptStruct* StaticStruct<struct FFirestoreSettings>();

#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Public_Firestore_Firestore_h_314_SPARSE_DATA
#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Public_Firestore_Firestore_h_314_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetSettings); \
	DECLARE_FUNCTION(execGetSettings); \
	DECLARE_FUNCTION(execCollectionGroup); \
	DECLARE_FUNCTION(execGetDocument); \
	DECLARE_FUNCTION(execGetCollection);


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Public_Firestore_Firestore_h_314_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetSettings); \
	DECLARE_FUNCTION(execGetSettings); \
	DECLARE_FUNCTION(execCollectionGroup); \
	DECLARE_FUNCTION(execGetDocument); \
	DECLARE_FUNCTION(execGetCollection);


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Public_Firestore_Firestore_h_314_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFirestore(); \
	friend struct Z_Construct_UClass_UFirestore_Statics; \
public: \
	DECLARE_CLASS(UFirestore, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FirebaseFeatures"), NO_API) \
	DECLARE_SERIALIZER(UFirestore)


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Public_Firestore_Firestore_h_314_INCLASS \
private: \
	static void StaticRegisterNativesUFirestore(); \
	friend struct Z_Construct_UClass_UFirestore_Statics; \
public: \
	DECLARE_CLASS(UFirestore, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FirebaseFeatures"), NO_API) \
	DECLARE_SERIALIZER(UFirestore)


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Public_Firestore_Firestore_h_314_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFirestore(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFirestore) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFirestore); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFirestore); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFirestore(UFirestore&&); \
	NO_API UFirestore(const UFirestore&); \
public:


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Public_Firestore_Firestore_h_314_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFirestore(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFirestore(UFirestore&&); \
	NO_API UFirestore(const UFirestore&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFirestore); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFirestore); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFirestore)


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Public_Firestore_Firestore_h_314_PRIVATE_PROPERTY_OFFSET
#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Public_Firestore_Firestore_h_311_PROLOG
#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Public_Firestore_Firestore_h_314_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Public_Firestore_Firestore_h_314_PRIVATE_PROPERTY_OFFSET \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Public_Firestore_Firestore_h_314_SPARSE_DATA \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Public_Firestore_Firestore_h_314_RPC_WRAPPERS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Public_Firestore_Firestore_h_314_INCLASS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Public_Firestore_Firestore_h_314_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Public_Firestore_Firestore_h_314_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Public_Firestore_Firestore_h_314_PRIVATE_PROPERTY_OFFSET \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Public_Firestore_Firestore_h_314_SPARSE_DATA \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Public_Firestore_Firestore_h_314_RPC_WRAPPERS_NO_PURE_DECLS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Public_Firestore_Firestore_h_314_INCLASS_NO_PURE_DECLS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Public_Firestore_Firestore_h_314_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FIREBASEFEATURES_API UClass* StaticClass<class UFirestore>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Public_Firestore_Firestore_h


#define FOREACH_ENUM_EFIRESTORESOURCE(op) \
	op(EFirestoreSource::Default) \
	op(EFirestoreSource::Server) \
	op(EFirestoreSource::Cache) 

enum class EFirestoreSource : uint8;
template<> FIREBASEFEATURES_API UEnum* StaticEnum<EFirestoreSource>();

#define FOREACH_ENUM_EFIRESTORESETOPTIONSTYPE(op) \
	op(EFirestoreSetOptionsType::Overwrite) \
	op(EFirestoreSetOptionsType::MergeAll) \
	op(EFirestoreSetOptionsType::MergeSpecific) 

enum class EFirestoreSetOptionsType : uint8;
template<> FIREBASEFEATURES_API UEnum* StaticEnum<EFirestoreSetOptionsType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
