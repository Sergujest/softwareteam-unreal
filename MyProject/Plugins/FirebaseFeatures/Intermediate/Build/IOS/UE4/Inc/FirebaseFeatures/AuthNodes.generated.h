// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EFirebaseAuthError : uint8;
struct FSignInResult;
class UUser;
struct FProviderList;
struct FFederatedOAuthProviderData;
struct FFederatedAuthProvider;
struct FCredential;
class UFetchProvidersForEmailProxy;
class USignInWithCustomTokenProxy;
class USignInWithCredentialProxy;
class USignInWithProviderProxy;
class USignInAndRetrieveDataWithCredentialProxy;
class USignInAnonymouslyProxy;
class USignInWithEmailAndPasswordProxy;
class UCreateUserWithEmailAndPasswordProxy;
class USendPasswordResetEmailProxy;
class UListenAuthEventsProxy;
#ifdef FIREBASEFEATURES_AuthNodes_generated_h
#error "AuthNodes.generated.h already included, missing '#pragma once' in AuthNodes.h"
#endif
#define FIREBASEFEATURES_AuthNodes_generated_h

#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_AuthNodes_h_55_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FProviderList_Statics; \
	FIREBASEFEATURES_API static class UScriptStruct* StaticStruct();


template<> FIREBASEFEATURES_API UScriptStruct* StaticStruct<struct FProviderList>();

