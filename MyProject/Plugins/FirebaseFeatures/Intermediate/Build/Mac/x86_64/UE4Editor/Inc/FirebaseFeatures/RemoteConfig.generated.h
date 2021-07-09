// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FFirebaseConfigInfo;
struct FFirebaseValueInfo;
enum class EFirebaseConfigSetting : uint8;
struct FFirebaseConfigKeyValue;
struct FFirebaseConfigKeyValueVariant;
#ifdef FIREBASEFEATURES_RemoteConfig_generated_h
#error "RemoteConfig.generated.h already included, missing '#pragma once' in RemoteConfig.h"
#endif
#define FIREBASEFEATURES_RemoteConfig_generated_h

#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Public_RemoteConfig_RemoteConfig_h_129_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FFirebaseConfigKeyValueVariant_Statics; \
	static class UScriptStruct* StaticStruct();


template<> FIREBASEFEATURES_API UScriptStruct* StaticStruct<struct FFirebaseConfigKeyValueVariant>();

#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Public_RemoteConfig_RemoteConfig_h_113_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FFirebaseConfigKeyValue_Statics; \
	static class UScriptStruct* StaticStruct();


template<> FIREBASEFEATURES_API UScriptStruct* StaticStruct<struct FFirebaseConfigKeyValue>();

#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Public_RemoteConfig_RemoteConfig_h_94_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FFirebaseValueInfo_Statics; \
	static class UScriptStruct* StaticStruct();


template<> FIREBASEFEATURES_API UScriptStruct* StaticStruct<struct FFirebaseValueInfo>();

#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Public_RemoteConfig_RemoteConfig_h_68_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FFirebaseConfigInfo_Statics; \
	static class UScriptStruct* StaticStruct();


template<> FIREBASEFEATURES_API UScriptStruct* StaticStruct<struct FFirebaseConfigInfo>();

#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Public_RemoteConfig_RemoteConfig_h_146_SPARSE_DATA
#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Public_RemoteConfig_RemoteConfig_h_146_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetInfo); \
	DECLARE_FUNCTION(execActivateFetched); \
	DECLARE_FUNCTION(execGetKeys); \
	DECLARE_FUNCTION(execGetKeysByPrefix); \
	DECLARE_FUNCTION(execGetDataWithInfo); \
	DECLARE_FUNCTION(execGetData); \
	DECLARE_FUNCTION(execGetStringWithInfo); \
	DECLARE_FUNCTION(execGetString); \
	DECLARE_FUNCTION(execGetFloatWithInfo); \
	DECLARE_FUNCTION(execGetFloat); \
	DECLARE_FUNCTION(execGetInt64WithInfo); \
	DECLARE_FUNCTION(execGetInt64); \
	DECLARE_FUNCTION(execGetInt32); \
	DECLARE_FUNCTION(execGetByte); \
	DECLARE_FUNCTION(execGetBooleanWithInfo); \
	DECLARE_FUNCTION(execGetBoolean); \
	DECLARE_FUNCTION(execSetConfigSetting); \
	DECLARE_FUNCTION(execGetConfigSetting); \
	DECLARE_FUNCTION(execSetDefaults); \
	DECLARE_FUNCTION(execSetDefaultsWithVariant); \
	DECLARE_FUNCTION(execTerminate);


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Public_RemoteConfig_RemoteConfig_h_146_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetInfo); \
	DECLARE_FUNCTION(execActivateFetched); \
	DECLARE_FUNCTION(execGetKeys); \
	DECLARE_FUNCTION(execGetKeysByPrefix); \
	DECLARE_FUNCTION(execGetDataWithInfo); \
	DECLARE_FUNCTION(execGetData); \
	DECLARE_FUNCTION(execGetStringWithInfo); \
	DECLARE_FUNCTION(execGetString); \
	DECLARE_FUNCTION(execGetFloatWithInfo); \
	DECLARE_FUNCTION(execGetFloat); \
	DECLARE_FUNCTION(execGetInt64WithInfo); \
	DECLARE_FUNCTION(execGetInt64); \
	DECLARE_FUNCTION(execGetInt32); \
	DECLARE_FUNCTION(execGetByte); \
	DECLARE_FUNCTION(execGetBooleanWithInfo); \
	DECLARE_FUNCTION(execGetBoolean); \
	DECLARE_FUNCTION(execSetConfigSetting); \
	DECLARE_FUNCTION(execGetConfigSetting); \
	DECLARE_FUNCTION(execSetDefaults); \
	DECLARE_FUNCTION(execSetDefaultsWithVariant); \
	DECLARE_FUNCTION(execTerminate);


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Public_RemoteConfig_RemoteConfig_h_146_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFirebaseRemoteConfig(); \
	friend struct Z_Construct_UClass_UFirebaseRemoteConfig_Statics; \
