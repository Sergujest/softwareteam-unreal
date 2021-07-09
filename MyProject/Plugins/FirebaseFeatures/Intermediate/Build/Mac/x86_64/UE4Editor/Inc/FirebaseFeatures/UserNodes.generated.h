// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EFirebaseAuthError : uint8;
class UUser;
struct FSignInResult;
class UGetTokenProxy;
class UUpdateEmailProxy;
class UUpdatePasswordProxy;
struct FCredential;
class UReauthenticateProxy;
class UReauthenticateAndRetrieveDataProxy;
struct FFederatedAuthProvider;
class UReauthenticateWithProviderProxy;
class USendEmailVerificationProxy;
struct FUserProfile;
class UUpdateUserProfileProxy;
class ULinkWithCredentialProxy;
class ULinkAndRetrieveDataWithCredentialProxy;
class ULinkWithProviderProxy;
class UUnlinkProxy;
class UUpdatePhoneNumberCredentialProxy;
class UReloadProxy;
class UDeleteProxy;
#ifdef FIREBASEFEATURES_UserNodes_generated_h
#error "UserNodes.generated.h already included, missing '#pragma once' in UserNodes.h"
#endif
#define FIREBASEFEATURES_UserNodes_generated_h

#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_139_DELEGATE \
struct _Script_FirebaseFeatures_eventDynMultUserCallback_Parms \
{ \
	EFirebaseAuthError Error; \
	UUser* User; \
}; \
static inline void FDynMultUserCallback_DelegateWrapper(const FMulticastScriptDelegate& DynMultUserCallback, const EFirebaseAuthError Error, UUser* User) \
{ \
	_Script_FirebaseFeatures_eventDynMultUserCallback_Parms Parms; \
	Parms.Error=Error; \
	Parms.User=User; \
	DynMultUserCallback.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_138_DELEGATE \
struct _Script_FirebaseFeatures_eventDynMultSignInCallback_Parms \
{ \
	EFirebaseAuthError Error; \
	FSignInResult Result; \
}; \
static inline void FDynMultSignInCallback_DelegateWrapper(const FMulticastScriptDelegate& DynMultSignInCallback, const EFirebaseAuthError Error, FSignInResult const& Result) \
{ \
	_Script_FirebaseFeatures_eventDynMultSignInCallback_Parms Parms; \
	Parms.Error=Error; \
	Parms.Result=Result; \
	DynMultSignInCallback.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_22_DELEGATE \
struct _Script_FirebaseFeatures_eventDynMultVoidCallback_Parms \
{ \
	EFirebaseAuthError Error; \
}; \
static inline void FDynMultVoidCallback_DelegateWrapper(const FMulticastScriptDelegate& DynMultVoidCallback, const EFirebaseAuthError Error) \
{ \
	_Script_FirebaseFeatures_eventDynMultVoidCallback_Parms Parms; \
	Parms.Error=Error; \
	DynMultVoidCallback.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_21_DELEGATE \
struct _Script_FirebaseFeatures_eventDynMultStringCallback_Parms \
{ \
	EFirebaseAuthError Error; \
	FString Token; \
}; \
static inline void FDynMultStringCallback_DelegateWrapper(const FMulticastScriptDelegate& DynMultStringCallback, const EFirebaseAuthError Error, const FString& Token) \
{ \
	_Script_FirebaseFeatures_eventDynMultStringCallback_Parms Parms; \
	Parms.Error=Error; \
	Parms.Token=Token; \
	DynMultStringCallback.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_13_SPARSE_DATA
#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_13_RPC_WRAPPERS
#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUserNodeBase(); \
	friend struct Z_Construct_UClass_UUserNodeBase_Statics; \
public: \
	DECLARE_CLASS(UUserNodeBase, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/FirebaseFeatures"), NO_API) \
	DECLARE_SERIALIZER(UUserNodeBase)


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUUserNodeBase(); \
	friend struct Z_Construct_UClass_UUserNodeBase_Statics; \
public: \
	DECLARE_CLASS(UUserNodeBase, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/FirebaseFeatures"), NO_API) \
	DECLARE_SERIALIZER(UUserNodeBase)


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUserNodeBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUserNodeBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUserNodeBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUserNodeBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUserNodeBase(UUserNodeBase&&); \
	NO_API UUserNodeBase(const UUserNodeBase&); \
public:


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUserNodeBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUserNodeBase(UUserNodeBase&&); \
	NO_API UUserNodeBase(const UUserNodeBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUserNodeBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUserNodeBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUserNodeBase)


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___User() { return STRUCT_OFFSET(UUserNodeBase, _User); }


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_10_PROLOG
#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_13_PRIVATE_PROPERTY_OFFSET \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_13_SPARSE_DATA \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_13_RPC_WRAPPERS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_13_INCLASS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_13_PRIVATE_PROPERTY_OFFSET \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_13_SPARSE_DATA \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_13_INCLASS_NO_PURE_DECLS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FIREBASEFEATURES_API UClass* StaticClass<class UUserNodeBase>();

#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_27_SPARSE_DATA
#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_27_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetToken);


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetToken);


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGetTokenProxy(); \
	friend struct Z_Construct_UClass_UGetTokenProxy_Statics; \
public: \
	DECLARE_CLASS(UGetTokenProxy, UUserNodeBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FirebaseFeatures"), NO_API) \
	DECLARE_SERIALIZER(UGetTokenProxy)


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_27_INCLASS \
private: \
	static void StaticRegisterNativesUGetTokenProxy(); \
	friend struct Z_Construct_UClass_UGetTokenProxy_Statics; \
public: \
	DECLARE_CLASS(UGetTokenProxy, UUserNodeBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FirebaseFeatures"), NO_API) \
	DECLARE_SERIALIZER(UGetTokenProxy)


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_27_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGetTokenProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGetTokenProxy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGetTokenProxy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGetTokenProxy); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGetTokenProxy(UGetTokenProxy&&); \
	NO_API UGetTokenProxy(const UGetTokenProxy&); \
public:


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_27_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGetTokenProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGetTokenProxy(UGetTokenProxy&&); \
	NO_API UGetTokenProxy(const UGetTokenProxy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGetTokenProxy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGetTokenProxy); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGetTokenProxy)


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_27_PRIVATE_PROPERTY_OFFSET
#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_24_PROLOG
#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_27_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_27_PRIVATE_PROPERTY_OFFSET \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_27_SPARSE_DATA \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_27_RPC_WRAPPERS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_27_INCLASS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_27_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_27_PRIVATE_PROPERTY_OFFSET \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_27_SPARSE_DATA \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_27_INCLASS_NO_PURE_DECLS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FIREBASEFEATURES_API UClass* StaticClass<class UGetTokenProxy>();

#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_61_SPARSE_DATA
#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_61_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execUpdateEmail);


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_61_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execUpdateEmail);


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_61_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUpdateEmailProxy(); \
	friend struct Z_Construct_UClass_UUpdateEmailProxy_Statics; \
public: \
	DECLARE_CLASS(UUpdateEmailProxy, UUserNodeBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FirebaseFeatures"), NO_API) \
	DECLARE_SERIALIZER(UUpdateEmailProxy)


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_61_INCLASS \
private: \
	static void StaticRegisterNativesUUpdateEmailProxy(); \
	friend struct Z_Construct_UClass_UUpdateEmailProxy_Statics; \
public: \
	DECLARE_CLASS(UUpdateEmailProxy, UUserNodeBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FirebaseFeatures"), NO_API) \
	DECLARE_SERIALIZER(UUpdateEmailProxy)


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_61_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUpdateEmailProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUpdateEmailProxy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUpdateEmailProxy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUpdateEmailProxy); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUpdateEmailProxy(UUpdateEmailProxy&&); \
	NO_API UUpdateEmailProxy(const UUpdateEmailProxy&); \
public:


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_61_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUpdateEmailProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUpdateEmailProxy(UUpdateEmailProxy&&); \
	NO_API UUpdateEmailProxy(const UUpdateEmailProxy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUpdateEmailProxy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUpdateEmailProxy); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUpdateEmailProxy)


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_61_PRIVATE_PROPERTY_OFFSET
#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_58_PROLOG
#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_61_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_61_PRIVATE_PROPERTY_OFFSET \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_61_SPARSE_DATA \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_61_RPC_WRAPPERS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_61_INCLASS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_61_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_61_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_61_PRIVATE_PROPERTY_OFFSET \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_61_SPARSE_DATA \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_61_RPC_WRAPPERS_NO_PURE_DECLS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_61_INCLASS_NO_PURE_DECLS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_61_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FIREBASEFEATURES_API UClass* StaticClass<class UUpdateEmailProxy>();

#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_87_SPARSE_DATA
#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_87_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execUpdatePassword);


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_87_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execUpdatePassword);


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_87_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUpdatePasswordProxy(); \
	friend struct Z_Construct_UClass_UUpdatePasswordProxy_Statics; \
public: \
	DECLARE_CLASS(UUpdatePasswordProxy, UUserNodeBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FirebaseFeatures"), NO_API) \
	DECLARE_SERIALIZER(UUpdatePasswordProxy)


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_87_INCLASS \
private: \
	static void StaticRegisterNativesUUpdatePasswordProxy(); \
	friend struct Z_Construct_UClass_UUpdatePasswordProxy_Statics; \
public: \
	DECLARE_CLASS(UUpdatePasswordProxy, UUserNodeBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FirebaseFeatures"), NO_API) \
	DECLARE_SERIALIZER(UUpdatePasswordProxy)


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_87_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUpdatePasswordProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUpdatePasswordProxy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUpdatePasswordProxy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUpdatePasswordProxy); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUpdatePasswordProxy(UUpdatePasswordProxy&&); \
	NO_API UUpdatePasswordProxy(const UUpdatePasswordProxy&); \
public:


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_87_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUpdatePasswordProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUpdatePasswordProxy(UUpdatePasswordProxy&&); \
	NO_API UUpdatePasswordProxy(const UUpdatePasswordProxy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUpdatePasswordProxy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUpdatePasswordProxy); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUpdatePasswordProxy)


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_87_PRIVATE_PROPERTY_OFFSET
#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_84_PROLOG
#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_87_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_87_PRIVATE_PROPERTY_OFFSET \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_87_SPARSE_DATA \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_87_RPC_WRAPPERS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_87_INCLASS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_87_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_87_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_87_PRIVATE_PROPERTY_OFFSET \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_87_SPARSE_DATA \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_87_RPC_WRAPPERS_NO_PURE_DECLS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_87_INCLASS_NO_PURE_DECLS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_87_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FIREBASEFEATURES_API UClass* StaticClass<class UUpdatePasswordProxy>();

#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_116_SPARSE_DATA
#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_116_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execReauthenticate);


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_116_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execReauthenticate);


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_116_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUReauthenticateProxy(); \
	friend struct Z_Construct_UClass_UReauthenticateProxy_Statics; \
public: \
	DECLARE_CLASS(UReauthenticateProxy, UUserNodeBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FirebaseFeatures"), NO_API) \
	DECLARE_SERIALIZER(UReauthenticateProxy)


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_116_INCLASS \
private: \
	static void StaticRegisterNativesUReauthenticateProxy(); \
	friend struct Z_Construct_UClass_UReauthenticateProxy_Statics; \
public: \
	DECLARE_CLASS(UReauthenticateProxy, UUserNodeBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FirebaseFeatures"), NO_API) \
	DECLARE_SERIALIZER(UReauthenticateProxy)


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_116_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UReauthenticateProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UReauthenticateProxy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UReauthenticateProxy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UReauthenticateProxy); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UReauthenticateProxy(UReauthenticateProxy&&); \
	NO_API UReauthenticateProxy(const UReauthenticateProxy&); \
public:


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_116_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UReauthenticateProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UReauthenticateProxy(UReauthenticateProxy&&); \
	NO_API UReauthenticateProxy(const UReauthenticateProxy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UReauthenticateProxy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UReauthenticateProxy); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UReauthenticateProxy)


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_116_PRIVATE_PROPERTY_OFFSET
#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_113_PROLOG
#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_116_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_116_PRIVATE_PROPERTY_OFFSET \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_116_SPARSE_DATA \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_116_RPC_WRAPPERS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_116_INCLASS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_116_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_116_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_116_PRIVATE_PROPERTY_OFFSET \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_116_SPARSE_DATA \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_116_RPC_WRAPPERS_NO_PURE_DECLS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_116_INCLASS_NO_PURE_DECLS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_116_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FIREBASEFEATURES_API UClass* StaticClass<class UReauthenticateProxy>();

#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_144_SPARSE_DATA
#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_144_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execReauthenticateAndRetrieveData);


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_144_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execReauthenticateAndRetrieveData);


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_144_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUReauthenticateAndRetrieveDataProxy(); \
	friend struct Z_Construct_UClass_UReauthenticateAndRetrieveDataProxy_Statics; \
public: \
	DECLARE_CLASS(UReauthenticateAndRetrieveDataProxy, UUserNodeBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FirebaseFeatures"), NO_API) \
	DECLARE_SERIALIZER(UReauthenticateAndRetrieveDataProxy)


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_144_INCLASS \
private: \
	static void StaticRegisterNativesUReauthenticateAndRetrieveDataProxy(); \
	friend struct Z_Construct_UClass_UReauthenticateAndRetrieveDataProxy_Statics; \
public: \
	DECLARE_CLASS(UReauthenticateAndRetrieveDataProxy, UUserNodeBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FirebaseFeatures"), NO_API) \
	DECLARE_SERIALIZER(UReauthenticateAndRetrieveDataProxy)


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_144_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UReauthenticateAndRetrieveDataProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UReauthenticateAndRetrieveDataProxy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UReauthenticateAndRetrieveDataProxy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UReauthenticateAndRetrieveDataProxy); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UReauthenticateAndRetrieveDataProxy(UReauthenticateAndRetrieveDataProxy&&); \
	NO_API UReauthenticateAndRetrieveDataProxy(const UReauthenticateAndRetrieveDataProxy&); \
public:


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_144_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UReauthenticateAndRetrieveDataProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UReauthenticateAndRetrieveDataProxy(UReauthenticateAndRetrieveDataProxy&&); \
	NO_API UReauthenticateAndRetrieveDataProxy(const UReauthenticateAndRetrieveDataProxy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UReauthenticateAndRetrieveDataProxy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UReauthenticateAndRetrieveDataProxy); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UReauthenticateAndRetrieveDataProxy)


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_144_PRIVATE_PROPERTY_OFFSET
#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_141_PROLOG
#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_144_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_144_PRIVATE_PROPERTY_OFFSET \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_144_SPARSE_DATA \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_144_RPC_WRAPPERS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_144_INCLASS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_144_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_144_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_144_PRIVATE_PROPERTY_OFFSET \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_144_SPARSE_DATA \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_144_RPC_WRAPPERS_NO_PURE_DECLS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_144_INCLASS_NO_PURE_DECLS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_144_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FIREBASEFEATURES_API UClass* StaticClass<class UReauthenticateAndRetrieveDataProxy>();

#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_175_SPARSE_DATA
#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_175_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execReauthenticateWithProvider);


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_175_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execReauthenticateWithProvider);


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_175_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUReauthenticateWithProviderProxy(); \
	friend struct Z_Construct_UClass_UReauthenticateWithProviderProxy_Statics; \
