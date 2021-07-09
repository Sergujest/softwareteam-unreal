// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FirebaseFeatures/Public/Auth/User.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUser() {}
// Cross Module References
	FIREBASEFEATURES_API UScriptStruct* Z_Construct_UScriptStruct_FUserInfoInterface();
	UPackage* Z_Construct_UPackage__Script_FirebaseFeatures();
	FIREBASEFEATURES_API UScriptStruct* Z_Construct_UScriptStruct_FUserProfile();
	FIREBASEFEATURES_API UClass* Z_Construct_UClass_UUser_NoRegister();
	FIREBASEFEATURES_API UClass* Z_Construct_UClass_UUser();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	FIREBASEFEATURES_API UScriptStruct* Z_Construct_UScriptStruct_FUserMetadata();
// End Cross Module References
class UScriptStruct* FUserInfoInterface::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FIREBASEFEATURES_API uint32 Get_Z_Construct_UScriptStruct_FUserInfoInterface_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FUserInfoInterface, Z_Construct_UPackage__Script_FirebaseFeatures(), TEXT("UserInfoInterface"), sizeof(FUserInfoInterface), Get_Z_Construct_UScriptStruct_FUserInfoInterface_Hash());
	}
	return Singleton;
}
template<> FIREBASEFEATURES_API UScriptStruct* StaticStruct<FUserInfoInterface>()
{
	return FUserInfoInterface::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FUserInfoInterface(FUserInfoInterface::StaticStruct, TEXT("/Script/FirebaseFeatures"), TEXT("UserInfoInterface"), false, nullptr, nullptr);
static struct FScriptStruct_FirebaseFeatures_StaticRegisterNativesFUserInfoInterface
{
	FScriptStruct_FirebaseFeatures_StaticRegisterNativesFUserInfoInterface()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("UserInfoInterface")),new UScriptStruct::TCppStructOps<FUserInfoInterface>);
	}
} ScriptStruct_FirebaseFeatures_StaticRegisterNativesFUserInfoInterface;
	struct Z_Construct_UScriptStruct_FUserInfoInterface_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Uid_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Uid;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Email_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Email;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DisplayName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PhotoUrl_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PhotoUrl;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProviderId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ProviderId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PhoneNumber_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PhoneNumber;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUserInfoInterface_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Auth/User.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FUserInfoInterface_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUserInfoInterface>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUserInfoInterface_Statics::NewProp_Uid_MetaData[] = {
		{ "Category", "Firebase|Auth" },
		{ "Comment", "/// Gets the unique Firebase user ID for the user.\n///\n/// @note The user's ID, unique to the Firebase project.\n/// Do NOT use this value to authenticate with your backend server, if you\n/// have one.\n" },
		{ "ModuleRelativePath", "Public/Auth/User.h" },
		{ "ToolTip", "Gets the unique Firebase user ID for the user.\n\n@note The user's ID, unique to the Firebase project.\nDo NOT use this value to authenticate with your backend server, if you\nhave one." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FUserInfoInterface_Statics::NewProp_Uid = { "Uid", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUserInfoInterface, Uid), METADATA_PARAMS(Z_Construct_UScriptStruct_FUserInfoInterface_Statics::NewProp_Uid_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUserInfoInterface_Statics::NewProp_Uid_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUserInfoInterface_Statics::NewProp_Email_MetaData[] = {
		{ "Category", "Firebase|Auth" },
		{ "Comment", "/// Gets email associated with the user, if any.\n" },
		{ "ModuleRelativePath", "Public/Auth/User.h" },
		{ "ToolTip", "Gets email associated with the user, if any." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FUserInfoInterface_Statics::NewProp_Email = { "Email", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUserInfoInterface, Email), METADATA_PARAMS(Z_Construct_UScriptStruct_FUserInfoInterface_Statics::NewProp_Email_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUserInfoInterface_Statics::NewProp_Email_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUserInfoInterface_Statics::NewProp_DisplayName_MetaData[] = {
		{ "Category", "Firebase|Auth" },
		{ "Comment", "/// Gets the display name associated with the user, if any.\n" },
		{ "ModuleRelativePath", "Public/Auth/User.h" },
		{ "ToolTip", "Gets the display name associated with the user, if any." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FUserInfoInterface_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUserInfoInterface, DisplayName), METADATA_PARAMS(Z_Construct_UScriptStruct_FUserInfoInterface_Statics::NewProp_DisplayName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUserInfoInterface_Statics::NewProp_DisplayName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUserInfoInterface_Statics::NewProp_PhotoUrl_MetaData[] = {
		{ "Category", "Firebase|Auth" },
		{ "Comment", "/// Gets the photo url associated with the user, if any.\n" },
		{ "ModuleRelativePath", "Public/Auth/User.h" },
		{ "ToolTip", "Gets the photo url associated with the user, if any." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FUserInfoInterface_Statics::NewProp_PhotoUrl = { "PhotoUrl", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUserInfoInterface, PhotoUrl), METADATA_PARAMS(Z_Construct_UScriptStruct_FUserInfoInterface_Statics::NewProp_PhotoUrl_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUserInfoInterface_Statics::NewProp_PhotoUrl_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUserInfoInterface_Statics::NewProp_ProviderId_MetaData[] = {
		{ "Category", "Firebase|Auth" },
		{ "Comment", "/// Gets the provider ID for the user (For example, \"Facebook\").\n" },
		{ "ModuleRelativePath", "Public/Auth/User.h" },
		{ "ToolTip", "Gets the provider ID for the user (For example, \"Facebook\")." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FUserInfoInterface_Statics::NewProp_ProviderId = { "ProviderId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUserInfoInterface, ProviderId), METADATA_PARAMS(Z_Construct_UScriptStruct_FUserInfoInterface_Statics::NewProp_ProviderId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUserInfoInterface_Statics::NewProp_ProviderId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUserInfoInterface_Statics::NewProp_PhoneNumber_MetaData[] = {
		{ "Category", "Firebase|Auth" },
		{ "Comment", "/// Gets the phone number for the user, in E.164 format.\n" },
		{ "ModuleRelativePath", "Public/Auth/User.h" },
		{ "ToolTip", "Gets the phone number for the user, in E.164 format." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FUserInfoInterface_Statics::NewProp_PhoneNumber = { "PhoneNumber", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUserInfoInterface, PhoneNumber), METADATA_PARAMS(Z_Construct_UScriptStruct_FUserInfoInterface_Statics::NewProp_PhoneNumber_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUserInfoInterface_Statics::NewProp_PhoneNumber_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FUserInfoInterface_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUserInfoInterface_Statics::NewProp_Uid,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUserInfoInterface_Statics::NewProp_Email,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUserInfoInterface_Statics::NewProp_DisplayName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUserInfoInterface_Statics::NewProp_PhotoUrl,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUserInfoInterface_Statics::NewProp_ProviderId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUserInfoInterface_Statics::NewProp_PhoneNumber,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUserInfoInterface_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FirebaseFeatures,
		nullptr,
		&NewStructOps,
		"UserInfoInterface",
		sizeof(FUserInfoInterface),
		alignof(FUserInfoInterface),
		Z_Construct_UScriptStruct_FUserInfoInterface_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUserInfoInterface_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FUserInfoInterface_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUserInfoInterface_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FUserInfoInterface()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FUserInfoInterface_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_FirebaseFeatures();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("UserInfoInterface"), sizeof(FUserInfoInterface), Get_Z_Construct_UScriptStruct_FUserInfoInterface_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FUserInfoInterface_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FUserInfoInterface_Hash() { return 1101013955U; }
class UScriptStruct* FUserProfile::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FIREBASEFEATURES_API uint32 Get_Z_Construct_UScriptStruct_FUserProfile_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FUserProfile, Z_Construct_UPackage__Script_FirebaseFeatures(), TEXT("UserProfile"), sizeof(FUserProfile), Get_Z_Construct_UScriptStruct_FUserProfile_Hash());
	}
	return Singleton;
}
template<> FIREBASEFEATURES_API UScriptStruct* StaticStruct<FUserProfile>()
{
	return FUserProfile::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FUserProfile(FUserProfile::StaticStruct, TEXT("/Script/FirebaseFeatures"), TEXT("UserProfile"), false, nullptr, nullptr);
static struct FScriptStruct_FirebaseFeatures_StaticRegisterNativesFUserProfile
{
	FScriptStruct_FirebaseFeatures_StaticRegisterNativesFUserProfile()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("UserProfile")),new UScriptStruct::TCppStructOps<FUserProfile>);
	}
} ScriptStruct_FirebaseFeatures_StaticRegisterNativesFUserProfile;
	struct Z_Construct_UScriptStruct_FUserProfile_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DisplayName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bResetDisplayName_MetaData[];
#endif
		static void NewProp_bResetDisplayName_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bResetDisplayName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PhotoUrl_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PhotoUrl;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bResetPhotoUrl_MetaData[];
#endif
		static void NewProp_bResetPhotoUrl_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bResetPhotoUrl;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUserProfile_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/// Parameters to the UpdateUserProfile() function.\n///\n/// For fields you don't want to update, pass \"\".\n" },
		{ "ModuleRelativePath", "Public/Auth/User.h" },
		{ "ToolTip", "Parameters to the UpdateUserProfile() function.\n\nFor fields you don't want to update, pass \"\"." },
	};
#endif
	void* Z_Construct_UScriptStruct_FUserProfile_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUserProfile>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUserProfile_Statics::NewProp_DisplayName_MetaData[] = {
		{ "Category", "Firebase|Auth" },
		{ "Comment", "/// User display name.\n" },
		{ "ModuleRelativePath", "Public/Auth/User.h" },
		{ "ToolTip", "User display name." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FUserProfile_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUserProfile, DisplayName), METADATA_PARAMS(Z_Construct_UScriptStruct_FUserProfile_Statics::NewProp_DisplayName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUserProfile_Statics::NewProp_DisplayName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUserProfile_Statics::NewProp_bResetDisplayName_MetaData[] = {
		{ "Category", "Firebase|Auth" },
		{ "Comment", "/// If we want to reset the display name.\n/// If it is set to true, the content of DisplayName is ignored.\n" },
		{ "ModuleRelativePath", "Public/Auth/User.h" },
		{ "ToolTip", "If we want to reset the display name.\nIf it is set to true, the content of DisplayName is ignored." },
	};
#endif
	void Z_Construct_UScriptStruct_FUserProfile_Statics::NewProp_bResetDisplayName_SetBit(void* Obj)
	{
		((FUserProfile*)Obj)->bResetDisplayName = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FUserProfile_Statics::NewProp_bResetDisplayName = { "bResetDisplayName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FUserProfile), &Z_Construct_UScriptStruct_FUserProfile_Statics::NewProp_bResetDisplayName_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FUserProfile_Statics::NewProp_bResetDisplayName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUserProfile_Statics::NewProp_bResetDisplayName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUserProfile_Statics::NewProp_PhotoUrl_MetaData[] = {
		{ "Category", "Firebase|Auth" },
		{ "Comment", "/// User photo URI.\n" },
		{ "ModuleRelativePath", "Public/Auth/User.h" },
		{ "ToolTip", "User photo URI." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FUserProfile_Statics::NewProp_PhotoUrl = { "PhotoUrl", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUserProfile, PhotoUrl), METADATA_PARAMS(Z_Construct_UScriptStruct_FUserProfile_Statics::NewProp_PhotoUrl_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUserProfile_Statics::NewProp_PhotoUrl_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUserProfile_Statics::NewProp_bResetPhotoUrl_MetaData[] = {
		{ "Category", "Firebase|Auth" },
		{ "Comment", "/// If we want to reset the photo URL.\n/// If it is set to true, the content of PthotoUrl is ignored.\n" },
		{ "ModuleRelativePath", "Public/Auth/User.h" },
		{ "ToolTip", "If we want to reset the photo URL.\nIf it is set to true, the content of PthotoUrl is ignored." },
	};
#endif
	void Z_Construct_UScriptStruct_FUserProfile_Statics::NewProp_bResetPhotoUrl_SetBit(void* Obj)
	{
		((FUserProfile*)Obj)->bResetPhotoUrl = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FUserProfile_Statics::NewProp_bResetPhotoUrl = { "bResetPhotoUrl", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FUserProfile), &Z_Construct_UScriptStruct_FUserProfile_Statics::NewProp_bResetPhotoUrl_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FUserProfile_Statics::NewProp_bResetPhotoUrl_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUserProfile_Statics::NewProp_bResetPhotoUrl_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FUserProfile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUserProfile_Statics::NewProp_DisplayName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUserProfile_Statics::NewProp_bResetDisplayName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUserProfile_Statics::NewProp_PhotoUrl,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUserProfile_Statics::NewProp_bResetPhotoUrl,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUserProfile_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FirebaseFeatures,
		nullptr,
		&NewStructOps,
		"UserProfile",
		sizeof(FUserProfile),
		alignof(FUserProfile),
		Z_Construct_UScriptStruct_FUserProfile_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUserProfile_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FUserProfile_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUserProfile_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FUserProfile()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FUserProfile_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_FirebaseFeatures();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("UserProfile"), sizeof(FUserProfile), Get_Z_Construct_UScriptStruct_FUserProfile_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FUserProfile_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FUserProfile_Hash() { return 3952645220U; }
	DEFINE_FUNCTION(UUser::execPhoneNumber)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->PhoneNumber();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUser::execProviderId)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->ProviderId();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUser::execPhotoUrl)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->PhotoUrl();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUser::execDisplayName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->DisplayName();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUser::execEmail)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->Email();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUser::execUid)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->Uid();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUser::execIsAnonymous)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsAnonymous();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUser::execIsEmailVerified)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsEmailVerified();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUser::execMetadata)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FUserMetadata*)Z_Param__Result=P_THIS->Metadata();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUser::execProviderData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FUserInfoInterface>*)Z_Param__Result=P_THIS->ProviderData();
		P_NATIVE_END;
	}
	void UUser::StaticRegisterNativesUUser()
	{
		UClass* Class = UUser::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DisplayName", &UUser::execDisplayName },
			{ "Email", &UUser::execEmail },
			{ "IsAnonymous", &UUser::execIsAnonymous },
			{ "IsEmailVerified", &UUser::execIsEmailVerified },
			{ "Metadata", &UUser::execMetadata },
			{ "PhoneNumber", &UUser::execPhoneNumber },
			{ "PhotoUrl", &UUser::execPhotoUrl },
			{ "ProviderData", &UUser::execProviderData },
			{ "ProviderId", &UUser::execProviderId },
			{ "Uid", &UUser::execUid },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUser_DisplayName_Statics
	{
		struct User_eventDisplayName_Parms
		{
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUser_DisplayName_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "DisplayName" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUser_DisplayName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(User_eventDisplayName_Parms, ReturnValue), METADATA_PARAMS(Z_Construct_UFunction_UUser_DisplayName_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUser_DisplayName_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUser_DisplayName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUser_DisplayName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUser_DisplayName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Firebase|Auth|User" },
		{ "Comment", "/// Gets the display name associated with the user, if any.\n" },
		{ "ModuleRelativePath", "Public/Auth/User.h" },
		{ "ToolTip", "Gets the display name associated with the user, if any." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUser_DisplayName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUser, nullptr, "DisplayName", nullptr, nullptr, sizeof(User_eventDisplayName_Parms), Z_Construct_UFunction_UUser_DisplayName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUser_DisplayName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUser_DisplayName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUser_DisplayName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUser_DisplayName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUser_DisplayName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUser_Email_Statics
	{
		struct User_eventEmail_Parms
		{
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUser_Email_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Email" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUser_Email_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(User_eventEmail_Parms, ReturnValue), METADATA_PARAMS(Z_Construct_UFunction_UUser_Email_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUser_Email_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUser_Email_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUser_Email_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUser_Email_Statics::Function_MetaDataParams[] = {
		{ "Category", "Firebase|Auth|User" },
		{ "Comment", "/// Gets email associated with the user, if any.\n" },
		{ "ModuleRelativePath", "Public/Auth/User.h" },
		{ "ToolTip", "Gets email associated with the user, if any." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUser_Email_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUser, nullptr, "Email", nullptr, nullptr, sizeof(User_eventEmail_Parms), Z_Construct_UFunction_UUser_Email_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUser_Email_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUser_Email_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUser_Email_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUser_Email()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUser_Email_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUser_IsAnonymous_Statics
	{
		struct User_eventIsAnonymous_Parms
		{
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUser_IsAnonymous_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Anonymous" },
	};
#endif
	void Z_Construct_UFunction_UUser_IsAnonymous_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((User_eventIsAnonymous_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUser_IsAnonymous_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(User_eventIsAnonymous_Parms), &Z_Construct_UFunction_UUser_IsAnonymous_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UUser_IsAnonymous_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUser_IsAnonymous_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUser_IsAnonymous_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUser_IsAnonymous_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUser_IsAnonymous_Statics::Function_MetaDataParams[] = {
		{ "Category", "Firebase|Auth|User" },
		{ "Comment", "/// Returns true if user signed in anonymously.\n" },
		{ "ModuleRelativePath", "Public/Auth/User.h" },
		{ "ToolTip", "Returns true if user signed in anonymously." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUser_IsAnonymous_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUser, nullptr, "IsAnonymous", nullptr, nullptr, sizeof(User_eventIsAnonymous_Parms), Z_Construct_UFunction_UUser_IsAnonymous_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUser_IsAnonymous_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUser_IsAnonymous_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUser_IsAnonymous_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUser_IsAnonymous()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUser_IsAnonymous_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUser_IsEmailVerified_Statics
	{
		struct User_eventIsEmailVerified_Parms
		{
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUser_IsEmailVerified_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Verified" },
	};
#endif
	void Z_Construct_UFunction_UUser_IsEmailVerified_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((User_eventIsEmailVerified_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUser_IsEmailVerified_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(User_eventIsEmailVerified_Parms), &Z_Construct_UFunction_UUser_IsEmailVerified_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UUser_IsEmailVerified_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUser_IsEmailVerified_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUser_IsEmailVerified_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUser_IsEmailVerified_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUser_IsEmailVerified_Statics::Function_MetaDataParams[] = {
		{ "Category", "Firebase|Auth|User" },
		{ "Comment", "/// Returns true if the email address associated with this user has been\n/// verified.\n" },
		{ "ModuleRelativePath", "Public/Auth/User.h" },
		{ "ToolTip", "Returns true if the email address associated with this user has been\nverified." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUser_IsEmailVerified_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUser, nullptr, "IsEmailVerified", nullptr, nullptr, sizeof(User_eventIsEmailVerified_Parms), Z_Construct_UFunction_UUser_IsEmailVerified_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUser_IsEmailVerified_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUser_IsEmailVerified_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUser_IsEmailVerified_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUser_IsEmailVerified()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUser_IsEmailVerified_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUser_Metadata_Statics
	{
		struct User_eventMetadata_Parms
		{
			FUserMetadata ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUser_Metadata_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Metadata" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUser_Metadata_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(User_eventMetadata_Parms, ReturnValue), Z_Construct_UScriptStruct_FUserMetadata, METADATA_PARAMS(Z_Construct_UFunction_UUser_Metadata_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUser_Metadata_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUser_Metadata_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUser_Metadata_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUser_Metadata_Statics::Function_MetaDataParams[] = {
		{ "Category", "Firebase|Auth|User" },
		{ "Comment", "/// Gets the metadata for this user account.\n" },
		{ "ModuleRelativePath", "Public/Auth/User.h" },
		{ "ToolTip", "Gets the metadata for this user account." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUser_Metadata_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUser, nullptr, "Metadata", nullptr, nullptr, sizeof(User_eventMetadata_Parms), Z_Construct_UFunction_UUser_Metadata_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUser_Metadata_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUser_Metadata_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUser_Metadata_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUser_Metadata()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUser_Metadata_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUser_PhoneNumber_Statics
	{
		struct User_eventPhoneNumber_Parms
		{
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUser_PhoneNumber_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Phone Number" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUser_PhoneNumber_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(User_eventPhoneNumber_Parms, ReturnValue), METADATA_PARAMS(Z_Construct_UFunction_UUser_PhoneNumber_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUser_PhoneNumber_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUser_PhoneNumber_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUser_PhoneNumber_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUser_PhoneNumber_Statics::Function_MetaDataParams[] = {
		{ "Category", "Firebase|Auth|User" },
		{ "Comment", "/// Gets the phone number for the user, in E.164 format.\n" },
		{ "ModuleRelativePath", "Public/Auth/User.h" },
		{ "ToolTip", "Gets the phone number for the user, in E.164 format." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUser_PhoneNumber_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUser, nullptr, "PhoneNumber", nullptr, nullptr, sizeof(User_eventPhoneNumber_Parms), Z_Construct_UFunction_UUser_PhoneNumber_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUser_PhoneNumber_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUser_PhoneNumber_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUser_PhoneNumber_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUser_PhoneNumber()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUser_PhoneNumber_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUser_PhotoUrl_Statics
	{
		struct User_eventPhotoUrl_Parms
		{
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUser_PhotoUrl_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Photo URL" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUser_PhotoUrl_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(User_eventPhotoUrl_Parms, ReturnValue), METADATA_PARAMS(Z_Construct_UFunction_UUser_PhotoUrl_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUser_PhotoUrl_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUser_PhotoUrl_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUser_PhotoUrl_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUser_PhotoUrl_Statics::Function_MetaDataParams[] = {
		{ "Category", "Firebase|Auth|User" },
		{ "Comment", "/// Gets the photo url associated with the user, if any.\n" },
		{ "ModuleRelativePath", "Public/Auth/User.h" },
		{ "ToolTip", "Gets the photo url associated with the user, if any." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUser_PhotoUrl_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUser, nullptr, "PhotoUrl", nullptr, nullptr, sizeof(User_eventPhotoUrl_Parms), Z_Construct_UFunction_UUser_PhotoUrl_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUser_PhotoUrl_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUser_PhotoUrl_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUser_PhotoUrl_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUser_PhotoUrl()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUser_PhotoUrl_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUser_ProviderData_Statics
	{
		struct User_eventProviderData_Parms
		{
			TArray<FUserInfoInterface> ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUser_ProviderData_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FUserInfoInterface, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUser_ProviderData_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Provider Data" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UUser_ProviderData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(User_eventProviderData_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UUser_ProviderData_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUser_ProviderData_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUser_ProviderData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUser_ProviderData_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUser_ProviderData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUser_ProviderData_Statics::Function_MetaDataParams[] = {
		{ "Category", "Firebase|Auth|User" },
		{ "Comment", "/// Gets the third party profile data associated with this user returned by\n/// the authentication server, if any.\n" },
		{ "ModuleRelativePath", "Public/Auth/User.h" },
		{ "ToolTip", "Gets the third party profile data associated with this user returned by\nthe authentication server, if any." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUser_ProviderData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUser, nullptr, "ProviderData", nullptr, nullptr, sizeof(User_eventProviderData_Parms), Z_Construct_UFunction_UUser_ProviderData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUser_ProviderData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUser_ProviderData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUser_ProviderData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUser_ProviderData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUser_ProviderData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUser_ProviderId_Statics
	{
		struct User_eventProviderId_Parms
		{
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUser_ProviderId_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "ID" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUser_ProviderId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(User_eventProviderId_Parms, ReturnValue), METADATA_PARAMS(Z_Construct_UFunction_UUser_ProviderId_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUser_ProviderId_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUser_ProviderId_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUser_ProviderId_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUser_ProviderId_Statics::Function_MetaDataParams[] = {
		{ "Category", "Firebase|Auth|User" },
		{ "Comment", "/// Gets the provider ID for the user (For example, \"Facebook\").\n" },
		{ "ModuleRelativePath", "Public/Auth/User.h" },
		{ "ToolTip", "Gets the provider ID for the user (For example, \"Facebook\")." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUser_ProviderId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUser, nullptr, "ProviderId", nullptr, nullptr, sizeof(User_eventProviderId_Parms), Z_Construct_UFunction_UUser_ProviderId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUser_ProviderId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUser_ProviderId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUser_ProviderId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUser_ProviderId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUser_ProviderId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUser_Uid_Statics
	{
		struct User_eventUid_Parms
		{
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUser_Uid_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "UID" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUser_Uid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(User_eventUid_Parms, ReturnValue), METADATA_PARAMS(Z_Construct_UFunction_UUser_Uid_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUser_Uid_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUser_Uid_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUser_Uid_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUser_Uid_Statics::Function_MetaDataParams[] = {
		{ "Category", "Firebase|Auth|User" },
		{ "Comment", "/// Gets the unique Firebase user ID for the user.\n///\n/// @note The user's ID, unique to the Firebase project.\n/// Do NOT use this value to authenticate with your backend server, if you\n/// have one.\n" },
		{ "ModuleRelativePath", "Public/Auth/User.h" },
		{ "ToolTip", "Gets the unique Firebase user ID for the user.\n\n@note The user's ID, unique to the Firebase project.\nDo NOT use this value to authenticate with your backend server, if you\nhave one." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUser_Uid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUser, nullptr, "Uid", nullptr, nullptr, sizeof(User_eventUid_Parms), Z_Construct_UFunction_UUser_Uid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUser_Uid_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUser_Uid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUser_Uid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUser_Uid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUser_Uid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UUser_NoRegister()
	{
		return UUser::StaticClass();
	}
	struct Z_Construct_UClass_UUser_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUser_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_FirebaseFeatures,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUser_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUser_DisplayName, "DisplayName" }, // 590142733
		{ &Z_Construct_UFunction_UUser_Email, "Email" }, // 2315431020
		{ &Z_Construct_UFunction_UUser_IsAnonymous, "IsAnonymous" }, // 729513301
		{ &Z_Construct_UFunction_UUser_IsEmailVerified, "IsEmailVerified" }, // 1230520322
		{ &Z_Construct_UFunction_UUser_Metadata, "Metadata" }, // 1649022053
		{ &Z_Construct_UFunction_UUser_PhoneNumber, "PhoneNumber" }, // 1001896269
		{ &Z_Construct_UFunction_UUser_PhotoUrl, "PhotoUrl" }, // 4229493197
		{ &Z_Construct_UFunction_UUser_ProviderData, "ProviderData" }, // 1408066757
		{ &Z_Construct_UFunction_UUser_ProviderId, "ProviderId" }, // 239583623
		{ &Z_Construct_UFunction_UUser_Uid, "Uid" }, // 1636113217
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUser_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Auth/User.h" },
		{ "ModuleRelativePath", "Public/Auth/User.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUser_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUser>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUser_Statics::ClassParams = {
		&UUser::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UUser_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUser_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUser()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUser_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUser, 2587369981);
	template<> FIREBASEFEATURES_API UClass* StaticClass<UUser>()
	{
		return UUser::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUser(Z_Construct_UClass_UUser, &UUser::StaticClass, TEXT("/Script/FirebaseFeatures"), TEXT("UUser"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUser);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
