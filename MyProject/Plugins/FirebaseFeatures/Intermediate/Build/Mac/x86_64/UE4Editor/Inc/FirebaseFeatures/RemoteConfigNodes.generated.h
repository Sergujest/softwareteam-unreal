// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UFetchProxy;
class UFetchWithCacheExpirationProxy;
#ifdef FIREBASEFEATURES_RemoteConfigNodes_generated_h
#error "RemoteConfigNodes.generated.h already included, missing '#pragma once' in RemoteConfigNodes.h"
#endif
#define FIREBASEFEATURES_RemoteConfigNodes_generated_h

#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_RemoteConfig_RemoteConfigNodes_h_9_DELEGATE \
static inline void FDynMultOnFetched_DelegateWrapper(const FMulticastScriptDelegate& DynMultOnFetched) \
{ \
	DynMultOnFetched.ProcessMulticastDelegate<UObject>(NULL); \
}


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_RemoteConfig_RemoteConfigNodes_h_14_SPARSE_DATA
#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_RemoteConfig_RemoteConfigNodes_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execFetch);


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_RemoteConfig_RemoteConfigNodes_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execFetch);


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_RemoteConfig_RemoteConfigNodes_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFetchProxy(); \
	friend struct Z_Construct_UClass_UFetchProxy_Statics; \
public: \
	DECLARE_CLASS(UFetchProxy, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FirebaseFeatures"), NO_API) \
	DECLARE_SERIALIZER(UFetchProxy)


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_RemoteConfig_RemoteConfigNodes_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUFetchProxy(); \
	friend struct Z_Construct_UClass_UFetchProxy_Statics; \
public: \
	DECLARE_CLASS(UFetchProxy, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FirebaseFeatures"), NO_API) \
	DECLARE_SERIALIZER(UFetchProxy)


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_RemoteConfig_RemoteConfigNodes_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFetchProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFetchProxy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFetchProxy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFetchProxy); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFetchProxy(UFetchProxy&&); \
	NO_API UFetchProxy(const UFetchProxy&); \
public:


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_RemoteConfig_RemoteConfigNodes_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFetchProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFetchProxy(UFetchProxy&&); \
	NO_API UFetchProxy(const UFetchProxy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFetchProxy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFetchProxy); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFetchProxy)


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_RemoteConfig_RemoteConfigNodes_h_14_PRIVATE_PROPERTY_OFFSET
#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_RemoteConfig_RemoteConfigNodes_h_11_PROLOG
#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_RemoteConfig_RemoteConfigNodes_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_RemoteConfig_RemoteConfigNodes_h_14_PRIVATE_PROPERTY_OFFSET \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_RemoteConfig_RemoteConfigNodes_h_14_SPARSE_DATA \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_RemoteConfig_RemoteConfigNodes_h_14_RPC_WRAPPERS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_RemoteConfig_RemoteConfigNodes_h_14_INCLASS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_RemoteConfig_RemoteConfigNodes_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_RemoteConfig_RemoteConfigNodes_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_RemoteConfig_RemoteConfigNodes_h_14_PRIVATE_PROPERTY_OFFSET \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_RemoteConfig_RemoteConfigNodes_h_14_SPARSE_DATA \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_RemoteConfig_RemoteConfigNodes_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_RemoteConfig_RemoteConfigNodes_h_14_INCLASS_NO_PURE_DECLS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_RemoteConfig_RemoteConfigNodes_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FIREBASEFEATURES_API UClass* StaticClass<class UFetchProxy>();

#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_RemoteConfig_RemoteConfigNodes_h_32_SPARSE_DATA
#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_RemoteConfig_RemoteConfigNodes_h_32_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execFetchWithCacheExpiration);


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_RemoteConfig_RemoteConfigNodes_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execFetchWithCacheExpiration);


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_RemoteConfig_RemoteConfigNodes_h_32_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFetchWithCacheExpirationProxy(); \
	friend struct Z_Construct_UClass_UFetchWithCacheExpirationProxy_Statics; \
public: \
	DECLARE_CLASS(UFetchWithCacheExpirationProxy, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FirebaseFeatures"), NO_API) \
	DECLARE_SERIALIZER(UFetchWithCacheExpirationProxy)


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_RemoteConfig_RemoteConfigNodes_h_32_INCLASS \
private: \
	static void StaticRegisterNativesUFetchWithCacheExpirationProxy(); \
	friend struct Z_Construct_UClass_UFetchWithCacheExpirationProxy_Statics; \
public: \
	DECLARE_CLASS(UFetchWithCacheExpirationProxy, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FirebaseFeatures"), NO_API) \
	DECLARE_SERIALIZER(UFetchWithCacheExpirationProxy)


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_RemoteConfig_RemoteConfigNodes_h_32_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFetchWithCacheExpirationProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFetchWithCacheExpirationProxy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFetchWithCacheExpirationProxy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFetchWithCacheExpirationProxy); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFetchWithCacheExpirationProxy(UFetchWithCacheExpirationProxy&&); \
	NO_API UFetchWithCacheExpirationProxy(const UFetchWithCacheExpirationProxy&); \
public:


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_RemoteConfig_RemoteConfigNodes_h_32_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFetchWithCacheExpirationProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFetchWithCacheExpirationProxy(UFetchWithCacheExpirationProxy&&); \
	NO_API UFetchWithCacheExpirationProxy(const UFetchWithCacheExpirationProxy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFetchWithCacheExpirationProxy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFetchWithCacheExpirationProxy); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFetchWithCacheExpirationProxy)


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_RemoteConfig_RemoteConfigNodes_h_32_PRIVATE_PROPERTY_OFFSET
#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_RemoteConfig_RemoteConfigNodes_h_29_PROLOG
#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_RemoteConfig_RemoteConfigNodes_h_32_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_RemoteConfig_RemoteConfigNodes_h_32_PRIVATE_PROPERTY_OFFSET \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_RemoteConfig_RemoteConfigNodes_h_32_SPARSE_DATA \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_RemoteConfig_RemoteConfigNodes_h_32_RPC_WRAPPERS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_RemoteConfig_RemoteConfigNodes_h_32_INCLASS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_RemoteConfig_RemoteConfigNodes_h_32_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_RemoteConfig_RemoteConfigNodes_h_32_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_RemoteConfig_RemoteConfigNodes_h_32_PRIVATE_PROPERTY_OFFSET \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_RemoteConfig_RemoteConfigNodes_h_32_SPARSE_DATA \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_RemoteConfig_RemoteConfigNodes_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_RemoteConfig_RemoteConfigNodes_h_32_INCLASS_NO_PURE_DECLS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_RemoteConfig_RemoteConfigNodes_h_32_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FIREBASEFEATURES_API UClass* StaticClass<class UFetchWithCacheExpirationProxy>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_RemoteConfig_RemoteConfigNodes_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
