// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGeneratedDynamicLink;
enum class ELinkMatchStrength : uint8;
struct FDynamicLinkComponents;
class UBlueprintFirebaseDynamicLinksProxy;
class UDynamicLinksGetShortLinkWithComponents;
struct FDynamicLinkOptions;
class UDynamicLinksGetShortLinkWithComponentsAndOptions;
class UDynamicLinksGetShortLinkWithString;
class UDynamicLinksGetShortLinkWithStringAndOptions;
#ifdef FIREBASEFEATURES_FirebaseDynamicLinksNodes_generated_h
#error "FirebaseDynamicLinksNodes.generated.h already included, missing '#pragma once' in FirebaseDynamicLinksNodes.h"
#endif
#define FIREBASEFEATURES_FirebaseDynamicLinksNodes_generated_h

#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_DynamicLinks_FirebaseDynamicLinksNodes_h_46_DELEGATE \
struct _Script_FirebaseFeatures_eventDynMultGetShortLink_Parms \
{ \
	FGeneratedDynamicLink DynamicLink; \
}; \
static inline void FDynMultGetShortLink_DelegateWrapper(const FMulticastScriptDelegate& DynMultGetShortLink, FGeneratedDynamicLink const& DynamicLink) \
{ \
	_Script_FirebaseFeatures_eventDynMultGetShortLink_Parms Parms; \
	Parms.DynamicLink=DynamicLink; \
	DynMultGetShortLink.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_DynamicLinks_FirebaseDynamicLinksNodes_h_21_DELEGATE \
struct _Script_FirebaseFeatures_eventDynMultOnDynamicLinkReceived_Parms \
{ \
	FString URL; \
	ELinkMatchStrength MatchStrength; \
}; \
static inline void FDynMultOnDynamicLinkReceived_DelegateWrapper(const FMulticastScriptDelegate& DynMultOnDynamicLinkReceived, const FString& URL, const ELinkMatchStrength MatchStrength) \
{ \
	_Script_FirebaseFeatures_eventDynMultOnDynamicLinkReceived_Parms Parms; \
	Parms.URL=URL; \
	Parms.MatchStrength=MatchStrength; \
	DynMultOnDynamicLinkReceived.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_DynamicLinks_FirebaseDynamicLinksNodes_h_13_SPARSE_DATA
#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_DynamicLinks_FirebaseDynamicLinksNodes_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetLongLink);


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_DynamicLinks_FirebaseDynamicLinksNodes_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetLongLink);


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_DynamicLinks_FirebaseDynamicLinksNodes_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFirebaseDynamicLinksBlueprintLibrary(); \
	friend struct Z_Construct_UClass_UFirebaseDynamicLinksBlueprintLibrary_Statics; \
public: \
	DECLARE_CLASS(UFirebaseDynamicLinksBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FirebaseFeatures"), NO_API) \
	DECLARE_SERIALIZER(UFirebaseDynamicLinksBlueprintLibrary)


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_DynamicLinks_FirebaseDynamicLinksNodes_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUFirebaseDynamicLinksBlueprintLibrary(); \
	friend struct Z_Construct_UClass_UFirebaseDynamicLinksBlueprintLibrary_Statics; \
public: \
	DECLARE_CLASS(UFirebaseDynamicLinksBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FirebaseFeatures"), NO_API) \
	DECLARE_SERIALIZER(UFirebaseDynamicLinksBlueprintLibrary)


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_DynamicLinks_FirebaseDynamicLinksNodes_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFirebaseDynamicLinksBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFirebaseDynamicLinksBlueprintLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFirebaseDynamicLinksBlueprintLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFirebaseDynamicLinksBlueprintLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFirebaseDynamicLinksBlueprintLibrary(UFirebaseDynamicLinksBlueprintLibrary&&); \
	NO_API UFirebaseDynamicLinksBlueprintLibrary(const UFirebaseDynamicLinksBlueprintLibrary&); \
public:


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_DynamicLinks_FirebaseDynamicLinksNodes_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFirebaseDynamicLinksBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFirebaseDynamicLinksBlueprintLibrary(UFirebaseDynamicLinksBlueprintLibrary&&); \
	NO_API UFirebaseDynamicLinksBlueprintLibrary(const UFirebaseDynamicLinksBlueprintLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFirebaseDynamicLinksBlueprintLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFirebaseDynamicLinksBlueprintLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFirebaseDynamicLinksBlueprintLibrary)


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_DynamicLinks_FirebaseDynamicLinksNodes_h_13_PRIVATE_PROPERTY_OFFSET
#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_DynamicLinks_FirebaseDynamicLinksNodes_h_10_PROLOG
#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_DynamicLinks_FirebaseDynamicLinksNodes_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_DynamicLinks_FirebaseDynamicLinksNodes_h_13_PRIVATE_PROPERTY_OFFSET \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_DynamicLinks_FirebaseDynamicLinksNodes_h_13_SPARSE_DATA \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_DynamicLinks_FirebaseDynamicLinksNodes_h_13_RPC_WRAPPERS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_DynamicLinks_FirebaseDynamicLinksNodes_h_13_INCLASS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_DynamicLinks_FirebaseDynamicLinksNodes_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_DynamicLinks_FirebaseDynamicLinksNodes_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_DynamicLinks_FirebaseDynamicLinksNodes_h_13_PRIVATE_PROPERTY_OFFSET \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_DynamicLinks_FirebaseDynamicLinksNodes_h_13_SPARSE_DATA \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_DynamicLinks_FirebaseDynamicLinksNodes_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_DynamicLinks_FirebaseDynamicLinksNodes_h_13_INCLASS_NO_PURE_DECLS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_DynamicLinks_FirebaseDynamicLinksNodes_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FIREBASEFEATURES_API UClass* StaticClass<class UFirebaseDynamicLinksBlueprintLibrary>();

#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_DynamicLinks_FirebaseDynamicLinksNodes_h_26_SPARSE_DATA
#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_DynamicLinks_FirebaseDynamicLinksNodes_h_26_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnLink); \
	DECLARE_FUNCTION(execListenOnDynamicLinkReceived);


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_DynamicLinks_FirebaseDynamicLinksNodes_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnLink); \
	DECLARE_FUNCTION(execListenOnDynamicLinkReceived);


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_DynamicLinks_FirebaseDynamicLinksNodes_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBlueprintFirebaseDynamicLinksProxy(); \
	friend struct Z_Construct_UClass_UBlueprintFirebaseDynamicLinksProxy_Statics; \
public: \
	DECLARE_CLASS(UBlueprintFirebaseDynamicLinksProxy, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FirebaseFeatures"), NO_API) \
	DECLARE_SERIALIZER(UBlueprintFirebaseDynamicLinksProxy)


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_DynamicLinks_FirebaseDynamicLinksNodes_h_26_INCLASS \
private: \
	static void StaticRegisterNativesUBlueprintFirebaseDynamicLinksProxy(); \
	friend struct Z_Construct_UClass_UBlueprintFirebaseDynamicLinksProxy_Statics; \
public: \
	DECLARE_CLASS(UBlueprintFirebaseDynamicLinksProxy, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FirebaseFeatures"), NO_API) \
	DECLARE_SERIALIZER(UBlueprintFirebaseDynamicLinksProxy)


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_DynamicLinks_FirebaseDynamicLinksNodes_h_26_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBlueprintFirebaseDynamicLinksProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBlueprintFirebaseDynamicLinksProxy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBlueprintFirebaseDynamicLinksProxy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBlueprintFirebaseDynamicLinksProxy); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBlueprintFirebaseDynamicLinksProxy(UBlueprintFirebaseDynamicLinksProxy&&); \
	NO_API UBlueprintFirebaseDynamicLinksProxy(const UBlueprintFirebaseDynamicLinksProxy&); \
public:


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_DynamicLinks_FirebaseDynamicLinksNodes_h_26_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBlueprintFirebaseDynamicLinksProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBlueprintFirebaseDynamicLinksProxy(UBlueprintFirebaseDynamicLinksProxy&&); \
	NO_API UBlueprintFirebaseDynamicLinksProxy(const UBlueprintFirebaseDynamicLinksProxy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBlueprintFirebaseDynamicLinksProxy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBlueprintFirebaseDynamicLinksProxy); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBlueprintFirebaseDynamicLinksProxy)


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_DynamicLinks_FirebaseDynamicLinksNodes_h_26_PRIVATE_PROPERTY_OFFSET
#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_DynamicLinks_FirebaseDynamicLinksNodes_h_23_PROLOG
#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_DynamicLinks_FirebaseDynamicLinksNodes_h_26_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_DynamicLinks_FirebaseDynamicLinksNodes_h_26_PRIVATE_PROPERTY_OFFSET \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_DynamicLinks_FirebaseDynamicLinksNodes_h_26_SPARSE_DATA \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_DynamicLinks_FirebaseDynamicLinksNodes_h_26_RPC_WRAPPERS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_DynamicLinks_FirebaseDynamicLinksNodes_h_26_INCLASS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_DynamicLinks_FirebaseDynamicLinksNodes_h_26_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_DynamicLinks_FirebaseDynamicLinksNodes_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_DynamicLinks_FirebaseDynamicLinksNodes_h_26_PRIVATE_PROPERTY_OFFSET \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_DynamicLinks_FirebaseDynamicLinksNodes_h_26_SPARSE_DATA \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_DynamicLinks_FirebaseDynamicLinksNodes_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_DynamicLinks_FirebaseDynamicLinksNodes_h_26_INCLASS_NO_PURE_DECLS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_DynamicLinks_FirebaseDynamicLinksNodes_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FIREBASEFEATURES_API UClass* StaticClass<class UBlueprintFirebaseDynamicLinksProxy>();

#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_DynamicLinks_FirebaseDynamicLinksNodes_h_51_SPARSE_DATA
#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_DynamicLinks_FirebaseDynamicLinksNodes_h_51_RPC_WRAPPERS
#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_DynamicLinks_FirebaseDynamicLinksNodes_h_51_RPC_WRAPPERS_NO_PURE_DECLS
#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_DynamicLinks_FirebaseDynamicLinksNodes_h_51_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDynamicLinksGetShortLinkBase(); \
	friend struct Z_Construct_UClass_UDynamicLinksGetShortLinkBase_Statics; \
public: \
	DECLARE_CLASS(UDynamicLinksGetShortLinkBase, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FirebaseFeatures"), NO_API) \
	DECLARE_SERIALIZER(UDynamicLinksGetShortLinkBase)


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_DynamicLinks_FirebaseDynamicLinksNodes_h_51_INCLASS \
private: \
	static void StaticRegisterNativesUDynamicLinksGetShortLinkBase(); \
	friend struct Z_Construct_UClass_UDynamicLinksGetShortLinkBase_Statics; \
public: \
	DECLARE_CLASS(UDynamicLinksGetShortLinkBase, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FirebaseFeatures"), NO_API) \
	DECLARE_SERIALIZER(UDynamicLinksGetShortLinkBase)


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_DynamicLinks_FirebaseDynamicLinksNodes_h_51_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDynamicLinksGetShortLinkBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDynamicLinksGetShortLinkBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDynamicLinksGetShortLinkBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDynamicLinksGetShortLinkBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDynamicLinksGetShortLinkBase(UDynamicLinksGetShortLinkBase&&); \
	NO_API UDynamicLinksGetShortLinkBase(const UDynamicLinksGetShortLinkBase&); \
public:


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_DynamicLinks_FirebaseDynamicLinksNodes_h_51_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDynamicLinksGetShortLinkBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDynamicLinksGetShortLinkBase(UDynamicLinksGetShortLinkBase&&); \
	NO_API UDynamicLinksGetShortLinkBase(const UDynamicLinksGetShortLinkBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDynamicLinksGetShortLinkBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDynamicLinksGetShortLinkBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDynamicLinksGetShortLinkBase)


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_DynamicLinks_FirebaseDynamicLinksNodes_h_51_PRIVATE_PROPERTY_OFFSET
#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_DynamicLinks_FirebaseDynamicLinksNodes_h_48_PROLOG
#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_DynamicLinks_FirebaseDynamicLinksNodes_h_51_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_DynamicLinks_FirebaseDynamicLinksNodes_h_51_PRIVATE_PROPERTY_OFFSET \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_DynamicLinks_FirebaseDynamicLinksNodes_h_51_SPARSE_DATA \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_DynamicLinks_FirebaseDynamicLinksNodes_h_51_RPC_WRAPPERS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_DynamicLinks_FirebaseDynamicLinksNodes_h_51_INCLASS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_DynamicLinks_FirebaseDynamicLinksNodes_h_51_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_DynamicLinks_FirebaseDynamicLinksNodes_h_51_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_DynamicLinks_FirebaseDynamicLinksNodes_h_51_PRIVATE_PROPERTY_OFFSET \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_DynamicLinks_FirebaseDynamicLinksNodes_h_51_SPARSE_DATA \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_DynamicLinks_FirebaseDynamicLinksNodes_h_51_RPC_WRAPPERS_NO_PURE_DECLS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_DynamicLinks_FirebaseDynamicLinksNodes_h_51_INCLASS_NO_PURE_DECLS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_DynamicLinks_FirebaseDynamicLinksNodes_h_51_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FIREBASEFEATURES_API UClass* StaticClass<class UDynamicLinksGetShortLinkBase>();

#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_DynamicLinks_FirebaseDynamicLinksNodes_h_75_SPARSE_DATA
#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_DynamicLinks_FirebaseDynamicLinksNodes_h_75_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetShortLink);


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_DynamicLinks_FirebaseDynamicLinksNodes_h_75_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetShortLink);


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_DynamicLinks_FirebaseDynamicLinksNodes_h_75_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDynamicLinksGetShortLinkWithComponents(); \
	friend struct Z_Construct_UClass_UDynamicLinksGetShortLinkWithComponents_Statics; \
public: \
	DECLARE_CLASS(UDynamicLinksGetShortLinkWithComponents, UDynamicLinksGetShortLinkBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FirebaseFeatures"), NO_API) \
	DECLARE_SERIALIZER(UDynamicLinksGetShortLinkWithComponents)


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_DynamicLinks_FirebaseDynamicLinksNodes_h_75_INCLASS \
private: \
	static void StaticRegisterNativesUDynamicLinksGetShortLinkWithComponents(); \
	friend struct Z_Construct_UClass_UDynamicLinksGetShortLinkWithComponents_Statics; \
public: \
	DECLARE_CLASS(UDynamicLinksGetShortLinkWithComponents, UDynamicLinksGetShortLinkBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FirebaseFeatures"), NO_API) \
	DECLARE_SERIALIZER(UDynamicLinksGetShortLinkWithComponents)


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_DynamicLinks_FirebaseDynamicLinksNodes_h_75_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDynamicLinksGetShortLinkWithComponents(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDynamicLinksGetShortLinkWithComponents) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDynamicLinksGetShortLinkWithComponents); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDynamicLinksGetShortLinkWithComponents); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDynamicLinksGetShortLinkWithComponents(UDynamicLinksGetShortLinkWithComponents&&); \
	NO_API UDynamicLinksGetShortLinkWithComponents(const UDynamicLinksGetShortLinkWithComponents&); \
public:


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_DynamicLinks_FirebaseDynamicLinksNodes_h_75_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDynamicLinksGetShortLinkWithComponents(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDynamicLinksGetShortLinkWithComponents(UDynamicLinksGetShortLinkWithComponents&&); \
	NO_API UDynamicLinksGetShortLinkWithComponents(const UDynamicLinksGetShortLinkWithComponents&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDynamicLinksGetShortLinkWithComponents); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDynamicLinksGetShortLinkWithComponents); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDynamicLinksGetShortLinkWithComponents)


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_DynamicLinks_FirebaseDynamicLinksNodes_h_75_PRIVATE_PROPERTY_OFFSET
#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_DynamicLinks_FirebaseDynamicLinksNodes_h_72_PROLOG
#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_DynamicLinks_FirebaseDynamicLinksNodes_h_75_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_DynamicLinks_FirebaseDynamicLinksNodes_h_75_PRIVATE_PROPERTY_OFFSET \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_DynamicLinks_FirebaseDynamicLinksNodes_h_75_SPARSE_DATA \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_DynamicLinks_FirebaseDynamicLinksNodes_h_75_RPC_WRAPPERS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_DynamicLinks_FirebaseDynamicLinksNodes_h_75_INCLASS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_DynamicLinks_FirebaseDynamicLinksNodes_h_75_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_DynamicLinks_FirebaseDynamicLinksNodes_h_75_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_DynamicLinks_FirebaseDynamicLinksNodes_h_75_PRIVATE_PROPERTY_OFFSET \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_DynamicLinks_FirebaseDynamicLinksNodes_h_75_SPARSE_DATA \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_DynamicLinks_FirebaseDynamicLinksNodes_h_75_RPC_WRAPPERS_NO_PURE_DECLS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_DynamicLinks_FirebaseDynamicLinksNodes_h_75_INCLASS_NO_PURE_DECLS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_DynamicLinks_FirebaseDynamicLinksNodes_h_75_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FIREBASEFEATURES_API UClass* StaticClass<class UDynamicLinksGetShortLinkWithComponents>();

#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_DynamicLinks_FirebaseDynamicLinksNodes_h_89_SPARSE_DATA
#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_DynamicLinks_FirebaseDynamicLinksNodes_h_89_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetShortLink);


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_DynamicLinks_FirebaseDynamicLinksNodes_h_89_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetShortLink);


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_DynamicLinks_FirebaseDynamicLinksNodes_h_89_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDynamicLinksGetShortLinkWithComponentsAndOptions(); \
	friend struct Z_Construct_UClass_UDynamicLinksGetShortLinkWithComponentsAndOptions_Statics; \
public: \
	DECLARE_CLASS(UDynamicLinksGetShortLinkWithComponentsAndOptions, UDynamicLinksGetShortLinkBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FirebaseFeatures"), NO_API) \
	DECLARE_SERIALIZER(UDynamicLinksGetShortLinkWithComponentsAndOptions)


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_DynamicLinks_FirebaseDynamicLinksNodes_h_89_INCLASS \
private: \
	static void StaticRegisterNativesUDynamicLinksGetShortLinkWithComponentsAndOptions(); \
	friend struct Z_Construct_UClass_UDynamicLinksGetShortLinkWithComponentsAndOptions_Statics; \
public: \
	DECLARE_CLASS(UDynamicLinksGetShortLinkWithComponentsAndOptions, UDynamicLinksGetShortLinkBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FirebaseFeatures"), NO_API) \
	DECLARE_SERIALIZER(UDynamicLinksGetShortLinkWithComponentsAndOptions)


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_DynamicLinks_FirebaseDynamicLinksNodes_h_89_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDynamicLinksGetShortLinkWithComponentsAndOptions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDynamicLinksGetShortLinkWithComponentsAndOptions) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDynamicLinksGetShortLinkWithComponentsAndOptions); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDynamicLinksGetShortLinkWithComponentsAndOptions); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDynamicLinksGetShortLinkWithComponentsAndOptions(UDynamicLinksGetShortLinkWithComponentsAndOptions&&); \
	NO_API UDynamicLinksGetShortLinkWithComponentsAndOptions(const UDynamicLinksGetShortLinkWithComponentsAndOptions&); \
