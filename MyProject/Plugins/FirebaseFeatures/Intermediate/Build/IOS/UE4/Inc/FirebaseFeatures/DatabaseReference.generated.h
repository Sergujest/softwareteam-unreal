// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UDataSnapshot;
enum class EFirebaseDatabaseError : uint8;
class UDatabaseReference;
struct FFirebaseVariant;
class UDatabaseQuery;
class UDisconnectionHandler;
class UDatabase;
#ifdef FIREBASEFEATURES_DatabaseReference_generated_h
#error "DatabaseReference.generated.h already included, missing '#pragma once' in DatabaseReference.h"
#endif
#define FIREBASEFEATURES_DatabaseReference_generated_h

#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Public_Database_DatabaseReference_h_32_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMutableData_Statics; \
	static class UScriptStruct* StaticStruct();


template<> FIREBASEFEATURES_API UScriptStruct* StaticStruct<struct FMutableData>();

#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Public_Database_DatabaseReference_h_279_DELEGATE \
struct _Script_FirebaseFeatures_eventQueryValueEvent_Parms \
{ \
	UDataSnapshot* Snapshot; \
}; \
static inline void FQueryValueEvent_DelegateWrapper(const FMulticastScriptDelegate& QueryValueEvent, UDataSnapshot* Snapshot) \
{ \
	_Script_FirebaseFeatures_eventQueryValueEvent_Parms Parms; \
	Parms.Snapshot=Snapshot; \
	QueryValueEvent.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Public_Database_DatabaseReference_h_278_DELEGATE \
struct _Script_FirebaseFeatures_eventQueryCancelEvent_Parms \
{ \
	EFirebaseDatabaseError Error; \
	FString ErrorMessage; \
}; \
static inline void FQueryCancelEvent_DelegateWrapper(const FMulticastScriptDelegate& QueryCancelEvent, const EFirebaseDatabaseError Error, const FString& ErrorMessage) \
{ \
	_Script_FirebaseFeatures_eventQueryCancelEvent_Parms Parms; \
	Parms.Error=Error; \
	Parms.ErrorMessage=ErrorMessage; \
	QueryCancelEvent.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Public_Database_DatabaseReference_h_277_DELEGATE \
struct _Script_FirebaseFeatures_eventQueryChildEvent_Parms \
{ \
	UDataSnapshot* Snapshot; \
	FString PreviousSiblingKey; \
}; \
static inline void FQueryChildEvent_DelegateWrapper(const FMulticastScriptDelegate& QueryChildEvent, UDataSnapshot* Snapshot, const FString& PreviousSiblingKey) \
{ \
	_Script_FirebaseFeatures_eventQueryChildEvent_Parms Parms; \
	Parms.Snapshot=Snapshot; \
	Parms.PreviousSiblingKey=PreviousSiblingKey; \
	QueryChildEvent.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Public_Database_DatabaseReference_h_130_SPARSE_DATA
#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Public_Database_DatabaseReference_h_130_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execIsValid); \
	DECLARE_FUNCTION(execHasChild); \
	DECLARE_FUNCTION(execGetReference); \
	DECLARE_FUNCTION(execGetPriority); \
	DECLARE_FUNCTION(execGetValue); \
	DECLARE_FUNCTION(execGetKey); \
	DECLARE_FUNCTION(execHasChildren); \
	DECLARE_FUNCTION(execChildrenCount); \
	DECLARE_FUNCTION(execGetChildren); \
	DECLARE_FUNCTION(execGetChild); \
	DECLARE_FUNCTION(execExists);


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Public_Database_DatabaseReference_h_130_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execIsValid); \
	DECLARE_FUNCTION(execHasChild); \
	DECLARE_FUNCTION(execGetReference); \
	DECLARE_FUNCTION(execGetPriority); \
	DECLARE_FUNCTION(execGetValue); \
	DECLARE_FUNCTION(execGetKey); \
	DECLARE_FUNCTION(execHasChildren); \
	DECLARE_FUNCTION(execChildrenCount); \
	DECLARE_FUNCTION(execGetChildren); \
	DECLARE_FUNCTION(execGetChild); \
	DECLARE_FUNCTION(execExists);


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Public_Database_DatabaseReference_h_130_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDataSnapshot(); \
	friend struct Z_Construct_UClass_UDataSnapshot_Statics; \
public: \
	DECLARE_CLASS(UDataSnapshot, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FirebaseFeatures"), NO_API) \
	DECLARE_SERIALIZER(UDataSnapshot)


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Public_Database_DatabaseReference_h_130_INCLASS \
private: \
	static void StaticRegisterNativesUDataSnapshot(); \
	friend struct Z_Construct_UClass_UDataSnapshot_Statics; \
public: \
	DECLARE_CLASS(UDataSnapshot, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FirebaseFeatures"), NO_API) \
	DECLARE_SERIALIZER(UDataSnapshot)


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Public_Database_DatabaseReference_h_130_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDataSnapshot(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDataSnapshot) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDataSnapshot); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDataSnapshot); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDataSnapshot(UDataSnapshot&&); \
	NO_API UDataSnapshot(const UDataSnapshot&); \
public:


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Public_Database_DatabaseReference_h_130_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDataSnapshot(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDataSnapshot(UDataSnapshot&&); \
	NO_API UDataSnapshot(const UDataSnapshot&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDataSnapshot); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDataSnapshot); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDataSnapshot)


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Public_Database_DatabaseReference_h_130_PRIVATE_PROPERTY_OFFSET
#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Public_Database_DatabaseReference_h_127_PROLOG
#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Public_Database_DatabaseReference_h_130_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Public_Database_DatabaseReference_h_130_PRIVATE_PROPERTY_OFFSET \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Public_Database_DatabaseReference_h_130_SPARSE_DATA \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Public_Database_DatabaseReference_h_130_RPC_WRAPPERS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Public_Database_DatabaseReference_h_130_INCLASS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Public_Database_DatabaseReference_h_130_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Public_Database_DatabaseReference_h_130_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Public_Database_DatabaseReference_h_130_PRIVATE_PROPERTY_OFFSET \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Public_Database_DatabaseReference_h_130_SPARSE_DATA \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Public_Database_DatabaseReference_h_130_RPC_WRAPPERS_NO_PURE_DECLS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Public_Database_DatabaseReference_h_130_INCLASS_NO_PURE_DECLS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Public_Database_DatabaseReference_h_130_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FIREBASEFEATURES_API UClass* StaticClass<class UDataSnapshot>();

#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Public_Database_DatabaseReference_h_222_SPARSE_DATA
#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Public_Database_DatabaseReference_h_222_RPC_WRAPPERS
#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Public_Database_DatabaseReference_h_222_RPC_WRAPPERS_NO_PURE_DECLS
#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Public_Database_DatabaseReference_h_222_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDisconnectionHandler(); \
	friend struct Z_Construct_UClass_UDisconnectionHandler_Statics; \
public: \
	DECLARE_CLASS(UDisconnectionHandler, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FirebaseFeatures"), NO_API) \
	DECLARE_SERIALIZER(UDisconnectionHandler)


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Public_Database_DatabaseReference_h_222_INCLASS \
private: \
	static void StaticRegisterNativesUDisconnectionHandler(); \
	friend struct Z_Construct_UClass_UDisconnectionHandler_Statics; \
public: \
	DECLARE_CLASS(UDisconnectionHandler, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FirebaseFeatures"), NO_API) \
	DECLARE_SERIALIZER(UDisconnectionHandler)


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Public_Database_DatabaseReference_h_222_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDisconnectionHandler(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDisconnectionHandler) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDisconnectionHandler); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDisconnectionHandler); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDisconnectionHandler(UDisconnectionHandler&&); \
	NO_API UDisconnectionHandler(const UDisconnectionHandler&); \
public:


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Public_Database_DatabaseReference_h_222_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDisconnectionHandler(UDisconnectionHandler&&); \
	NO_API UDisconnectionHandler(const UDisconnectionHandler&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDisconnectionHandler); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDisconnectionHandler); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDisconnectionHandler)


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Public_Database_DatabaseReference_h_222_PRIVATE_PROPERTY_OFFSET
#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Public_Database_DatabaseReference_h_219_PROLOG
#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Public_Database_DatabaseReference_h_222_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Public_Database_DatabaseReference_h_222_PRIVATE_PROPERTY_OFFSET \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Public_Database_DatabaseReference_h_222_SPARSE_DATA \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Public_Database_DatabaseReference_h_222_RPC_WRAPPERS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Public_Database_DatabaseReference_h_222_INCLASS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Public_Database_DatabaseReference_h_222_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Public_Database_DatabaseReference_h_222_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Public_Database_DatabaseReference_h_222_PRIVATE_PROPERTY_OFFSET \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Public_Database_DatabaseReference_h_222_SPARSE_DATA \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Public_Database_DatabaseReference_h_222_RPC_WRAPPERS_NO_PURE_DECLS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Public_Database_DatabaseReference_h_222_INCLASS_NO_PURE_DECLS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Public_Database_DatabaseReference_h_222_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FIREBASEFEATURES_API UClass* StaticClass<class UDisconnectionHandler>();