#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_AuthNodes_h_317_DELEGATE \
static inline void FDynMultOnEvent_DelegateWrapper(const FMulticastScriptDelegate& DynMultOnEvent) \
{ \
	DynMultOnEvent.ProcessMulticastDelegate<UObject>(NULL); \
}


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_AuthNodes_h_67_DELEGATE \
struct _Script_FirebaseFeatures_eventDynMultSignInCallback__Parms \
{ \
	EFirebaseAuthError Error; \
	FSignInResult Result; \
}; \
static inline void FDynMultSignInCallback__DelegateWrapper(const FMulticastScriptDelegate& DynMultSignInCallback_, const EFirebaseAuthError Error, FSignInResult const& Result) \
{ \
	_Script_FirebaseFeatures_eventDynMultSignInCallback__Parms Parms; \
	Parms.Error=Error; \
	Parms.Result=Result; \
	DynMultSignInCallback_.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_AuthNodes_h_66_DELEGATE \
struct _Script_FirebaseFeatures_eventDynMultSignInUserCallback_Parms \
{ \
	EFirebaseAuthError Error; \
	const UUser* User; \
}; \
static inline void FDynMultSignInUserCallback_DelegateWrapper(const FMulticastScriptDelegate& DynMultSignInUserCallback, const EFirebaseAuthError Error, const UUser* User) \
{ \
	_Script_FirebaseFeatures_eventDynMultSignInUserCallback_Parms Parms; \
	Parms.Error=Error; \
	Parms.User=User; \
	DynMultSignInUserCallback.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_AuthNodes_h_65_DELEGATE \
struct _Script_FirebaseFeatures_eventDynMultProvidersCallback_Parms \
{ \
	EFirebaseAuthError Error; \
	FProviderList Providers; \
}; \
static inline void FDynMultProvidersCallback_DelegateWrapper(const FMulticastScriptDelegate& DynMultProvidersCallback, const EFirebaseAuthError Error, FProviderList const& Providers) \
{ \
	_Script_FirebaseFeatures_eventDynMultProvidersCallback_Parms Parms; \
	Parms.Error=Error; \
	Parms.Providers=Providers; \
	DynMultProvidersCallback.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_AuthNodes_h_64_DELEGATE \
struct _Script_FirebaseFeatures_eventDynMultiVoidCallback_Parms \
{ \
	EFirebaseAuthError Error; \
}; \
static inline void FDynMultiVoidCallback_DelegateWrapper(const FMulticastScriptDelegate& DynMultiVoidCallback, const EFirebaseAuthError Error) \
{ \
	_Script_FirebaseFeatures_eventDynMultiVoidCallback_Parms Parms; \
	Parms.Error=Error; \
	DynMultiVoidCallback.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_AuthNodes_h_19_SPARSE_DATA
#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_AuthNodes_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCreateOAuthProvider); \
	DECLARE_FUNCTION(execSignOut); \
	DECLARE_FUNCTION(execCurrentUser); \
	DECLARE_FUNCTION(execIsValid); \
	DECLARE_FUNCTION(execProvider);


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_AuthNodes_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCreateOAuthProvider); \
	DECLARE_FUNCTION(execSignOut); \
	DECLARE_FUNCTION(execCurrentUser); \
	DECLARE_FUNCTION(execIsValid); \
	DECLARE_FUNCTION(execProvider);


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_AuthNodes_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAuthMiscLibrary(); \
	friend struct Z_Construct_UClass_UAuthMiscLibrary_Statics; \
public: \
	DECLARE_CLASS(UAuthMiscLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FirebaseFeatures"), NO_API) \
	DECLARE_SERIALIZER(UAuthMiscLibrary)


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_AuthNodes_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUAuthMiscLibrary(); \
	friend struct Z_Construct_UClass_UAuthMiscLibrary_Statics; \
public: \
	DECLARE_CLASS(UAuthMiscLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FirebaseFeatures"), NO_API) \
	DECLARE_SERIALIZER(UAuthMiscLibrary)


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_AuthNodes_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAuthMiscLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAuthMiscLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAuthMiscLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAuthMiscLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAuthMiscLibrary(UAuthMiscLibrary&&); \
	NO_API UAuthMiscLibrary(const UAuthMiscLibrary&); \
public:


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_AuthNodes_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAuthMiscLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAuthMiscLibrary(UAuthMiscLibrary&&); \
	NO_API UAuthMiscLibrary(const UAuthMiscLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAuthMiscLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAuthMiscLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAuthMiscLibrary)


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_AuthNodes_h_19_PRIVATE_PROPERTY_OFFSET
#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_AuthNodes_h_16_PROLOG
#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_AuthNodes_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_AuthNodes_h_19_PRIVATE_PROPERTY_OFFSET \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_AuthNodes_h_19_SPARSE_DATA \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_AuthNodes_h_19_RPC_WRAPPERS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_AuthNodes_h_19_INCLASS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_AuthNodes_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_AuthNodes_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_AuthNodes_h_19_PRIVATE_PROPERTY_OFFSET \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_AuthNodes_h_19_SPARSE_DATA \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_AuthNodes_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_AuthNodes_h_19_INCLASS_NO_PURE_DECLS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_AuthNodes_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FIREBASEFEATURES_API UClass* StaticClass<class UAuthMiscLibrary>();

#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_AuthNodes_h_72_SPARSE_DATA
#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_AuthNodes_h_72_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execFetchProvidersForEmail);


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_AuthNodes_h_72_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execFetchProvidersForEmail);


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_AuthNodes_h_72_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFetchProvidersForEmailProxy(); \
	friend struct Z_Construct_UClass_UFetchProvidersForEmailProxy_Statics; \
public: \
	DECLARE_CLASS(UFetchProvidersForEmailProxy, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FirebaseFeatures"), NO_API) \
	DECLARE_SERIALIZER(UFetchProvidersForEmailProxy)


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_AuthNodes_h_72_INCLASS \
private: \
	static void StaticRegisterNativesUFetchProvidersForEmailProxy(); \
	friend struct Z_Construct_UClass_UFetchProvidersForEmailProxy_Statics; \
public: \
	DECLARE_CLASS(UFetchProvidersForEmailProxy, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FirebaseFeatures"), NO_API) \
	DECLARE_SERIALIZER(UFetchProvidersForEmailProxy)


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_AuthNodes_h_72_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFetchProvidersForEmailProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFetchProvidersForEmailProxy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFetchProvidersForEmailProxy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFetchProvidersForEmailProxy); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFetchProvidersForEmailProxy(UFetchProvidersForEmailProxy&&); \
	NO_API UFetchProvidersForEmailProxy(const UFetchProvidersForEmailProxy&); \
public:


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_AuthNodes_h_72_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFetchProvidersForEmailProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFetchProvidersForEmailProxy(UFetchProvidersForEmailProxy&&); \
	NO_API UFetchProvidersForEmailProxy(const UFetchProvidersForEmailProxy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFetchProvidersForEmailProxy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFetchProvidersForEmailProxy); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFetchProvidersForEmailProxy)


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_AuthNodes_h_72_PRIVATE_PROPERTY_OFFSET
#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_AuthNodes_h_69_PROLOG
#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_AuthNodes_h_72_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_AuthNodes_h_72_PRIVATE_PROPERTY_OFFSET \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_AuthNodes_h_72_SPARSE_DATA \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_AuthNodes_h_72_RPC_WRAPPERS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_AuthNodes_h_72_INCLASS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_AuthNodes_h_72_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_AuthNodes_h_72_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_AuthNodes_h_72_PRIVATE_PROPERTY_OFFSET \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_AuthNodes_h_72_SPARSE_DATA \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_AuthNodes_h_72_RPC_WRAPPERS_NO_PURE_DECLS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_AuthNodes_h_72_INCLASS_NO_PURE_DECLS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_AuthNodes_h_72_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FIREBASEFEATURES_API UClass* StaticClass<class UFetchProvidersForEmailProxy>();

#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_AuthNodes_h_99_SPARSE_DATA
#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_AuthNodes_h_99_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSignInWithCustomToken);


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_AuthNodes_h_99_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSignInWithCustomToken);


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_AuthNodes_h_99_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSignInWithCustomTokenProxy(); \
	friend struct Z_Construct_UClass_USignInWithCustomTokenProxy_Statics; \
public: \
	DECLARE_CLASS(USignInWithCustomTokenProxy, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FirebaseFeatures"), NO_API) \
	DECLARE_SERIALIZER(USignInWithCustomTokenProxy)


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_AuthNodes_h_99_INCLASS \
private: \
	static void StaticRegisterNativesUSignInWithCustomTokenProxy(); \
	friend struct Z_Construct_UClass_USignInWithCustomTokenProxy_Statics; \
public: \
	DECLARE_CLASS(USignInWithCustomTokenProxy, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FirebaseFeatures"), NO_API) \
	DECLARE_SERIALIZER(USignInWithCustomTokenProxy)


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_AuthNodes_h_99_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USignInWithCustomTokenProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USignInWithCustomTokenProxy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USignInWithCustomTokenProxy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USignInWithCustomTokenProxy); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USignInWithCustomTokenProxy(USignInWithCustomTokenProxy&&); \
	NO_API USignInWithCustomTokenProxy(const USignInWithCustomTokenProxy&); \
public:


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_AuthNodes_h_99_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USignInWithCustomTokenProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USignInWithCustomTokenProxy(USignInWithCustomTokenProxy&&); \
	NO_API USignInWithCustomTokenProxy(const USignInWithCustomTokenProxy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USignInWithCustomTokenProxy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USignInWithCustomTokenProxy); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USignInWithCustomTokenProxy)


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_AuthNodes_h_99_PRIVATE_PROPERTY_OFFSET
#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_AuthNodes_h_96_PROLOG
#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_AuthNodes_h_99_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_AuthNodes_h_99_PRIVATE_PROPERTY_OFFSET \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_AuthNodes_h_99_SPARSE_DATA \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_AuthNodes_h_99_RPC_WRAPPERS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_AuthNodes_h_99_INCLASS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_AuthNodes_h_99_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_AuthNodes_h_99_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_AuthNodes_h_99_PRIVATE_PROPERTY_OFFSET \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_AuthNodes_h_99_SPARSE_DATA \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_AuthNodes_h_99_RPC_WRAPPERS_NO_PURE_DECLS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_AuthNodes_h_99_INCLASS_NO_PURE_DECLS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_AuthNodes_h_99_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FIREBASEFEATURES_API UClass* StaticClass<class USignInWithCustomTokenProxy>();

#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_AuthNodes_h_126_SPARSE_DATA
#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_AuthNodes_h_126_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSignInWithCredential);


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_AuthNodes_h_126_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSignInWithCredential);


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_AuthNodes_h_126_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSignInWithCredentialProxy(); \
	friend struct Z_Construct_UClass_USignInWithCredentialProxy_Statics; \
public: \
	DECLARE_CLASS(USignInWithCredentialProxy, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FirebaseFeatures"), NO_API) \
	DECLARE_SERIALIZER(USignInWithCredentialProxy)


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_AuthNodes_h_126_INCLASS \
private: \
	static void StaticRegisterNativesUSignInWithCredentialProxy(); \
	friend struct Z_Construct_UClass_USignInWithCredentialProxy_Statics; \
public: \
	DECLARE_CLASS(USignInWithCredentialProxy, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FirebaseFeatures"), NO_API) \
	DECLARE_SERIALIZER(USignInWithCredentialProxy)


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_AuthNodes_h_126_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USignInWithCredentialProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USignInWithCredentialProxy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USignInWithCredentialProxy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USignInWithCredentialProxy); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USignInWithCredentialProxy(USignInWithCredentialProxy&&); \
	NO_API USignInWithCredentialProxy(const USignInWithCredentialProxy&); \
public:


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_AuthNodes_h_126_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USignInWithCredentialProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USignInWithCredentialProxy(USignInWithCredentialProxy&&); \
	NO_API USignInWithCredentialProxy(const USignInWithCredentialProxy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USignInWithCredentialProxy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USignInWithCredentialProxy); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USignInWithCredentialProxy)


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_AuthNodes_h_126_PRIVATE_PROPERTY_OFFSET
#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_AuthNodes_h_123_PROLOG
#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_AuthNodes_h_126_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_AuthNodes_h_126_PRIVATE_PROPERTY_OFFSET \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_AuthNodes_h_126_SPARSE_DATA \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_AuthNodes_h_126_RPC_WRAPPERS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_AuthNodes_h_126_INCLASS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_AuthNodes_h_126_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_AuthNodes_h_126_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_AuthNodes_h_126_PRIVATE_PROPERTY_OFFSET \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_AuthNodes_h_126_SPARSE_DATA \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_AuthNodes_h_126_RPC_WRAPPERS_NO_PURE_DECLS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_AuthNodes_h_126_INCLASS_NO_PURE_DECLS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_AuthNodes_h_126_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FIREBASEFEATURES_API UClass* StaticClass<class USignInWithCredentialProxy>();

#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_AuthNodes_h_152_SPARSE_DATA
#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_AuthNodes_h_152_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSignInWithProvider);


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_AuthNodes_h_152_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSignInWithProvider);


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_AuthNodes_h_152_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSignInWithProviderProxy(); \
	friend struct Z_Construct_UClass_USignInWithProviderProxy_Statics; \
public: \
	DECLARE_CLASS(USignInWithProviderProxy, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FirebaseFeatures"), NO_API) \
	DECLARE_SERIALIZER(USignInWithProviderProxy)


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_AuthNodes_h_152_INCLASS \
private: \
	static void StaticRegisterNativesUSignInWithProviderProxy(); \
	friend struct Z_Construct_UClass_USignInWithProviderProxy_Statics; \
public: \
	DECLARE_CLASS(USignInWithProviderProxy, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FirebaseFeatures"), NO_API) \
	DECLARE_SERIALIZER(USignInWithProviderProxy)


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_AuthNodes_h_152_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USignInWithProviderProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USignInWithProviderProxy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USignInWithProviderProxy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USignInWithProviderProxy); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USignInWithProviderProxy(USignInWithProviderProxy&&); \
	NO_API USignInWithProviderProxy(const USignInWithProviderProxy&); \
public:


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_AuthNodes_h_152_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USignInWithProviderProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USignInWithProviderProxy(USignInWithProviderProxy&&); \
	NO_API USignInWithProviderProxy(const USignInWithProviderProxy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USignInWithProviderProxy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USignInWithProviderProxy); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USignInWithProviderProxy)


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_AuthNodes_h_152_PRIVATE_PROPERTY_OFFSET
#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_AuthNodes_h_149_PROLOG
#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_AuthNodes_h_152_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_AuthNodes_h_152_PRIVATE_PROPERTY_OFFSET \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_AuthNodes_h_152_SPARSE_DATA \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_AuthNodes_h_152_RPC_WRAPPERS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_AuthNodes_h_152_INCLASS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_AuthNodes_h_152_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_AuthNodes_h_152_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_AuthNodes_h_152_PRIVATE_PROPERTY_OFFSET \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_AuthNodes_h_152_SPARSE_DATA \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_AuthNodes_h_152_RPC_WRAPPERS_NO_PURE_DECLS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_AuthNodes_h_152_INCLASS_NO_PURE_DECLS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_AuthNodes_h_152_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FIREBASEFEATURES_API UClass* StaticClass<class USignInWithProviderProxy>();

#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_AuthNodes_h_179_SPARSE_DATA
#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_AuthNodes_h_179_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSignInAndRetrieveDataWithCredential);


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_AuthNodes_h_179_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSignInAndRetrieveDataWithCredential);


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_AuthNodes_h_179_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSignInAndRetrieveDataWithCredentialProxy(); \
	friend struct Z_Construct_UClass_USignInAndRetrieveDataWithCredentialProxy_Statics; \