public:


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_DynamicLinks_FirebaseDynamicLinksNodes_h_89_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDynamicLinksGetShortLinkWithComponentsAndOptions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDynamicLinksGetShortLinkWithComponentsAndOptions(UDynamicLinksGetShortLinkWithComponentsAndOptions&&); \
	NO_API UDynamicLinksGetShortLinkWithComponentsAndOptions(const UDynamicLinksGetShortLinkWithComponentsAndOptions&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDynamicLinksGetShortLinkWithComponentsAndOptions); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDynamicLinksGetShortLinkWithComponentsAndOptions); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDynamicLinksGetShortLinkWithComponentsAndOptions)


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_DynamicLinks_FirebaseDynamicLinksNodes_h_89_PRIVATE_PROPERTY_OFFSET
#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_DynamicLinks_FirebaseDynamicLinksNodes_h_86_PROLOG
#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_DynamicLinks_FirebaseDynamicLinksNodes_h_89_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_DynamicLinks_FirebaseDynamicLinksNodes_h_89_PRIVATE_PROPERTY_OFFSET \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_DynamicLinks_FirebaseDynamicLinksNodes_h_89_SPARSE_DATA \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_DynamicLinks_FirebaseDynamicLinksNodes_h_89_RPC_WRAPPERS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_DynamicLinks_FirebaseDynamicLinksNodes_h_89_INCLASS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_DynamicLinks_FirebaseDynamicLinksNodes_h_89_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_DynamicLinks_FirebaseDynamicLinksNodes_h_89_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_DynamicLinks_FirebaseDynamicLinksNodes_h_89_PRIVATE_PROPERTY_OFFSET \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_DynamicLinks_FirebaseDynamicLinksNodes_h_89_SPARSE_DATA \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_DynamicLinks_FirebaseDynamicLinksNodes_h_89_RPC_WRAPPERS_NO_PURE_DECLS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_DynamicLinks_FirebaseDynamicLinksNodes_h_89_INCLASS_NO_PURE_DECLS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_DynamicLinks_FirebaseDynamicLinksNodes_h_89_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FIREBASEFEATURES_API UClass* StaticClass<class UDynamicLinksGetShortLinkWithComponentsAndOptions>();

