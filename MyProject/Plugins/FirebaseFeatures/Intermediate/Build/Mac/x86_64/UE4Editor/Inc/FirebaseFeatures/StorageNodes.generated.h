// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EFirebaseStorageError : uint8;
struct FFirebaseStorageMetadata;
struct FFirebaseStorageController;
class UFirebaseStorageReference;
 
enum class EFirebaseStorageBlueprintExecutionPin : uint8;
class UStorageDeleteProxy;
class UStorageGetFileProxy;
class UStorageGetBytesProxy;
class UStorageGetDownloadUrlProxy;
class UStorageGetMetadataProxy;
class UStorageUpdateMetadataProxy;
class UStoragePutBytesProxy;
class UStoragePutBytesWithMetadataProxy;
class UStoragePutFileProxy;
class UStoragePutFileWithMetadataProxy;
#ifdef FIREBASEFEATURES_StorageNodes_generated_h
#error "StorageNodes.generated.h already included, missing '#pragma once' in StorageNodes.h"
#endif
#define FIREBASEFEATURES_StorageNodes_generated_h

#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Storage_StorageNodes_h_435_DELEGATE \
struct _Script_FirebaseFeatures_eventDynMultUploadBytesCallback_Parms \
{ \
	EFirebaseStorageError Error; \
	FFirebaseStorageMetadata Metadata; \
	FFirebaseStorageController Controller; \
}; \
static inline void FDynMultUploadBytesCallback_DelegateWrapper(const FMulticastScriptDelegate& DynMultUploadBytesCallback, const EFirebaseStorageError Error, const FFirebaseStorageMetadata Metadata, FFirebaseStorageController const& Controller) \
{ \
	_Script_FirebaseFeatures_eventDynMultUploadBytesCallback_Parms Parms; \
	Parms.Error=Error; \
	Parms.Metadata=Metadata; \
	Parms.Controller=Controller; \
	DynMultUploadBytesCallback.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Storage_StorageNodes_h_383_DELEGATE \
struct _Script_FirebaseFeatures_eventDynMultStorageMetadata_Parms \
{ \
	EFirebaseStorageError Error; \
	FFirebaseStorageMetadata Metadata; \
}; \
static inline void FDynMultStorageMetadata_DelegateWrapper(const FMulticastScriptDelegate& DynMultStorageMetadata, const EFirebaseStorageError Error, FFirebaseStorageMetadata const& Metadata) \
{ \
	_Script_FirebaseFeatures_eventDynMultStorageMetadata_Parms Parms; \
	Parms.Error=Error; \
	Parms.Metadata=Metadata; \
	DynMultStorageMetadata.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Storage_StorageNodes_h_353_DELEGATE \
struct _Script_FirebaseFeatures_eventDynMultStorageString_Parms \
{ \
	EFirebaseStorageError Error; \
	FString URL; \
}; \
static inline void FDynMultStorageString_DelegateWrapper(const FMulticastScriptDelegate& DynMultStorageString, const EFirebaseStorageError Error, const FString& URL) \
{ \
	_Script_FirebaseFeatures_eventDynMultStorageString_Parms Parms; \
	Parms.Error=Error; \
	Parms.URL=URL; \
	DynMultStorageString.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Storage_StorageNodes_h_313_DELEGATE \
struct _Script_FirebaseFeatures_eventDynMultDownloadBytesCallback_Parms \
{ \
	EFirebaseStorageError Error; \
	TArray<uint8> BytesRead; \
	FFirebaseStorageController Controller; \
}; \
static inline void FDynMultDownloadBytesCallback_DelegateWrapper(const FMulticastScriptDelegate& DynMultDownloadBytesCallback, const EFirebaseStorageError Error, const TArray<uint8>& BytesRead, FFirebaseStorageController const& Controller) \
{ \
	_Script_FirebaseFeatures_eventDynMultDownloadBytesCallback_Parms Parms; \
	Parms.Error=Error; \
	Parms.BytesRead=BytesRead; \
	Parms.Controller=Controller; \
	DynMultDownloadBytesCallback.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Storage_StorageNodes_h_270_DELEGATE \
struct _Script_FirebaseFeatures_eventDynMultDownloadCallback_Parms \
{ \
	EFirebaseStorageError Error; \
	int64 BytesRead; \
	FFirebaseStorageController Controller; \
}; \
static inline void FDynMultDownloadCallback_DelegateWrapper(const FMulticastScriptDelegate& DynMultDownloadCallback, const EFirebaseStorageError Error, const int64 BytesRead, FFirebaseStorageController const& Controller) \
{ \
	_Script_FirebaseFeatures_eventDynMultDownloadCallback_Parms Parms; \
	Parms.Error=Error; \
	Parms.BytesRead=BytesRead; \
	Parms.Controller=Controller; \
	DynMultDownloadCallback.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Storage_StorageNodes_h_245_DELEGATE \
struct _Script_FirebaseFeatures_eventDynMultStorageVoid_Parms \
{ \
	EFirebaseStorageError Error; \
}; \
static inline void FDynMultStorageVoid_DelegateWrapper(const FMulticastScriptDelegate& DynMultStorageVoid, const EFirebaseStorageError Error) \
{ \
	_Script_FirebaseFeatures_eventDynMultStorageVoid_Parms Parms; \
	Parms.Error=Error; \
	DynMultStorageVoid.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Storage_StorageNodes_h_21_SPARSE_DATA
#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Storage_StorageNodes_h_21_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetMd5Hash); \
	DECLARE_FUNCTION(execIsValid_Metadata); \
	DECLARE_FUNCTION(execGetUpdatedTime); \
	DECLARE_FUNCTION(execGetSizeBytes); \
	DECLARE_FUNCTION(execGetReference_Metadata); \
	DECLARE_FUNCTION(execGetPath); \
	DECLARE_FUNCTION(execGetName); \
	DECLARE_FUNCTION(execGetMetadataGeneration); \
	DECLARE_FUNCTION(execGetGeneration); \
	DECLARE_FUNCTION(execGetCustomMetadata); \
	DECLARE_FUNCTION(execGetCreationTime); \
	DECLARE_FUNCTION(execContentType); \
	DECLARE_FUNCTION(execSetContentType); \
	DECLARE_FUNCTION(execGetContentLanguage); \
	DECLARE_FUNCTION(execSetContentLanguage); \
	DECLARE_FUNCTION(execGetContentEncoding); \
	DECLARE_FUNCTION(execSetContentEncoding); \
	DECLARE_FUNCTION(execGetContentDisposition); \
	DECLARE_FUNCTION(execSetContentDisposition); \
	DECLARE_FUNCTION(execGetCacheControl); \
	DECLARE_FUNCTION(execSetCachControl); \
	DECLARE_FUNCTION(execGetBucket); \
	DECLARE_FUNCTION(execIsValid); \
	DECLARE_FUNCTION(execGetReference); \
	DECLARE_FUNCTION(execTotalByteCount); \
	DECLARE_FUNCTION(execBytesTransferred); \
	DECLARE_FUNCTION(execIsPaused); \
	DECLARE_FUNCTION(execCancel); \
	DECLARE_FUNCTION(execResume); \
	DECLARE_FUNCTION(execPause);


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Storage_StorageNodes_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetMd5Hash); \
	DECLARE_FUNCTION(execIsValid_Metadata); \
	DECLARE_FUNCTION(execGetUpdatedTime); \
	DECLARE_FUNCTION(execGetSizeBytes); \
	DECLARE_FUNCTION(execGetReference_Metadata); \
	DECLARE_FUNCTION(execGetPath); \
	DECLARE_FUNCTION(execGetName); \
	DECLARE_FUNCTION(execGetMetadataGeneration); \
	DECLARE_FUNCTION(execGetGeneration); \
	DECLARE_FUNCTION(execGetCustomMetadata); \
	DECLARE_FUNCTION(execGetCreationTime); \
	DECLARE_FUNCTION(execContentType); \
	DECLARE_FUNCTION(execSetContentType); \
	DECLARE_FUNCTION(execGetContentLanguage); \
	DECLARE_FUNCTION(execSetContentLanguage); \
	DECLARE_FUNCTION(execGetContentEncoding); \
	DECLARE_FUNCTION(execSetContentEncoding); \
	DECLARE_FUNCTION(execGetContentDisposition); \
	DECLARE_FUNCTION(execSetContentDisposition); \
	DECLARE_FUNCTION(execGetCacheControl); \
	DECLARE_FUNCTION(execSetCachControl); \
	DECLARE_FUNCTION(execGetBucket); \
	DECLARE_FUNCTION(execIsValid); \
	DECLARE_FUNCTION(execGetReference); \
	DECLARE_FUNCTION(execTotalByteCount); \
	DECLARE_FUNCTION(execBytesTransferred); \
	DECLARE_FUNCTION(execIsPaused); \
	DECLARE_FUNCTION(execCancel); \
	DECLARE_FUNCTION(execResume); \
	DECLARE_FUNCTION(execPause);


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Storage_StorageNodes_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUStorageBlueprintLibrary(); \
	friend struct Z_Construct_UClass_UStorageBlueprintLibrary_Statics; \
public: \
	DECLARE_CLASS(UStorageBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FirebaseFeatures"), NO_API) \
	DECLARE_SERIALIZER(UStorageBlueprintLibrary)


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Storage_StorageNodes_h_21_INCLASS \
private: \
	static void StaticRegisterNativesUStorageBlueprintLibrary(); \
	friend struct Z_Construct_UClass_UStorageBlueprintLibrary_Statics; \
public: \
	DECLARE_CLASS(UStorageBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FirebaseFeatures"), NO_API) \
	DECLARE_SERIALIZER(UStorageBlueprintLibrary)


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Storage_StorageNodes_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UStorageBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStorageBlueprintLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStorageBlueprintLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStorageBlueprintLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UStorageBlueprintLibrary(UStorageBlueprintLibrary&&); \
	NO_API UStorageBlueprintLibrary(const UStorageBlueprintLibrary&); \
public:


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Storage_StorageNodes_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UStorageBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UStorageBlueprintLibrary(UStorageBlueprintLibrary&&); \
	NO_API UStorageBlueprintLibrary(const UStorageBlueprintLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStorageBlueprintLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStorageBlueprintLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStorageBlueprintLibrary)


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Storage_StorageNodes_h_21_PRIVATE_PROPERTY_OFFSET
#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Storage_StorageNodes_h_18_PROLOG
#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Storage_StorageNodes_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Storage_StorageNodes_h_21_PRIVATE_PROPERTY_OFFSET \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Storage_StorageNodes_h_21_SPARSE_DATA \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Storage_StorageNodes_h_21_RPC_WRAPPERS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Storage_StorageNodes_h_21_INCLASS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Storage_StorageNodes_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Storage_StorageNodes_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Storage_StorageNodes_h_21_PRIVATE_PROPERTY_OFFSET \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Storage_StorageNodes_h_21_SPARSE_DATA \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Storage_StorageNodes_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Storage_StorageNodes_h_21_INCLASS_NO_PURE_DECLS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Storage_StorageNodes_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FIREBASEFEATURES_API UClass* StaticClass<class UStorageBlueprintLibrary>();

#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Storage_StorageNodes_h_239_SPARSE_DATA
#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Storage_StorageNodes_h_239_RPC_WRAPPERS
#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Storage_StorageNodes_h_239_RPC_WRAPPERS_NO_PURE_DECLS
#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Storage_StorageNodes_h_239_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFirebaseStorageNodeProxyBase(); \
	friend struct Z_Construct_UClass_UFirebaseStorageNodeProxyBase_Statics; \
public: \
	DECLARE_CLASS(UFirebaseStorageNodeProxyBase, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FirebaseFeatures"), NO_API) \
	DECLARE_SERIALIZER(UFirebaseStorageNodeProxyBase)


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Storage_StorageNodes_h_239_INCLASS \
private: \
	static void StaticRegisterNativesUFirebaseStorageNodeProxyBase(); \
	friend struct Z_Construct_UClass_UFirebaseStorageNodeProxyBase_Statics; \
public: \
	DECLARE_CLASS(UFirebaseStorageNodeProxyBase, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FirebaseFeatures"), NO_API) \
	DECLARE_SERIALIZER(UFirebaseStorageNodeProxyBase)


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Storage_StorageNodes_h_239_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFirebaseStorageNodeProxyBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFirebaseStorageNodeProxyBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFirebaseStorageNodeProxyBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFirebaseStorageNodeProxyBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFirebaseStorageNodeProxyBase(UFirebaseStorageNodeProxyBase&&); \
	NO_API UFirebaseStorageNodeProxyBase(const UFirebaseStorageNodeProxyBase&); \
public:


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Storage_StorageNodes_h_239_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFirebaseStorageNodeProxyBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFirebaseStorageNodeProxyBase(UFirebaseStorageNodeProxyBase&&); \
	NO_API UFirebaseStorageNodeProxyBase(const UFirebaseStorageNodeProxyBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFirebaseStorageNodeProxyBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFirebaseStorageNodeProxyBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFirebaseStorageNodeProxyBase)


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Storage_StorageNodes_h_239_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___Reference() { return STRUCT_OFFSET(UFirebaseStorageNodeProxyBase, _Reference); }


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Storage_StorageNodes_h_236_PROLOG
#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Storage_StorageNodes_h_239_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Storage_StorageNodes_h_239_PRIVATE_PROPERTY_OFFSET \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Storage_StorageNodes_h_239_SPARSE_DATA \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Storage_StorageNodes_h_239_RPC_WRAPPERS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Storage_StorageNodes_h_239_INCLASS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Storage_StorageNodes_h_239_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Storage_StorageNodes_h_239_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Storage_StorageNodes_h_239_PRIVATE_PROPERTY_OFFSET \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Storage_StorageNodes_h_239_SPARSE_DATA \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Storage_StorageNodes_h_239_RPC_WRAPPERS_NO_PURE_DECLS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Storage_StorageNodes_h_239_INCLASS_NO_PURE_DECLS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Storage_StorageNodes_h_239_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FIREBASEFEATURES_API UClass* StaticClass<class UFirebaseStorageNodeProxyBase>();

#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Storage_StorageNodes_h_250_SPARSE_DATA
#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Storage_StorageNodes_h_250_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execDelete);


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Storage_StorageNodes_h_250_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDelete);


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Storage_StorageNodes_h_250_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUStorageDeleteProxy(); \
	friend struct Z_Construct_UClass_UStorageDeleteProxy_Statics; \
public: \
	DECLARE_CLASS(UStorageDeleteProxy, UFirebaseStorageNodeProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FirebaseFeatures"), NO_API) \
	DECLARE_SERIALIZER(UStorageDeleteProxy)


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Storage_StorageNodes_h_250_INCLASS \
private: \
	static void StaticRegisterNativesUStorageDeleteProxy(); \
	friend struct Z_Construct_UClass_UStorageDeleteProxy_Statics; \
public: \
	DECLARE_CLASS(UStorageDeleteProxy, UFirebaseStorageNodeProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FirebaseFeatures"), NO_API) \
	DECLARE_SERIALIZER(UStorageDeleteProxy)


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Storage_StorageNodes_h_250_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UStorageDeleteProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStorageDeleteProxy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStorageDeleteProxy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStorageDeleteProxy); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UStorageDeleteProxy(UStorageDeleteProxy&&); \
	NO_API UStorageDeleteProxy(const UStorageDeleteProxy&); \
public:


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Storage_StorageNodes_h_250_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UStorageDeleteProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UStorageDeleteProxy(UStorageDeleteProxy&&); \
	NO_API UStorageDeleteProxy(const UStorageDeleteProxy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStorageDeleteProxy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStorageDeleteProxy); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStorageDeleteProxy)


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Storage_StorageNodes_h_250_PRIVATE_PROPERTY_OFFSET
#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Storage_StorageNodes_h_247_PROLOG
#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Storage_StorageNodes_h_250_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Storage_StorageNodes_h_250_PRIVATE_PROPERTY_OFFSET \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Storage_StorageNodes_h_250_SPARSE_DATA \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Storage_StorageNodes_h_250_RPC_WRAPPERS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Storage_StorageNodes_h_250_INCLASS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Storage_StorageNodes_h_250_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Storage_StorageNodes_h_250_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Storage_StorageNodes_h_250_PRIVATE_PROPERTY_OFFSET \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Storage_StorageNodes_h_250_SPARSE_DATA \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Storage_StorageNodes_h_250_RPC_WRAPPERS_NO_PURE_DECLS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Storage_StorageNodes_h_250_INCLASS_NO_PURE_DECLS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Storage_StorageNodes_h_250_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FIREBASEFEATURES_API UClass* StaticClass<class UStorageDeleteProxy>();

#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Storage_StorageNodes_h_275_SPARSE_DATA
#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Storage_StorageNodes_h_275_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetFile);


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Storage_StorageNodes_h_275_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetFile);


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Storage_StorageNodes_h_275_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUStorageGetFileProxy(); \
	friend struct Z_Construct_UClass_UStorageGetFileProxy_Statics; \
public: \
	DECLARE_CLASS(UStorageGetFileProxy, UFirebaseStorageNodeProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FirebaseFeatures"), NO_API) \
	DECLARE_SERIALIZER(UStorageGetFileProxy)


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Storage_StorageNodes_h_275_INCLASS \
private: \
	static void StaticRegisterNativesUStorageGetFileProxy(); \
	friend struct Z_Construct_UClass_UStorageGetFileProxy_Statics; \
public: \
	DECLARE_CLASS(UStorageGetFileProxy, UFirebaseStorageNodeProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FirebaseFeatures"), NO_API) \
	DECLARE_SERIALIZER(UStorageGetFileProxy)


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Storage_StorageNodes_h_275_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UStorageGetFileProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStorageGetFileProxy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStorageGetFileProxy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStorageGetFileProxy); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UStorageGetFileProxy(UStorageGetFileProxy&&); \
	NO_API UStorageGetFileProxy(const UStorageGetFileProxy&); \
public:


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Storage_StorageNodes_h_275_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UStorageGetFileProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UStorageGetFileProxy(UStorageGetFileProxy&&); \
	NO_API UStorageGetFileProxy(const UStorageGetFileProxy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStorageGetFileProxy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStorageGetFileProxy); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStorageGetFileProxy)


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Storage_StorageNodes_h_275_PRIVATE_PROPERTY_OFFSET
#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Storage_StorageNodes_h_272_PROLOG
#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Storage_StorageNodes_h_275_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Storage_StorageNodes_h_275_PRIVATE_PROPERTY_OFFSET \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Storage_StorageNodes_h_275_SPARSE_DATA \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Storage_StorageNodes_h_275_RPC_WRAPPERS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Storage_StorageNodes_h_275_INCLASS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Storage_StorageNodes_h_275_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Storage_StorageNodes_h_275_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Storage_StorageNodes_h_275_PRIVATE_PROPERTY_OFFSET \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Storage_StorageNodes_h_275_SPARSE_DATA \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Storage_StorageNodes_h_275_RPC_WRAPPERS_NO_PURE_DECLS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Storage_StorageNodes_h_275_INCLASS_NO_PURE_DECLS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Storage_StorageNodes_h_275_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FIREBASEFEATURES_API UClass* StaticClass<class UStorageGetFileProxy>();

#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Storage_StorageNodes_h_318_SPARSE_DATA
#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Storage_StorageNodes_h_318_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetBytes);


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Storage_StorageNodes_h_318_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetBytes);


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Storage_StorageNodes_h_318_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUStorageGetBytesProxy(); \
	friend struct Z_Construct_UClass_UStorageGetBytesProxy_Statics; \
public: \
	DECLARE_CLASS(UStorageGetBytesProxy, UFirebaseStorageNodeProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FirebaseFeatures"), NO_API) \
	DECLARE_SERIALIZER(UStorageGetBytesProxy)


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Storage_StorageNodes_h_318_INCLASS \
private: \
	static void StaticRegisterNativesUStorageGetBytesProxy(); \
	friend struct Z_Construct_UClass_UStorageGetBytesProxy_Statics; \
public: \
	DECLARE_CLASS(UStorageGetBytesProxy, UFirebaseStorageNodeProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FirebaseFeatures"), NO_API) \
	DECLARE_SERIALIZER(UStorageGetBytesProxy)


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Storage_StorageNodes_h_318_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UStorageGetBytesProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStorageGetBytesProxy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStorageGetBytesProxy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStorageGetBytesProxy); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UStorageGetBytesProxy(UStorageGetBytesProxy&&); \
	NO_API UStorageGetBytesProxy(const UStorageGetBytesProxy&); \
public:


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Storage_StorageNodes_h_318_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UStorageGetBytesProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UStorageGetBytesProxy(UStorageGetBytesProxy&&); \
	NO_API UStorageGetBytesProxy(const UStorageGetBytesProxy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStorageGetBytesProxy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStorageGetBytesProxy); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStorageGetBytesProxy)


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Storage_StorageNodes_h_318_PRIVATE_PROPERTY_OFFSET
#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Storage_StorageNodes_h_315_PROLOG
#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Storage_StorageNodes_h_318_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Storage_StorageNodes_h_318_PRIVATE_PROPERTY_OFFSET \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Storage_StorageNodes_h_318_SPARSE_DATA \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Storage_StorageNodes_h_318_RPC_WRAPPERS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Storage_StorageNodes_h_318_INCLASS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Storage_StorageNodes_h_318_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Storage_StorageNodes_h_318_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Storage_StorageNodes_h_318_PRIVATE_PROPERTY_OFFSET \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Storage_StorageNodes_h_318_SPARSE_DATA \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Storage_StorageNodes_h_318_RPC_WRAPPERS_NO_PURE_DECLS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Storage_StorageNodes_h_318_INCLASS_NO_PURE_DECLS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Storage_StorageNodes_h_318_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FIREBASEFEATURES_API UClass* StaticClass<class UStorageGetBytesProxy>();

#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Storage_StorageNodes_h_358_SPARSE_DATA
#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Storage_StorageNodes_h_358_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetDownloadUrl);


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Storage_StorageNodes_h_358_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetDownloadUrl);


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Storage_StorageNodes_h_358_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUStorageGetDownloadUrlProxy(); \
	friend struct Z_Construct_UClass_UStorageGetDownloadUrlProxy_Statics; \
public: \
	DECLARE_CLASS(UStorageGetDownloadUrlProxy, UFirebaseStorageNodeProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FirebaseFeatures"), NO_API) \
	DECLARE_SERIALIZER(UStorageGetDownloadUrlProxy)


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Storage_StorageNodes_h_358_INCLASS \
private: \
	static void StaticRegisterNativesUStorageGetDownloadUrlProxy(); \
	friend struct Z_Construct_UClass_UStorageGetDownloadUrlProxy_Statics; \
public: \
	DECLARE_CLASS(UStorageGetDownloadUrlProxy, UFirebaseStorageNodeProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FirebaseFeatures"), NO_API) \
	DECLARE_SERIALIZER(UStorageGetDownloadUrlProxy)


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Storage_StorageNodes_h_358_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UStorageGetDownloadUrlProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStorageGetDownloadUrlProxy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStorageGetDownloadUrlProxy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStorageGetDownloadUrlProxy); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UStorageGetDownloadUrlProxy(UStorageGetDownloadUrlProxy&&); \
	NO_API UStorageGetDownloadUrlProxy(const UStorageGetDownloadUrlProxy&); \
public:


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Storage_StorageNodes_h_358_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UStorageGetDownloadUrlProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UStorageGetDownloadUrlProxy(UStorageGetDownloadUrlProxy&&); \
	NO_API UStorageGetDownloadUrlProxy(const UStorageGetDownloadUrlProxy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStorageGetDownloadUrlProxy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStorageGetDownloadUrlProxy); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStorageGetDownloadUrlProxy)


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Storage_StorageNodes_h_358_PRIVATE_PROPERTY_OFFSET
#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Storage_StorageNodes_h_355_PROLOG
#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Storage_StorageNodes_h_358_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Storage_StorageNodes_h_358_PRIVATE_PROPERTY_OFFSET \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Storage_StorageNodes_h_358_SPARSE_DATA \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Storage_StorageNodes_h_358_RPC_WRAPPERS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Storage_StorageNodes_h_358_INCLASS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Storage_StorageNodes_h_358_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Storage_StorageNodes_h_358_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Storage_StorageNodes_h_358_PRIVATE_PROPERTY_OFFSET \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Storage_StorageNodes_h_358_SPARSE_DATA \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Storage_StorageNodes_h_358_RPC_WRAPPERS_NO_PURE_DECLS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Storage_StorageNodes_h_358_INCLASS_NO_PURE_DECLS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Storage_StorageNodes_h_358_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FIREBASEFEATURES_API UClass* StaticClass<class UStorageGetDownloadUrlProxy>();

#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Storage_StorageNodes_h_388_SPARSE_DATA
#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Storage_StorageNodes_h_388_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetMetadata);


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Storage_StorageNodes_h_388_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetMetadata);


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Storage_StorageNodes_h_388_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUStorageGetMetadataProxy(); \
	friend struct Z_Construct_UClass_UStorageGetMetadataProxy_Statics; \
public: \
	DECLARE_CLASS(UStorageGetMetadataProxy, UFirebaseStorageNodeProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FirebaseFeatures"), NO_API) \
	DECLARE_SERIALIZER(UStorageGetMetadataProxy)


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Storage_StorageNodes_h_388_INCLASS \
private: \
	static void StaticRegisterNativesUStorageGetMetadataProxy(); \
	friend struct Z_Construct_UClass_UStorageGetMetadataProxy_Statics; \
public: \
	DECLARE_CLASS(UStorageGetMetadataProxy, UFirebaseStorageNodeProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FirebaseFeatures"), NO_API) \
	DECLARE_SERIALIZER(UStorageGetMetadataProxy)


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Storage_StorageNodes_h_388_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UStorageGetMetadataProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStorageGetMetadataProxy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStorageGetMetadataProxy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStorageGetMetadataProxy); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UStorageGetMetadataProxy(UStorageGetMetadataProxy&&); \
	NO_API UStorageGetMetadataProxy(const UStorageGetMetadataProxy&); \
public:


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Storage_StorageNodes_h_388_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UStorageGetMetadataProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UStorageGetMetadataProxy(UStorageGetMetadataProxy&&); \
	NO_API UStorageGetMetadataProxy(const UStorageGetMetadataProxy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStorageGetMetadataProxy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStorageGetMetadataProxy); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStorageGetMetadataProxy)


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Storage_StorageNodes_h_388_PRIVATE_PROPERTY_OFFSET
#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Storage_StorageNodes_h_385_PROLOG
#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Storage_StorageNodes_h_388_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Storage_StorageNodes_h_388_PRIVATE_PROPERTY_OFFSET \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Storage_StorageNodes_h_388_SPARSE_DATA \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Storage_StorageNodes_h_388_RPC_WRAPPERS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Storage_StorageNodes_h_388_INCLASS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Storage_StorageNodes_h_388_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Storage_StorageNodes_h_388_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Storage_StorageNodes_h_388_PRIVATE_PROPERTY_OFFSET \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Storage_StorageNodes_h_388_SPARSE_DATA \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Storage_StorageNodes_h_388_RPC_WRAPPERS_NO_PURE_DECLS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Storage_StorageNodes_h_388_INCLASS_NO_PURE_DECLS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Storage_StorageNodes_h_388_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FIREBASEFEATURES_API UClass* StaticClass<class UStorageGetMetadataProxy>();

#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Storage_StorageNodes_h_410_SPARSE_DATA
#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Storage_StorageNodes_h_410_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execUpdateMetadata);


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Storage_StorageNodes_h_410_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execUpdateMetadata);


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Storage_StorageNodes_h_410_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUStorageUpdateMetadataProxy(); \
	friend struct Z_Construct_UClass_UStorageUpdateMetadataProxy_Statics; \
public: \
	DECLARE_CLASS(UStorageUpdateMetadataProxy, UFirebaseStorageNodeProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FirebaseFeatures"), NO_API) \
	DECLARE_SERIALIZER(UStorageUpdateMetadataProxy)


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Storage_StorageNodes_h_410_INCLASS \
private: \
	static void StaticRegisterNativesUStorageUpdateMetadataProxy(); \
	friend struct Z_Construct_UClass_UStorageUpdateMetadataProxy_Statics; \
public: \
	DECLARE_CLASS(UStorageUpdateMetadataProxy, UFirebaseStorageNodeProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FirebaseFeatures"), NO_API) \
	DECLARE_SERIALIZER(UStorageUpdateMetadataProxy)


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Storage_StorageNodes_h_410_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UStorageUpdateMetadataProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStorageUpdateMetadataProxy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStorageUpdateMetadataProxy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStorageUpdateMetadataProxy); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UStorageUpdateMetadataProxy(UStorageUpdateMetadataProxy&&); \
	NO_API UStorageUpdateMetadataProxy(const UStorageUpdateMetadataProxy&); \
public:


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Storage_StorageNodes_h_410_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UStorageUpdateMetadataProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UStorageUpdateMetadataProxy(UStorageUpdateMetadataProxy&&); \
	NO_API UStorageUpdateMetadataProxy(const UStorageUpdateMetadataProxy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStorageUpdateMetadataProxy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStorageUpdateMetadataProxy); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStorageUpdateMetadataProxy)


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Storage_StorageNodes_h_410_PRIVATE_PROPERTY_OFFSET
#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Storage_StorageNodes_h_407_PROLOG
#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Storage_StorageNodes_h_410_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Storage_StorageNodes_h_410_PRIVATE_PROPERTY_OFFSET \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Storage_StorageNodes_h_410_SPARSE_DATA \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Storage_StorageNodes_h_410_RPC_WRAPPERS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Storage_StorageNodes_h_410_INCLASS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Storage_StorageNodes_h_410_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Storage_StorageNodes_h_410_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Storage_StorageNodes_h_410_PRIVATE_PROPERTY_OFFSET \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Storage_StorageNodes_h_410_SPARSE_DATA \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Storage_StorageNodes_h_410_RPC_WRAPPERS_NO_PURE_DECLS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Storage_StorageNodes_h_410_INCLASS_NO_PURE_DECLS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Storage_StorageNodes_h_410_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FIREBASEFEATURES_API UClass* StaticClass<class UStorageUpdateMetadataProxy>();

#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Storage_StorageNodes_h_440_SPARSE_DATA
#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Storage_StorageNodes_h_440_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execPutBytes);


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Storage_StorageNodes_h_440_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execPutBytes);


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Storage_StorageNodes_h_440_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUStoragePutBytesProxy(); \
	friend struct Z_Construct_UClass_UStoragePutBytesProxy_Statics; \
public: \
	DECLARE_CLASS(UStoragePutBytesProxy, UFirebaseStorageNodeProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FirebaseFeatures"), NO_API) \
	DECLARE_SERIALIZER(UStoragePutBytesProxy)


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Storage_StorageNodes_h_440_INCLASS \
private: \
	static void StaticRegisterNativesUStoragePutBytesProxy(); \
	friend struct Z_Construct_UClass_UStoragePutBytesProxy_Statics; \
public: \
	DECLARE_CLASS(UStoragePutBytesProxy, UFirebaseStorageNodeProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FirebaseFeatures"), NO_API) \
	DECLARE_SERIALIZER(UStoragePutBytesProxy)


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Storage_StorageNodes_h_440_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UStoragePutBytesProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStoragePutBytesProxy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStoragePutBytesProxy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStoragePutBytesProxy); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UStoragePutBytesProxy(UStoragePutBytesProxy&&); \
	NO_API UStoragePutBytesProxy(const UStoragePutBytesProxy&); \
public:


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Storage_StorageNodes_h_440_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UStoragePutBytesProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UStoragePutBytesProxy(UStoragePutBytesProxy&&); \
	NO_API UStoragePutBytesProxy(const UStoragePutBytesProxy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStoragePutBytesProxy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStoragePutBytesProxy); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStoragePutBytesProxy)


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Storage_StorageNodes_h_440_PRIVATE_PROPERTY_OFFSET
#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Storage_StorageNodes_h_437_PROLOG
#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Storage_StorageNodes_h_440_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Storage_StorageNodes_h_440_PRIVATE_PROPERTY_OFFSET \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Storage_StorageNodes_h_440_SPARSE_DATA \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Storage_StorageNodes_h_440_RPC_WRAPPERS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Storage_StorageNodes_h_440_INCLASS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Storage_StorageNodes_h_440_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Storage_StorageNodes_h_440_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Storage_StorageNodes_h_440_PRIVATE_PROPERTY_OFFSET \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Storage_StorageNodes_h_440_SPARSE_DATA \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Storage_StorageNodes_h_440_RPC_WRAPPERS_NO_PURE_DECLS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Storage_StorageNodes_h_440_INCLASS_NO_PURE_DECLS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Storage_StorageNodes_h_440_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FIREBASEFEATURES_API UClass* StaticClass<class UStoragePutBytesProxy>();

#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Storage_StorageNodes_h_475_SPARSE_DATA
#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Storage_StorageNodes_h_475_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execPutBytesWithMetadata);


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Storage_StorageNodes_h_475_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execPutBytesWithMetadata);


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Storage_StorageNodes_h_475_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUStoragePutBytesWithMetadataProxy(); \
	friend struct Z_Construct_UClass_UStoragePutBytesWithMetadataProxy_Statics; \
public: \
	DECLARE_CLASS(UStoragePutBytesWithMetadataProxy, UFirebaseStorageNodeProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FirebaseFeatures"), NO_API) \
	DECLARE_SERIALIZER(UStoragePutBytesWithMetadataProxy)


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Storage_StorageNodes_h_475_INCLASS \
private: \
	static void StaticRegisterNativesUStoragePutBytesWithMetadataProxy(); \
	friend struct Z_Construct_UClass_UStoragePutBytesWithMetadataProxy_Statics; \
public: \
	DECLARE_CLASS(UStoragePutBytesWithMetadataProxy, UFirebaseStorageNodeProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FirebaseFeatures"), NO_API) \
	DECLARE_SERIALIZER(UStoragePutBytesWithMetadataProxy)


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Storage_StorageNodes_h_475_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UStoragePutBytesWithMetadataProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStoragePutBytesWithMetadataProxy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStoragePutBytesWithMetadataProxy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStoragePutBytesWithMetadataProxy); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UStoragePutBytesWithMetadataProxy(UStoragePutBytesWithMetadataProxy&&); \
	NO_API UStoragePutBytesWithMetadataProxy(const UStoragePutBytesWithMetadataProxy&); \
public:


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Storage_StorageNodes_h_475_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UStoragePutBytesWithMetadataProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UStoragePutBytesWithMetadataProxy(UStoragePutBytesWithMetadataProxy&&); \
	NO_API UStoragePutBytesWithMetadataProxy(const UStoragePutBytesWithMetadataProxy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStoragePutBytesWithMetadataProxy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStoragePutBytesWithMetadataProxy); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStoragePutBytesWithMetadataProxy)


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Storage_StorageNodes_h_475_PRIVATE_PROPERTY_OFFSET
#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Storage_StorageNodes_h_472_PROLOG
#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Storage_StorageNodes_h_475_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Storage_StorageNodes_h_475_PRIVATE_PROPERTY_OFFSET \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Storage_StorageNodes_h_475_SPARSE_DATA \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Storage_StorageNodes_h_475_RPC_WRAPPERS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Storage_StorageNodes_h_475_INCLASS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Storage_StorageNodes_h_475_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Storage_StorageNodes_h_475_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Storage_StorageNodes_h_475_PRIVATE_PROPERTY_OFFSET \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Storage_StorageNodes_h_475_SPARSE_DATA \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Storage_StorageNodes_h_475_RPC_WRAPPERS_NO_PURE_DECLS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Storage_StorageNodes_h_475_INCLASS_NO_PURE_DECLS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Storage_StorageNodes_h_475_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FIREBASEFEATURES_API UClass* StaticClass<class UStoragePutBytesWithMetadataProxy>();

#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Storage_StorageNodes_h_514_SPARSE_DATA
#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Storage_StorageNodes_h_514_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execPutFile);


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Storage_StorageNodes_h_514_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execPutFile);


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Storage_StorageNodes_h_514_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUStoragePutFileProxy(); \
	friend struct Z_Construct_UClass_UStoragePutFileProxy_Statics; \
