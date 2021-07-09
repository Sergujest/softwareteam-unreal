// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ETransactionResult : uint8;
struct FMutableData;
enum class EFirebaseDatabaseError : uint8;
class UDataSnapshot;
struct FFirebaseVariant;
class UDisconnectionHandler;
class UDisconnectionCancelProxy;
class UDisconnectionRemoveValueProxy;
class UDisconnectionSetValueProxy;
class UDisconnectionSetValueAndPriorityProxy;
class UDisconnectionUpdateChildrenProxy;
class UDatabaseQuery;
class UDatabaseQueryGetValue;
class UDatabaseReference;
class URemoveValueProxy;
class URunTransactionProxy;
class USetPriorityProxy;
class USetValueProxy;
class USetValueAndPriorityProxy;
class UUpdateChildrenProxy;
#ifdef FIREBASEFEATURES_DatabaseNodes_generated_h
#error "DatabaseNodes.generated.h already included, missing '#pragma once' in DatabaseNodes.h"
#endif
#define FIREBASEFEATURES_DatabaseNodes_generated_h

#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_320_DELEGATE \
struct _Script_FirebaseFeatures_eventRunTransactionCallback_Parms \
{ \
	FMutableData Data; \
	ETransactionResult ReturnValue; \
 \
	/** Constructor, initializes return property only **/ \
	_Script_FirebaseFeatures_eventRunTransactionCallback_Parms() \
		: ReturnValue((ETransactionResult)0) \
	{ \
	} \
}; \
static inline ETransactionResult FRunTransactionCallback_DelegateWrapper(const FScriptDelegate& RunTransactionCallback, FMutableData const& Data) \
{ \
	_Script_FirebaseFeatures_eventRunTransactionCallback_Parms Parms; \
	Parms.Data=Data; \
	RunTransactionCallback.ProcessDelegate<UObject>(&Parms); \
	return Parms.ReturnValue; \
}


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_260_DELEGATE \
struct _Script_FirebaseFeatures_eventDynMultSnapshot_Parms \
{ \
	EFirebaseDatabaseError Error; \
	const UDataSnapshot* Snapshot; \
}; \
static inline void FDynMultSnapshot_DelegateWrapper(const FMulticastScriptDelegate& DynMultSnapshot, const EFirebaseDatabaseError Error, const UDataSnapshot* Snapshot) \
{ \
	_Script_FirebaseFeatures_eventDynMultSnapshot_Parms Parms; \
	Parms.Error=Error; \
	Parms.Snapshot=Snapshot; \
	DynMultSnapshot.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_96_DELEGATE \
struct _Script_FirebaseFeatures_eventDynMultFutureVoidCallback_Parms \
{ \
	EFirebaseDatabaseError Error; \
}; \
static inline void FDynMultFutureVoidCallback_DelegateWrapper(const FMulticastScriptDelegate& DynMultFutureVoidCallback, const EFirebaseDatabaseError Error) \
{ \
	_Script_FirebaseFeatures_eventDynMultFutureVoidCallback_Parms Parms; \
	Parms.Error=Error; \
	DynMultFutureVoidCallback.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_14_SPARSE_DATA
#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execMutable_SetPriority); \
	DECLARE_FUNCTION(execMutable_SetValue); \
	DECLARE_FUNCTION(execMutable_HasChild); \
	DECLARE_FUNCTION(execMutable_GetPriority); \
	DECLARE_FUNCTION(execMutable_GetValue); \
	DECLARE_FUNCTION(execMutable_GetKey); \
	DECLARE_FUNCTION(execMutable_GetChildrenCount); \
	DECLARE_FUNCTION(execMutable_GetChildren); \
	DECLARE_FUNCTION(execMutable_GetChild);


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execMutable_SetPriority); \
	DECLARE_FUNCTION(execMutable_SetValue); \
	DECLARE_FUNCTION(execMutable_HasChild); \
	DECLARE_FUNCTION(execMutable_GetPriority); \
	DECLARE_FUNCTION(execMutable_GetValue); \
	DECLARE_FUNCTION(execMutable_GetKey); \
	DECLARE_FUNCTION(execMutable_GetChildrenCount); \
	DECLARE_FUNCTION(execMutable_GetChildren); \
	DECLARE_FUNCTION(execMutable_GetChild);


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFirebaseDatabaseLibrary(); \
	friend struct Z_Construct_UClass_UFirebaseDatabaseLibrary_Statics; \
public: \
	DECLARE_CLASS(UFirebaseDatabaseLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FirebaseFeatures"), NO_API) \
	DECLARE_SERIALIZER(UFirebaseDatabaseLibrary)


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUFirebaseDatabaseLibrary(); \
	friend struct Z_Construct_UClass_UFirebaseDatabaseLibrary_Statics; \
public: \
	DECLARE_CLASS(UFirebaseDatabaseLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FirebaseFeatures"), NO_API) \
	DECLARE_SERIALIZER(UFirebaseDatabaseLibrary)


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFirebaseDatabaseLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFirebaseDatabaseLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFirebaseDatabaseLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFirebaseDatabaseLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFirebaseDatabaseLibrary(UFirebaseDatabaseLibrary&&); \
	NO_API UFirebaseDatabaseLibrary(const UFirebaseDatabaseLibrary&); \
public:


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFirebaseDatabaseLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFirebaseDatabaseLibrary(UFirebaseDatabaseLibrary&&); \
	NO_API UFirebaseDatabaseLibrary(const UFirebaseDatabaseLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFirebaseDatabaseLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFirebaseDatabaseLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFirebaseDatabaseLibrary)


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_14_PRIVATE_PROPERTY_OFFSET
#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_11_PROLOG
#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_14_PRIVATE_PROPERTY_OFFSET \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_14_SPARSE_DATA \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_14_RPC_WRAPPERS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_14_INCLASS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_14_PRIVATE_PROPERTY_OFFSET \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_14_SPARSE_DATA \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_14_INCLASS_NO_PURE_DECLS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FIREBASEFEATURES_API UClass* StaticClass<class UFirebaseDatabaseLibrary>();

#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_102_SPARSE_DATA
#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_102_RPC_WRAPPERS
#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_102_RPC_WRAPPERS_NO_PURE_DECLS
#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_102_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDisconnectionHandlerProxybase(); \
	friend struct Z_Construct_UClass_UDisconnectionHandlerProxybase_Statics; \
public: \
	DECLARE_CLASS(UDisconnectionHandlerProxybase, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/FirebaseFeatures"), FIREBASEFEATURES_API) \
	DECLARE_SERIALIZER(UDisconnectionHandlerProxybase)


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_102_INCLASS \
private: \
	static void StaticRegisterNativesUDisconnectionHandlerProxybase(); \
	friend struct Z_Construct_UClass_UDisconnectionHandlerProxybase_Statics; \
public: \
	DECLARE_CLASS(UDisconnectionHandlerProxybase, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/FirebaseFeatures"), FIREBASEFEATURES_API) \
	DECLARE_SERIALIZER(UDisconnectionHandlerProxybase)


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_102_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	FIREBASEFEATURES_API UDisconnectionHandlerProxybase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDisconnectionHandlerProxybase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(FIREBASEFEATURES_API, UDisconnectionHandlerProxybase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDisconnectionHandlerProxybase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	FIREBASEFEATURES_API UDisconnectionHandlerProxybase(UDisconnectionHandlerProxybase&&); \
	FIREBASEFEATURES_API UDisconnectionHandlerProxybase(const UDisconnectionHandlerProxybase&); \
public:


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_102_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	FIREBASEFEATURES_API UDisconnectionHandlerProxybase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	FIREBASEFEATURES_API UDisconnectionHandlerProxybase(UDisconnectionHandlerProxybase&&); \
	FIREBASEFEATURES_API UDisconnectionHandlerProxybase(const UDisconnectionHandlerProxybase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(FIREBASEFEATURES_API, UDisconnectionHandlerProxybase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDisconnectionHandlerProxybase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDisconnectionHandlerProxybase)


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_102_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Handler() { return STRUCT_OFFSET(UDisconnectionHandlerProxybase, Handler); }


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_99_PROLOG
#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_102_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_102_PRIVATE_PROPERTY_OFFSET \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_102_SPARSE_DATA \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_102_RPC_WRAPPERS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_102_INCLASS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_102_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_102_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_102_PRIVATE_PROPERTY_OFFSET \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_102_SPARSE_DATA \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_102_RPC_WRAPPERS_NO_PURE_DECLS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_102_INCLASS_NO_PURE_DECLS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_102_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FIREBASEFEATURES_API UClass* StaticClass<class UDisconnectionHandlerProxybase>();

#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_113_SPARSE_DATA
#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_113_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCancel);


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_113_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCancel);


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_113_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDisconnectionCancelProxy(); \
	friend struct Z_Construct_UClass_UDisconnectionCancelProxy_Statics; \
public: \
	DECLARE_CLASS(UDisconnectionCancelProxy, UDisconnectionHandlerProxybase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FirebaseFeatures"), FIREBASEFEATURES_API) \
	DECLARE_SERIALIZER(UDisconnectionCancelProxy)


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_113_INCLASS \
private: \
	static void StaticRegisterNativesUDisconnectionCancelProxy(); \
	friend struct Z_Construct_UClass_UDisconnectionCancelProxy_Statics; \
public: \
	DECLARE_CLASS(UDisconnectionCancelProxy, UDisconnectionHandlerProxybase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FirebaseFeatures"), FIREBASEFEATURES_API) \
	DECLARE_SERIALIZER(UDisconnectionCancelProxy)


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_113_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	FIREBASEFEATURES_API UDisconnectionCancelProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDisconnectionCancelProxy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(FIREBASEFEATURES_API, UDisconnectionCancelProxy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDisconnectionCancelProxy); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	FIREBASEFEATURES_API UDisconnectionCancelProxy(UDisconnectionCancelProxy&&); \
	FIREBASEFEATURES_API UDisconnectionCancelProxy(const UDisconnectionCancelProxy&); \
public:


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_113_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	FIREBASEFEATURES_API UDisconnectionCancelProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	FIREBASEFEATURES_API UDisconnectionCancelProxy(UDisconnectionCancelProxy&&); \
	FIREBASEFEATURES_API UDisconnectionCancelProxy(const UDisconnectionCancelProxy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(FIREBASEFEATURES_API, UDisconnectionCancelProxy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDisconnectionCancelProxy); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDisconnectionCancelProxy)


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_113_PRIVATE_PROPERTY_OFFSET
#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_110_PROLOG
#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_113_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_113_PRIVATE_PROPERTY_OFFSET \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_113_SPARSE_DATA \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_113_RPC_WRAPPERS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_113_INCLASS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_113_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_113_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_113_PRIVATE_PROPERTY_OFFSET \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_113_SPARSE_DATA \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_113_RPC_WRAPPERS_NO_PURE_DECLS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_113_INCLASS_NO_PURE_DECLS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_113_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FIREBASEFEATURES_API UClass* StaticClass<class UDisconnectionCancelProxy>();

#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_137_SPARSE_DATA
#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_137_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execRemoveValue);


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_137_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execRemoveValue);


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_137_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDisconnectionRemoveValueProxy(); \
	friend struct Z_Construct_UClass_UDisconnectionRemoveValueProxy_Statics; \
public: \
	DECLARE_CLASS(UDisconnectionRemoveValueProxy, UDisconnectionHandlerProxybase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FirebaseFeatures"), FIREBASEFEATURES_API) \
	DECLARE_SERIALIZER(UDisconnectionRemoveValueProxy)


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_137_INCLASS \
private: \
	static void StaticRegisterNativesUDisconnectionRemoveValueProxy(); \
	friend struct Z_Construct_UClass_UDisconnectionRemoveValueProxy_Statics; \
public: \
	DECLARE_CLASS(UDisconnectionRemoveValueProxy, UDisconnectionHandlerProxybase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FirebaseFeatures"), FIREBASEFEATURES_API) \
	DECLARE_SERIALIZER(UDisconnectionRemoveValueProxy)


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_137_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	FIREBASEFEATURES_API UDisconnectionRemoveValueProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDisconnectionRemoveValueProxy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(FIREBASEFEATURES_API, UDisconnectionRemoveValueProxy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDisconnectionRemoveValueProxy); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	FIREBASEFEATURES_API UDisconnectionRemoveValueProxy(UDisconnectionRemoveValueProxy&&); \
	FIREBASEFEATURES_API UDisconnectionRemoveValueProxy(const UDisconnectionRemoveValueProxy&); \
public:


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_137_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	FIREBASEFEATURES_API UDisconnectionRemoveValueProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	FIREBASEFEATURES_API UDisconnectionRemoveValueProxy(UDisconnectionRemoveValueProxy&&); \
	FIREBASEFEATURES_API UDisconnectionRemoveValueProxy(const UDisconnectionRemoveValueProxy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(FIREBASEFEATURES_API, UDisconnectionRemoveValueProxy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDisconnectionRemoveValueProxy); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDisconnectionRemoveValueProxy)


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_137_PRIVATE_PROPERTY_OFFSET
#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_134_PROLOG
#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_137_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_137_PRIVATE_PROPERTY_OFFSET \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_137_SPARSE_DATA \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_137_RPC_WRAPPERS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_137_INCLASS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_137_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_137_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_137_PRIVATE_PROPERTY_OFFSET \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_137_SPARSE_DATA \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_137_RPC_WRAPPERS_NO_PURE_DECLS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_137_INCLASS_NO_PURE_DECLS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_137_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FIREBASEFEATURES_API UClass* StaticClass<class UDisconnectionRemoveValueProxy>();

#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_162_SPARSE_DATA
#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_162_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetValue);


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_162_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetValue);


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_162_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDisconnectionSetValueProxy(); \
	friend struct Z_Construct_UClass_UDisconnectionSetValueProxy_Statics; \
public: \
	DECLARE_CLASS(UDisconnectionSetValueProxy, UDisconnectionHandlerProxybase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FirebaseFeatures"), FIREBASEFEATURES_API) \
	DECLARE_SERIALIZER(UDisconnectionSetValueProxy)


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_162_INCLASS \
private: \
	static void StaticRegisterNativesUDisconnectionSetValueProxy(); \
	friend struct Z_Construct_UClass_UDisconnectionSetValueProxy_Statics; \
public: \
	DECLARE_CLASS(UDisconnectionSetValueProxy, UDisconnectionHandlerProxybase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FirebaseFeatures"), FIREBASEFEATURES_API) \
	DECLARE_SERIALIZER(UDisconnectionSetValueProxy)


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_162_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	FIREBASEFEATURES_API UDisconnectionSetValueProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDisconnectionSetValueProxy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(FIREBASEFEATURES_API, UDisconnectionSetValueProxy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDisconnectionSetValueProxy); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	FIREBASEFEATURES_API UDisconnectionSetValueProxy(UDisconnectionSetValueProxy&&); \
	FIREBASEFEATURES_API UDisconnectionSetValueProxy(const UDisconnectionSetValueProxy&); \
public:


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_162_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	FIREBASEFEATURES_API UDisconnectionSetValueProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	FIREBASEFEATURES_API UDisconnectionSetValueProxy(UDisconnectionSetValueProxy&&); \
	FIREBASEFEATURES_API UDisconnectionSetValueProxy(const UDisconnectionSetValueProxy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(FIREBASEFEATURES_API, UDisconnectionSetValueProxy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDisconnectionSetValueProxy); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDisconnectionSetValueProxy)


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_162_PRIVATE_PROPERTY_OFFSET
#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_159_PROLOG
#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_162_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_162_PRIVATE_PROPERTY_OFFSET \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_162_SPARSE_DATA \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_162_RPC_WRAPPERS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_162_INCLASS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_162_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_162_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_162_PRIVATE_PROPERTY_OFFSET \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_162_SPARSE_DATA \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_162_RPC_WRAPPERS_NO_PURE_DECLS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_162_INCLASS_NO_PURE_DECLS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_162_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FIREBASEFEATURES_API UClass* StaticClass<class UDisconnectionSetValueProxy>();

#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_193_SPARSE_DATA
#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_193_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetValueAndPriority);


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_193_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetValueAndPriority);


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_193_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDisconnectionSetValueAndPriorityProxy(); \
	friend struct Z_Construct_UClass_UDisconnectionSetValueAndPriorityProxy_Statics; \
public: \
	DECLARE_CLASS(UDisconnectionSetValueAndPriorityProxy, UDisconnectionHandlerProxybase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FirebaseFeatures"), FIREBASEFEATURES_API) \
	DECLARE_SERIALIZER(UDisconnectionSetValueAndPriorityProxy)


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_193_INCLASS \
private: \
	static void StaticRegisterNativesUDisconnectionSetValueAndPriorityProxy(); \
	friend struct Z_Construct_UClass_UDisconnectionSetValueAndPriorityProxy_Statics; \
public: \
	DECLARE_CLASS(UDisconnectionSetValueAndPriorityProxy, UDisconnectionHandlerProxybase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FirebaseFeatures"), FIREBASEFEATURES_API) \
	DECLARE_SERIALIZER(UDisconnectionSetValueAndPriorityProxy)


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_193_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	FIREBASEFEATURES_API UDisconnectionSetValueAndPriorityProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDisconnectionSetValueAndPriorityProxy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(FIREBASEFEATURES_API, UDisconnectionSetValueAndPriorityProxy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDisconnectionSetValueAndPriorityProxy); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	FIREBASEFEATURES_API UDisconnectionSetValueAndPriorityProxy(UDisconnectionSetValueAndPriorityProxy&&); \
	FIREBASEFEATURES_API UDisconnectionSetValueAndPriorityProxy(const UDisconnectionSetValueAndPriorityProxy&); \
public:


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_193_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	FIREBASEFEATURES_API UDisconnectionSetValueAndPriorityProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	FIREBASEFEATURES_API UDisconnectionSetValueAndPriorityProxy(UDisconnectionSetValueAndPriorityProxy&&); \
	FIREBASEFEATURES_API UDisconnectionSetValueAndPriorityProxy(const UDisconnectionSetValueAndPriorityProxy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(FIREBASEFEATURES_API, UDisconnectionSetValueAndPriorityProxy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDisconnectionSetValueAndPriorityProxy); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDisconnectionSetValueAndPriorityProxy)


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_193_PRIVATE_PROPERTY_OFFSET
#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_190_PROLOG
#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_193_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_193_PRIVATE_PROPERTY_OFFSET \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_193_SPARSE_DATA \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_193_RPC_WRAPPERS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_193_INCLASS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_193_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_193_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_193_PRIVATE_PROPERTY_OFFSET \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_193_SPARSE_DATA \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_193_RPC_WRAPPERS_NO_PURE_DECLS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_193_INCLASS_NO_PURE_DECLS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_193_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FIREBASEFEATURES_API UClass* StaticClass<class UDisconnectionSetValueAndPriorityProxy>();

#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_230_SPARSE_DATA
#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_230_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execUpdateChildren);


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_230_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execUpdateChildren);


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_230_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDisconnectionUpdateChildrenProxy(); \
	friend struct Z_Construct_UClass_UDisconnectionUpdateChildrenProxy_Statics; \
public: \
	DECLARE_CLASS(UDisconnectionUpdateChildrenProxy, UDisconnectionHandlerProxybase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FirebaseFeatures"), FIREBASEFEATURES_API) \
	DECLARE_SERIALIZER(UDisconnectionUpdateChildrenProxy)


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_230_INCLASS \
private: \
	static void StaticRegisterNativesUDisconnectionUpdateChildrenProxy(); \
	friend struct Z_Construct_UClass_UDisconnectionUpdateChildrenProxy_Statics; \
public: \
	DECLARE_CLASS(UDisconnectionUpdateChildrenProxy, UDisconnectionHandlerProxybase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FirebaseFeatures"), FIREBASEFEATURES_API) \
	DECLARE_SERIALIZER(UDisconnectionUpdateChildrenProxy)


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_230_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	FIREBASEFEATURES_API UDisconnectionUpdateChildrenProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDisconnectionUpdateChildrenProxy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(FIREBASEFEATURES_API, UDisconnectionUpdateChildrenProxy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDisconnectionUpdateChildrenProxy); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	FIREBASEFEATURES_API UDisconnectionUpdateChildrenProxy(UDisconnectionUpdateChildrenProxy&&); \
	FIREBASEFEATURES_API UDisconnectionUpdateChildrenProxy(const UDisconnectionUpdateChildrenProxy&); \
public:


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_230_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	FIREBASEFEATURES_API UDisconnectionUpdateChildrenProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	FIREBASEFEATURES_API UDisconnectionUpdateChildrenProxy(UDisconnectionUpdateChildrenProxy&&); \
	FIREBASEFEATURES_API UDisconnectionUpdateChildrenProxy(const UDisconnectionUpdateChildrenProxy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(FIREBASEFEATURES_API, UDisconnectionUpdateChildrenProxy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDisconnectionUpdateChildrenProxy); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDisconnectionUpdateChildrenProxy)


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_230_PRIVATE_PROPERTY_OFFSET
#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_227_PROLOG
#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_230_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_230_PRIVATE_PROPERTY_OFFSET \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_230_SPARSE_DATA \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_230_RPC_WRAPPERS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_230_INCLASS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_230_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_230_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_230_PRIVATE_PROPERTY_OFFSET \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_230_SPARSE_DATA \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_230_RPC_WRAPPERS_NO_PURE_DECLS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_230_INCLASS_NO_PURE_DECLS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_230_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FIREBASEFEATURES_API UClass* StaticClass<class UDisconnectionUpdateChildrenProxy>();

#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_265_SPARSE_DATA
#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_265_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetValue);


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_265_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetValue);


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_265_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDatabaseQueryGetValue(); \
	friend struct Z_Construct_UClass_UDatabaseQueryGetValue_Statics; \
public: \
	DECLARE_CLASS(UDatabaseQueryGetValue, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FirebaseFeatures"), FIREBASEFEATURES_API) \
	DECLARE_SERIALIZER(UDatabaseQueryGetValue)


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_265_INCLASS \
private: \
	static void StaticRegisterNativesUDatabaseQueryGetValue(); \
	friend struct Z_Construct_UClass_UDatabaseQueryGetValue_Statics; \
public: \
	DECLARE_CLASS(UDatabaseQueryGetValue, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FirebaseFeatures"), FIREBASEFEATURES_API) \
	DECLARE_SERIALIZER(UDatabaseQueryGetValue)


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_265_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	FIREBASEFEATURES_API UDatabaseQueryGetValue(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDatabaseQueryGetValue) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(FIREBASEFEATURES_API, UDatabaseQueryGetValue); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDatabaseQueryGetValue); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	FIREBASEFEATURES_API UDatabaseQueryGetValue(UDatabaseQueryGetValue&&); \
	FIREBASEFEATURES_API UDatabaseQueryGetValue(const UDatabaseQueryGetValue&); \
public:


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_265_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	FIREBASEFEATURES_API UDatabaseQueryGetValue(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	FIREBASEFEATURES_API UDatabaseQueryGetValue(UDatabaseQueryGetValue&&); \
	FIREBASEFEATURES_API UDatabaseQueryGetValue(const UDatabaseQueryGetValue&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(FIREBASEFEATURES_API, UDatabaseQueryGetValue); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDatabaseQueryGetValue); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDatabaseQueryGetValue)


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_265_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Query() { return STRUCT_OFFSET(UDatabaseQueryGetValue, Query); }


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_262_PROLOG
#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_265_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_265_PRIVATE_PROPERTY_OFFSET \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_265_SPARSE_DATA \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_265_RPC_WRAPPERS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_265_INCLASS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_265_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_265_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_265_PRIVATE_PROPERTY_OFFSET \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_265_SPARSE_DATA \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_265_RPC_WRAPPERS_NO_PURE_DECLS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_265_INCLASS_NO_PURE_DECLS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_265_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FIREBASEFEATURES_API UClass* StaticClass<class UDatabaseQueryGetValue>();

#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_292_SPARSE_DATA
#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_292_RPC_WRAPPERS
#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_292_RPC_WRAPPERS_NO_PURE_DECLS
#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_292_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDatabaseReferenceProxyBase(); \
	friend struct Z_Construct_UClass_UDatabaseReferenceProxyBase_Statics; \
public: \
	DECLARE_CLASS(UDatabaseReferenceProxyBase, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/FirebaseFeatures"), NO_API) \
	DECLARE_SERIALIZER(UDatabaseReferenceProxyBase)


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_292_INCLASS \
private: \
	static void StaticRegisterNativesUDatabaseReferenceProxyBase(); \
	friend struct Z_Construct_UClass_UDatabaseReferenceProxyBase_Statics; \
public: \
	DECLARE_CLASS(UDatabaseReferenceProxyBase, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/FirebaseFeatures"), NO_API) \
	DECLARE_SERIALIZER(UDatabaseReferenceProxyBase)


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_292_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDatabaseReferenceProxyBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDatabaseReferenceProxyBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDatabaseReferenceProxyBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDatabaseReferenceProxyBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDatabaseReferenceProxyBase(UDatabaseReferenceProxyBase&&); \
	NO_API UDatabaseReferenceProxyBase(const UDatabaseReferenceProxyBase&); \
public:


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_292_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDatabaseReferenceProxyBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDatabaseReferenceProxyBase(UDatabaseReferenceProxyBase&&); \
	NO_API UDatabaseReferenceProxyBase(const UDatabaseReferenceProxyBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDatabaseReferenceProxyBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDatabaseReferenceProxyBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDatabaseReferenceProxyBase)


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_292_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Reference() { return STRUCT_OFFSET(UDatabaseReferenceProxyBase, Reference); }


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_289_PROLOG
#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_292_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_292_PRIVATE_PROPERTY_OFFSET \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_292_SPARSE_DATA \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_292_RPC_WRAPPERS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_292_INCLASS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_292_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_292_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_292_PRIVATE_PROPERTY_OFFSET \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_292_SPARSE_DATA \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_292_RPC_WRAPPERS_NO_PURE_DECLS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_292_INCLASS_NO_PURE_DECLS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_292_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FIREBASEFEATURES_API UClass* StaticClass<class UDatabaseReferenceProxyBase>();

#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_301_SPARSE_DATA
#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_301_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execRemoveValue);


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_301_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execRemoveValue);


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_301_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURemoveValueProxy(); \
	friend struct Z_Construct_UClass_URemoveValueProxy_Statics; \
public: \
	DECLARE_CLASS(URemoveValueProxy, UDatabaseReferenceProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FirebaseFeatures"), NO_API) \
	DECLARE_SERIALIZER(URemoveValueProxy)


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_301_INCLASS \
private: \
	static void StaticRegisterNativesURemoveValueProxy(); \
	friend struct Z_Construct_UClass_URemoveValueProxy_Statics; \
public: \
	DECLARE_CLASS(URemoveValueProxy, UDatabaseReferenceProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FirebaseFeatures"), NO_API) \
	DECLARE_SERIALIZER(URemoveValueProxy)


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_301_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URemoveValueProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URemoveValueProxy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URemoveValueProxy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URemoveValueProxy); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URemoveValueProxy(URemoveValueProxy&&); \
	NO_API URemoveValueProxy(const URemoveValueProxy&); \
public:


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_301_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URemoveValueProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URemoveValueProxy(URemoveValueProxy&&); \
	NO_API URemoveValueProxy(const URemoveValueProxy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URemoveValueProxy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URemoveValueProxy); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URemoveValueProxy)


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_301_PRIVATE_PROPERTY_OFFSET
#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_298_PROLOG
#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_301_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_301_PRIVATE_PROPERTY_OFFSET \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_301_SPARSE_DATA \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_301_RPC_WRAPPERS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_301_INCLASS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_301_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_301_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_301_PRIVATE_PROPERTY_OFFSET \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_301_SPARSE_DATA \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_301_RPC_WRAPPERS_NO_PURE_DECLS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_301_INCLASS_NO_PURE_DECLS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_301_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FIREBASEFEATURES_API UClass* StaticClass<class URemoveValueProxy>();

#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_325_SPARSE_DATA
#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_325_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execRunTransaction);


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_325_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execRunTransaction);


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_325_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURunTransactionProxy(); \
	friend struct Z_Construct_UClass_URunTransactionProxy_Statics; \
public: \
	DECLARE_CLASS(URunTransactionProxy, UDatabaseReferenceProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FirebaseFeatures"), NO_API) \
	DECLARE_SERIALIZER(URunTransactionProxy)


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_325_INCLASS \
private: \
	static void StaticRegisterNativesURunTransactionProxy(); \
	friend struct Z_Construct_UClass_URunTransactionProxy_Statics; \
public: \
	DECLARE_CLASS(URunTransactionProxy, UDatabaseReferenceProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FirebaseFeatures"), NO_API) \
	DECLARE_SERIALIZER(URunTransactionProxy)


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_325_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URunTransactionProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URunTransactionProxy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URunTransactionProxy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URunTransactionProxy); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URunTransactionProxy(URunTransactionProxy&&); \
	NO_API URunTransactionProxy(const URunTransactionProxy&); \
public:


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_325_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URunTransactionProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URunTransactionProxy(URunTransactionProxy&&); \
	NO_API URunTransactionProxy(const URunTransactionProxy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URunTransactionProxy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URunTransactionProxy); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URunTransactionProxy)


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_325_PRIVATE_PROPERTY_OFFSET
#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_322_PROLOG
#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_325_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_325_PRIVATE_PROPERTY_OFFSET \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_325_SPARSE_DATA \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_325_RPC_WRAPPERS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_325_INCLASS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_325_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_325_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_325_PRIVATE_PROPERTY_OFFSET \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_325_SPARSE_DATA \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_325_RPC_WRAPPERS_NO_PURE_DECLS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_325_INCLASS_NO_PURE_DECLS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_325_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FIREBASEFEATURES_API UClass* StaticClass<class URunTransactionProxy>();

#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_373_SPARSE_DATA
#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_373_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetPriority);


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_373_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetPriority);


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_373_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSetPriorityProxy(); \
	friend struct Z_Construct_UClass_USetPriorityProxy_Statics; \
public: \
	DECLARE_CLASS(USetPriorityProxy, UDatabaseReferenceProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FirebaseFeatures"), NO_API) \
	DECLARE_SERIALIZER(USetPriorityProxy)


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_373_INCLASS \
private: \
	static void StaticRegisterNativesUSetPriorityProxy(); \
	friend struct Z_Construct_UClass_USetPriorityProxy_Statics; \
public: \
	DECLARE_CLASS(USetPriorityProxy, UDatabaseReferenceProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FirebaseFeatures"), NO_API) \
	DECLARE_SERIALIZER(USetPriorityProxy)


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_373_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USetPriorityProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USetPriorityProxy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USetPriorityProxy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USetPriorityProxy); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USetPriorityProxy(USetPriorityProxy&&); \
	NO_API USetPriorityProxy(const USetPriorityProxy&); \
public:


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_373_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USetPriorityProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USetPriorityProxy(USetPriorityProxy&&); \
	NO_API USetPriorityProxy(const USetPriorityProxy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USetPriorityProxy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USetPriorityProxy); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USetPriorityProxy)


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_373_PRIVATE_PROPERTY_OFFSET
#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_370_PROLOG
#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_373_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_373_PRIVATE_PROPERTY_OFFSET \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_373_SPARSE_DATA \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_373_RPC_WRAPPERS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_373_INCLASS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_373_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_373_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_373_PRIVATE_PROPERTY_OFFSET \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_373_SPARSE_DATA \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_373_RPC_WRAPPERS_NO_PURE_DECLS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_373_INCLASS_NO_PURE_DECLS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_373_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FIREBASEFEATURES_API UClass* StaticClass<class USetPriorityProxy>();

#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_426_SPARSE_DATA
#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_426_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetValue);


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_426_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetValue);


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_426_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSetValueProxy(); \
	friend struct Z_Construct_UClass_USetValueProxy_Statics; \
public: \
	DECLARE_CLASS(USetValueProxy, UDatabaseReferenceProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FirebaseFeatures"), NO_API) \
	DECLARE_SERIALIZER(USetValueProxy)


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_426_INCLASS \
private: \
	static void StaticRegisterNativesUSetValueProxy(); \
	friend struct Z_Construct_UClass_USetValueProxy_Statics; \
public: \
	DECLARE_CLASS(USetValueProxy, UDatabaseReferenceProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FirebaseFeatures"), NO_API) \
	DECLARE_SERIALIZER(USetValueProxy)


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_426_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USetValueProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USetValueProxy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USetValueProxy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USetValueProxy); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USetValueProxy(USetValueProxy&&); \
	NO_API USetValueProxy(const USetValueProxy&); \
public:


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_426_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USetValueProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USetValueProxy(USetValueProxy&&); \
	NO_API USetValueProxy(const USetValueProxy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USetValueProxy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USetValueProxy); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USetValueProxy)


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_426_PRIVATE_PROPERTY_OFFSET
#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_423_PROLOG
#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_426_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_426_PRIVATE_PROPERTY_OFFSET \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_426_SPARSE_DATA \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_426_RPC_WRAPPERS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_426_INCLASS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_426_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_426_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_426_PRIVATE_PROPERTY_OFFSET \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_426_SPARSE_DATA \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_426_RPC_WRAPPERS_NO_PURE_DECLS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_426_INCLASS_NO_PURE_DECLS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_426_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FIREBASEFEATURES_API UClass* StaticClass<class USetValueProxy>();

#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_472_SPARSE_DATA
#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_472_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetValueAndPriority);


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_472_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetValueAndPriority);


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_472_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSetValueAndPriorityProxy(); \
	friend struct Z_Construct_UClass_USetValueAndPriorityProxy_Statics; \
public: \
	DECLARE_CLASS(USetValueAndPriorityProxy, UDatabaseReferenceProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FirebaseFeatures"), NO_API) \
	DECLARE_SERIALIZER(USetValueAndPriorityProxy)


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_472_INCLASS \
private: \
	static void StaticRegisterNativesUSetValueAndPriorityProxy(); \
	friend struct Z_Construct_UClass_USetValueAndPriorityProxy_Statics; \
public: \
	DECLARE_CLASS(USetValueAndPriorityProxy, UDatabaseReferenceProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FirebaseFeatures"), NO_API) \
	DECLARE_SERIALIZER(USetValueAndPriorityProxy)


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_472_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USetValueAndPriorityProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USetValueAndPriorityProxy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USetValueAndPriorityProxy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USetValueAndPriorityProxy); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USetValueAndPriorityProxy(USetValueAndPriorityProxy&&); \
	NO_API USetValueAndPriorityProxy(const USetValueAndPriorityProxy&); \
public:


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_472_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USetValueAndPriorityProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USetValueAndPriorityProxy(USetValueAndPriorityProxy&&); \
	NO_API USetValueAndPriorityProxy(const USetValueAndPriorityProxy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USetValueAndPriorityProxy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USetValueAndPriorityProxy); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USetValueAndPriorityProxy)


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_472_PRIVATE_PROPERTY_OFFSET
#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_469_PROLOG
#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_472_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_472_PRIVATE_PROPERTY_OFFSET \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_472_SPARSE_DATA \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_472_RPC_WRAPPERS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_472_INCLASS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_472_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_472_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_472_PRIVATE_PROPERTY_OFFSET \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_472_SPARSE_DATA \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_472_RPC_WRAPPERS_NO_PURE_DECLS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_472_INCLASS_NO_PURE_DECLS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_472_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FIREBASEFEATURES_API UClass* StaticClass<class USetValueAndPriorityProxy>();

#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_514_SPARSE_DATA
#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_514_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execUpdateChildren);


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_514_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execUpdateChildren);


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_514_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUpdateChildrenProxy(); \
	friend struct Z_Construct_UClass_UUpdateChildrenProxy_Statics; \
public: \
	DECLARE_CLASS(UUpdateChildrenProxy, UDatabaseReferenceProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FirebaseFeatures"), NO_API) \
	DECLARE_SERIALIZER(UUpdateChildrenProxy)


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_514_INCLASS \
private: \
	static void StaticRegisterNativesUUpdateChildrenProxy(); \
	friend struct Z_Construct_UClass_UUpdateChildrenProxy_Statics; \
public: \
	DECLARE_CLASS(UUpdateChildrenProxy, UDatabaseReferenceProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FirebaseFeatures"), NO_API) \
	DECLARE_SERIALIZER(UUpdateChildrenProxy)


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_514_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUpdateChildrenProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUpdateChildrenProxy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUpdateChildrenProxy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUpdateChildrenProxy); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUpdateChildrenProxy(UUpdateChildrenProxy&&); \
	NO_API UUpdateChildrenProxy(const UUpdateChildrenProxy&); \
public:


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_514_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUpdateChildrenProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUpdateChildrenProxy(UUpdateChildrenProxy&&); \
	NO_API UUpdateChildrenProxy(const UUpdateChildrenProxy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUpdateChildrenProxy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUpdateChildrenProxy); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUpdateChildrenProxy)


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_514_PRIVATE_PROPERTY_OFFSET
#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_511_PROLOG
#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_514_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_514_PRIVATE_PROPERTY_OFFSET \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_514_SPARSE_DATA \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_514_RPC_WRAPPERS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_514_INCLASS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_514_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_514_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_514_PRIVATE_PROPERTY_OFFSET \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_514_SPARSE_DATA \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_514_RPC_WRAPPERS_NO_PURE_DECLS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_514_INCLASS_NO_PURE_DECLS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h_514_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FIREBASEFEATURES_API UClass* StaticClass<class UUpdateChildrenProxy>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Database_DatabaseNodes_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
