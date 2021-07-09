// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FirebaseFeatures/Public/Auth/Auth.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAuth() {}
// Cross Module References
	FIREBASEFEATURES_API UScriptStruct* Z_Construct_UScriptStruct_FFederatedAuthProvider();
	UPackage* Z_Construct_UPackage__Script_FirebaseFeatures();
	FIREBASEFEATURES_API UScriptStruct* Z_Construct_UScriptStruct_FFederatedOAuthProviderData();
	FIREBASEFEATURES_API UScriptStruct* Z_Construct_UScriptStruct_FSignInResult();
	FIREBASEFEATURES_API UClass* Z_Construct_UClass_UUser_NoRegister();
	FIREBASEFEATURES_API UScriptStruct* Z_Construct_UScriptStruct_FAdditionalUserInfo();
	FIREBASEFEATURES_API UScriptStruct* Z_Construct_UScriptStruct_FUserMetadata();
	FIREBASEFEATURES_API UScriptStruct* Z_Construct_UScriptStruct_FFirebaseVariant();
	FIREBASEFEATURES_API UScriptStruct* Z_Construct_UScriptStruct_FCredential();
// End Cross Module References
class UScriptStruct* FFederatedAuthProvider::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FIREBASEFEATURES_API uint32 Get_Z_Construct_UScriptStruct_FFederatedAuthProvider_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FFederatedAuthProvider, Z_Construct_UPackage__Script_FirebaseFeatures(), TEXT("FederatedAuthProvider"), sizeof(FFederatedAuthProvider), Get_Z_Construct_UScriptStruct_FFederatedAuthProvider_Hash());
	}
	return Singleton;
}
template<> FIREBASEFEATURES_API UScriptStruct* StaticStruct<FFederatedAuthProvider>()
{
	return FFederatedAuthProvider::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FFederatedAuthProvider(FFederatedAuthProvider::StaticStruct, TEXT("/Script/FirebaseFeatures"), TEXT("FederatedAuthProvider"), false, nullptr, nullptr);
static struct FScriptStruct_FirebaseFeatures_StaticRegisterNativesFFederatedAuthProvider
{
	FScriptStruct_FirebaseFeatures_StaticRegisterNativesFFederatedAuthProvider()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("FederatedAuthProvider")),new UScriptStruct::TCppStructOps<FFederatedAuthProvider>);
	}
} ScriptStruct_FirebaseFeatures_StaticRegisterNativesFFederatedAuthProvider;
	struct Z_Construct_UScriptStruct_FFederatedAuthProvider_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFederatedAuthProvider_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Auth/Auth.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFederatedAuthProvider_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFederatedAuthProvider>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFederatedAuthProvider_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FirebaseFeatures,
		nullptr,
		&NewStructOps,
		"FederatedAuthProvider",
		sizeof(FFederatedAuthProvider),
		alignof(FFederatedAuthProvider),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFederatedAuthProvider_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFederatedAuthProvider_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFederatedAuthProvider()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FFederatedAuthProvider_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_FirebaseFeatures();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("FederatedAuthProvider"), sizeof(FFederatedAuthProvider), Get_Z_Construct_UScriptStruct_FFederatedAuthProvider_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FFederatedAuthProvider_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FFederatedAuthProvider_Hash() { return 2403234218U; }