public: \
	DECLARE_CLASS(UFirebaseRemoteConfig, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FirebaseFeatures"), NO_API) \
	DECLARE_SERIALIZER(UFirebaseRemoteConfig)


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Public_RemoteConfig_RemoteConfig_h_146_INCLASS \
private: \
	static void StaticRegisterNativesUFirebaseRemoteConfig(); \
	friend struct Z_Construct_UClass_UFirebaseRemoteConfig_Statics; \
public: \
	DECLARE_CLASS(UFirebaseRemoteConfig, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FirebaseFeatures"), NO_API) \
	DECLARE_SERIALIZER(UFirebaseRemoteConfig)


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Public_RemoteConfig_RemoteConfig_h_146_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFirebaseRemoteConfig(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFirebaseRemoteConfig) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFirebaseRemoteConfig); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFirebaseRemoteConfig); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFirebaseRemoteConfig(UFirebaseRemoteConfig&&); \
	NO_API UFirebaseRemoteConfig(const UFirebaseRemoteConfig&); \
public:


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Public_RemoteConfig_RemoteConfig_h_146_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFirebaseRemoteConfig(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFirebaseRemoteConfig(UFirebaseRemoteConfig&&); \
	NO_API UFirebaseRemoteConfig(const UFirebaseRemoteConfig&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFirebaseRemoteConfig); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFirebaseRemoteConfig); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFirebaseRemoteConfig)


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Public_RemoteConfig_RemoteConfig_h_146_PRIVATE_PROPERTY_OFFSET
#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Public_RemoteConfig_RemoteConfig_h_143_PROLOG
#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Public_RemoteConfig_RemoteConfig_h_146_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Public_RemoteConfig_RemoteConfig_h_146_PRIVATE_PROPERTY_OFFSET \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Public_RemoteConfig_RemoteConfig_h_146_SPARSE_DATA \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Public_RemoteConfig_RemoteConfig_h_146_RPC_WRAPPERS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Public_RemoteConfig_RemoteConfig_h_146_INCLASS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Public_RemoteConfig_RemoteConfig_h_146_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Public_RemoteConfig_RemoteConfig_h_146_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Public_RemoteConfig_RemoteConfig_h_146_PRIVATE_PROPERTY_OFFSET \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Public_RemoteConfig_RemoteConfig_h_146_SPARSE_DATA \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Public_RemoteConfig_RemoteConfig_h_146_RPC_WRAPPERS_NO_PURE_DECLS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Public_RemoteConfig_RemoteConfig_h_146_INCLASS_NO_PURE_DECLS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Public_RemoteConfig_RemoteConfig_h_146_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FIREBASEFEATURES_API UClass* StaticClass<class UFirebaseRemoteConfig>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Public_RemoteConfig_RemoteConfig_h


#define FOREACH_ENUM_EFIREBASECONFIGSETTING(op) \
	op(EFirebaseConfigSetting::SettingDeveloperMode) 

enum class EFirebaseConfigSetting : uint8;
template<> FIREBASEFEATURES_API UEnum* StaticEnum<EFirebaseConfigSetting>();

#define FOREACH_ENUM_EFIREBASEFETCHFAILUREREASON(op) \
	op(EFirebaseFetchFailureReason::Invalid) \
	op(EFirebaseFetchFailureReason::Throttled) \
	op(EFirebaseFetchFailureReason::Error) 

enum class EFirebaseFetchFailureReason : uint8;
template<> FIREBASEFEATURES_API UEnum* StaticEnum<EFirebaseFetchFailureReason>();

#define FOREACH_ENUM_EFIREBASELASTFETCHSTATUS(op) \
	op(EFirebaseLastFetchStatus::Success) \
	op(EFirebaseLastFetchStatus::Failure) \
	op(EFirebaseLastFetchStatus::Pending) 

enum class EFirebaseLastFetchStatus : uint8;
template<> FIREBASEFEATURES_API UEnum* StaticEnum<EFirebaseLastFetchStatus>();

#define FOREACH_ENUM_EFIREBASEVALUESOURCE(op) \
	op(EFirebaseValueSource::StaticValue) \
	op(EFirebaseValueSource::RemoteValue) \
	op(EFirebaseValueSource::DefaultValue) 

enum class EFirebaseValueSource : uint8;
template<> FIREBASEFEATURES_API UEnum* StaticEnum<EFirebaseValueSource>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
