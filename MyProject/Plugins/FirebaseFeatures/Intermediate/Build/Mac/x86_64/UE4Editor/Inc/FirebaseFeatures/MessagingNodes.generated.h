// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FFirebaseMessage;
enum class EFirebaseMessagingError : uint8;
class URequestPermissionProxy;
class USubscribeProxy;
class UUnsubscribeProxy;
class UMessagingEventsProxy;
#ifdef FIREBASEFEATURES_MessagingNodes_generated_h
#error "MessagingNodes.generated.h already included, missing '#pragma once' in MessagingNodes.h"
#endif
#define FIREBASEFEATURES_MessagingNodes_generated_h

#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Messaging_MessagingNodes_h_200_DELEGATE \
struct _Script_FirebaseFeatures_eventDynMultMessagingEvent_Parms \
{ \
	FFirebaseMessage Message; \
	FString Token; \
}; \
static inline void FDynMultMessagingEvent_DelegateWrapper(const FMulticastScriptDelegate& DynMultMessagingEvent, FFirebaseMessage const& Message, const FString& Token) \
{ \
	_Script_FirebaseFeatures_eventDynMultMessagingEvent_Parms Parms; \
	Parms.Message=Message; \
	Parms.Token=Token; \
	DynMultMessagingEvent.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Messaging_MessagingNodes_h_104_DELEGATE \
struct _Script_FirebaseFeatures_eventDynMultMessaging_Parms \
{ \
	EFirebaseMessagingError Error; \
}; \
static inline void FDynMultMessaging_DelegateWrapper(const FMulticastScriptDelegate& DynMultMessaging, const EFirebaseMessagingError Error) \
{ \
	_Script_FirebaseFeatures_eventDynMultMessaging_Parms Parms; \
	Parms.Error=Error; \
	DynMultMessaging.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Messaging_MessagingNodes_h_14_SPARSE_DATA
#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Messaging_MessagingNodes_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetLastMessage); \
	DECLARE_FUNCTION(execGetCachedCloudMessagingToken); \
	DECLARE_FUNCTION(execSetDeliveryMetricsExportToBigQuery); \
	DECLARE_FUNCTION(execIsDeliveryMetricsExportToBigQueryEnabled); \
	DECLARE_FUNCTION(execSend); \
	DECLARE_FUNCTION(execSetTokenRegistrationOnInitEnabled); \
	DECLARE_FUNCTION(execIsTokenRegistrationOnInitEnabled); \
	DECLARE_FUNCTION(execTerminate);


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Messaging_MessagingNodes_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetLastMessage); \
	DECLARE_FUNCTION(execGetCachedCloudMessagingToken); \
	DECLARE_FUNCTION(execSetDeliveryMetricsExportToBigQuery); \
	DECLARE_FUNCTION(execIsDeliveryMetricsExportToBigQueryEnabled); \
	DECLARE_FUNCTION(execSend); \
	DECLARE_FUNCTION(execSetTokenRegistrationOnInitEnabled); \
	DECLARE_FUNCTION(execIsTokenRegistrationOnInitEnabled); \
	DECLARE_FUNCTION(execTerminate);


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Messaging_MessagingNodes_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFirebaseMesssagingBlueprintLibrary(); \
	friend struct Z_Construct_UClass_UFirebaseMesssagingBlueprintLibrary_Statics; \
public: \
	DECLARE_CLASS(UFirebaseMesssagingBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FirebaseFeatures"), NO_API) \
	DECLARE_SERIALIZER(UFirebaseMesssagingBlueprintLibrary)


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Messaging_MessagingNodes_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUFirebaseMesssagingBlueprintLibrary(); \
	friend struct Z_Construct_UClass_UFirebaseMesssagingBlueprintLibrary_Statics; \
public: \
	DECLARE_CLASS(UFirebaseMesssagingBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FirebaseFeatures"), NO_API) \
	DECLARE_SERIALIZER(UFirebaseMesssagingBlueprintLibrary)


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Messaging_MessagingNodes_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFirebaseMesssagingBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFirebaseMesssagingBlueprintLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFirebaseMesssagingBlueprintLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFirebaseMesssagingBlueprintLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFirebaseMesssagingBlueprintLibrary(UFirebaseMesssagingBlueprintLibrary&&); \
	NO_API UFirebaseMesssagingBlueprintLibrary(const UFirebaseMesssagingBlueprintLibrary&); \
public:


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Messaging_MessagingNodes_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFirebaseMesssagingBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFirebaseMesssagingBlueprintLibrary(UFirebaseMesssagingBlueprintLibrary&&); \
	NO_API UFirebaseMesssagingBlueprintLibrary(const UFirebaseMesssagingBlueprintLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFirebaseMesssagingBlueprintLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFirebaseMesssagingBlueprintLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFirebaseMesssagingBlueprintLibrary)


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Messaging_MessagingNodes_h_14_PRIVATE_PROPERTY_OFFSET
#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Messaging_MessagingNodes_h_11_PROLOG
#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Messaging_MessagingNodes_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Messaging_MessagingNodes_h_14_PRIVATE_PROPERTY_OFFSET \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Messaging_MessagingNodes_h_14_SPARSE_DATA \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Messaging_MessagingNodes_h_14_RPC_WRAPPERS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Messaging_MessagingNodes_h_14_INCLASS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Messaging_MessagingNodes_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Messaging_MessagingNodes_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Messaging_MessagingNodes_h_14_PRIVATE_PROPERTY_OFFSET \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Messaging_MessagingNodes_h_14_SPARSE_DATA \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Messaging_MessagingNodes_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Messaging_MessagingNodes_h_14_INCLASS_NO_PURE_DECLS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Messaging_MessagingNodes_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FIREBASEFEATURES_API UClass* StaticClass<class UFirebaseMesssagingBlueprintLibrary>();

#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Messaging_MessagingNodes_h_109_SPARSE_DATA
#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Messaging_MessagingNodes_h_109_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execRequestPermission);


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Messaging_MessagingNodes_h_109_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execRequestPermission);


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Messaging_MessagingNodes_h_109_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURequestPermissionProxy(); \
	friend struct Z_Construct_UClass_URequestPermissionProxy_Statics; \
public: \
	DECLARE_CLASS(URequestPermissionProxy, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FirebaseFeatures"), NO_API) \
	DECLARE_SERIALIZER(URequestPermissionProxy)


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Messaging_MessagingNodes_h_109_INCLASS \
private: \
	static void StaticRegisterNativesURequestPermissionProxy(); \
	friend struct Z_Construct_UClass_URequestPermissionProxy_Statics; \
public: \
	DECLARE_CLASS(URequestPermissionProxy, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FirebaseFeatures"), NO_API) \
	DECLARE_SERIALIZER(URequestPermissionProxy)


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Messaging_MessagingNodes_h_109_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URequestPermissionProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URequestPermissionProxy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URequestPermissionProxy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URequestPermissionProxy); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URequestPermissionProxy(URequestPermissionProxy&&); \
	NO_API URequestPermissionProxy(const URequestPermissionProxy&); \
public:


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Messaging_MessagingNodes_h_109_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URequestPermissionProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URequestPermissionProxy(URequestPermissionProxy&&); \
	NO_API URequestPermissionProxy(const URequestPermissionProxy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URequestPermissionProxy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URequestPermissionProxy); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URequestPermissionProxy)


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Messaging_MessagingNodes_h_109_PRIVATE_PROPERTY_OFFSET
#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Messaging_MessagingNodes_h_106_PROLOG
#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Messaging_MessagingNodes_h_109_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Messaging_MessagingNodes_h_109_PRIVATE_PROPERTY_OFFSET \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Messaging_MessagingNodes_h_109_SPARSE_DATA \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Messaging_MessagingNodes_h_109_RPC_WRAPPERS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Messaging_MessagingNodes_h_109_INCLASS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Messaging_MessagingNodes_h_109_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Messaging_MessagingNodes_h_109_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Messaging_MessagingNodes_h_109_PRIVATE_PROPERTY_OFFSET \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Messaging_MessagingNodes_h_109_SPARSE_DATA \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Messaging_MessagingNodes_h_109_RPC_WRAPPERS_NO_PURE_DECLS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Messaging_MessagingNodes_h_109_INCLASS_NO_PURE_DECLS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Messaging_MessagingNodes_h_109_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FIREBASEFEATURES_API UClass* StaticClass<class URequestPermissionProxy>();

#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Messaging_MessagingNodes_h_141_SPARSE_DATA
#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Messaging_MessagingNodes_h_141_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSubscribe);


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Messaging_MessagingNodes_h_141_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSubscribe);


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Messaging_MessagingNodes_h_141_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSubscribeProxy(); \
	friend struct Z_Construct_UClass_USubscribeProxy_Statics; \
public: \
	DECLARE_CLASS(USubscribeProxy, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FirebaseFeatures"), NO_API) \
	DECLARE_SERIALIZER(USubscribeProxy)


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Messaging_MessagingNodes_h_141_INCLASS \
private: \
	static void StaticRegisterNativesUSubscribeProxy(); \
	friend struct Z_Construct_UClass_USubscribeProxy_Statics; \
public: \
	DECLARE_CLASS(USubscribeProxy, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FirebaseFeatures"), NO_API) \
	DECLARE_SERIALIZER(USubscribeProxy)


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Messaging_MessagingNodes_h_141_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USubscribeProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USubscribeProxy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USubscribeProxy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USubscribeProxy); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USubscribeProxy(USubscribeProxy&&); \
	NO_API USubscribeProxy(const USubscribeProxy&); \
public:


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Messaging_MessagingNodes_h_141_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USubscribeProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USubscribeProxy(USubscribeProxy&&); \
	NO_API USubscribeProxy(const USubscribeProxy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USubscribeProxy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USubscribeProxy); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USubscribeProxy)


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Messaging_MessagingNodes_h_141_PRIVATE_PROPERTY_OFFSET
#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Messaging_MessagingNodes_h_138_PROLOG
#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Messaging_MessagingNodes_h_141_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Messaging_MessagingNodes_h_141_PRIVATE_PROPERTY_OFFSET \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Messaging_MessagingNodes_h_141_SPARSE_DATA \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Messaging_MessagingNodes_h_141_RPC_WRAPPERS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Messaging_MessagingNodes_h_141_INCLASS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Messaging_MessagingNodes_h_141_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Messaging_MessagingNodes_h_141_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Messaging_MessagingNodes_h_141_PRIVATE_PROPERTY_OFFSET \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Messaging_MessagingNodes_h_141_SPARSE_DATA \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Messaging_MessagingNodes_h_141_RPC_WRAPPERS_NO_PURE_DECLS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Messaging_MessagingNodes_h_141_INCLASS_NO_PURE_DECLS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Messaging_MessagingNodes_h_141_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FIREBASEFEATURES_API UClass* StaticClass<class USubscribeProxy>();

#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Messaging_MessagingNodes_h_172_SPARSE_DATA
#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Messaging_MessagingNodes_h_172_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execUnsubscribe);


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Messaging_MessagingNodes_h_172_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execUnsubscribe);


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Messaging_MessagingNodes_h_172_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUnsubscribeProxy(); \
	friend struct Z_Construct_UClass_UUnsubscribeProxy_Statics; \