public: \
	DECLARE_CLASS(UReauthenticateWithProviderProxy, UUserNodeBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FirebaseFeatures"), NO_API) \
	DECLARE_SERIALIZER(UReauthenticateWithProviderProxy)


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_175_INCLASS \
private: \
	static void StaticRegisterNativesUReauthenticateWithProviderProxy(); \
	friend struct Z_Construct_UClass_UReauthenticateWithProviderProxy_Statics; \
public: \
	DECLARE_CLASS(UReauthenticateWithProviderProxy, UUserNodeBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FirebaseFeatures"), NO_API) \
	DECLARE_SERIALIZER(UReauthenticateWithProviderProxy)


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_175_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UReauthenticateWithProviderProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UReauthenticateWithProviderProxy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UReauthenticateWithProviderProxy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UReauthenticateWithProviderProxy); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UReauthenticateWithProviderProxy(UReauthenticateWithProviderProxy&&); \
	NO_API UReauthenticateWithProviderProxy(const UReauthenticateWithProviderProxy&); \
public:


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_175_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UReauthenticateWithProviderProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UReauthenticateWithProviderProxy(UReauthenticateWithProviderProxy&&); \
	NO_API UReauthenticateWithProviderProxy(const UReauthenticateWithProviderProxy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UReauthenticateWithProviderProxy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UReauthenticateWithProviderProxy); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UReauthenticateWithProviderProxy)


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_175_PRIVATE_PROPERTY_OFFSET
#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_172_PROLOG
#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_175_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_175_PRIVATE_PROPERTY_OFFSET \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_175_SPARSE_DATA \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_175_RPC_WRAPPERS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_175_INCLASS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_175_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_175_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_175_PRIVATE_PROPERTY_OFFSET \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_175_SPARSE_DATA \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_175_RPC_WRAPPERS_NO_PURE_DECLS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_175_INCLASS_NO_PURE_DECLS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_175_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FIREBASEFEATURES_API UClass* StaticClass<class UReauthenticateWithProviderProxy>();

