// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UGetAnalyticsInstanceIdProxy;
#ifdef FIREBASEFEATURES_FirebaseAnalyticsNodes_generated_h
#error "FirebaseAnalyticsNodes.generated.h already included, missing '#pragma once' in FirebaseAnalyticsNodes.h"
#endif
#define FIREBASEFEATURES_FirebaseAnalyticsNodes_generated_h

#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Analytics_FirebaseAnalyticsNodes_h_8_DELEGATE \
struct _Script_FirebaseFeatures_eventGetAnalyticsInstanceIdCallback_Parms \
{ \
	FString InstanceId; \
}; \
static inline void FGetAnalyticsInstanceIdCallback_DelegateWrapper(const FMulticastScriptDelegate& GetAnalyticsInstanceIdCallback, const FString& InstanceId) \
{ \
	_Script_FirebaseFeatures_eventGetAnalyticsInstanceIdCallback_Parms Parms; \
	Parms.InstanceId=InstanceId; \
	GetAnalyticsInstanceIdCallback.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Analytics_FirebaseAnalyticsNodes_h_13_SPARSE_DATA
#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Analytics_FirebaseAnalyticsNodes_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetAnalyticsInstanceId);


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Analytics_FirebaseAnalyticsNodes_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetAnalyticsInstanceId);


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Analytics_FirebaseAnalyticsNodes_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGetAnalyticsInstanceIdProxy(); \
	friend struct Z_Construct_UClass_UGetAnalyticsInstanceIdProxy_Statics; \
public: \
	DECLARE_CLASS(UGetAnalyticsInstanceIdProxy, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FirebaseFeatures"), NO_API) \
	DECLARE_SERIALIZER(UGetAnalyticsInstanceIdProxy)


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Analytics_FirebaseAnalyticsNodes_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUGetAnalyticsInstanceIdProxy(); \
	friend struct Z_Construct_UClass_UGetAnalyticsInstanceIdProxy_Statics; \
public: \
	DECLARE_CLASS(UGetAnalyticsInstanceIdProxy, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FirebaseFeatures"), NO_API) \
	DECLARE_SERIALIZER(UGetAnalyticsInstanceIdProxy)


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Analytics_FirebaseAnalyticsNodes_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGetAnalyticsInstanceIdProxy(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGetAnalyticsInstanceIdProxy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGetAnalyticsInstanceIdProxy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGetAnalyticsInstanceIdProxy); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGetAnalyticsInstanceIdProxy(UGetAnalyticsInstanceIdProxy&&); \
	NO_API UGetAnalyticsInstanceIdProxy(const UGetAnalyticsInstanceIdProxy&); \
public:


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Analytics_FirebaseAnalyticsNodes_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGetAnalyticsInstanceIdProxy(UGetAnalyticsInstanceIdProxy&&); \
	NO_API UGetAnalyticsInstanceIdProxy(const UGetAnalyticsInstanceIdProxy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGetAnalyticsInstanceIdProxy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGetAnalyticsInstanceIdProxy); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UGetAnalyticsInstanceIdProxy)


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Analytics_FirebaseAnalyticsNodes_h_13_PRIVATE_PROPERTY_OFFSET
#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Analytics_FirebaseAnalyticsNodes_h_10_PROLOG
#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Analytics_FirebaseAnalyticsNodes_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Analytics_FirebaseAnalyticsNodes_h_13_PRIVATE_PROPERTY_OFFSET \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Analytics_FirebaseAnalyticsNodes_h_13_SPARSE_DATA \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Analytics_FirebaseAnalyticsNodes_h_13_RPC_WRAPPERS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Analytics_FirebaseAnalyticsNodes_h_13_INCLASS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Analytics_FirebaseAnalyticsNodes_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Analytics_FirebaseAnalyticsNodes_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Analytics_FirebaseAnalyticsNodes_h_13_PRIVATE_PROPERTY_OFFSET \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Analytics_FirebaseAnalyticsNodes_h_13_SPARSE_DATA \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Analytics_FirebaseAnalyticsNodes_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Analytics_FirebaseAnalyticsNodes_h_13_INCLASS_NO_PURE_DECLS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Analytics_FirebaseAnalyticsNodes_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FIREBASEFEATURES_API UClass* StaticClass<class UGetAnalyticsInstanceIdProxy>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Analytics_FirebaseAnalyticsNodes_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
