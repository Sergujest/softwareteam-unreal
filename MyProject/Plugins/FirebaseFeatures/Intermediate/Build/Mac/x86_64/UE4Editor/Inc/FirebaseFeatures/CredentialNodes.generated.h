// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FCredential;
struct FForceResendingToken;
enum class EFirebaseAuthError : uint8;
class UGetCredentialFromGameCenterProxy;
class UVerifyPhoneNumberProxy;
#ifdef FIREBASEFEATURES_CredentialNodes_generated_h
#error "CredentialNodes.generated.h already included, missing '#pragma once' in CredentialNodes.h"
#endif
#define FIREBASEFEATURES_CredentialNodes_generated_h

#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_CredentialNodes_h_35_DELEGATE \
struct _Script_FirebaseFeatures_eventVerifyPhoneNumberCallback_Parms \
{ \
	FCredential Credential; \
	FString VerificationId; \
	FForceResendingToken ResendingToken; \
	FString Error; \
}; \
static inline void FVerifyPhoneNumberCallback_DelegateWrapper(const FMulticastScriptDelegate& VerifyPhoneNumberCallback, FCredential const& Credential, const FString& VerificationId, FForceResendingToken const& ResendingToken, const FString& Error) \
{ \
	_Script_FirebaseFeatures_eventVerifyPhoneNumberCallback_Parms Parms; \
	Parms.Credential=Credential; \
	Parms.VerificationId=VerificationId; \
	Parms.ResendingToken=ResendingToken; \
	Parms.Error=Error; \
	VerifyPhoneNumberCallback.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_CredentialNodes_h_11_DELEGATE \
struct _Script_FirebaseFeatures_eventGetCredentialEvent_Parms \
{ \
	EFirebaseAuthError Error; \
	FCredential Credential; \
}; \
static inline void FGetCredentialEvent_DelegateWrapper(const FMulticastScriptDelegate& GetCredentialEvent, const EFirebaseAuthError Error, FCredential const& Credential) \
{ \
	_Script_FirebaseFeatures_eventGetCredentialEvent_Parms Parms; \
	Parms.Error=Error; \
	Parms.Credential=Credential; \
	GetCredentialEvent.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_CredentialNodes_h_16_SPARSE_DATA
#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_CredentialNodes_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetCredentialFromGameCenter);


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_CredentialNodes_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetCredentialFromGameCenter);


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_CredentialNodes_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGetCredentialFromGameCenterProxy(); \
	friend struct Z_Construct_UClass_UGetCredentialFromGameCenterProxy_Statics; \
public: \
	DECLARE_CLASS(UGetCredentialFromGameCenterProxy, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FirebaseFeatures"), NO_API) \
	DECLARE_SERIALIZER(UGetCredentialFromGameCenterProxy)


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_CredentialNodes_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUGetCredentialFromGameCenterProxy(); \
	friend struct Z_Construct_UClass_UGetCredentialFromGameCenterProxy_Statics; \
public: \
	DECLARE_CLASS(UGetCredentialFromGameCenterProxy, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FirebaseFeatures"), NO_API) \
	DECLARE_SERIALIZER(UGetCredentialFromGameCenterProxy)


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_CredentialNodes_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGetCredentialFromGameCenterProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGetCredentialFromGameCenterProxy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGetCredentialFromGameCenterProxy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGetCredentialFromGameCenterProxy); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGetCredentialFromGameCenterProxy(UGetCredentialFromGameCenterProxy&&); \
	NO_API UGetCredentialFromGameCenterProxy(const UGetCredentialFromGameCenterProxy&); \
public:


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_CredentialNodes_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGetCredentialFromGameCenterProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGetCredentialFromGameCenterProxy(UGetCredentialFromGameCenterProxy&&); \
	NO_API UGetCredentialFromGameCenterProxy(const UGetCredentialFromGameCenterProxy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGetCredentialFromGameCenterProxy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGetCredentialFromGameCenterProxy); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGetCredentialFromGameCenterProxy)


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_CredentialNodes_h_16_PRIVATE_PROPERTY_OFFSET
#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_CredentialNodes_h_13_PROLOG
#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_CredentialNodes_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_CredentialNodes_h_16_PRIVATE_PROPERTY_OFFSET \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_CredentialNodes_h_16_SPARSE_DATA \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_CredentialNodes_h_16_RPC_WRAPPERS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_CredentialNodes_h_16_INCLASS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_CredentialNodes_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_CredentialNodes_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_CredentialNodes_h_16_PRIVATE_PROPERTY_OFFSET \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_CredentialNodes_h_16_SPARSE_DATA \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_CredentialNodes_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_CredentialNodes_h_16_INCLASS_NO_PURE_DECLS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_CredentialNodes_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FIREBASEFEATURES_API UClass* StaticClass<class UGetCredentialFromGameCenterProxy>();

#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_CredentialNodes_h_40_SPARSE_DATA
#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_CredentialNodes_h_40_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execVerifyPhoneNumber);


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_CredentialNodes_h_40_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execVerifyPhoneNumber);


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_CredentialNodes_h_40_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVerifyPhoneNumberProxy(); \
	friend struct Z_Construct_UClass_UVerifyPhoneNumberProxy_Statics; \
public: \
	DECLARE_CLASS(UVerifyPhoneNumberProxy, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FirebaseFeatures"), NO_API) \
	DECLARE_SERIALIZER(UVerifyPhoneNumberProxy)


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_CredentialNodes_h_40_INCLASS \
private: \
	static void StaticRegisterNativesUVerifyPhoneNumberProxy(); \
	friend struct Z_Construct_UClass_UVerifyPhoneNumberProxy_Statics; \
public: \
	DECLARE_CLASS(UVerifyPhoneNumberProxy, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FirebaseFeatures"), NO_API) \
	DECLARE_SERIALIZER(UVerifyPhoneNumberProxy)


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_CredentialNodes_h_40_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVerifyPhoneNumberProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVerifyPhoneNumberProxy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVerifyPhoneNumberProxy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVerifyPhoneNumberProxy); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVerifyPhoneNumberProxy(UVerifyPhoneNumberProxy&&); \
	NO_API UVerifyPhoneNumberProxy(const UVerifyPhoneNumberProxy&); \
public:


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_CredentialNodes_h_40_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVerifyPhoneNumberProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVerifyPhoneNumberProxy(UVerifyPhoneNumberProxy&&); \
	NO_API UVerifyPhoneNumberProxy(const UVerifyPhoneNumberProxy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVerifyPhoneNumberProxy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVerifyPhoneNumberProxy); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVerifyPhoneNumberProxy)


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_CredentialNodes_h_40_PRIVATE_PROPERTY_OFFSET
#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_CredentialNodes_h_37_PROLOG
#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_CredentialNodes_h_40_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_CredentialNodes_h_40_PRIVATE_PROPERTY_OFFSET \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_CredentialNodes_h_40_SPARSE_DATA \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_CredentialNodes_h_40_RPC_WRAPPERS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_CredentialNodes_h_40_INCLASS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_CredentialNodes_h_40_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_CredentialNodes_h_40_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_CredentialNodes_h_40_PRIVATE_PROPERTY_OFFSET \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_CredentialNodes_h_40_SPARSE_DATA \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_CredentialNodes_h_40_RPC_WRAPPERS_NO_PURE_DECLS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_CredentialNodes_h_40_INCLASS_NO_PURE_DECLS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_CredentialNodes_h_40_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FIREBASEFEATURES_API UClass* StaticClass<class UVerifyPhoneNumberProxy>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Auth_CredentialNodes_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