public: \
	DECLARE_CLASS(UUnsubscribeProxy, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FirebaseFeatures"), NO_API) \
	DECLARE_SERIALIZER(UUnsubscribeProxy)


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Messaging_MessagingNodes_h_172_INCLASS \
private: \
	static void StaticRegisterNativesUUnsubscribeProxy(); \
	friend struct Z_Construct_UClass_UUnsubscribeProxy_Statics; \
public: \
	DECLARE_CLASS(UUnsubscribeProxy, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FirebaseFeatures"), NO_API) \
	DECLARE_SERIALIZER(UUnsubscribeProxy)


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Messaging_MessagingNodes_h_172_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUnsubscribeProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUnsubscribeProxy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUnsubscribeProxy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUnsubscribeProxy); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUnsubscribeProxy(UUnsubscribeProxy&&); \
	NO_API UUnsubscribeProxy(const UUnsubscribeProxy&); \
public:


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Messaging_MessagingNodes_h_172_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUnsubscribeProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUnsubscribeProxy(UUnsubscribeProxy&&); \
	NO_API UUnsubscribeProxy(const UUnsubscribeProxy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUnsubscribeProxy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUnsubscribeProxy); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUnsubscribeProxy)


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Messaging_MessagingNodes_h_172_PRIVATE_PROPERTY_OFFSET
#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Messaging_MessagingNodes_h_169_PROLOG
#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Messaging_MessagingNodes_h_172_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Messaging_MessagingNodes_h_172_PRIVATE_PROPERTY_OFFSET \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Messaging_MessagingNodes_h_172_SPARSE_DATA \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Messaging_MessagingNodes_h_172_RPC_WRAPPERS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Messaging_MessagingNodes_h_172_INCLASS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Messaging_MessagingNodes_h_172_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Messaging_MessagingNodes_h_172_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Messaging_MessagingNodes_h_172_PRIVATE_PROPERTY_OFFSET \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Messaging_MessagingNodes_h_172_SPARSE_DATA \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Messaging_MessagingNodes_h_172_RPC_WRAPPERS_NO_PURE_DECLS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Messaging_MessagingNodes_h_172_INCLASS_NO_PURE_DECLS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Messaging_MessagingNodes_h_172_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FIREBASEFEATURES_API UClass* StaticClass<class UUnsubscribeProxy>();