#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Public_Database_DatabaseReference_h_284_SPARSE_DATA
#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Public_Database_DatabaseReference_h_284_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execClearListeners); \
	DECLARE_FUNCTION(execSetupListeners); \
	DECLARE_FUNCTION(execSetKeepSynchronized); \
	DECLARE_FUNCTION(execIsValid); \
	DECLARE_FUNCTION(execLimitToLast); \
	DECLARE_FUNCTION(execLimitToFirst); \
	DECLARE_FUNCTION(execEqualToKey); \
	DECLARE_FUNCTION(execEqualTo); \
	DECLARE_FUNCTION(execEndAtKey); \
	DECLARE_FUNCTION(execEndAt); \
	DECLARE_FUNCTION(execStartAtKey); \
	DECLARE_FUNCTION(execStartAt); \
	DECLARE_FUNCTION(execOrderByValue); \
	DECLARE_FUNCTION(execOrderByPriority); \
	DECLARE_FUNCTION(execOrderByKey); \
	DECLARE_FUNCTION(execOrderByChild); \
	DECLARE_FUNCTION(execGetReference);


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Public_Database_DatabaseReference_h_284_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execClearListeners); \
	DECLARE_FUNCTION(execSetupListeners); \
	DECLARE_FUNCTION(execSetKeepSynchronized); \
	DECLARE_FUNCTION(execIsValid); \
	DECLARE_FUNCTION(execLimitToLast); \
	DECLARE_FUNCTION(execLimitToFirst); \
	DECLARE_FUNCTION(execEqualToKey); \
	DECLARE_FUNCTION(execEqualTo); \
	DECLARE_FUNCTION(execEndAtKey); \
	DECLARE_FUNCTION(execEndAt); \
	DECLARE_FUNCTION(execStartAtKey); \
	DECLARE_FUNCTION(execStartAt); \
	DECLARE_FUNCTION(execOrderByValue); \
	DECLARE_FUNCTION(execOrderByPriority); \
	DECLARE_FUNCTION(execOrderByKey); \
	DECLARE_FUNCTION(execOrderByChild); \
	DECLARE_FUNCTION(execGetReference);


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Public_Database_DatabaseReference_h_284_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDatabaseQuery(); \
	friend struct Z_Construct_UClass_UDatabaseQuery_Statics; \