#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_DynamicLinks_FirebaseDynamicLinksNodes_h_104_SPARSE_DATA
#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_DynamicLinks_FirebaseDynamicLinksNodes_h_104_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetShortLink);


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_DynamicLinks_FirebaseDynamicLinksNodes_h_104_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetShortLink);


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_DynamicLinks_FirebaseDynamicLinksNodes_h_104_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDynamicLinksGetShortLinkWithString(); \
	friend struct Z_Construct_UClass_UDynamicLinksGetShortLinkWithString_Statics; \
public: \
	DECLARE_CLASS(UDynamicLinksGetShortLinkWithString, UDynamicLinksGetShortLinkBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FirebaseFeatures"), NO_API) \
	DECLARE_SERIALIZER(UDynamicLinksGetShortLinkWithString)


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_DynamicLinks_FirebaseDynamicLinksNodes_h_104_INCLASS \
private: \
	static void StaticRegisterNativesUDynamicLinksGetShortLinkWithString(); \
	friend struct Z_Construct_UClass_UDynamicLinksGetShortLinkWithString_Statics; \
public: \
	DECLARE_CLASS(UDynamicLinksGetShortLinkWithString, UDynamicLinksGetShortLinkBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FirebaseFeatures"), NO_API) \
	DECLARE_SERIALIZER(UDynamicLinksGetShortLinkWithString)


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_DynamicLinks_FirebaseDynamicLinksNodes_h_104_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDynamicLinksGetShortLinkWithString(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDynamicLinksGetShortLinkWithString) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDynamicLinksGetShortLinkWithString); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDynamicLinksGetShortLinkWithString); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDynamicLinksGetShortLinkWithString(UDynamicLinksGetShortLinkWithString&&); \
	NO_API UDynamicLinksGetShortLinkWithString(const UDynamicLinksGetShortLinkWithString&); \