#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_206_SPARSE_DATA
#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_206_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSendEmailVerification);


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_206_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSendEmailVerification);


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_206_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSendEmailVerificationProxy(); \
	friend struct Z_Construct_UClass_USendEmailVerificationProxy_Statics; \
public: \
	DECLARE_CLASS(USendEmailVerificationProxy, UUserNodeBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FirebaseFeatures"), NO_API) \
	DECLARE_SERIALIZER(USendEmailVerificationProxy)


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_206_INCLASS \
private: \
	static void StaticRegisterNativesUSendEmailVerificationProxy(); \
	friend struct Z_Construct_UClass_USendEmailVerificationProxy_Statics; \
public: \
	DECLARE_CLASS(USendEmailVerificationProxy, UUserNodeBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FirebaseFeatures"), NO_API) \
	DECLARE_SERIALIZER(USendEmailVerificationProxy)


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_206_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USendEmailVerificationProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USendEmailVerificationProxy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USendEmailVerificationProxy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USendEmailVerificationProxy); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USendEmailVerificationProxy(USendEmailVerificationProxy&&); \
	NO_API USendEmailVerificationProxy(const USendEmailVerificationProxy&); \
public:


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_206_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USendEmailVerificationProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USendEmailVerificationProxy(USendEmailVerificationProxy&&); \
	NO_API USendEmailVerificationProxy(const USendEmailVerificationProxy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USendEmailVerificationProxy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USendEmailVerificationProxy); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USendEmailVerificationProxy)


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_206_PRIVATE_PROPERTY_OFFSET
#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_203_PROLOG
#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_206_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_206_PRIVATE_PROPERTY_OFFSET \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_206_SPARSE_DATA \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_206_RPC_WRAPPERS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_206_INCLASS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_206_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_206_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_206_PRIVATE_PROPERTY_OFFSET \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_206_SPARSE_DATA \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_206_RPC_WRAPPERS_NO_PURE_DECLS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_206_INCLASS_NO_PURE_DECLS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_206_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FIREBASEFEATURES_API UClass* StaticClass<class USendEmailVerificationProxy>();