public: \
	DECLARE_CLASS(USignInAndRetrieveDataWithCredentialProxy, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FirebaseFeatures"), NO_API) \
	DECLARE_SERIALIZER(USignInAndRetrieveDataWithCredentialProxy)


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_AuthNodes_h_179_INCLASS \
private: \
	static void StaticRegisterNativesUSignInAndRetrieveDataWithCredentialProxy(); \
	friend struct Z_Construct_UClass_USignInAndRetrieveDataWithCredentialProxy_Statics; \
public: \
	DECLARE_CLASS(USignInAndRetrieveDataWithCredentialProxy, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FirebaseFeatures"), NO_API) \
	DECLARE_SERIALIZER(USignInAndRetrieveDataWithCredentialProxy)


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_AuthNodes_h_179_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USignInAndRetrieveDataWithCredentialProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USignInAndRetrieveDataWithCredentialProxy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USignInAndRetrieveDataWithCredentialProxy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USignInAndRetrieveDataWithCredentialProxy); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USignInAndRetrieveDataWithCredentialProxy(USignInAndRetrieveDataWithCredentialProxy&&); \
	NO_API USignInAndRetrieveDataWithCredentialProxy(const USignInAndRetrieveDataWithCredentialProxy&); \
public:


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_AuthNodes_h_179_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USignInAndRetrieveDataWithCredentialProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USignInAndRetrieveDataWithCredentialProxy(USignInAndRetrieveDataWithCredentialProxy&&); \
	NO_API USignInAndRetrieveDataWithCredentialProxy(const USignInAndRetrieveDataWithCredentialProxy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USignInAndRetrieveDataWithCredentialProxy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USignInAndRetrieveDataWithCredentialProxy); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USignInAndRetrieveDataWithCredentialProxy)


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_AuthNodes_h_179_PRIVATE_PROPERTY_OFFSET
#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_AuthNodes_h_176_PROLOG
#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_AuthNodes_h_179_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_AuthNodes_h_179_PRIVATE_PROPERTY_OFFSET \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_AuthNodes_h_179_SPARSE_DATA \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_AuthNodes_h_179_RPC_WRAPPERS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_AuthNodes_h_179_INCLASS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_AuthNodes_h_179_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_AuthNodes_h_179_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_AuthNodes_h_179_PRIVATE_PROPERTY_OFFSET \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_AuthNodes_h_179_SPARSE_DATA \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_AuthNodes_h_179_RPC_WRAPPERS_NO_PURE_DECLS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_AuthNodes_h_179_INCLASS_NO_PURE_DECLS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_AuthNodes_h_179_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FIREBASEFEATURES_API UClass* StaticClass<class USignInAndRetrieveDataWithCredentialProxy>();