public:


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_DynamicLinks_FirebaseDynamicLinksNodes_h_104_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDynamicLinksGetShortLinkWithString(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDynamicLinksGetShortLinkWithString(UDynamicLinksGetShortLinkWithString&&); \
	NO_API UDynamicLinksGetShortLinkWithString(const UDynamicLinksGetShortLinkWithString&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDynamicLinksGetShortLinkWithString); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDynamicLinksGetShortLinkWithString); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDynamicLinksGetShortLinkWithString)


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_DynamicLinks_FirebaseDynamicLinksNodes_h_104_PRIVATE_PROPERTY_OFFSET
#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_DynamicLinks_FirebaseDynamicLinksNodes_h_101_PROLOG
#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_DynamicLinks_FirebaseDynamicLinksNodes_h_104_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_DynamicLinks_FirebaseDynamicLinksNodes_h_104_PRIVATE_PROPERTY_OFFSET \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_DynamicLinks_FirebaseDynamicLinksNodes_h_104_SPARSE_DATA \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_DynamicLinks_FirebaseDynamicLinksNodes_h_104_RPC_WRAPPERS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_DynamicLinks_FirebaseDynamicLinksNodes_h_104_INCLASS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_DynamicLinks_FirebaseDynamicLinksNodes_h_104_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_DynamicLinks_FirebaseDynamicLinksNodes_h_104_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_DynamicLinks_FirebaseDynamicLinksNodes_h_104_PRIVATE_PROPERTY_OFFSET \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_DynamicLinks_FirebaseDynamicLinksNodes_h_104_SPARSE_DATA \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_DynamicLinks_FirebaseDynamicLinksNodes_h_104_RPC_WRAPPERS_NO_PURE_DECLS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_DynamicLinks_FirebaseDynamicLinksNodes_h_104_INCLASS_NO_PURE_DECLS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_DynamicLinks_FirebaseDynamicLinksNodes_h_104_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FIREBASEFEATURES_API UClass* StaticClass<class UDynamicLinksGetShortLinkWithString>();

