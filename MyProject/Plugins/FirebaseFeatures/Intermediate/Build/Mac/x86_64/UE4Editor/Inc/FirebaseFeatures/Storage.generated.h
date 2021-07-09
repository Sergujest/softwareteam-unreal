// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UFirebaseStorageReference;
#ifdef FIREBASEFEATURES_Storage_generated_h
#error "Storage.generated.h already included, missing '#pragma once' in Storage.h"
#endif
#define FIREBASEFEATURES_Storage_generated_h

#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Public_Storage_Storage_h_17_SPARSE_DATA
#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Public_Storage_Storage_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetMaxOperationRetryTime); \
	DECLARE_FUNCTION(execGetMaxOperationRetryTime); \
	DECLARE_FUNCTION(execSetMaxUploadRetryTime); \
	DECLARE_FUNCTION(execGetMaxUploadRetryTime); \
	DECLARE_FUNCTION(execSetMaxDownloadRetryTime); \
	DECLARE_FUNCTION(execGetMaxDownloadRetryTime); \
	DECLARE_FUNCTION(execGetReferenceFromUrl); \
	DECLARE_FUNCTION(execGetReferenceFromPath); \
	DECLARE_FUNCTION(execGetReference); \
	DECLARE_FUNCTION(execGetUrl);


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Public_Storage_Storage_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetMaxOperationRetryTime); \
	DECLARE_FUNCTION(execGetMaxOperationRetryTime); \
	DECLARE_FUNCTION(execSetMaxUploadRetryTime); \
	DECLARE_FUNCTION(execGetMaxUploadRetryTime); \
	DECLARE_FUNCTION(execSetMaxDownloadRetryTime); \
	DECLARE_FUNCTION(execGetMaxDownloadRetryTime); \
	DECLARE_FUNCTION(execGetReferenceFromUrl); \
	DECLARE_FUNCTION(execGetReferenceFromPath); \
	DECLARE_FUNCTION(execGetReference); \
	DECLARE_FUNCTION(execGetUrl);


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Public_Storage_Storage_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFirebaseStorage(); \
	friend struct Z_Construct_UClass_UFirebaseStorage_Statics; \
public: \
	DECLARE_CLASS(UFirebaseStorage, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FirebaseFeatures"), NO_API) \
	DECLARE_SERIALIZER(UFirebaseStorage)


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Public_Storage_Storage_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUFirebaseStorage(); \
	friend struct Z_Construct_UClass_UFirebaseStorage_Statics; \
public: \
	DECLARE_CLASS(UFirebaseStorage, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FirebaseFeatures"), NO_API) \
	DECLARE_SERIALIZER(UFirebaseStorage)


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Public_Storage_Storage_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFirebaseStorage(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFirebaseStorage) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFirebaseStorage); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFirebaseStorage); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFirebaseStorage(UFirebaseStorage&&); \
	NO_API UFirebaseStorage(const UFirebaseStorage&); \
public:


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Public_Storage_Storage_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFirebaseStorage(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFirebaseStorage(UFirebaseStorage&&); \
	NO_API UFirebaseStorage(const UFirebaseStorage&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFirebaseStorage); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFirebaseStorage); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFirebaseStorage)


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Public_Storage_Storage_h_17_PRIVATE_PROPERTY_OFFSET
#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Public_Storage_Storage_h_14_PROLOG
#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Public_Storage_Storage_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Public_Storage_Storage_h_17_PRIVATE_PROPERTY_OFFSET \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Public_Storage_Storage_h_17_SPARSE_DATA \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Public_Storage_Storage_h_17_RPC_WRAPPERS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Public_Storage_Storage_h_17_INCLASS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Public_Storage_Storage_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Public_Storage_Storage_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Public_Storage_Storage_h_17_PRIVATE_PROPERTY_OFFSET \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Public_Storage_Storage_h_17_SPARSE_DATA \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Public_Storage_Storage_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Public_Storage_Storage_h_17_INCLASS_NO_PURE_DECLS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Public_Storage_Storage_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FIREBASEFEATURES_API UClass* StaticClass<class UFirebaseStorage>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Public_Storage_Storage_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