public: \
	DECLARE_CLASS(UStoragePutFileProxy, UFirebaseStorageNodeProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FirebaseFeatures"), NO_API) \
	DECLARE_SERIALIZER(UStoragePutFileProxy)


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Storage_StorageNodes_h_514_INCLASS \
private: \
	static void StaticRegisterNativesUStoragePutFileProxy(); \
	friend struct Z_Construct_UClass_UStoragePutFileProxy_Statics; \
public: \
	DECLARE_CLASS(UStoragePutFileProxy, UFirebaseStorageNodeProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FirebaseFeatures"), NO_API) \
	DECLARE_SERIALIZER(UStoragePutFileProxy)


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Storage_StorageNodes_h_514_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UStoragePutFileProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStoragePutFileProxy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStoragePutFileProxy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStoragePutFileProxy); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UStoragePutFileProxy(UStoragePutFileProxy&&); \
	NO_API UStoragePutFileProxy(const UStoragePutFileProxy&); \
public:


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Storage_StorageNodes_h_514_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UStoragePutFileProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UStoragePutFileProxy(UStoragePutFileProxy&&); \
	NO_API UStoragePutFileProxy(const UStoragePutFileProxy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStoragePutFileProxy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStoragePutFileProxy); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStoragePutFileProxy)


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Storage_StorageNodes_h_514_PRIVATE_PROPERTY_OFFSET
#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Storage_StorageNodes_h_511_PROLOG
#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Storage_StorageNodes_h_514_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Storage_StorageNodes_h_514_PRIVATE_PROPERTY_OFFSET \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Storage_StorageNodes_h_514_SPARSE_DATA \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Storage_StorageNodes_h_514_RPC_WRAPPERS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Storage_StorageNodes_h_514_INCLASS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Storage_StorageNodes_h_514_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Storage_StorageNodes_h_514_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Storage_StorageNodes_h_514_PRIVATE_PROPERTY_OFFSET \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Storage_StorageNodes_h_514_SPARSE_DATA \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Storage_StorageNodes_h_514_RPC_WRAPPERS_NO_PURE_DECLS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Storage_StorageNodes_h_514_INCLASS_NO_PURE_DECLS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Storage_StorageNodes_h_514_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FIREBASEFEATURES_API UClass* StaticClass<class UStoragePutFileProxy>();