#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_DynamicLinks_FirebaseDynamicLinksNodes_h_118_SPARSE_DATA
#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_DynamicLinks_FirebaseDynamicLinksNodes_h_118_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetShortLink);


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_DynamicLinks_FirebaseDynamicLinksNodes_h_118_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetShortLink);


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_DynamicLinks_FirebaseDynamicLinksNodes_h_118_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDynamicLinksGetShortLinkWithStringAndOptions(); \
	friend struct Z_Construct_UClass_UDynamicLinksGetShortLinkWithStringAndOptions_Statics; \
public: \
	DECLARE_CLASS(UDynamicLinksGetShortLinkWithStringAndOptions, UDynamicLinksGetShortLinkBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FirebaseFeatures"), NO_API) \
	DECLARE_SERIALIZER(UDynamicLinksGetShortLinkWithStringAndOptions)


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_DynamicLinks_FirebaseDynamicLinksNodes_h_118_INCLASS \
private: \
	static void StaticRegisterNativesUDynamicLinksGetShortLinkWithStringAndOptions(); \
	friend struct Z_Construct_UClass_UDynamicLinksGetShortLinkWithStringAndOptions_Statics; \
public: \
	DECLARE_CLASS(UDynamicLinksGetShortLinkWithStringAndOptions, UDynamicLinksGetShortLinkBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FirebaseFeatures"), NO_API) \
	DECLARE_SERIALIZER(UDynamicLinksGetShortLinkWithStringAndOptions)


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_DynamicLinks_FirebaseDynamicLinksNodes_h_118_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDynamicLinksGetShortLinkWithStringAndOptions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDynamicLinksGetShortLinkWithStringAndOptions) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDynamicLinksGetShortLinkWithStringAndOptions); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDynamicLinksGetShortLinkWithStringAndOptions); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDynamicLinksGetShortLinkWithStringAndOptions(UDynamicLinksGetShortLinkWithStringAndOptions&&); \
	NO_API UDynamicLinksGetShortLinkWithStringAndOptions(const UDynamicLinksGetShortLinkWithStringAndOptions&); \
