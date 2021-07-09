// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EFirebaseFunctionsError : uint8;
struct FFirebaseVariant;
struct FFirebaseHttpsCallableReference;
class UCallHttpsFunctionsProxy;
class UCallHttpsFunctionsWithDataProxy;
#ifdef FIREBASEFEATURES_FunctionsNodes_generated_h
#error "FunctionsNodes.generated.h already included, missing '#pragma once' in FunctionsNodes.h"
#endif
#define FIREBASEFEATURES_FunctionsNodes_generated_h

#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Functions_FunctionsNodes_h_28_DELEGATE \
struct _Script_FirebaseFeatures_eventDynMultFunctionsCallResult_Parms \
{ \
	EFirebaseFunctionsError Error; \
	FFirebaseVariant Result; \
}; \
static inline void FDynMultFunctionsCallResult_DelegateWrapper(const FMulticastScriptDelegate& DynMultFunctionsCallResult, const EFirebaseFunctionsError Error, FFirebaseVariant const& Result) \
{ \
	_Script_FirebaseFeatures_eventDynMultFunctionsCallResult_Parms Parms; \
	Parms.Error=Error; \
	Parms.Result=Result; \
	DynMultFunctionsCallResult.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Functions_FunctionsNodes_h_14_SPARSE_DATA
#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Functions_FunctionsNodes_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execIsValid);


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Functions_FunctionsNodes_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execIsValid);


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Functions_FunctionsNodes_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFirebaseFunctionsBlueprintLibrary(); \
	friend struct Z_Construct_UClass_UFirebaseFunctionsBlueprintLibrary_Statics; \
public: \
	DECLARE_CLASS(UFirebaseFunctionsBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FirebaseFeatures"), NO_API) \
	DECLARE_SERIALIZER(UFirebaseFunctionsBlueprintLibrary)


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Functions_FunctionsNodes_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUFirebaseFunctionsBlueprintLibrary(); \
	friend struct Z_Construct_UClass_UFirebaseFunctionsBlueprintLibrary_Statics; \
public: \
	DECLARE_CLASS(UFirebaseFunctionsBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FirebaseFeatures"), NO_API) \
	DECLARE_SERIALIZER(UFirebaseFunctionsBlueprintLibrary)


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Functions_FunctionsNodes_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFirebaseFunctionsBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFirebaseFunctionsBlueprintLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFirebaseFunctionsBlueprintLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFirebaseFunctionsBlueprintLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFirebaseFunctionsBlueprintLibrary(UFirebaseFunctionsBlueprintLibrary&&); \
	NO_API UFirebaseFunctionsBlueprintLibrary(const UFirebaseFunctionsBlueprintLibrary&); \
public:


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Functions_FunctionsNodes_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFirebaseFunctionsBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFirebaseFunctionsBlueprintLibrary(UFirebaseFunctionsBlueprintLibrary&&); \
	NO_API UFirebaseFunctionsBlueprintLibrary(const UFirebaseFunctionsBlueprintLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFirebaseFunctionsBlueprintLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFirebaseFunctionsBlueprintLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFirebaseFunctionsBlueprintLibrary)


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Functions_FunctionsNodes_h_14_PRIVATE_PROPERTY_OFFSET
#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Functions_FunctionsNodes_h_11_PROLOG
#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Functions_FunctionsNodes_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Functions_FunctionsNodes_h_14_PRIVATE_PROPERTY_OFFSET \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Functions_FunctionsNodes_h_14_SPARSE_DATA \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Functions_FunctionsNodes_h_14_RPC_WRAPPERS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Functions_FunctionsNodes_h_14_INCLASS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Functions_FunctionsNodes_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Functions_FunctionsNodes_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Functions_FunctionsNodes_h_14_PRIVATE_PROPERTY_OFFSET \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Functions_FunctionsNodes_h_14_SPARSE_DATA \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Functions_FunctionsNodes_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Functions_FunctionsNodes_h_14_INCLASS_NO_PURE_DECLS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Functions_FunctionsNodes_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FIREBASEFEATURES_API UClass* StaticClass<class UFirebaseFunctionsBlueprintLibrary>();

#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Functions_FunctionsNodes_h_33_SPARSE_DATA
#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Functions_FunctionsNodes_h_33_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCall);


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Functions_FunctionsNodes_h_33_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCall);


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Functions_FunctionsNodes_h_33_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCallHttpsFunctionsProxy(); \
	friend struct Z_Construct_UClass_UCallHttpsFunctionsProxy_Statics; \
public: \
	DECLARE_CLASS(UCallHttpsFunctionsProxy, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FirebaseFeatures"), NO_API) \
	DECLARE_SERIALIZER(UCallHttpsFunctionsProxy)


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Functions_FunctionsNodes_h_33_INCLASS \
private: \
	static void StaticRegisterNativesUCallHttpsFunctionsProxy(); \
	friend struct Z_Construct_UClass_UCallHttpsFunctionsProxy_Statics; \
public: \
	DECLARE_CLASS(UCallHttpsFunctionsProxy, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FirebaseFeatures"), NO_API) \
	DECLARE_SERIALIZER(UCallHttpsFunctionsProxy)


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Functions_FunctionsNodes_h_33_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCallHttpsFunctionsProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCallHttpsFunctionsProxy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCallHttpsFunctionsProxy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCallHttpsFunctionsProxy); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCallHttpsFunctionsProxy(UCallHttpsFunctionsProxy&&); \
	NO_API UCallHttpsFunctionsProxy(const UCallHttpsFunctionsProxy&); \
public:


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Functions_FunctionsNodes_h_33_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCallHttpsFunctionsProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCallHttpsFunctionsProxy(UCallHttpsFunctionsProxy&&); \
	NO_API UCallHttpsFunctionsProxy(const UCallHttpsFunctionsProxy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCallHttpsFunctionsProxy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCallHttpsFunctionsProxy); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCallHttpsFunctionsProxy)


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Functions_FunctionsNodes_h_33_PRIVATE_PROPERTY_OFFSET
#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Functions_FunctionsNodes_h_30_PROLOG
#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Functions_FunctionsNodes_h_33_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Functions_FunctionsNodes_h_33_PRIVATE_PROPERTY_OFFSET \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Functions_FunctionsNodes_h_33_SPARSE_DATA \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Functions_FunctionsNodes_h_33_RPC_WRAPPERS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Functions_FunctionsNodes_h_33_INCLASS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Functions_FunctionsNodes_h_33_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Functions_FunctionsNodes_h_33_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Functions_FunctionsNodes_h_33_PRIVATE_PROPERTY_OFFSET \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Functions_FunctionsNodes_h_33_SPARSE_DATA \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Functions_FunctionsNodes_h_33_RPC_WRAPPERS_NO_PURE_DECLS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Functions_FunctionsNodes_h_33_INCLASS_NO_PURE_DECLS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Functions_FunctionsNodes_h_33_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FIREBASEFEATURES_API UClass* StaticClass<class UCallHttpsFunctionsProxy>();

#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Functions_FunctionsNodes_h_57_SPARSE_DATA
#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Functions_FunctionsNodes_h_57_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCallWithData);


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Functions_FunctionsNodes_h_57_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCallWithData);


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Functions_FunctionsNodes_h_57_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCallHttpsFunctionsWithDataProxy(); \
	friend struct Z_Construct_UClass_UCallHttpsFunctionsWithDataProxy_Statics; \