#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_227_SPARSE_DATA
#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_227_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execUpdateUserProfile);


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_227_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execUpdateUserProfile);


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_227_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUpdateUserProfileProxy(); \
	friend struct Z_Construct_UClass_UUpdateUserProfileProxy_Statics; \
public: \
	DECLARE_CLASS(UUpdateUserProfileProxy, UUserNodeBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FirebaseFeatures"), NO_API) \
	DECLARE_SERIALIZER(UUpdateUserProfileProxy)


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_227_INCLASS \
private: \
	static void StaticRegisterNativesUUpdateUserProfileProxy(); \
	friend struct Z_Construct_UClass_UUpdateUserProfileProxy_Statics; \
public: \
	DECLARE_CLASS(UUpdateUserProfileProxy, UUserNodeBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FirebaseFeatures"), NO_API) \
	DECLARE_SERIALIZER(UUpdateUserProfileProxy)


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_227_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUpdateUserProfileProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUpdateUserProfileProxy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUpdateUserProfileProxy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUpdateUserProfileProxy); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUpdateUserProfileProxy(UUpdateUserProfileProxy&&); \
	NO_API UUpdateUserProfileProxy(const UUpdateUserProfileProxy&); \
public:


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_227_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUpdateUserProfileProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUpdateUserProfileProxy(UUpdateUserProfileProxy&&); \
	NO_API UUpdateUserProfileProxy(const UUpdateUserProfileProxy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUpdateUserProfileProxy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUpdateUserProfileProxy); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUpdateUserProfileProxy)


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_227_PRIVATE_PROPERTY_OFFSET
#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_224_PROLOG
#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_227_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_227_PRIVATE_PROPERTY_OFFSET \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_227_SPARSE_DATA \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_227_RPC_WRAPPERS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_227_INCLASS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_227_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_227_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_227_PRIVATE_PROPERTY_OFFSET \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_227_SPARSE_DATA \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_227_RPC_WRAPPERS_NO_PURE_DECLS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_227_INCLASS_NO_PURE_DECLS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_227_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FIREBASEFEATURES_API UClass* StaticClass<class UUpdateUserProfileProxy>();