public:


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_DynamicLinks_FirebaseDynamicLinksNodes_h_118_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDynamicLinksGetShortLinkWithStringAndOptions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDynamicLinksGetShortLinkWithStringAndOptions(UDynamicLinksGetShortLinkWithStringAndOptions&&); \
	NO_API UDynamicLinksGetShortLinkWithStringAndOptions(const UDynamicLinksGetShortLinkWithStringAndOptions&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDynamicLinksGetShortLinkWithStringAndOptions); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDynamicLinksGetShortLinkWithStringAndOptions); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDynamicLinksGetShortLinkWithStringAndOptions)


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_DynamicLinks_FirebaseDynamicLinksNodes_h_118_PRIVATE_PROPERTY_OFFSET
#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_DynamicLinks_FirebaseDynamicLinksNodes_h_115_PROLOG
#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_DynamicLinks_FirebaseDynamicLinksNodes_h_118_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_DynamicLinks_FirebaseDynamicLinksNodes_h_118_PRIVATE_PROPERTY_OFFSET \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_DynamicLinks_FirebaseDynamicLinksNodes_h_118_SPARSE_DATA \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_DynamicLinks_FirebaseDynamicLinksNodes_h_118_RPC_WRAPPERS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_DynamicLinks_FirebaseDynamicLinksNodes_h_118_INCLASS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_DynamicLinks_FirebaseDynamicLinksNodes_h_118_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_DynamicLinks_FirebaseDynamicLinksNodes_h_118_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_DynamicLinks_FirebaseDynamicLinksNodes_h_118_PRIVATE_PROPERTY_OFFSET \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_DynamicLinks_FirebaseDynamicLinksNodes_h_118_SPARSE_DATA \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_DynamicLinks_FirebaseDynamicLinksNodes_h_118_RPC_WRAPPERS_NO_PURE_DECLS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_DynamicLinks_FirebaseDynamicLinksNodes_h_118_INCLASS_NO_PURE_DECLS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_DynamicLinks_FirebaseDynamicLinksNodes_h_118_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FIREBASEFEATURES_API UClass* StaticClass<class UDynamicLinksGetShortLinkWithStringAndOptions>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_DynamicLinks_FirebaseDynamicLinksNodes_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