#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_AuthNodes_h_211_SPARSE_DATA
#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_AuthNodes_h_211_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSignInAnonymously);


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_AuthNodes_h_211_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSignInAnonymously);


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_AuthNodes_h_211_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSignInAnonymouslyProxy(); \
	friend struct Z_Construct_UClass_USignInAnonymouslyProxy_Statics; \
public: \
	DECLARE_CLASS(USignInAnonymouslyProxy, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FirebaseFeatures"), NO_API) \
	DECLARE_SERIALIZER(USignInAnonymouslyProxy)


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_AuthNodes_h_211_INCLASS \
private: \
	static void StaticRegisterNativesUSignInAnonymouslyProxy(); \
	friend struct Z_Construct_UClass_USignInAnonymouslyProxy_Statics; \
public: \
	DECLARE_CLASS(USignInAnonymouslyProxy, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FirebaseFeatures"), NO_API) \
	DECLARE_SERIALIZER(USignInAnonymouslyProxy)


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_AuthNodes_h_211_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USignInAnonymouslyProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USignInAnonymouslyProxy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USignInAnonymouslyProxy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USignInAnonymouslyProxy); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USignInAnonymouslyProxy(USignInAnonymouslyProxy&&); \
	NO_API USignInAnonymouslyProxy(const USignInAnonymouslyProxy&); \
public:


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_AuthNodes_h_211_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USignInAnonymouslyProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USignInAnonymouslyProxy(USignInAnonymouslyProxy&&); \
	NO_API USignInAnonymouslyProxy(const USignInAnonymouslyProxy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USignInAnonymouslyProxy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USignInAnonymouslyProxy); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USignInAnonymouslyProxy)


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_AuthNodes_h_211_PRIVATE_PROPERTY_OFFSET
#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_AuthNodes_h_208_PROLOG
#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_AuthNodes_h_211_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_AuthNodes_h_211_PRIVATE_PROPERTY_OFFSET \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_AuthNodes_h_211_SPARSE_DATA \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_AuthNodes_h_211_RPC_WRAPPERS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_AuthNodes_h_211_INCLASS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_AuthNodes_h_211_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_AuthNodes_h_211_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_AuthNodes_h_211_PRIVATE_PROPERTY_OFFSET \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_AuthNodes_h_211_SPARSE_DATA \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_AuthNodes_h_211_RPC_WRAPPERS_NO_PURE_DECLS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_AuthNodes_h_211_INCLASS_NO_PURE_DECLS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_AuthNodes_h_211_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FIREBASEFEATURES_API UClass* StaticClass<class USignInAnonymouslyProxy>();