#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_251_SPARSE_DATA
#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_251_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execLinkWithCredential);


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_251_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execLinkWithCredential);


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_251_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULinkWithCredentialProxy(); \
	friend struct Z_Construct_UClass_ULinkWithCredentialProxy_Statics; \
public: \
	DECLARE_CLASS(ULinkWithCredentialProxy, UUserNodeBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FirebaseFeatures"), NO_API) \
	DECLARE_SERIALIZER(ULinkWithCredentialProxy)


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_251_INCLASS \
private: \
	static void StaticRegisterNativesULinkWithCredentialProxy(); \
	friend struct Z_Construct_UClass_ULinkWithCredentialProxy_Statics; \
public: \
	DECLARE_CLASS(ULinkWithCredentialProxy, UUserNodeBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FirebaseFeatures"), NO_API) \
	DECLARE_SERIALIZER(ULinkWithCredentialProxy)


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_251_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULinkWithCredentialProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULinkWithCredentialProxy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULinkWithCredentialProxy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULinkWithCredentialProxy); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULinkWithCredentialProxy(ULinkWithCredentialProxy&&); \
	NO_API ULinkWithCredentialProxy(const ULinkWithCredentialProxy&); \
public:


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_251_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULinkWithCredentialProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULinkWithCredentialProxy(ULinkWithCredentialProxy&&); \
	NO_API ULinkWithCredentialProxy(const ULinkWithCredentialProxy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULinkWithCredentialProxy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULinkWithCredentialProxy); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULinkWithCredentialProxy)


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_251_PRIVATE_PROPERTY_OFFSET
#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_248_PROLOG
#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_251_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_251_PRIVATE_PROPERTY_OFFSET \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_251_SPARSE_DATA \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_251_RPC_WRAPPERS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_251_INCLASS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_251_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_251_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_251_PRIVATE_PROPERTY_OFFSET \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_251_SPARSE_DATA \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_251_RPC_WRAPPERS_NO_PURE_DECLS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_251_INCLASS_NO_PURE_DECLS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_251_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FIREBASEFEATURES_API UClass* StaticClass<class ULinkWithCredentialProxy>();