class UScriptStruct* FFederatedOAuthProviderData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FIREBASEFEATURES_API uint32 Get_Z_Construct_UScriptStruct_FFederatedOAuthProviderData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FFederatedOAuthProviderData, Z_Construct_UPackage__Script_FirebaseFeatures(), TEXT("FederatedOAuthProviderData"), sizeof(FFederatedOAuthProviderData), Get_Z_Construct_UScriptStruct_FFederatedOAuthProviderData_Hash());
	}
	return Singleton;
}
template<> FIREBASEFEATURES_API UScriptStruct* StaticStruct<FFederatedOAuthProviderData>()
{
	return FFederatedOAuthProviderData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FFederatedOAuthProviderData(FFederatedOAuthProviderData::StaticStruct, TEXT("/Script/FirebaseFeatures"), TEXT("FederatedOAuthProviderData"), false, nullptr, nullptr);
static struct FScriptStruct_FirebaseFeatures_StaticRegisterNativesFFederatedOAuthProviderData
{
	FScriptStruct_FirebaseFeatures_StaticRegisterNativesFFederatedOAuthProviderData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("FederatedOAuthProviderData")),new UScriptStruct::TCppStructOps<FFederatedOAuthProviderData>);
	}
} ScriptStruct_FirebaseFeatures_StaticRegisterNativesFFederatedOAuthProviderData;
	struct Z_Construct_UScriptStruct_FFederatedOAuthProviderData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProviderId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ProviderId;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Scopes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Scopes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Scopes;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CustomParameters_ValueProp;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CustomParameters_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomParameters_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_CustomParameters;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFederatedOAuthProviderData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Auth/Auth.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFederatedOAuthProviderData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFederatedOAuthProviderData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFederatedOAuthProviderData_Statics::NewProp_ProviderId_MetaData[] = {
		{ "Category", "Firebase|Auth" },
		{ "Comment", "/// Contains the id of the provider to be used during sign-in, link, or\n/// reauthentication requests.\n" },
		{ "ModuleRelativePath", "Public/Auth/Auth.h" },
		{ "ToolTip", "Contains the id of the provider to be used during sign-in, link, or\nreauthentication requests." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFederatedOAuthProviderData_Statics::NewProp_ProviderId = { "ProviderId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFederatedOAuthProviderData, ProviderId), METADATA_PARAMS(Z_Construct_UScriptStruct_FFederatedOAuthProviderData_Statics::NewProp_ProviderId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFederatedOAuthProviderData_Statics::NewProp_ProviderId_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFederatedOAuthProviderData_Statics::NewProp_Scopes_Inner = { "Scopes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFederatedOAuthProviderData_Statics::NewProp_Scopes_MetaData[] = {
		{ "Category", "Firebase|Auth" },
		{ "Comment", "/// OAuth parmeters which specify which rights of access are being requested.\n" },
		{ "ModuleRelativePath", "Public/Auth/Auth.h" },
		{ "ToolTip", "OAuth parmeters which specify which rights of access are being requested." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FFederatedOAuthProviderData_Statics::NewProp_Scopes = { "Scopes", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFederatedOAuthProviderData, Scopes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FFederatedOAuthProviderData_Statics::NewProp_Scopes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFederatedOAuthProviderData_Statics::NewProp_Scopes_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFederatedOAuthProviderData_Statics::NewProp_CustomParameters_ValueProp = { "CustomParameters", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFederatedOAuthProviderData_Statics::NewProp_CustomParameters_Key_KeyProp = { "CustomParameters_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFederatedOAuthProviderData_Statics::NewProp_CustomParameters_MetaData[] = {
		{ "Category", "Firebase|Auth" },
		{ "Comment", "/// OAuth parameters which are provided to the federated provider service.\n" },
		{ "ModuleRelativePath", "Public/Auth/Auth.h" },
		{ "ToolTip", "OAuth parameters which are provided to the federated provider service." },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FFederatedOAuthProviderData_Statics::NewProp_CustomParameters = { "CustomParameters", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFederatedOAuthProviderData, CustomParameters), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FFederatedOAuthProviderData_Statics::NewProp_CustomParameters_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFederatedOAuthProviderData_Statics::NewProp_CustomParameters_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFederatedOAuthProviderData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFederatedOAuthProviderData_Statics::NewProp_ProviderId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFederatedOAuthProviderData_Statics::NewProp_Scopes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFederatedOAuthProviderData_Statics::NewProp_Scopes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFederatedOAuthProviderData_Statics::NewProp_CustomParameters_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFederatedOAuthProviderData_Statics::NewProp_CustomParameters_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFederatedOAuthProviderData_Statics::NewProp_CustomParameters,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFederatedOAuthProviderData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FirebaseFeatures,
		nullptr,
		&NewStructOps,
		"FederatedOAuthProviderData",
		sizeof(FFederatedOAuthProviderData),
		alignof(FFederatedOAuthProviderData),
		Z_Construct_UScriptStruct_FFederatedOAuthProviderData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFederatedOAuthProviderData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFederatedOAuthProviderData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFederatedOAuthProviderData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFederatedOAuthProviderData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FFederatedOAuthProviderData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_FirebaseFeatures();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("FederatedOAuthProviderData"), sizeof(FFederatedOAuthProviderData), Get_Z_Construct_UScriptStruct_FFederatedOAuthProviderData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FFederatedOAuthProviderData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FFederatedOAuthProviderData_Hash() { return 3748654752U; }
class UScriptStruct* FSignInResult::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FIREBASEFEATURES_API uint32 Get_Z_Construct_UScriptStruct_FSignInResult_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSignInResult, Z_Construct_UPackage__Script_FirebaseFeatures(), TEXT("SignInResult"), sizeof(FSignInResult), Get_Z_Construct_UScriptStruct_FSignInResult_Hash());
	}
	return Singleton;
}
template<> FIREBASEFEATURES_API UScriptStruct* StaticStruct<FSignInResult>()
{
	return FSignInResult::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSignInResult(FSignInResult::StaticStruct, TEXT("/Script/FirebaseFeatures"), TEXT("SignInResult"), false, nullptr, nullptr);
static struct FScriptStruct_FirebaseFeatures_StaticRegisterNativesFSignInResult
{
	FScriptStruct_FirebaseFeatures_StaticRegisterNativesFSignInResult()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SignInResult")),new UScriptStruct::TCppStructOps<FSignInResult>);
	}
} ScriptStruct_FirebaseFeatures_StaticRegisterNativesFSignInResult;
	struct Z_Construct_UScriptStruct_FSignInResult_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_User_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_User;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Info_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Info;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Meta_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Meta;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSignInResult_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/// @brief Result of operations that can affect authentication state.\n" },
		{ "ModuleRelativePath", "Public/Auth/Auth.h" },
		{ "ToolTip", "@brief Result of operations that can affect authentication state." },
	};
#endif
	void* Z_Construct_UScriptStruct_FSignInResult_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSignInResult>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSignInResult_Statics::NewProp_User_MetaData[] = {
		{ "Category", "Firebase|Auth" },
		{ "Comment", "/// The currently signed-in @ref User, or NULL if there isn't any (i.e. the\n/// user is signed out).\n" },
		{ "ModuleRelativePath", "Public/Auth/Auth.h" },
		{ "ToolTip", "The currently signed-in @ref User, or NULL if there isn't any (i.e. the\nuser is signed out)." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSignInResult_Statics::NewProp_User = { "User", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSignInResult, User), Z_Construct_UClass_UUser_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSignInResult_Statics::NewProp_User_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSignInResult_Statics::NewProp_User_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSignInResult_Statics::NewProp_Info_MetaData[] = {
		{ "Category", "Firebase|Auth" },
		{ "Comment", "/// Identity-provider specific information for the user, if the provider is\n/// one of Facebook, GitHub, Google, or Twitter.\n" },
		{ "ModuleRelativePath", "Public/Auth/Auth.h" },
		{ "ToolTip", "Identity-provider specific information for the user, if the provider is\none of Facebook, GitHub, Google, or Twitter." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSignInResult_Statics::NewProp_Info = { "Info", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSignInResult, Info), Z_Construct_UScriptStruct_FAdditionalUserInfo, METADATA_PARAMS(Z_Construct_UScriptStruct_FSignInResult_Statics::NewProp_Info_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSignInResult_Statics::NewProp_Info_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSignInResult_Statics::NewProp_Meta_MetaData[] = {
		{ "Category", "Firebase|Auth" },
		{ "Comment", "/// Metadata associated with the Firebase user.\n" },
		{ "ModuleRelativePath", "Public/Auth/Auth.h" },
		{ "ToolTip", "Metadata associated with the Firebase user." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSignInResult_Statics::NewProp_Meta = { "Meta", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSignInResult, Meta), Z_Construct_UScriptStruct_FUserMetadata, METADATA_PARAMS(Z_Construct_UScriptStruct_FSignInResult_Statics::NewProp_Meta_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSignInResult_Statics::NewProp_Meta_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSignInResult_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSignInResult_Statics::NewProp_User,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSignInResult_Statics::NewProp_Info,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSignInResult_Statics::NewProp_Meta,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSignInResult_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FirebaseFeatures,
		nullptr,
		&NewStructOps,
		"SignInResult",
		sizeof(FSignInResult),
		alignof(FSignInResult),
		Z_Construct_UScriptStruct_FSignInResult_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSignInResult_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSignInResult_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSignInResult_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSignInResult()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSignInResult_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_FirebaseFeatures();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SignInResult"), sizeof(FSignInResult), Get_Z_Construct_UScriptStruct_FSignInResult_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSignInResult_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSignInResult_Hash() { return 2907529811U; }
class UScriptStruct* FAdditionalUserInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FIREBASEFEATURES_API uint32 Get_Z_Construct_UScriptStruct_FAdditionalUserInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAdditionalUserInfo, Z_Construct_UPackage__Script_FirebaseFeatures(), TEXT("AdditionalUserInfo"), sizeof(FAdditionalUserInfo), Get_Z_Construct_UScriptStruct_FAdditionalUserInfo_Hash());
	}
	return Singleton;
}
template<> FIREBASEFEATURES_API UScriptStruct* StaticStruct<FAdditionalUserInfo>()
{
	return FAdditionalUserInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAdditionalUserInfo(FAdditionalUserInfo::StaticStruct, TEXT("/Script/FirebaseFeatures"), TEXT("AdditionalUserInfo"), false, nullptr, nullptr);
static struct FScriptStruct_FirebaseFeatures_StaticRegisterNativesFAdditionalUserInfo
{
	FScriptStruct_FirebaseFeatures_StaticRegisterNativesFAdditionalUserInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AdditionalUserInfo")),new UScriptStruct::TCppStructOps<FAdditionalUserInfo>);
	}
} ScriptStruct_FirebaseFeatures_StaticRegisterNativesFAdditionalUserInfo;
	struct Z_Construct_UScriptStruct_FAdditionalUserInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProviderId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ProviderId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_UserName;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Profile_ValueProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Profile_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Profile_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_Profile;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UpdatedCredential_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UpdatedCredential;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdditionalUserInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/// Additional user data returned from an identity provider.\n" },
		{ "ModuleRelativePath", "Public/Auth/Auth.h" },
		{ "ToolTip", "Additional user data returned from an identity provider." },
	};
#endif
	void* Z_Construct_UScriptStruct_FAdditionalUserInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAdditionalUserInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdditionalUserInfo_Statics::NewProp_ProviderId_MetaData[] = {
		{ "Category", "Firebase|Auth" },
		{ "Comment", "/// The provider identifier.\n" },
		{ "ModuleRelativePath", "Public/Auth/Auth.h" },
		{ "ToolTip", "The provider identifier." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAdditionalUserInfo_Statics::NewProp_ProviderId = { "ProviderId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAdditionalUserInfo, ProviderId), METADATA_PARAMS(Z_Construct_UScriptStruct_FAdditionalUserInfo_Statics::NewProp_ProviderId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdditionalUserInfo_Statics::NewProp_ProviderId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdditionalUserInfo_Statics::NewProp_UserName_MetaData[] = {
		{ "Category", "Firebase|Auth" },
		{ "Comment", "/// The name of the user.\n" },
		{ "ModuleRelativePath", "Public/Auth/Auth.h" },
		{ "ToolTip", "The name of the user." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAdditionalUserInfo_Statics::NewProp_UserName = { "UserName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAdditionalUserInfo, UserName), METADATA_PARAMS(Z_Construct_UScriptStruct_FAdditionalUserInfo_Statics::NewProp_UserName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdditionalUserInfo_Statics::NewProp_UserName_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAdditionalUserInfo_Statics::NewProp_Profile_ValueProp = { "Profile", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FFirebaseVariant, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAdditionalUserInfo_Statics::NewProp_Profile_Key_KeyProp = { "Profile_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FFirebaseVariant, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdditionalUserInfo_Statics::NewProp_Profile_MetaData[] = {
		{ "Category", "Firebase|Auth" },
		{ "Comment", "/// Additional identity-provider specific information.\n/// Most likely a hierarchical key-value mapping, like a parsed JSON file.\n" },
		{ "ModuleRelativePath", "Public/Auth/Auth.h" },
		{ "ToolTip", "Additional identity-provider specific information.\nMost likely a hierarchical key-value mapping, like a parsed JSON file." },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FAdditionalUserInfo_Statics::NewProp_Profile = { "Profile", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAdditionalUserInfo, Profile), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAdditionalUserInfo_Statics::NewProp_Profile_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdditionalUserInfo_Statics::NewProp_Profile_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdditionalUserInfo_Statics::NewProp_UpdatedCredential_MetaData[] = {
		{ "Category", "Firebase|Auth" },
		{ "Comment", "/// On a nonce-based credential link failure where the user has already linked\n/// to the provider, the Firebase auth service may provide an updated\n/// Credential. If is_valid returns true on this credential, then it may be\n/// passed to a new SignInWithCredential request to sign\n/// the user in with the provider.\n" },
		{ "ModuleRelativePath", "Public/Auth/Auth.h" },
		{ "ToolTip", "On a nonce-based credential link failure where the user has already linked\nto the provider, the Firebase auth service may provide an updated\nCredential. If is_valid returns true on this credential, then it may be\npassed to a new SignInWithCredential request to sign\nthe user in with the provider." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAdditionalUserInfo_Statics::NewProp_UpdatedCredential = { "UpdatedCredential", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAdditionalUserInfo, UpdatedCredential), Z_Construct_UScriptStruct_FCredential, METADATA_PARAMS(Z_Construct_UScriptStruct_FAdditionalUserInfo_Statics::NewProp_UpdatedCredential_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdditionalUserInfo_Statics::NewProp_UpdatedCredential_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAdditionalUserInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAdditionalUserInfo_Statics::NewProp_ProviderId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAdditionalUserInfo_Statics::NewProp_UserName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAdditionalUserInfo_Statics::NewProp_Profile_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAdditionalUserInfo_Statics::NewProp_Profile_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAdditionalUserInfo_Statics::NewProp_Profile,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAdditionalUserInfo_Statics::NewProp_UpdatedCredential,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAdditionalUserInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FirebaseFeatures,
		nullptr,
		&NewStructOps,
		"AdditionalUserInfo",
		sizeof(FAdditionalUserInfo),
		alignof(FAdditionalUserInfo),
		Z_Construct_UScriptStruct_FAdditionalUserInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdditionalUserInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAdditionalUserInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdditionalUserInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAdditionalUserInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAdditionalUserInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_FirebaseFeatures();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AdditionalUserInfo"), sizeof(FAdditionalUserInfo), Get_Z_Construct_UScriptStruct_FAdditionalUserInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAdditionalUserInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAdditionalUserInfo_Hash() { return 1435803132U; }
class UScriptStruct* FCredential::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FIREBASEFEATURES_API uint32 Get_Z_Construct_UScriptStruct_FCredential_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCredential, Z_Construct_UPackage__Script_FirebaseFeatures(), TEXT("Credential"), sizeof(FCredential), Get_Z_Construct_UScriptStruct_FCredential_Hash());
	}
	return Singleton;
}
template<> FIREBASEFEATURES_API UScriptStruct* StaticStruct<FCredential>()
{
	return FCredential::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCredential(FCredential::StaticStruct, TEXT("/Script/FirebaseFeatures"), TEXT("Credential"), false, nullptr, nullptr);
static struct FScriptStruct_FirebaseFeatures_StaticRegisterNativesFCredential
{
	FScriptStruct_FirebaseFeatures_StaticRegisterNativesFCredential()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("Credential")),new UScriptStruct::TCppStructOps<FCredential>);
	}
} ScriptStruct_FirebaseFeatures_StaticRegisterNativesFCredential;
	struct Z_Construct_UScriptStruct_FCredential_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCredential_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Auth/Auth.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCredential_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCredential>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCredential_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FirebaseFeatures,
		nullptr,
		&NewStructOps,
		"Credential",
		sizeof(FCredential),
		alignof(FCredential),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCredential_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCredential_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCredential()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCredential_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_FirebaseFeatures();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("Credential"), sizeof(FCredential), Get_Z_Construct_UScriptStruct_FCredential_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCredential_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCredential_Hash() { return 1436245856U; }
class UScriptStruct* FUserMetadata::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FIREBASEFEATURES_API uint32 Get_Z_Construct_UScriptStruct_FUserMetadata_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FUserMetadata, Z_Construct_UPackage__Script_FirebaseFeatures(), TEXT("UserMetadata"), sizeof(FUserMetadata), Get_Z_Construct_UScriptStruct_FUserMetadata_Hash());
	}
	return Singleton;
}
template<> FIREBASEFEATURES_API UScriptStruct* StaticStruct<FUserMetadata>()
{
	return FUserMetadata::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FUserMetadata(FUserMetadata::StaticStruct, TEXT("/Script/FirebaseFeatures"), TEXT("UserMetadata"), false, nullptr, nullptr);
static struct FScriptStruct_FirebaseFeatures_StaticRegisterNativesFUserMetadata
{
	FScriptStruct_FirebaseFeatures_StaticRegisterNativesFUserMetadata()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("UserMetadata")),new UScriptStruct::TCppStructOps<FUserMetadata>);
	}
} ScriptStruct_FirebaseFeatures_StaticRegisterNativesFUserMetadata;
	struct Z_Construct_UScriptStruct_FUserMetadata_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastSignInTimestamp_MetaData[];
#endif
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_LastSignInTimestamp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CreationTtimestamp_MetaData[];
#endif
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_CreationTtimestamp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUserMetadata_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/// Metadata corresponding to a Firebase user.\n" },
		{ "ModuleRelativePath", "Public/Auth/Auth.h" },
		{ "ToolTip", "Metadata corresponding to a Firebase user." },
	};
#endif
	void* Z_Construct_UScriptStruct_FUserMetadata_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUserMetadata>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUserMetadata_Statics::NewProp_LastSignInTimestamp_MetaData[] = {
		{ "Category", "Firebase|Auth" },
		{ "Comment", "/// The last sign in UTC timestamp in milliseconds.\n/// See https://en.wikipedia.org/wiki/Unix_time for details of UTC.\n" },
		{ "ModuleRelativePath", "Public/Auth/Auth.h" },
		{ "ToolTip", "The last sign in UTC timestamp in milliseconds.\nSee https:en.wikipedia.org/wiki/Unix_time for details of UTC." },
	};
#endif
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FUserMetadata_Statics::NewProp_LastSignInTimestamp = { "LastSignInTimestamp", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUserMetadata, LastSignInTimestamp), METADATA_PARAMS(Z_Construct_UScriptStruct_FUserMetadata_Statics::NewProp_LastSignInTimestamp_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUserMetadata_Statics::NewProp_LastSignInTimestamp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUserMetadata_Statics::NewProp_CreationTtimestamp_MetaData[] = {
		{ "Category", "Firebase|Auth" },
		{ "Comment", "/// The Firebase user creation UTC timestamp in milliseconds.\n" },
		{ "ModuleRelativePath", "Public/Auth/Auth.h" },
		{ "ToolTip", "The Firebase user creation UTC timestamp in milliseconds." },
	};
#endif
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FUserMetadata_Statics::NewProp_CreationTtimestamp = { "CreationTtimestamp", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUserMetadata, CreationTtimestamp), METADATA_PARAMS(Z_Construct_UScriptStruct_FUserMetadata_Statics::NewProp_CreationTtimestamp_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUserMetadata_Statics::NewProp_CreationTtimestamp_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FUserMetadata_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUserMetadata_Statics::NewProp_LastSignInTimestamp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUserMetadata_Statics::NewProp_CreationTtimestamp,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUserMetadata_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FirebaseFeatures,
		nullptr,
		&NewStructOps,
		"UserMetadata",
		sizeof(FUserMetadata),
		alignof(FUserMetadata),
		Z_Construct_UScriptStruct_FUserMetadata_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUserMetadata_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FUserMetadata_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUserMetadata_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FUserMetadata()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FUserMetadata_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_FirebaseFeatures();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("UserMetadata"), sizeof(FUserMetadata), Get_Z_Construct_UScriptStruct_FUserMetadata_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FUserMetadata_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FUserMetadata_Hash() { return 1056830431U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