#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_AuthNodes_h_236_SPARSE_DATA
#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_AuthNodes_h_236_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSignInWithEmailAndPassword);


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_AuthNodes_h_236_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSignInWithEmailAndPassword);


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_AuthNodes_h_236_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSignInWithEmailAndPasswordProxy(); \
	friend struct Z_Construct_UClass_USignInWithEmailAndPasswordProxy_Statics; \
public: \
	DECLARE_CLASS(USignInWithEmailAndPasswordProxy, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FirebaseFeatures"), NO_API) \
	DECLARE_SERIALIZER(USignInWithEmailAndPasswordProxy)


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_AuthNodes_h_236_INCLASS \
private: \
	static void StaticRegisterNativesUSignInWithEmailAndPasswordProxy(); \
	friend struct Z_Construct_UClass_USignInWithEmailAndPasswordProxy_Statics; \
public: \
	DECLARE_CLASS(USignInWithEmailAndPasswordProxy, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FirebaseFeatures"), NO_API) \
	DECLARE_SERIALIZER(USignInWithEmailAndPasswordProxy)


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_AuthNodes_h_236_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USignInWithEmailAndPasswordProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USignInWithEmailAndPasswordProxy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USignInWithEmailAndPasswordProxy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USignInWithEmailAndPasswordProxy); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USignInWithEmailAndPasswordProxy(USignInWithEmailAndPasswordProxy&&); \
	NO_API USignInWithEmailAndPasswordProxy(const USignInWithEmailAndPasswordProxy&); \
public:


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_AuthNodes_h_236_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USignInWithEmailAndPasswordProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USignInWithEmailAndPasswordProxy(USignInWithEmailAndPasswordProxy&&); \
	NO_API USignInWithEmailAndPasswordProxy(const USignInWithEmailAndPasswordProxy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USignInWithEmailAndPasswordProxy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USignInWithEmailAndPasswordProxy); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USignInWithEmailAndPasswordProxy)


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_AuthNodes_h_236_PRIVATE_PROPERTY_OFFSET
#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_AuthNodes_h_233_PROLOG
#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_AuthNodes_h_236_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_AuthNodes_h_236_PRIVATE_PROPERTY_OFFSET \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_AuthNodes_h_236_SPARSE_DATA \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_AuthNodes_h_236_RPC_WRAPPERS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_AuthNodes_h_236_INCLASS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_AuthNodes_h_236_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_AuthNodes_h_236_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_AuthNodes_h_236_PRIVATE_PROPERTY_OFFSET \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_AuthNodes_h_236_SPARSE_DATA \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_AuthNodes_h_236_RPC_WRAPPERS_NO_PURE_DECLS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_AuthNodes_h_236_INCLASS_NO_PURE_DECLS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_AuthNodes_h_236_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FIREBASEFEATURES_API UClass* StaticClass<class USignInWithEmailAndPasswordProxy>();