#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_277_SPARSE_DATA
#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_277_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execLinkAndRetrieveDataWithCredential);


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_277_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execLinkAndRetrieveDataWithCredential);


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_277_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULinkAndRetrieveDataWithCredentialProxy(); \
	friend struct Z_Construct_UClass_ULinkAndRetrieveDataWithCredentialProxy_Statics; \
public: \
	DECLARE_CLASS(ULinkAndRetrieveDataWithCredentialProxy, UUserNodeBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FirebaseFeatures"), NO_API) \
	DECLARE_SERIALIZER(ULinkAndRetrieveDataWithCredentialProxy)


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_277_INCLASS \
private: \
	static void StaticRegisterNativesULinkAndRetrieveDataWithCredentialProxy(); \
	friend struct Z_Construct_UClass_ULinkAndRetrieveDataWithCredentialProxy_Statics; \
public: \
	DECLARE_CLASS(ULinkAndRetrieveDataWithCredentialProxy, UUserNodeBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FirebaseFeatures"), NO_API) \
	DECLARE_SERIALIZER(ULinkAndRetrieveDataWithCredentialProxy)


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_277_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULinkAndRetrieveDataWithCredentialProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULinkAndRetrieveDataWithCredentialProxy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULinkAndRetrieveDataWithCredentialProxy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULinkAndRetrieveDataWithCredentialProxy); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULinkAndRetrieveDataWithCredentialProxy(ULinkAndRetrieveDataWithCredentialProxy&&); \
	NO_API ULinkAndRetrieveDataWithCredentialProxy(const ULinkAndRetrieveDataWithCredentialProxy&); \
public:


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_277_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULinkAndRetrieveDataWithCredentialProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULinkAndRetrieveDataWithCredentialProxy(ULinkAndRetrieveDataWithCredentialProxy&&); \
	NO_API ULinkAndRetrieveDataWithCredentialProxy(const ULinkAndRetrieveDataWithCredentialProxy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULinkAndRetrieveDataWithCredentialProxy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULinkAndRetrieveDataWithCredentialProxy); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULinkAndRetrieveDataWithCredentialProxy)


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_277_PRIVATE_PROPERTY_OFFSET
#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_274_PROLOG
#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_277_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_277_PRIVATE_PROPERTY_OFFSET \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_277_SPARSE_DATA \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_277_RPC_WRAPPERS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_277_INCLASS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_277_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_277_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_277_PRIVATE_PROPERTY_OFFSET \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_277_SPARSE_DATA \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_277_RPC_WRAPPERS_NO_PURE_DECLS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_277_INCLASS_NO_PURE_DECLS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_277_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FIREBASEFEATURES_API UClass* StaticClass<class ULinkAndRetrieveDataWithCredentialProxy>();

#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_309_SPARSE_DATA
#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_309_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execLinkWithProvider);


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_309_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execLinkWithProvider);


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_309_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULinkWithProviderProxy(); \
	friend struct Z_Construct_UClass_ULinkWithProviderProxy_Statics; \