#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Storage_StorageNodes_h_550_SPARSE_DATA
#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Storage_StorageNodes_h_550_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execPutFileWithMetadata);


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Storage_StorageNodes_h_550_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execPutFileWithMetadata);


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Storage_StorageNodes_h_550_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUStoragePutFileWithMetadataProxy(); \
	friend struct Z_Construct_UClass_UStoragePutFileWithMetadataProxy_Statics; \
public: \
	DECLARE_CLASS(UStoragePutFileWithMetadataProxy, UFirebaseStorageNodeProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FirebaseFeatures"), NO_API) \
	DECLARE_SERIALIZER(UStoragePutFileWithMetadataProxy)


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Storage_StorageNodes_h_550_INCLASS \
private: \
	static void StaticRegisterNativesUStoragePutFileWithMetadataProxy(); \
	friend struct Z_Construct_UClass_UStoragePutFileWithMetadataProxy_Statics; \
public: \
	DECLARE_CLASS(UStoragePutFileWithMetadataProxy, UFirebaseStorageNodeProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FirebaseFeatures"), NO_API) \
	DECLARE_SERIALIZER(UStoragePutFileWithMetadataProxy)


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Storage_StorageNodes_h_550_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UStoragePutFileWithMetadataProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStoragePutFileWithMetadataProxy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStoragePutFileWithMetadataProxy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStoragePutFileWithMetadataProxy); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UStoragePutFileWithMetadataProxy(UStoragePutFileWithMetadataProxy&&); \
	NO_API UStoragePutFileWithMetadataProxy(const UStoragePutFileWithMetadataProxy&); \
public:


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Storage_StorageNodes_h_550_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UStoragePutFileWithMetadataProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UStoragePutFileWithMetadataProxy(UStoragePutFileWithMetadataProxy&&); \
	NO_API UStoragePutFileWithMetadataProxy(const UStoragePutFileWithMetadataProxy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStoragePutFileWithMetadataProxy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStoragePutFileWithMetadataProxy); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStoragePutFileWithMetadataProxy)


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Storage_StorageNodes_h_550_PRIVATE_PROPERTY_OFFSET
#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Storage_StorageNodes_h_547_PROLOG
#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Storage_StorageNodes_h_550_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Storage_StorageNodes_h_550_PRIVATE_PROPERTY_OFFSET \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Storage_StorageNodes_h_550_SPARSE_DATA \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Storage_StorageNodes_h_550_RPC_WRAPPERS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Storage_StorageNodes_h_550_INCLASS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Storage_StorageNodes_h_550_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Storage_StorageNodes_h_550_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Storage_StorageNodes_h_550_PRIVATE_PROPERTY_OFFSET \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Storage_StorageNodes_h_550_SPARSE_DATA \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Storage_StorageNodes_h_550_RPC_WRAPPERS_NO_PURE_DECLS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Storage_StorageNodes_h_550_INCLASS_NO_PURE_DECLS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Storage_StorageNodes_h_550_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FIREBASEFEATURES_API UClass* StaticClass<class UStoragePutFileWithMetadataProxy>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Storage_StorageNodes_h


#define FOREACH_ENUM_EFIREBASESTORAGEBLUEPRINTEXECUTIONPIN(op) \
	op(EFirebaseStorageBlueprintExecutionPin::Success) \
	op(EFirebaseStorageBlueprintExecutionPin::Failed) 

enum class EFirebaseStorageBlueprintExecutionPin : uint8;
template<> FIREBASEFEATURES_API UEnum* StaticEnum<EFirebaseStorageBlueprintExecutionPin>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