#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_AuthNodes_h_264_SPARSE_DATA
#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_AuthNodes_h_264_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCreateUserWithEmailAndPassword);


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_AuthNodes_h_264_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCreateUserWithEmailAndPassword);


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_AuthNodes_h_264_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCreateUserWithEmailAndPasswordProxy(); \
	friend struct Z_Construct_UClass_UCreateUserWithEmailAndPasswordProxy_Statics; \
public: \
	DECLARE_CLASS(UCreateUserWithEmailAndPasswordProxy, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FirebaseFeatures"), NO_API) \
	DECLARE_SERIALIZER(UCreateUserWithEmailAndPasswordProxy)


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_AuthNodes_h_264_INCLASS \
private: \
	static void StaticRegisterNativesUCreateUserWithEmailAndPasswordProxy(); \
	friend struct Z_Construct_UClass_UCreateUserWithEmailAndPasswordProxy_Statics; \
public: \
	DECLARE_CLASS(UCreateUserWithEmailAndPasswordProxy, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FirebaseFeatures"), NO_API) \
	DECLARE_SERIALIZER(UCreateUserWithEmailAndPasswordProxy)


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_AuthNodes_h_264_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCreateUserWithEmailAndPasswordProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCreateUserWithEmailAndPasswordProxy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCreateUserWithEmailAndPasswordProxy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCreateUserWithEmailAndPasswordProxy); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCreateUserWithEmailAndPasswordProxy(UCreateUserWithEmailAndPasswordProxy&&); \
	NO_API UCreateUserWithEmailAndPasswordProxy(const UCreateUserWithEmailAndPasswordProxy&); \
public:


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_AuthNodes_h_264_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCreateUserWithEmailAndPasswordProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCreateUserWithEmailAndPasswordProxy(UCreateUserWithEmailAndPasswordProxy&&); \
	NO_API UCreateUserWithEmailAndPasswordProxy(const UCreateUserWithEmailAndPasswordProxy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCreateUserWithEmailAndPasswordProxy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCreateUserWithEmailAndPasswordProxy); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCreateUserWithEmailAndPasswordProxy)


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_AuthNodes_h_264_PRIVATE_PROPERTY_OFFSET
#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_AuthNodes_h_261_PROLOG
#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_AuthNodes_h_264_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_AuthNodes_h_264_PRIVATE_PROPERTY_OFFSET \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_AuthNodes_h_264_SPARSE_DATA \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_AuthNodes_h_264_RPC_WRAPPERS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_AuthNodes_h_264_INCLASS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_AuthNodes_h_264_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_AuthNodes_h_264_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_AuthNodes_h_264_PRIVATE_PROPERTY_OFFSET \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_AuthNodes_h_264_SPARSE_DATA \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_AuthNodes_h_264_RPC_WRAPPERS_NO_PURE_DECLS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_AuthNodes_h_264_INCLASS_NO_PURE_DECLS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_AuthNodes_h_264_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FIREBASEFEATURES_API UClass* StaticClass<class UCreateUserWithEmailAndPasswordProxy>();