public: \
	DECLARE_CLASS(ULinkWithProviderProxy, UUserNodeBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FirebaseFeatures"), NO_API) \
	DECLARE_SERIALIZER(ULinkWithProviderProxy)


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_309_INCLASS \
private: \
	static void StaticRegisterNativesULinkWithProviderProxy(); \
	friend struct Z_Construct_UClass_ULinkWithProviderProxy_Statics; \
public: \
	DECLARE_CLASS(ULinkWithProviderProxy, UUserNodeBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FirebaseFeatures"), NO_API) \
	DECLARE_SERIALIZER(ULinkWithProviderProxy)


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_309_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULinkWithProviderProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULinkWithProviderProxy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULinkWithProviderProxy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULinkWithProviderProxy); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULinkWithProviderProxy(ULinkWithProviderProxy&&); \
	NO_API ULinkWithProviderProxy(const ULinkWithProviderProxy&); \
public:


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_309_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULinkWithProviderProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULinkWithProviderProxy(ULinkWithProviderProxy&&); \
	NO_API ULinkWithProviderProxy(const ULinkWithProviderProxy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULinkWithProviderProxy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULinkWithProviderProxy); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULinkWithProviderProxy)


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_309_PRIVATE_PROPERTY_OFFSET
#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_306_PROLOG
#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_309_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_309_PRIVATE_PROPERTY_OFFSET \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_309_SPARSE_DATA \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_309_RPC_WRAPPERS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_309_INCLASS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_309_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_309_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_309_PRIVATE_PROPERTY_OFFSET \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_309_SPARSE_DATA \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_309_RPC_WRAPPERS_NO_PURE_DECLS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_309_INCLASS_NO_PURE_DECLS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_309_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FIREBASEFEATURES_API UClass* StaticClass<class ULinkWithProviderProxy>();

#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_340_SPARSE_DATA
#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_340_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execUnlink);


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_340_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execUnlink);


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_340_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUnlinkProxy(); \
	friend struct Z_Construct_UClass_UUnlinkProxy_Statics; \
public: \
	DECLARE_CLASS(UUnlinkProxy, UUserNodeBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FirebaseFeatures"), NO_API) \
	DECLARE_SERIALIZER(UUnlinkProxy)


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_340_INCLASS \
private: \
	static void StaticRegisterNativesUUnlinkProxy(); \
	friend struct Z_Construct_UClass_UUnlinkProxy_Statics; \
public: \
	DECLARE_CLASS(UUnlinkProxy, UUserNodeBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FirebaseFeatures"), NO_API) \
	DECLARE_SERIALIZER(UUnlinkProxy)


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_340_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUnlinkProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUnlinkProxy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUnlinkProxy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUnlinkProxy); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUnlinkProxy(UUnlinkProxy&&); \
	NO_API UUnlinkProxy(const UUnlinkProxy&); \
public:


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_340_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUnlinkProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUnlinkProxy(UUnlinkProxy&&); \
	NO_API UUnlinkProxy(const UUnlinkProxy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUnlinkProxy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUnlinkProxy); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUnlinkProxy)


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_340_PRIVATE_PROPERTY_OFFSET
#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_337_PROLOG
#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_340_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_340_PRIVATE_PROPERTY_OFFSET \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_340_SPARSE_DATA \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_340_RPC_WRAPPERS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_340_INCLASS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_340_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_340_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_340_PRIVATE_PROPERTY_OFFSET \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_340_SPARSE_DATA \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_340_RPC_WRAPPERS_NO_PURE_DECLS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_340_INCLASS_NO_PURE_DECLS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_340_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FIREBASEFEATURES_API UClass* StaticClass<class UUnlinkProxy>();

#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_365_SPARSE_DATA
#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_365_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execUpdatePhoneNumberCredential);


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_365_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execUpdatePhoneNumberCredential);


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_365_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUpdatePhoneNumberCredentialProxy(); \
	friend struct Z_Construct_UClass_UUpdatePhoneNumberCredentialProxy_Statics; \
public: \
	DECLARE_CLASS(UUpdatePhoneNumberCredentialProxy, UUserNodeBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FirebaseFeatures"), NO_API) \
	DECLARE_SERIALIZER(UUpdatePhoneNumberCredentialProxy)


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_365_INCLASS \
private: \
	static void StaticRegisterNativesUUpdatePhoneNumberCredentialProxy(); \
	friend struct Z_Construct_UClass_UUpdatePhoneNumberCredentialProxy_Statics; \
public: \
	DECLARE_CLASS(UUpdatePhoneNumberCredentialProxy, UUserNodeBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FirebaseFeatures"), NO_API) \
	DECLARE_SERIALIZER(UUpdatePhoneNumberCredentialProxy)


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_365_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUpdatePhoneNumberCredentialProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUpdatePhoneNumberCredentialProxy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUpdatePhoneNumberCredentialProxy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUpdatePhoneNumberCredentialProxy); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUpdatePhoneNumberCredentialProxy(UUpdatePhoneNumberCredentialProxy&&); \
	NO_API UUpdatePhoneNumberCredentialProxy(const UUpdatePhoneNumberCredentialProxy&); \
public:


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_365_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUpdatePhoneNumberCredentialProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUpdatePhoneNumberCredentialProxy(UUpdatePhoneNumberCredentialProxy&&); \
	NO_API UUpdatePhoneNumberCredentialProxy(const UUpdatePhoneNumberCredentialProxy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUpdatePhoneNumberCredentialProxy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUpdatePhoneNumberCredentialProxy); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUpdatePhoneNumberCredentialProxy)


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_365_PRIVATE_PROPERTY_OFFSET
#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_362_PROLOG
#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_365_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_365_PRIVATE_PROPERTY_OFFSET \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_365_SPARSE_DATA \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_365_RPC_WRAPPERS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_365_INCLASS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_365_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_365_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_365_PRIVATE_PROPERTY_OFFSET \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_365_SPARSE_DATA \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_365_RPC_WRAPPERS_NO_PURE_DECLS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_365_INCLASS_NO_PURE_DECLS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_365_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FIREBASEFEATURES_API UClass* StaticClass<class UUpdatePhoneNumberCredentialProxy>();