public: \
	DECLARE_CLASS(UDatabaseQuery, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FirebaseFeatures"), NO_API) \
	DECLARE_SERIALIZER(UDatabaseQuery)


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Public_Database_DatabaseReference_h_284_INCLASS \
private: \
	static void StaticRegisterNativesUDatabaseQuery(); \
	friend struct Z_Construct_UClass_UDatabaseQuery_Statics; \
public: \
	DECLARE_CLASS(UDatabaseQuery, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FirebaseFeatures"), NO_API) \
	DECLARE_SERIALIZER(UDatabaseQuery)


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Public_Database_DatabaseReference_h_284_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDatabaseQuery(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDatabaseQuery) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDatabaseQuery); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDatabaseQuery); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDatabaseQuery(UDatabaseQuery&&); \
	NO_API UDatabaseQuery(const UDatabaseQuery&); \
public:


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Public_Database_DatabaseReference_h_284_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDatabaseQuery(UDatabaseQuery&&); \
	NO_API UDatabaseQuery(const UDatabaseQuery&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDatabaseQuery); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDatabaseQuery); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDatabaseQuery)


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Public_Database_DatabaseReference_h_284_PRIVATE_PROPERTY_OFFSET
#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Public_Database_DatabaseReference_h_281_PROLOG
#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Public_Database_DatabaseReference_h_284_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Public_Database_DatabaseReference_h_284_PRIVATE_PROPERTY_OFFSET \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Public_Database_DatabaseReference_h_284_SPARSE_DATA \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Public_Database_DatabaseReference_h_284_RPC_WRAPPERS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Public_Database_DatabaseReference_h_284_INCLASS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Public_Database_DatabaseReference_h_284_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Public_Database_DatabaseReference_h_284_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Public_Database_DatabaseReference_h_284_PRIVATE_PROPERTY_OFFSET \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Public_Database_DatabaseReference_h_284_SPARSE_DATA \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Public_Database_DatabaseReference_h_284_RPC_WRAPPERS_NO_PURE_DECLS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Public_Database_DatabaseReference_h_284_INCLASS_NO_PURE_DECLS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Public_Database_DatabaseReference_h_284_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FIREBASEFEATURES_API UClass* StaticClass<class UDatabaseQuery>();