public: \
	DECLARE_CLASS(UCallHttpsFunctionsWithDataProxy, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FirebaseFeatures"), NO_API) \
	DECLARE_SERIALIZER(UCallHttpsFunctionsWithDataProxy)


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Functions_FunctionsNodes_h_57_INCLASS \
private: \
	static void StaticRegisterNativesUCallHttpsFunctionsWithDataProxy(); \
	friend struct Z_Construct_UClass_UCallHttpsFunctionsWithDataProxy_Statics; \
public: \
	DECLARE_CLASS(UCallHttpsFunctionsWithDataProxy, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FirebaseFeatures"), NO_API) \
	DECLARE_SERIALIZER(UCallHttpsFunctionsWithDataProxy)


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Functions_FunctionsNodes_h_57_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCallHttpsFunctionsWithDataProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCallHttpsFunctionsWithDataProxy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCallHttpsFunctionsWithDataProxy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCallHttpsFunctionsWithDataProxy); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCallHttpsFunctionsWithDataProxy(UCallHttpsFunctionsWithDataProxy&&); \
	NO_API UCallHttpsFunctionsWithDataProxy(const UCallHttpsFunctionsWithDataProxy&); \
public:


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Functions_FunctionsNodes_h_57_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCallHttpsFunctionsWithDataProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCallHttpsFunctionsWithDataProxy(UCallHttpsFunctionsWithDataProxy&&); \
	NO_API UCallHttpsFunctionsWithDataProxy(const UCallHttpsFunctionsWithDataProxy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCallHttpsFunctionsWithDataProxy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCallHttpsFunctionsWithDataProxy); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCallHttpsFunctionsWithDataProxy)


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Functions_FunctionsNodes_h_57_PRIVATE_PROPERTY_OFFSET
#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Functions_FunctionsNodes_h_54_PROLOG
#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Functions_FunctionsNodes_h_57_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Functions_FunctionsNodes_h_57_PRIVATE_PROPERTY_OFFSET \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Functions_FunctionsNodes_h_57_SPARSE_DATA \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Functions_FunctionsNodes_h_57_RPC_WRAPPERS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Functions_FunctionsNodes_h_57_INCLASS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Functions_FunctionsNodes_h_57_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Functions_FunctionsNodes_h_57_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Functions_FunctionsNodes_h_57_PRIVATE_PROPERTY_OFFSET \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Functions_FunctionsNodes_h_57_SPARSE_DATA \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Functions_FunctionsNodes_h_57_RPC_WRAPPERS_NO_PURE_DECLS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Functions_FunctionsNodes_h_57_INCLASS_NO_PURE_DECLS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Functions_FunctionsNodes_h_57_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FIREBASEFEATURES_API UClass* StaticClass<class UCallHttpsFunctionsWithDataProxy>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Functions_FunctionsNodes_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