#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_AuthNodes_h_293_SPARSE_DATA
#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_AuthNodes_h_293_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSendPasswordResetEmail);


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_AuthNodes_h_293_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSendPasswordResetEmail);


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_AuthNodes_h_293_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSendPasswordResetEmailProxy(); \
	friend struct Z_Construct_UClass_USendPasswordResetEmailProxy_Statics; \
public: \
	DECLARE_CLASS(USendPasswordResetEmailProxy, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FirebaseFeatures"), NO_API) \
	DECLARE_SERIALIZER(USendPasswordResetEmailProxy)


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_AuthNodes_h_293_INCLASS \
private: \
	static void StaticRegisterNativesUSendPasswordResetEmailProxy(); \
	friend struct Z_Construct_UClass_USendPasswordResetEmailProxy_Statics; \
public: \
	DECLARE_CLASS(USendPasswordResetEmailProxy, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FirebaseFeatures"), NO_API) \
	DECLARE_SERIALIZER(USendPasswordResetEmailProxy)


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_AuthNodes_h_293_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USendPasswordResetEmailProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USendPasswordResetEmailProxy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USendPasswordResetEmailProxy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USendPasswordResetEmailProxy); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USendPasswordResetEmailProxy(USendPasswordResetEmailProxy&&); \
	NO_API USendPasswordResetEmailProxy(const USendPasswordResetEmailProxy&); \
public:


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_AuthNodes_h_293_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USendPasswordResetEmailProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USendPasswordResetEmailProxy(USendPasswordResetEmailProxy&&); \
	NO_API USendPasswordResetEmailProxy(const USendPasswordResetEmailProxy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USendPasswordResetEmailProxy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USendPasswordResetEmailProxy); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USendPasswordResetEmailProxy)


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_AuthNodes_h_293_PRIVATE_PROPERTY_OFFSET
#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_AuthNodes_h_290_PROLOG
#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_AuthNodes_h_293_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_AuthNodes_h_293_PRIVATE_PROPERTY_OFFSET \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_AuthNodes_h_293_SPARSE_DATA \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_AuthNodes_h_293_RPC_WRAPPERS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_AuthNodes_h_293_INCLASS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_AuthNodes_h_293_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_AuthNodes_h_293_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_AuthNodes_h_293_PRIVATE_PROPERTY_OFFSET \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_AuthNodes_h_293_SPARSE_DATA \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_AuthNodes_h_293_RPC_WRAPPERS_NO_PURE_DECLS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_AuthNodes_h_293_INCLASS_NO_PURE_DECLS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_AuthNodes_h_293_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FIREBASEFEATURES_API UClass* StaticClass<class USendPasswordResetEmailProxy>();