#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_393_SPARSE_DATA
#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_393_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execReload);


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_393_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execReload);


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_393_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUReloadProxy(); \
	friend struct Z_Construct_UClass_UReloadProxy_Statics; \
public: \
	DECLARE_CLASS(UReloadProxy, UUserNodeBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FirebaseFeatures"), NO_API) \
	DECLARE_SERIALIZER(UReloadProxy)


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_393_INCLASS \
private: \
	static void StaticRegisterNativesUReloadProxy(); \
	friend struct Z_Construct_UClass_UReloadProxy_Statics; \
public: \
	DECLARE_CLASS(UReloadProxy, UUserNodeBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FirebaseFeatures"), NO_API) \
	DECLARE_SERIALIZER(UReloadProxy)


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_393_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UReloadProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UReloadProxy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UReloadProxy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UReloadProxy); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UReloadProxy(UReloadProxy&&); \
	NO_API UReloadProxy(const UReloadProxy&); \
public:


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_393_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UReloadProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UReloadProxy(UReloadProxy&&); \
	NO_API UReloadProxy(const UReloadProxy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UReloadProxy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UReloadProxy); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UReloadProxy)


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_393_PRIVATE_PROPERTY_OFFSET
#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_390_PROLOG
#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_393_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_393_PRIVATE_PROPERTY_OFFSET \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_393_SPARSE_DATA \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_393_RPC_WRAPPERS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_393_INCLASS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_393_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_393_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_393_PRIVATE_PROPERTY_OFFSET \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_393_SPARSE_DATA \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_393_RPC_WRAPPERS_NO_PURE_DECLS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_393_INCLASS_NO_PURE_DECLS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_393_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FIREBASEFEATURES_API UClass* StaticClass<class UReloadProxy>();

#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_415_SPARSE_DATA
#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_415_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execDelete);


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_415_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDelete);


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_415_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDeleteProxy(); \
	friend struct Z_Construct_UClass_UDeleteProxy_Statics; \
public: \
	DECLARE_CLASS(UDeleteProxy, UUserNodeBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FirebaseFeatures"), NO_API) \
	DECLARE_SERIALIZER(UDeleteProxy)


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_415_INCLASS \
private: \
	static void StaticRegisterNativesUDeleteProxy(); \
	friend struct Z_Construct_UClass_UDeleteProxy_Statics; \
public: \
	DECLARE_CLASS(UDeleteProxy, UUserNodeBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FirebaseFeatures"), NO_API) \
	DECLARE_SERIALIZER(UDeleteProxy)


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_415_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDeleteProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDeleteProxy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDeleteProxy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDeleteProxy); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDeleteProxy(UDeleteProxy&&); \
	NO_API UDeleteProxy(const UDeleteProxy&); \
public:


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_415_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDeleteProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDeleteProxy(UDeleteProxy&&); \
	NO_API UDeleteProxy(const UDeleteProxy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDeleteProxy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDeleteProxy); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDeleteProxy)


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_415_PRIVATE_PROPERTY_OFFSET
#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_412_PROLOG
#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_415_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_415_PRIVATE_PROPERTY_OFFSET \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_415_SPARSE_DATA \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_415_RPC_WRAPPERS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_415_INCLASS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_415_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_415_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_415_PRIVATE_PROPERTY_OFFSET \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_415_SPARSE_DATA \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_415_RPC_WRAPPERS_NO_PURE_DECLS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_415_INCLASS_NO_PURE_DECLS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h_415_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FIREBASEFEATURES_API UClass* StaticClass<class UDeleteProxy>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_UserNodes_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
