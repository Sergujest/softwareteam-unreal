// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FirebaseFeatures/Public/Auth/Credential.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCredential() {}
// Cross Module References
	FIREBASEFEATURES_API UScriptStruct* Z_Construct_UScriptStruct_FForceResendingToken();
	UPackage* Z_Construct_UPackage__Script_FirebaseFeatures();
	FIREBASEFEATURES_API UClass* Z_Construct_UClass_UCredentialLibrary_NoRegister();
	FIREBASEFEATURES_API UClass* Z_Construct_UClass_UCredentialLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	FIREBASEFEATURES_API UScriptStruct* Z_Construct_UScriptStruct_FCredential();
// End Cross Module References
class UScriptStruct* FForceResendingToken::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FIREBASEFEATURES_API uint32 Get_Z_Construct_UScriptStruct_FForceResendingToken_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FForceResendingToken, Z_Construct_UPackage__Script_FirebaseFeatures(), TEXT("ForceResendingToken"), sizeof(FForceResendingToken), Get_Z_Construct_UScriptStruct_FForceResendingToken_Hash());
	}
	return Singleton;
}
template<> FIREBASEFEATURES_API UScriptStruct* StaticStruct<FForceResendingToken>()
{
	return FForceResendingToken::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FForceResendingToken(FForceResendingToken::StaticStruct, TEXT("/Script/FirebaseFeatures"), TEXT("ForceResendingToken"), false, nullptr, nullptr);
static struct FScriptStruct_FirebaseFeatures_StaticRegisterNativesFForceResendingToken
{
	FScriptStruct_FirebaseFeatures_StaticRegisterNativesFForceResendingToken()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ForceResendingToken")),new UScriptStruct::TCppStructOps<FForceResendingToken>);
	}
} ScriptStruct_FirebaseFeatures_StaticRegisterNativesFForceResendingToken;
	struct Z_Construct_UScriptStruct_FForceResendingToken_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FForceResendingToken_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Auth/Credential.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FForceResendingToken_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FForceResendingToken>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FForceResendingToken_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FirebaseFeatures,
		nullptr,
		&NewStructOps,
		"ForceResendingToken",
		sizeof(FForceResendingToken),
		alignof(FForceResendingToken),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FForceResendingToken_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FForceResendingToken_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FForceResendingToken()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FForceResendingToken_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_FirebaseFeatures();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ForceResendingToken"), sizeof(FForceResendingToken), Get_Z_Construct_UScriptStruct_FForceResendingToken_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FForceResendingToken_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FForceResendingToken_Hash() { return 2298655299U; }
	DEFINE_FUNCTION(UCredentialLibrary::execGetCredential)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_VerificationId);
		P_GET_PROPERTY(FStrProperty,Z_Param_VerificationCode);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FCredential*)Z_Param__Result=UCredentialLibrary::GetCredential(Z_Param_VerificationId,Z_Param_VerificationCode);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCredentialLibrary::execGetCredentialFromTwitter)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Token);
		P_GET_PROPERTY(FStrProperty,Z_Param_Secret);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FCredential*)Z_Param__Result=UCredentialLibrary::GetCredentialFromTwitter(Z_Param_Token,Z_Param_Secret);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCredentialLibrary::execGetCredentialFromPlayGames)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_ServerAuthCode);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FCredential*)Z_Param__Result=UCredentialLibrary::GetCredentialFromPlayGames(Z_Param_ServerAuthCode);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCredentialLibrary::execGetCredentialFromOAuthWithOnce)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_ProviderId);
		P_GET_PROPERTY(FStrProperty,Z_Param_IdToken);
		P_GET_PROPERTY(FStrProperty,Z_Param_Nonce);
		P_GET_PROPERTY(FStrProperty,Z_Param_AccessToken);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FCredential*)Z_Param__Result=UCredentialLibrary::GetCredentialFromOAuthWithOnce(Z_Param_ProviderId,Z_Param_IdToken,Z_Param_Nonce,Z_Param_AccessToken);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCredentialLibrary::execGetCredentialFromOAuth)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_ProviderId);
		P_GET_PROPERTY(FStrProperty,Z_Param_IdToken);
		P_GET_PROPERTY(FStrProperty,Z_Param_AccessToken);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FCredential*)Z_Param__Result=UCredentialLibrary::GetCredentialFromOAuth(Z_Param_ProviderId,Z_Param_IdToken,Z_Param_AccessToken);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCredentialLibrary::execGetCredentialFromGoogle)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Token);
		P_GET_PROPERTY(FStrProperty,Z_Param_AccessToken);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FCredential*)Z_Param__Result=UCredentialLibrary::GetCredentialFromGoogle(Z_Param_Token,Z_Param_AccessToken);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCredentialLibrary::execGetCredentialFromGitHub)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Token);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FCredential*)Z_Param__Result=UCredentialLibrary::GetCredentialFromGitHub(Z_Param_Token);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCredentialLibrary::execIsAuthenticatedWithGameCenter)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UCredentialLibrary::IsAuthenticatedWithGameCenter();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCredentialLibrary::execGetCredentialFromFacebook)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_AccessToken);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FCredential*)Z_Param__Result=UCredentialLibrary::GetCredentialFromFacebook(Z_Param_AccessToken);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCredentialLibrary::execGetCredentialFromEmail)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Email);
		P_GET_PROPERTY(FStrProperty,Z_Param_Password);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FCredential*)Z_Param__Result=UCredentialLibrary::GetCredentialFromEmail(Z_Param_Email,Z_Param_Password);
		P_NATIVE_END;
	}
	void UCredentialLibrary::StaticRegisterNativesUCredentialLibrary()
	{
		UClass* Class = UCredentialLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCredential", &UCredentialLibrary::execGetCredential },
			{ "GetCredentialFromEmail", &UCredentialLibrary::execGetCredentialFromEmail },
			{ "GetCredentialFromFacebook", &UCredentialLibrary::execGetCredentialFromFacebook },
			{ "GetCredentialFromGitHub", &UCredentialLibrary::execGetCredentialFromGitHub },
			{ "GetCredentialFromGoogle", &UCredentialLibrary::execGetCredentialFromGoogle },
			{ "GetCredentialFromOAuth", &UCredentialLibrary::execGetCredentialFromOAuth },
			{ "GetCredentialFromOAuthWithOnce", &UCredentialLibrary::execGetCredentialFromOAuthWithOnce },
			{ "GetCredentialFromPlayGames", &UCredentialLibrary::execGetCredentialFromPlayGames },
			{ "GetCredentialFromTwitter", &UCredentialLibrary::execGetCredentialFromTwitter },
			{ "IsAuthenticatedWithGameCenter", &UCredentialLibrary::execIsAuthenticatedWithGameCenter },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCredentialLibrary_GetCredential_Statics
	{
		struct CredentialLibrary_eventGetCredential_Parms
		{
			FString VerificationId;
			FString VerificationCode;
			FCredential ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VerificationId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_VerificationId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VerificationCode_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_VerificationCode;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCredentialLibrary_GetCredential_Statics::NewProp_VerificationId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCredentialLibrary_GetCredential_Statics::NewProp_VerificationId = { "VerificationId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CredentialLibrary_eventGetCredential_Parms, VerificationId), METADATA_PARAMS(Z_Construct_UFunction_UCredentialLibrary_GetCredential_Statics::NewProp_VerificationId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCredentialLibrary_GetCredential_Statics::NewProp_VerificationId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCredentialLibrary_GetCredential_Statics::NewProp_VerificationCode_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCredentialLibrary_GetCredential_Statics::NewProp_VerificationCode = { "VerificationCode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CredentialLibrary_eventGetCredential_Parms, VerificationCode), METADATA_PARAMS(Z_Construct_UFunction_UCredentialLibrary_GetCredential_Statics::NewProp_VerificationCode_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCredentialLibrary_GetCredential_Statics::NewProp_VerificationCode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCredentialLibrary_GetCredential_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Credential" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCredentialLibrary_GetCredential_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CredentialLibrary_eventGetCredential_Parms, ReturnValue), Z_Construct_UScriptStruct_FCredential, METADATA_PARAMS(Z_Construct_UFunction_UCredentialLibrary_GetCredential_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCredentialLibrary_GetCredential_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCredentialLibrary_GetCredential_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCredentialLibrary_GetCredential_Statics::NewProp_VerificationId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCredentialLibrary_GetCredential_Statics::NewProp_VerificationCode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCredentialLibrary_GetCredential_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCredentialLibrary_GetCredential_Statics::Function_MetaDataParams[] = {
		{ "Category", "Firebase|Auth|Credential|Phone" },
		{ "Comment", "/// Generate a credential for the given phone number.\n///\n/// @param[in] VerificationId The id returned when sending the verification\n///    code. Sent to the caller via VerifyPhoneNumber::OnCodeSent.\n/// @param[in] VerificationCode The verification code supplied by the user,\n///    most likely by a GUI where the user manually enters the code\n///    received in the SMS sent by @ref VerifyPhoneNumber.\n/// @returns New Credential.\n" },
		{ "ModuleRelativePath", "Public/Auth/Credential.h" },
		{ "ToolTip", "Generate a credential for the given phone number.\n\n@param[in] VerificationId The id returned when sending the verification\n   code. Sent to the caller via VerifyPhoneNumber::OnCodeSent.\n@param[in] VerificationCode The verification code supplied by the user,\n   most likely by a GUI where the user manually enters the code\n   received in the SMS sent by @ref VerifyPhoneNumber.\n@returns New Credential." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCredentialLibrary_GetCredential_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCredentialLibrary, nullptr, "GetCredential", nullptr, nullptr, sizeof(CredentialLibrary_eventGetCredential_Parms), Z_Construct_UFunction_UCredentialLibrary_GetCredential_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCredentialLibrary_GetCredential_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCredentialLibrary_GetCredential_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCredentialLibrary_GetCredential_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCredentialLibrary_GetCredential()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCredentialLibrary_GetCredential_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCredentialLibrary_GetCredentialFromEmail_Statics
	{
		struct CredentialLibrary_eventGetCredentialFromEmail_Parms
		{
			FString Email;
			FString Password;
			FCredential ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Email_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Email;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Password_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Password;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCredentialLibrary_GetCredentialFromEmail_Statics::NewProp_Email_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCredentialLibrary_GetCredentialFromEmail_Statics::NewProp_Email = { "Email", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CredentialLibrary_eventGetCredentialFromEmail_Parms, Email), METADATA_PARAMS(Z_Construct_UFunction_UCredentialLibrary_GetCredentialFromEmail_Statics::NewProp_Email_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCredentialLibrary_GetCredentialFromEmail_Statics::NewProp_Email_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCredentialLibrary_GetCredentialFromEmail_Statics::NewProp_Password_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCredentialLibrary_GetCredentialFromEmail_Statics::NewProp_Password = { "Password", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CredentialLibrary_eventGetCredentialFromEmail_Parms, Password), METADATA_PARAMS(Z_Construct_UFunction_UCredentialLibrary_GetCredentialFromEmail_Statics::NewProp_Password_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCredentialLibrary_GetCredentialFromEmail_Statics::NewProp_Password_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCredentialLibrary_GetCredentialFromEmail_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Credential" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCredentialLibrary_GetCredentialFromEmail_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CredentialLibrary_eventGetCredentialFromEmail_Parms, ReturnValue), Z_Construct_UScriptStruct_FCredential, METADATA_PARAMS(Z_Construct_UFunction_UCredentialLibrary_GetCredentialFromEmail_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCredentialLibrary_GetCredentialFromEmail_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCredentialLibrary_GetCredentialFromEmail_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCredentialLibrary_GetCredentialFromEmail_Statics::NewProp_Email,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCredentialLibrary_GetCredentialFromEmail_Statics::NewProp_Password,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCredentialLibrary_GetCredentialFromEmail_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCredentialLibrary_GetCredentialFromEmail_Statics::Function_MetaDataParams[] = {
		{ "Category", "Firebase|Auth|Credential|Email" },
		{ "Comment", "/// Generate a credential from the given email and password.\n/// @param email E-mail to generate the credential from.\n/// @param password Password to use for the new credential.\n/// @returns New Credential.\n" },
		{ "ModuleRelativePath", "Public/Auth/Credential.h" },
		{ "ToolTip", "Generate a credential from the given email and password.\n@param email E-mail to generate the credential from.\n@param password Password to use for the new credential.\n@returns New Credential." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCredentialLibrary_GetCredentialFromEmail_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCredentialLibrary, nullptr, "GetCredentialFromEmail", nullptr, nullptr, sizeof(CredentialLibrary_eventGetCredentialFromEmail_Parms), Z_Construct_UFunction_UCredentialLibrary_GetCredentialFromEmail_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCredentialLibrary_GetCredentialFromEmail_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCredentialLibrary_GetCredentialFromEmail_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCredentialLibrary_GetCredentialFromEmail_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCredentialLibrary_GetCredentialFromEmail()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCredentialLibrary_GetCredentialFromEmail_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCredentialLibrary_GetCredentialFromFacebook_Statics
	{
		struct CredentialLibrary_eventGetCredentialFromFacebook_Parms
		{
			FString AccessToken;
			FCredential ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AccessToken_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AccessToken;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCredentialLibrary_GetCredentialFromFacebook_Statics::NewProp_AccessToken_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCredentialLibrary_GetCredentialFromFacebook_Statics::NewProp_AccessToken = { "AccessToken", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CredentialLibrary_eventGetCredentialFromFacebook_Parms, AccessToken), METADATA_PARAMS(Z_Construct_UFunction_UCredentialLibrary_GetCredentialFromFacebook_Statics::NewProp_AccessToken_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCredentialLibrary_GetCredentialFromFacebook_Statics::NewProp_AccessToken_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCredentialLibrary_GetCredentialFromFacebook_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Credential" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCredentialLibrary_GetCredentialFromFacebook_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CredentialLibrary_eventGetCredentialFromFacebook_Parms, ReturnValue), Z_Construct_UScriptStruct_FCredential, METADATA_PARAMS(Z_Construct_UFunction_UCredentialLibrary_GetCredentialFromFacebook_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCredentialLibrary_GetCredentialFromFacebook_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCredentialLibrary_GetCredentialFromFacebook_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCredentialLibrary_GetCredentialFromFacebook_Statics::NewProp_AccessToken,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCredentialLibrary_GetCredentialFromFacebook_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCredentialLibrary_GetCredentialFromFacebook_Statics::Function_MetaDataParams[] = {
		{ "Category", "Firebase|Auth|Credential|Facebook" },
		{ "Comment", "/// Generate a credential from the given Facebook token.\n/// @param access_token Facebook token to generate the credential from.\n/// @returns New Credential.\n" },
		{ "Keywords", "Facebook Provider Auth Login" },
		{ "ModuleRelativePath", "Public/Auth/Credential.h" },
		{ "ToolTip", "Generate a credential from the given Facebook token.\n@param access_token Facebook token to generate the credential from.\n@returns New Credential." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCredentialLibrary_GetCredentialFromFacebook_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCredentialLibrary, nullptr, "GetCredentialFromFacebook", nullptr, nullptr, sizeof(CredentialLibrary_eventGetCredentialFromFacebook_Parms), Z_Construct_UFunction_UCredentialLibrary_GetCredentialFromFacebook_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCredentialLibrary_GetCredentialFromFacebook_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCredentialLibrary_GetCredentialFromFacebook_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCredentialLibrary_GetCredentialFromFacebook_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCredentialLibrary_GetCredentialFromFacebook()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCredentialLibrary_GetCredentialFromFacebook_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCredentialLibrary_GetCredentialFromGitHub_Statics
	{
		struct CredentialLibrary_eventGetCredentialFromGitHub_Parms
		{
			FString Token;
			FCredential ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Token_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Token;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCredentialLibrary_GetCredentialFromGitHub_Statics::NewProp_Token_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCredentialLibrary_GetCredentialFromGitHub_Statics::NewProp_Token = { "Token", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CredentialLibrary_eventGetCredentialFromGitHub_Parms, Token), METADATA_PARAMS(Z_Construct_UFunction_UCredentialLibrary_GetCredentialFromGitHub_Statics::NewProp_Token_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCredentialLibrary_GetCredentialFromGitHub_Statics::NewProp_Token_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCredentialLibrary_GetCredentialFromGitHub_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Credential" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCredentialLibrary_GetCredentialFromGitHub_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CredentialLibrary_eventGetCredentialFromGitHub_Parms, ReturnValue), Z_Construct_UScriptStruct_FCredential, METADATA_PARAMS(Z_Construct_UFunction_UCredentialLibrary_GetCredentialFromGitHub_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCredentialLibrary_GetCredentialFromGitHub_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCredentialLibrary_GetCredentialFromGitHub_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCredentialLibrary_GetCredentialFromGitHub_Statics::NewProp_Token,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCredentialLibrary_GetCredentialFromGitHub_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCredentialLibrary_GetCredentialFromGitHub_Statics::Function_MetaDataParams[] = {
		{ "Category", "Firebase|Auth|Credential|GitHub" },
		{ "Comment", "/// Generate a credential from the given GitHub token.\n/// @param Token The GitHub OAuth access token.\n/// @returns New Credential.\n" },
		{ "Keywords", "Github Provider Auth" },
		{ "ModuleRelativePath", "Public/Auth/Credential.h" },
		{ "ToolTip", "Generate a credential from the given GitHub token.\n@param Token The GitHub OAuth access token.\n@returns New Credential." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCredentialLibrary_GetCredentialFromGitHub_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCredentialLibrary, nullptr, "GetCredentialFromGitHub", nullptr, nullptr, sizeof(CredentialLibrary_eventGetCredentialFromGitHub_Parms), Z_Construct_UFunction_UCredentialLibrary_GetCredentialFromGitHub_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCredentialLibrary_GetCredentialFromGitHub_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCredentialLibrary_GetCredentialFromGitHub_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCredentialLibrary_GetCredentialFromGitHub_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCredentialLibrary_GetCredentialFromGitHub()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCredentialLibrary_GetCredentialFromGitHub_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCredentialLibrary_GetCredentialFromGoogle_Statics
	{
		struct CredentialLibrary_eventGetCredentialFromGoogle_Parms
		{
			FString Token;
			FString AccessToken;
			FCredential ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Token_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Token;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AccessToken_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AccessToken;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCredentialLibrary_GetCredentialFromGoogle_Statics::NewProp_Token_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCredentialLibrary_GetCredentialFromGoogle_Statics::NewProp_Token = { "Token", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CredentialLibrary_eventGetCredentialFromGoogle_Parms, Token), METADATA_PARAMS(Z_Construct_UFunction_UCredentialLibrary_GetCredentialFromGoogle_Statics::NewProp_Token_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCredentialLibrary_GetCredentialFromGoogle_Statics::NewProp_Token_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCredentialLibrary_GetCredentialFromGoogle_Statics::NewProp_AccessToken_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCredentialLibrary_GetCredentialFromGoogle_Statics::NewProp_AccessToken = { "AccessToken", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CredentialLibrary_eventGetCredentialFromGoogle_Parms, AccessToken), METADATA_PARAMS(Z_Construct_UFunction_UCredentialLibrary_GetCredentialFromGoogle_Statics::NewProp_AccessToken_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCredentialLibrary_GetCredentialFromGoogle_Statics::NewProp_AccessToken_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCredentialLibrary_GetCredentialFromGoogle_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Credential" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCredentialLibrary_GetCredentialFromGoogle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CredentialLibrary_eventGetCredentialFromGoogle_Parms, ReturnValue), Z_Construct_UScriptStruct_FCredential, METADATA_PARAMS(Z_Construct_UFunction_UCredentialLibrary_GetCredentialFromGoogle_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCredentialLibrary_GetCredentialFromGoogle_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCredentialLibrary_GetCredentialFromGoogle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCredentialLibrary_GetCredentialFromGoogle_Statics::NewProp_Token,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCredentialLibrary_GetCredentialFromGoogle_Statics::NewProp_AccessToken,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCredentialLibrary_GetCredentialFromGoogle_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCredentialLibrary_GetCredentialFromGoogle_Statics::Function_MetaDataParams[] = {
		{ "Category", "Firebase|Auth|Credential|Google" },
		{ "Comment", "/// Generate a credential from the given Google ID token and/or access token.\n/// @param IdToken Google Sign-In ID token.\n/// @param AccessToken Google Sign-In access token.\n/// @returns New Credential.\n" },
		{ "Keywords", "Google Provider Auth" },
		{ "ModuleRelativePath", "Public/Auth/Credential.h" },
		{ "ToolTip", "Generate a credential from the given Google ID token and/or access token.\n@param IdToken Google Sign-In ID token.\n@param AccessToken Google Sign-In access token.\n@returns New Credential." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCredentialLibrary_GetCredentialFromGoogle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCredentialLibrary, nullptr, "GetCredentialFromGoogle", nullptr, nullptr, sizeof(CredentialLibrary_eventGetCredentialFromGoogle_Parms), Z_Construct_UFunction_UCredentialLibrary_GetCredentialFromGoogle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCredentialLibrary_GetCredentialFromGoogle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCredentialLibrary_GetCredentialFromGoogle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCredentialLibrary_GetCredentialFromGoogle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCredentialLibrary_GetCredentialFromGoogle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCredentialLibrary_GetCredentialFromGoogle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCredentialLibrary_GetCredentialFromOAuth_Statics
	{
		struct CredentialLibrary_eventGetCredentialFromOAuth_Parms
		{
			FString ProviderId;
			FString IdToken;
			FString AccessToken;
			FCredential ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProviderId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ProviderId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IdToken_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_IdToken;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AccessToken_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AccessToken;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCredentialLibrary_GetCredentialFromOAuth_Statics::NewProp_ProviderId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCredentialLibrary_GetCredentialFromOAuth_Statics::NewProp_ProviderId = { "ProviderId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CredentialLibrary_eventGetCredentialFromOAuth_Parms, ProviderId), METADATA_PARAMS(Z_Construct_UFunction_UCredentialLibrary_GetCredentialFromOAuth_Statics::NewProp_ProviderId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCredentialLibrary_GetCredentialFromOAuth_Statics::NewProp_ProviderId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCredentialLibrary_GetCredentialFromOAuth_Statics::NewProp_IdToken_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCredentialLibrary_GetCredentialFromOAuth_Statics::NewProp_IdToken = { "IdToken", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CredentialLibrary_eventGetCredentialFromOAuth_Parms, IdToken), METADATA_PARAMS(Z_Construct_UFunction_UCredentialLibrary_GetCredentialFromOAuth_Statics::NewProp_IdToken_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCredentialLibrary_GetCredentialFromOAuth_Statics::NewProp_IdToken_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCredentialLibrary_GetCredentialFromOAuth_Statics::NewProp_AccessToken_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCredentialLibrary_GetCredentialFromOAuth_Statics::NewProp_AccessToken = { "AccessToken", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CredentialLibrary_eventGetCredentialFromOAuth_Parms, AccessToken), METADATA_PARAMS(Z_Construct_UFunction_UCredentialLibrary_GetCredentialFromOAuth_Statics::NewProp_AccessToken_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCredentialLibrary_GetCredentialFromOAuth_Statics::NewProp_AccessToken_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCredentialLibrary_GetCredentialFromOAuth_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Credential" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCredentialLibrary_GetCredentialFromOAuth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CredentialLibrary_eventGetCredentialFromOAuth_Parms, ReturnValue), Z_Construct_UScriptStruct_FCredential, METADATA_PARAMS(Z_Construct_UFunction_UCredentialLibrary_GetCredentialFromOAuth_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCredentialLibrary_GetCredentialFromOAuth_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCredentialLibrary_GetCredentialFromOAuth_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCredentialLibrary_GetCredentialFromOAuth_Statics::NewProp_ProviderId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCredentialLibrary_GetCredentialFromOAuth_Statics::NewProp_IdToken,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCredentialLibrary_GetCredentialFromOAuth_Statics::NewProp_AccessToken,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCredentialLibrary_GetCredentialFromOAuth_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCredentialLibrary_GetCredentialFromOAuth_Statics::Function_MetaDataParams[] = {
		{ "Category", "Firebase|Auth|Credential|OAuth" },
		{ "Comment", "/// Generate a credential for an OAuth2 provider.\n/// @param ProviderId Name of the OAuth2 provider\n/// @param id_token The authentication token (OIDC only).\n/// @param access_token The authentication access token.\n" },
		{ "ModuleRelativePath", "Public/Auth/Credential.h" },
		{ "ToolTip", "Generate a credential for an OAuth2 provider.\n@param ProviderId Name of the OAuth2 provider\n@param id_token The authentication token (OIDC only).\n@param access_token The authentication access token." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCredentialLibrary_GetCredentialFromOAuth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCredentialLibrary, nullptr, "GetCredentialFromOAuth", nullptr, nullptr, sizeof(CredentialLibrary_eventGetCredentialFromOAuth_Parms), Z_Construct_UFunction_UCredentialLibrary_GetCredentialFromOAuth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCredentialLibrary_GetCredentialFromOAuth_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCredentialLibrary_GetCredentialFromOAuth_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCredentialLibrary_GetCredentialFromOAuth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCredentialLibrary_GetCredentialFromOAuth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCredentialLibrary_GetCredentialFromOAuth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCredentialLibrary_GetCredentialFromOAuthWithOnce_Statics
	{
		struct CredentialLibrary_eventGetCredentialFromOAuthWithOnce_Parms
		{
			FString ProviderId;
			FString IdToken;
			FString Nonce;
			FString AccessToken;
			FCredential ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProviderId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ProviderId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IdToken_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_IdToken;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Nonce_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Nonce;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AccessToken_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AccessToken;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCredentialLibrary_GetCredentialFromOAuthWithOnce_Statics::NewProp_ProviderId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCredentialLibrary_GetCredentialFromOAuthWithOnce_Statics::NewProp_ProviderId = { "ProviderId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CredentialLibrary_eventGetCredentialFromOAuthWithOnce_Parms, ProviderId), METADATA_PARAMS(Z_Construct_UFunction_UCredentialLibrary_GetCredentialFromOAuthWithOnce_Statics::NewProp_ProviderId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCredentialLibrary_GetCredentialFromOAuthWithOnce_Statics::NewProp_ProviderId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCredentialLibrary_GetCredentialFromOAuthWithOnce_Statics::NewProp_IdToken_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCredentialLibrary_GetCredentialFromOAuthWithOnce_Statics::NewProp_IdToken = { "IdToken", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CredentialLibrary_eventGetCredentialFromOAuthWithOnce_Parms, IdToken), METADATA_PARAMS(Z_Construct_UFunction_UCredentialLibrary_GetCredentialFromOAuthWithOnce_Statics::NewProp_IdToken_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCredentialLibrary_GetCredentialFromOAuthWithOnce_Statics::NewProp_IdToken_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCredentialLibrary_GetCredentialFromOAuthWithOnce_Statics::NewProp_Nonce_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCredentialLibrary_GetCredentialFromOAuthWithOnce_Statics::NewProp_Nonce = { "Nonce", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CredentialLibrary_eventGetCredentialFromOAuthWithOnce_Parms, Nonce), METADATA_PARAMS(Z_Construct_UFunction_UCredentialLibrary_GetCredentialFromOAuthWithOnce_Statics::NewProp_Nonce_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCredentialLibrary_GetCredentialFromOAuthWithOnce_Statics::NewProp_Nonce_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCredentialLibrary_GetCredentialFromOAuthWithOnce_Statics::NewProp_AccessToken_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCredentialLibrary_GetCredentialFromOAuthWithOnce_Statics::NewProp_AccessToken = { "AccessToken", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CredentialLibrary_eventGetCredentialFromOAuthWithOnce_Parms, AccessToken), METADATA_PARAMS(Z_Construct_UFunction_UCredentialLibrary_GetCredentialFromOAuthWithOnce_Statics::NewProp_AccessToken_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCredentialLibrary_GetCredentialFromOAuthWithOnce_Statics::NewProp_AccessToken_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCredentialLibrary_GetCredentialFromOAuthWithOnce_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Credential" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCredentialLibrary_GetCredentialFromOAuthWithOnce_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CredentialLibrary_eventGetCredentialFromOAuthWithOnce_Parms, ReturnValue), Z_Construct_UScriptStruct_FCredential, METADATA_PARAMS(Z_Construct_UFunction_UCredentialLibrary_GetCredentialFromOAuthWithOnce_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCredentialLibrary_GetCredentialFromOAuthWithOnce_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCredentialLibrary_GetCredentialFromOAuthWithOnce_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCredentialLibrary_GetCredentialFromOAuthWithOnce_Statics::NewProp_ProviderId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCredentialLibrary_GetCredentialFromOAuthWithOnce_Statics::NewProp_IdToken,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCredentialLibrary_GetCredentialFromOAuthWithOnce_Statics::NewProp_Nonce,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCredentialLibrary_GetCredentialFromOAuthWithOnce_Statics::NewProp_AccessToken,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCredentialLibrary_GetCredentialFromOAuthWithOnce_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCredentialLibrary_GetCredentialFromOAuthWithOnce_Statics::Function_MetaDataParams[] = {
		{ "Category", "Firebase|Auth|Credential|OAuth" },
		{ "Comment", "/// Generate a credential for an OAuth2 provider.\n/// @param ProviderId Name of the OAuth2 provider.\n/// @param IdToken The authentication token (OIDC only).\n/// @param Nonce The raw nonce associated with the Auth credential being\n/// created.\n/// @param AccessToken The access token associated with the Auth credential\n/// to be created, if available. \n" },
		{ "ModuleRelativePath", "Public/Auth/Credential.h" },
		{ "ToolTip", "Generate a credential for an OAuth2 provider.\n@param ProviderId Name of the OAuth2 provider.\n@param IdToken The authentication token (OIDC only).\n@param Nonce The raw nonce associated with the Auth credential being\ncreated.\n@param AccessToken The access token associated with the Auth credential\nto be created, if available." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCredentialLibrary_GetCredentialFromOAuthWithOnce_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCredentialLibrary, nullptr, "GetCredentialFromOAuthWithOnce", nullptr, nullptr, sizeof(CredentialLibrary_eventGetCredentialFromOAuthWithOnce_Parms), Z_Construct_UFunction_UCredentialLibrary_GetCredentialFromOAuthWithOnce_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCredentialLibrary_GetCredentialFromOAuthWithOnce_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCredentialLibrary_GetCredentialFromOAuthWithOnce_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCredentialLibrary_GetCredentialFromOAuthWithOnce_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCredentialLibrary_GetCredentialFromOAuthWithOnce()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCredentialLibrary_GetCredentialFromOAuthWithOnce_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCredentialLibrary_GetCredentialFromPlayGames_Statics
	{
		struct CredentialLibrary_eventGetCredentialFromPlayGames_Parms
		{
			FString ServerAuthCode;
			FCredential ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ServerAuthCode_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ServerAuthCode;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCredentialLibrary_GetCredentialFromPlayGames_Statics::NewProp_ServerAuthCode_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCredentialLibrary_GetCredentialFromPlayGames_Statics::NewProp_ServerAuthCode = { "ServerAuthCode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CredentialLibrary_eventGetCredentialFromPlayGames_Parms, ServerAuthCode), METADATA_PARAMS(Z_Construct_UFunction_UCredentialLibrary_GetCredentialFromPlayGames_Statics::NewProp_ServerAuthCode_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCredentialLibrary_GetCredentialFromPlayGames_Statics::NewProp_ServerAuthCode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCredentialLibrary_GetCredentialFromPlayGames_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Credential" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCredentialLibrary_GetCredentialFromPlayGames_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CredentialLibrary_eventGetCredentialFromPlayGames_Parms, ReturnValue), Z_Construct_UScriptStruct_FCredential, METADATA_PARAMS(Z_Construct_UFunction_UCredentialLibrary_GetCredentialFromPlayGames_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCredentialLibrary_GetCredentialFromPlayGames_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCredentialLibrary_GetCredentialFromPlayGames_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCredentialLibrary_GetCredentialFromPlayGames_Statics::NewProp_ServerAuthCode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCredentialLibrary_GetCredentialFromPlayGames_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCredentialLibrary_GetCredentialFromPlayGames_Statics::Function_MetaDataParams[] = {
		{ "Category", "Firebase|Auth|Credential|PlayGames" },
		{ "Comment", "/// Generate a credential from the given Server Auth Code.\n/// @param ServerAuth_code Play Games Sign in Server Auth Code.\n/// @return New Credential.\n" },
		{ "Keywords", "Play Games Provider Auth" },
		{ "ModuleRelativePath", "Public/Auth/Credential.h" },
		{ "ToolTip", "Generate a credential from the given Server Auth Code.\n@param ServerAuth_code Play Games Sign in Server Auth Code.\n@return New Credential." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCredentialLibrary_GetCredentialFromPlayGames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCredentialLibrary, nullptr, "GetCredentialFromPlayGames", nullptr, nullptr, sizeof(CredentialLibrary_eventGetCredentialFromPlayGames_Parms), Z_Construct_UFunction_UCredentialLibrary_GetCredentialFromPlayGames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCredentialLibrary_GetCredentialFromPlayGames_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCredentialLibrary_GetCredentialFromPlayGames_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCredentialLibrary_GetCredentialFromPlayGames_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCredentialLibrary_GetCredentialFromPlayGames()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCredentialLibrary_GetCredentialFromPlayGames_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCredentialLibrary_GetCredentialFromTwitter_Statics
	{
		struct CredentialLibrary_eventGetCredentialFromTwitter_Parms
		{
			FString Token;
			FString Secret;
			FCredential ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Token_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Token;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Secret_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Secret;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCredentialLibrary_GetCredentialFromTwitter_Statics::NewProp_Token_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCredentialLibrary_GetCredentialFromTwitter_Statics::NewProp_Token = { "Token", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CredentialLibrary_eventGetCredentialFromTwitter_Parms, Token), METADATA_PARAMS(Z_Construct_UFunction_UCredentialLibrary_GetCredentialFromTwitter_Statics::NewProp_Token_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCredentialLibrary_GetCredentialFromTwitter_Statics::NewProp_Token_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCredentialLibrary_GetCredentialFromTwitter_Statics::NewProp_Secret_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCredentialLibrary_GetCredentialFromTwitter_Statics::NewProp_Secret = { "Secret", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CredentialLibrary_eventGetCredentialFromTwitter_Parms, Secret), METADATA_PARAMS(Z_Construct_UFunction_UCredentialLibrary_GetCredentialFromTwitter_Statics::NewProp_Secret_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCredentialLibrary_GetCredentialFromTwitter_Statics::NewProp_Secret_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCredentialLibrary_GetCredentialFromTwitter_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Credential" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCredentialLibrary_GetCredentialFromTwitter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CredentialLibrary_eventGetCredentialFromTwitter_Parms, ReturnValue), Z_Construct_UScriptStruct_FCredential, METADATA_PARAMS(Z_Construct_UFunction_UCredentialLibrary_GetCredentialFromTwitter_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCredentialLibrary_GetCredentialFromTwitter_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCredentialLibrary_GetCredentialFromTwitter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCredentialLibrary_GetCredentialFromTwitter_Statics::NewProp_Token,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCredentialLibrary_GetCredentialFromTwitter_Statics::NewProp_Secret,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCredentialLibrary_GetCredentialFromTwitter_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCredentialLibrary_GetCredentialFromTwitter_Statics::Function_MetaDataParams[] = {
		{ "Category", "Firebase|Auth|Credential|Twitter" },
		{ "Comment", "/// Generate a credential from the given Twitter token and password.\n/// @param Token The Twitter OAuth token.\n/// @param Secret The Twitter OAuth secret.\n/// @return New Credential.\n" },
		{ "Keywords", "Twitter Provider Auth" },
		{ "ModuleRelativePath", "Public/Auth/Credential.h" },
		{ "ToolTip", "Generate a credential from the given Twitter token and password.\n@param Token The Twitter OAuth token.\n@param Secret The Twitter OAuth secret.\n@return New Credential." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCredentialLibrary_GetCredentialFromTwitter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCredentialLibrary, nullptr, "GetCredentialFromTwitter", nullptr, nullptr, sizeof(CredentialLibrary_eventGetCredentialFromTwitter_Parms), Z_Construct_UFunction_UCredentialLibrary_GetCredentialFromTwitter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCredentialLibrary_GetCredentialFromTwitter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCredentialLibrary_GetCredentialFromTwitter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCredentialLibrary_GetCredentialFromTwitter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCredentialLibrary_GetCredentialFromTwitter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCredentialLibrary_GetCredentialFromTwitter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCredentialLibrary_IsAuthenticatedWithGameCenter_Statics
	{
		struct CredentialLibrary_eventIsAuthenticatedWithGameCenter_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCredentialLibrary_IsAuthenticatedWithGameCenter_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Is Authenticated" },
	};
#endif
	void Z_Construct_UFunction_UCredentialLibrary_IsAuthenticatedWithGameCenter_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CredentialLibrary_eventIsAuthenticatedWithGameCenter_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCredentialLibrary_IsAuthenticatedWithGameCenter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CredentialLibrary_eventIsAuthenticatedWithGameCenter_Parms), &Z_Construct_UFunction_UCredentialLibrary_IsAuthenticatedWithGameCenter_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UCredentialLibrary_IsAuthenticatedWithGameCenter_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCredentialLibrary_IsAuthenticatedWithGameCenter_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCredentialLibrary_IsAuthenticatedWithGameCenter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCredentialLibrary_IsAuthenticatedWithGameCenter_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCredentialLibrary_IsAuthenticatedWithGameCenter_Statics::Function_MetaDataParams[] = {
		{ "Category", "Firebase|Auth|Credential|Game Center" },
		{ "Comment", "/// Tests to see if the current user is signed in to GameCenter.\n/// @return true if the user is signed in, false otherwise.\n" },
		{ "Keywords", "Game Center Provider Auth" },
		{ "ModuleRelativePath", "Public/Auth/Credential.h" },
		{ "ToolTip", "Tests to see if the current user is signed in to GameCenter.\n@return true if the user is signed in, false otherwise." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCredentialLibrary_IsAuthenticatedWithGameCenter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCredentialLibrary, nullptr, "IsAuthenticatedWithGameCenter", nullptr, nullptr, sizeof(CredentialLibrary_eventIsAuthenticatedWithGameCenter_Parms), Z_Construct_UFunction_UCredentialLibrary_IsAuthenticatedWithGameCenter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCredentialLibrary_IsAuthenticatedWithGameCenter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCredentialLibrary_IsAuthenticatedWithGameCenter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCredentialLibrary_IsAuthenticatedWithGameCenter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCredentialLibrary_IsAuthenticatedWithGameCenter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCredentialLibrary_IsAuthenticatedWithGameCenter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCredentialLibrary_NoRegister()
	{
		return UCredentialLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UCredentialLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCredentialLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_FirebaseFeatures,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCredentialLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCredentialLibrary_GetCredential, "GetCredential" }, // 3794700688
		{ &Z_Construct_UFunction_UCredentialLibrary_GetCredentialFromEmail, "GetCredentialFromEmail" }, // 2812540213
		{ &Z_Construct_UFunction_UCredentialLibrary_GetCredentialFromFacebook, "GetCredentialFromFacebook" }, // 1411376269
		{ &Z_Construct_UFunction_UCredentialLibrary_GetCredentialFromGitHub, "GetCredentialFromGitHub" }, // 1599121430
		{ &Z_Construct_UFunction_UCredentialLibrary_GetCredentialFromGoogle, "GetCredentialFromGoogle" }, // 1001541685
		{ &Z_Construct_UFunction_UCredentialLibrary_GetCredentialFromOAuth, "GetCredentialFromOAuth" }, // 1132907593
		{ &Z_Construct_UFunction_UCredentialLibrary_GetCredentialFromOAuthWithOnce, "GetCredentialFromOAuthWithOnce" }, // 3239176663
		{ &Z_Construct_UFunction_UCredentialLibrary_GetCredentialFromPlayGames, "GetCredentialFromPlayGames" }, // 2986713440
		{ &Z_Construct_UFunction_UCredentialLibrary_GetCredentialFromTwitter, "GetCredentialFromTwitter" }, // 1763069867
		{ &Z_Construct_UFunction_UCredentialLibrary_IsAuthenticatedWithGameCenter, "IsAuthenticatedWithGameCenter" }, // 1106900115
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCredentialLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Auth/Credential.h" },
		{ "ModuleRelativePath", "Public/Auth/Credential.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCredentialLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCredentialLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCredentialLibrary_Statics::ClassParams = {
		&UCredentialLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UCredentialLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCredentialLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCredentialLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCredentialLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCredentialLibrary, 905629571);
	template<> FIREBASEFEATURES_API UClass* StaticClass<UCredentialLibrary>()
	{
		return UCredentialLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCredentialLibrary(Z_Construct_UClass_UCredentialLibrary, &UCredentialLibrary::StaticClass, TEXT("/Script/FirebaseFeatures"), TEXT("UCredentialLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCredentialLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