#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Public_Database_DatabaseReference_h_552_SPARSE_DATA
#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Public_Database_DatabaseReference_h_552_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetDisconnectionHandler); \
	DECLARE_FUNCTION(execGoOnline); \
	DECLARE_FUNCTION(execGoOffline); \
	DECLARE_FUNCTION(execGetUrl); \
	DECLARE_FUNCTION(execPushChild); \
	DECLARE_FUNCTION(execChild); \
	DECLARE_FUNCTION(execGetRoot); \
	DECLARE_FUNCTION(execGetParent); \
	DECLARE_FUNCTION(execIsRoot); \
	DECLARE_FUNCTION(execGetKey); \
	DECLARE_FUNCTION(execGetDatabase);


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Public_Database_DatabaseReference_h_552_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetDisconnectionHandler); \
	DECLARE_FUNCTION(execGoOnline); \
	DECLARE_FUNCTION(execGoOffline); \
	DECLARE_FUNCTION(execGetUrl); \
	DECLARE_FUNCTION(execPushChild); \
	DECLARE_FUNCTION(execChild); \
	DECLARE_FUNCTION(execGetRoot); \
	DECLARE_FUNCTION(execGetParent); \
	DECLARE_FUNCTION(execIsRoot); \
	DECLARE_FUNCTION(execGetKey); \
	DECLARE_FUNCTION(execGetDatabase);


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Public_Database_DatabaseReference_h_552_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDatabaseReference(); \
	friend struct Z_Construct_UClass_UDatabaseReference_Statics; \
public: \
	DECLARE_CLASS(UDatabaseReference, UDatabaseQuery, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FirebaseFeatures"), NO_API) \
	DECLARE_SERIALIZER(UDatabaseReference)


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Public_Database_DatabaseReference_h_552_INCLASS \
private: \
	static void StaticRegisterNativesUDatabaseReference(); \
	friend struct Z_Construct_UClass_UDatabaseReference_Statics; \
public: \
	DECLARE_CLASS(UDatabaseReference, UDatabaseQuery, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FirebaseFeatures"), NO_API) \
	DECLARE_SERIALIZER(UDatabaseReference)


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Public_Database_DatabaseReference_h_552_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDatabaseReference(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDatabaseReference) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDatabaseReference); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDatabaseReference); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDatabaseReference(UDatabaseReference&&); \
	NO_API UDatabaseReference(const UDatabaseReference&); \
public:


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Public_Database_DatabaseReference_h_552_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDatabaseReference(UDatabaseReference&&); \
	NO_API UDatabaseReference(const UDatabaseReference&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDatabaseReference); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDatabaseReference); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDatabaseReference)


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Public_Database_DatabaseReference_h_552_PRIVATE_PROPERTY_OFFSET
#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Public_Database_DatabaseReference_h_549_PROLOG
#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Public_Database_DatabaseReference_h_552_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Public_Database_DatabaseReference_h_552_PRIVATE_PROPERTY_OFFSET \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Public_Database_DatabaseReference_h_552_SPARSE_DATA \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Public_Database_DatabaseReference_h_552_RPC_WRAPPERS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Public_Database_DatabaseReference_h_552_INCLASS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Public_Database_DatabaseReference_h_552_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Public_Database_DatabaseReference_h_552_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Public_Database_DatabaseReference_h_552_PRIVATE_PROPERTY_OFFSET \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Public_Database_DatabaseReference_h_552_SPARSE_DATA \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Public_Database_DatabaseReference_h_552_RPC_WRAPPERS_NO_PURE_DECLS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Public_Database_DatabaseReference_h_552_INCLASS_NO_PURE_DECLS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Public_Database_DatabaseReference_h_552_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FIREBASEFEATURES_API UClass* StaticClass<class UDatabaseReference>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Public_Database_DatabaseReference_h


#define FOREACH_ENUM_ETRANSACTIONRESULT(op) \
	op(ETransactionResult::Success) \
	op(ETransactionResult::Abort) 

enum class ETransactionResult : uint8;
template<> FIREBASEFEATURES_API UEnum* StaticEnum<ETransactionResult>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