#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_AuthNodes_h_322_SPARSE_DATA
#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_AuthNodes_h_322_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execListenAuthEvents);


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_AuthNodes_h_322_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execListenAuthEvents);


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_AuthNodes_h_322_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUListenAuthEventsProxy(); \
	friend struct Z_Construct_UClass_UListenAuthEventsProxy_Statics; \
public: \
	DECLARE_CLASS(UListenAuthEventsProxy, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FirebaseFeatures"), NO_API) \
	DECLARE_SERIALIZER(UListenAuthEventsProxy)


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_AuthNodes_h_322_INCLASS \
private: \
	static void StaticRegisterNativesUListenAuthEventsProxy(); \
	friend struct Z_Construct_UClass_UListenAuthEventsProxy_Statics; \
public: \
	DECLARE_CLASS(UListenAuthEventsProxy, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FirebaseFeatures"), NO_API) \
	DECLARE_SERIALIZER(UListenAuthEventsProxy)


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_AuthNodes_h_322_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UListenAuthEventsProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UListenAuthEventsProxy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UListenAuthEventsProxy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UListenAuthEventsProxy); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UListenAuthEventsProxy(UListenAuthEventsProxy&&); \
	NO_API UListenAuthEventsProxy(const UListenAuthEventsProxy&); \
public:


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_AuthNodes_h_322_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UListenAuthEventsProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UListenAuthEventsProxy(UListenAuthEventsProxy&&); \
	NO_API UListenAuthEventsProxy(const UListenAuthEventsProxy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UListenAuthEventsProxy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UListenAuthEventsProxy); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UListenAuthEventsProxy)


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_AuthNodes_h_322_PRIVATE_PROPERTY_OFFSET
#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_AuthNodes_h_319_PROLOG
#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_AuthNodes_h_322_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_AuthNodes_h_322_PRIVATE_PROPERTY_OFFSET \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_AuthNodes_h_322_SPARSE_DATA \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_AuthNodes_h_322_RPC_WRAPPERS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_AuthNodes_h_322_INCLASS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_AuthNodes_h_322_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_AuthNodes_h_322_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_AuthNodes_h_322_PRIVATE_PROPERTY_OFFSET \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_AuthNodes_h_322_SPARSE_DATA \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_AuthNodes_h_322_RPC_WRAPPERS_NO_PURE_DECLS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_AuthNodes_h_322_INCLASS_NO_PURE_DECLS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_AuthNodes_h_322_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FIREBASEFEATURES_API UClass* StaticClass<class UListenAuthEventsProxy>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_AuthNodes_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