#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Messaging_MessagingNodes_h_205_SPARSE_DATA
#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Messaging_MessagingNodes_h_205_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execListenForMessagingEvents);


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Messaging_MessagingNodes_h_205_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execListenForMessagingEvents);


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Messaging_MessagingNodes_h_205_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMessagingEventsProxy(); \
	friend struct Z_Construct_UClass_UMessagingEventsProxy_Statics; \
public: \
	DECLARE_CLASS(UMessagingEventsProxy, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FirebaseFeatures"), NO_API) \
	DECLARE_SERIALIZER(UMessagingEventsProxy)


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Messaging_MessagingNodes_h_205_INCLASS \
private: \
	static void StaticRegisterNativesUMessagingEventsProxy(); \
	friend struct Z_Construct_UClass_UMessagingEventsProxy_Statics; \
public: \
	DECLARE_CLASS(UMessagingEventsProxy, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FirebaseFeatures"), NO_API) \
	DECLARE_SERIALIZER(UMessagingEventsProxy)


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Messaging_MessagingNodes_h_205_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMessagingEventsProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMessagingEventsProxy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMessagingEventsProxy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMessagingEventsProxy); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMessagingEventsProxy(UMessagingEventsProxy&&); \
	NO_API UMessagingEventsProxy(const UMessagingEventsProxy&); \
public:


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Messaging_MessagingNodes_h_205_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMessagingEventsProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMessagingEventsProxy(UMessagingEventsProxy&&); \
	NO_API UMessagingEventsProxy(const UMessagingEventsProxy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMessagingEventsProxy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMessagingEventsProxy); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMessagingEventsProxy)


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Messaging_MessagingNodes_h_205_PRIVATE_PROPERTY_OFFSET
#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Messaging_MessagingNodes_h_202_PROLOG
#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Messaging_MessagingNodes_h_205_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Messaging_MessagingNodes_h_205_PRIVATE_PROPERTY_OFFSET \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Messaging_MessagingNodes_h_205_SPARSE_DATA \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Messaging_MessagingNodes_h_205_RPC_WRAPPERS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Messaging_MessagingNodes_h_205_INCLASS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Messaging_MessagingNodes_h_205_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Messaging_MessagingNodes_h_205_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Messaging_MessagingNodes_h_205_PRIVATE_PROPERTY_OFFSET \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Messaging_MessagingNodes_h_205_SPARSE_DATA \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Messaging_MessagingNodes_h_205_RPC_WRAPPERS_NO_PURE_DECLS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Messaging_MessagingNodes_h_205_INCLASS_NO_PURE_DECLS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Messaging_MessagingNodes_h_205_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FIREBASEFEATURES_API UClass* StaticClass<class UMessagingEventsProxy>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Messaging_MessagingNodes_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
