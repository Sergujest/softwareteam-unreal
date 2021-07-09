// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FirebaseFeatures/Public/Database/Database.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDatabase() {}
// Cross Module References
	FIREBASEFEATURES_API UEnum* Z_Construct_UEnum_FirebaseFeatures_EFirebaseDatabaseError();
	UPackage* Z_Construct_UPackage__Script_FirebaseFeatures();
	FIREBASEFEATURES_API UEnum* Z_Construct_UEnum_FirebaseFeatures_EDatabaseLogLevel();
	FIREBASEFEATURES_API UClass* Z_Construct_UClass_UDatabase_NoRegister();
	FIREBASEFEATURES_API UClass* Z_Construct_UClass_UDatabase();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	FIREBASEFEATURES_API UClass* Z_Construct_UClass_UDatabaseReference_NoRegister();
// End Cross Module References
	static UEnum* EFirebaseDatabaseError_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_FirebaseFeatures_EFirebaseDatabaseError, Z_Construct_UPackage__Script_FirebaseFeatures(), TEXT("EFirebaseDatabaseError"));
		}
		return Singleton;
	}
	template<> FIREBASEFEATURES_API UEnum* StaticEnum<EFirebaseDatabaseError>()
	{
		return EFirebaseDatabaseError_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EFirebaseDatabaseError(EFirebaseDatabaseError_StaticEnum, TEXT("/Script/FirebaseFeatures"), TEXT("EFirebaseDatabaseError"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_FirebaseFeatures_EFirebaseDatabaseError_Hash() { return 699636134U; }
	UEnum* Z_Construct_UEnum_FirebaseFeatures_EFirebaseDatabaseError()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_FirebaseFeatures();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EFirebaseDatabaseError"), 0, Get_Z_Construct_UEnum_FirebaseFeatures_EFirebaseDatabaseError_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EFirebaseDatabaseError::None", (int64)EFirebaseDatabaseError::None },
				{ "EFirebaseDatabaseError::Disconnected", (int64)EFirebaseDatabaseError::Disconnected },
				{ "EFirebaseDatabaseError::ExpiredToken", (int64)EFirebaseDatabaseError::ExpiredToken },
				{ "EFirebaseDatabaseError::InvalidToken", (int64)EFirebaseDatabaseError::InvalidToken },
				{ "EFirebaseDatabaseError::MaxRetries", (int64)EFirebaseDatabaseError::MaxRetries },
				{ "EFirebaseDatabaseError::NetworkError", (int64)EFirebaseDatabaseError::NetworkError },
				{ "EFirebaseDatabaseError::OperationFailed", (int64)EFirebaseDatabaseError::OperationFailed },
				{ "EFirebaseDatabaseError::OverriddenBySet", (int64)EFirebaseDatabaseError::OverriddenBySet },
				{ "EFirebaseDatabaseError::PermissionDenied", (int64)EFirebaseDatabaseError::PermissionDenied },
				{ "EFirebaseDatabaseError::Unavailable", (int64)EFirebaseDatabaseError::Unavailable },
				{ "EFirebaseDatabaseError::UnknownError", (int64)EFirebaseDatabaseError::UnknownError },
				{ "EFirebaseDatabaseError::WriteCanceled", (int64)EFirebaseDatabaseError::WriteCanceled },
				{ "EFirebaseDatabaseError::InvalidVariantType", (int64)EFirebaseDatabaseError::InvalidVariantType },
				{ "EFirebaseDatabaseError::ConflictingOperationInProgress", (int64)EFirebaseDatabaseError::ConflictingOperationInProgress },
				{ "EFirebaseDatabaseError::TransactionAbortedByUser", (int64)EFirebaseDatabaseError::TransactionAbortedByUser },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "/// Error code returned by Firebase Realtime Database C++ functions.\n" },
				{ "ConflictingOperationInProgress.Comment", "/// An operation that conflicts with this one is already in progress. For\n/// example, calling SetValue and SetValueAndPriority on a DatabaseReference\n/// is not allowed.\n" },
				{ "ConflictingOperationInProgress.Name", "EFirebaseDatabaseError::ConflictingOperationInProgress" },
				{ "ConflictingOperationInProgress.ToolTip", "An operation that conflicts with this one is already in progress. For\nexample, calling SetValue and SetValueAndPriority on a DatabaseReference\nis not allowed." },
				{ "Disconnected.Comment", "/// The operation had to be aborted due to a network disconnect.\n" },
				{ "Disconnected.Name", "EFirebaseDatabaseError::Disconnected" },
				{ "Disconnected.ToolTip", "The operation had to be aborted due to a network disconnect." },
				{ "ExpiredToken.Comment", "/// The supplied auth token has expired.\n" },
				{ "ExpiredToken.Name", "EFirebaseDatabaseError::ExpiredToken" },
				{ "ExpiredToken.ToolTip", "The supplied auth token has expired." },
				{ "InvalidToken.Comment", "/// The specified authentication token is invalid.\n" },
				{ "InvalidToken.Name", "EFirebaseDatabaseError::InvalidToken" },
				{ "InvalidToken.ToolTip", "The specified authentication token is invalid." },
				{ "InvalidVariantType.Comment", "/// You specified an invalid Variant type for a field. For example,\n/// a DatabaseReference's Priority and the keys of a Map must be of\n/// scalar type (MutableString, StaticString, Int64, Double).\n" },
				{ "InvalidVariantType.Name", "EFirebaseDatabaseError::InvalidVariantType" },
				{ "InvalidVariantType.ToolTip", "You specified an invalid Variant type for a field. For example,\na DatabaseReference's Priority and the keys of a Map must be of\nscalar type (MutableString, StaticString, Int64, Double)." },
				{ "MaxRetries.Comment", "/// The transaction had too many retries.\n" },
				{ "MaxRetries.Name", "EFirebaseDatabaseError::MaxRetries" },
				{ "MaxRetries.ToolTip", "The transaction had too many retries." },
				{ "ModuleRelativePath", "Public/Database/Database.h" },
				{ "NetworkError.Comment", "/// The operation could not be performed due to a network error.\n" },
				{ "NetworkError.Name", "EFirebaseDatabaseError::NetworkError" },
				{ "NetworkError.ToolTip", "The operation could not be performed due to a network error." },
				{ "None.Comment", "/// The operation was a success, no error occurred.\n" },
				{ "None.Name", "EFirebaseDatabaseError::None" },
				{ "None.ToolTip", "The operation was a success, no error occurred." },
				{ "OperationFailed.Comment", "/// The server indicated that this operation failed.\n" },
				{ "OperationFailed.Name", "EFirebaseDatabaseError::OperationFailed" },
				{ "OperationFailed.ToolTip", "The server indicated that this operation failed." },
				{ "OverriddenBySet.Comment", "/// The transaction was overridden by a subsequent set.\n" },
				{ "OverriddenBySet.Name", "EFirebaseDatabaseError::OverriddenBySet" },
				{ "OverriddenBySet.ToolTip", "The transaction was overridden by a subsequent set." },
				{ "PermissionDenied.Comment", "/// This client does not have permission to perform this operation.\n" },
				{ "PermissionDenied.Name", "EFirebaseDatabaseError::PermissionDenied" },
				{ "PermissionDenied.ToolTip", "This client does not have permission to perform this operation." },
				{ "ToolTip", "Error code returned by Firebase Realtime Database C++ functions." },
				{ "TransactionAbortedByUser.Comment", "/// The transaction was aborted, because the user's DoTransaction function\n/// returned kTransactionResultAbort instead of kTransactionResultSuccess.\n" },
				{ "TransactionAbortedByUser.Name", "EFirebaseDatabaseError::TransactionAbortedByUser" },
				{ "TransactionAbortedByUser.ToolTip", "The transaction was aborted, because the user's DoTransaction function\nreturned kTransactionResultAbort instead of kTransactionResultSuccess." },
				{ "Unavailable.Comment", "/// The service is unavailable.\n" },
				{ "Unavailable.Name", "EFirebaseDatabaseError::Unavailable" },
				{ "Unavailable.ToolTip", "The service is unavailable." },
				{ "UnknownError.Comment", "/// An unknown error occurred.\n" },
				{ "UnknownError.Name", "EFirebaseDatabaseError::UnknownError" },
				{ "UnknownError.ToolTip", "An unknown error occurred." },
				{ "WriteCanceled.Comment", "/// The write was canceled locally.\n" },
				{ "WriteCanceled.Name", "EFirebaseDatabaseError::WriteCanceled" },
				{ "WriteCanceled.ToolTip", "The write was canceled locally." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_FirebaseFeatures,
				nullptr,
				"EFirebaseDatabaseError",
				"EFirebaseDatabaseError",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EDatabaseLogLevel_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_FirebaseFeatures_EDatabaseLogLevel, Z_Construct_UPackage__Script_FirebaseFeatures(), TEXT("EDatabaseLogLevel"));
		}
		return Singleton;
	}
	template<> FIREBASEFEATURES_API UEnum* StaticEnum<EDatabaseLogLevel>()
	{
		return EDatabaseLogLevel_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EDatabaseLogLevel(EDatabaseLogLevel_StaticEnum, TEXT("/Script/FirebaseFeatures"), TEXT("EDatabaseLogLevel"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_FirebaseFeatures_EDatabaseLogLevel_Hash() { return 2132231837U; }
	UEnum* Z_Construct_UEnum_FirebaseFeatures_EDatabaseLogLevel()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_FirebaseFeatures();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EDatabaseLogLevel"), 0, Get_Z_Construct_UEnum_FirebaseFeatures_EDatabaseLogLevel_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EDatabaseLogLevel::Verbose", (int64)EDatabaseLogLevel::Verbose },
				{ "EDatabaseLogLevel::Debug", (int64)EDatabaseLogLevel::Debug },
				{ "EDatabaseLogLevel::Info", (int64)EDatabaseLogLevel::Info },
				{ "EDatabaseLogLevel::Warning", (int64)EDatabaseLogLevel::Warning },
				{ "EDatabaseLogLevel::Error", (int64)EDatabaseLogLevel::Error },
				{ "EDatabaseLogLevel::Assert", (int64)EDatabaseLogLevel::Assert },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Assert.Comment", "/// Assert Log Level\n" },
				{ "Assert.Name", "EDatabaseLogLevel::Assert" },
				{ "Assert.ToolTip", "Assert Log Level" },
				{ "BlueprintType", "true" },
				{ "Comment", "/// @brief Levels used when logging messages.\n" },
				{ "Debug.Comment", "/// Debug Log Level\n" },
				{ "Debug.Name", "EDatabaseLogLevel::Debug" },
				{ "Debug.ToolTip", "Debug Log Level" },
				{ "Error.Comment", "/// Error Log Level\n" },
				{ "Error.Name", "EDatabaseLogLevel::Error" },
				{ "Error.ToolTip", "Error Log Level" },
				{ "Info.Comment", "/// Info Log Level\n" },
				{ "Info.Name", "EDatabaseLogLevel::Info" },
				{ "Info.ToolTip", "Info Log Level" },
				{ "ModuleRelativePath", "Public/Database/Database.h" },
				{ "ToolTip", "@brief Levels used when logging messages." },
				{ "Verbose.Comment", "/// Verbose Log Level\n" },
				{ "Verbose.Name", "EDatabaseLogLevel::Verbose" },
				{ "Verbose.ToolTip", "Verbose Log Level" },
				{ "Warning.Comment", "/// Warning Log Level\n" },
				{ "Warning.Name", "EDatabaseLogLevel::Warning" },
				{ "Warning.ToolTip", "Warning Log Level" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_FirebaseFeatures,
				nullptr,
				"EDatabaseLogLevel",
				"EDatabaseLogLevel",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	DEFINE_FUNCTION(UDatabase::execSetLogLevel)
	{
		P_GET_ENUM(EDatabaseLogLevel,Z_Param_DatabaseLogLevel);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLogLevel(EDatabaseLogLevel(Z_Param_DatabaseLogLevel));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDatabase::execSetPersistenceEnabled)
	{
		P_GET_UBOOL(Z_Param_bEnabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPersistenceEnabled(Z_Param_bEnabled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDatabase::execPurgeOutstandingWrites)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PurgeOutstandingWrites();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDatabase::execGoOnline)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GoOnline();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDatabase::execGoOffline)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GoOffline();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDatabase::execGetUrl)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetUrl();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDatabase::execGetReferenceFromUrl)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Url);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDatabaseReference**)Z_Param__Result=P_THIS->GetReferenceFromUrl(Z_Param_Url);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDatabase::execGetReferenceFromPath)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Path);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDatabaseReference**)Z_Param__Result=P_THIS->GetReferenceFromPath(Z_Param_Path);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDatabase::execGetReference)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDatabaseReference**)Z_Param__Result=P_THIS->GetReference();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDatabase::execGetInstanceFromUrl)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Url);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDatabase**)Z_Param__Result=UDatabase::GetInstanceFromUrl(Z_Param_Url);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDatabase::execGetInstance)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDatabase**)Z_Param__Result=UDatabase::GetInstance();
		P_NATIVE_END;
	}
	void UDatabase::StaticRegisterNativesUDatabase()
	{
		UClass* Class = UDatabase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetInstance", &UDatabase::execGetInstance },
			{ "GetInstanceFromUrl", &UDatabase::execGetInstanceFromUrl },
			{ "GetReference", &UDatabase::execGetReference },
			{ "GetReferenceFromPath", &UDatabase::execGetReferenceFromPath },
			{ "GetReferenceFromUrl", &UDatabase::execGetReferenceFromUrl },
			{ "GetUrl", &UDatabase::execGetUrl },
			{ "GoOffline", &UDatabase::execGoOffline },
			{ "GoOnline", &UDatabase::execGoOnline },
			{ "PurgeOutstandingWrites", &UDatabase::execPurgeOutstandingWrites },
			{ "SetLogLevel", &UDatabase::execSetLogLevel },
			{ "SetPersistenceEnabled", &UDatabase::execSetPersistenceEnabled },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDatabase_GetInstance_Statics
	{
		struct Database_eventGetInstance_Parms
		{
			UDatabase* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatabase_GetInstance_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Database" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDatabase_GetInstance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Database_eventGetInstance_Parms, ReturnValue), Z_Construct_UClass_UDatabase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UDatabase_GetInstance_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatabase_GetInstance_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDatabase_GetInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatabase_GetInstance_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatabase_GetInstance_Statics::Function_MetaDataParams[] = {
		{ "Category", "Firebase|Database" },
		{ "Comment", "/// @brief Get an instance of Database corresponding to your App.\n/// Firebase Realtime Database uses firebase::App to communicate with Firebase\n/// Authentication to authenticate users to the Database server backend.\n/// If you call GetInstance() multiple times, you will get\n/// the same instance of Database.\n/// @returns An instance of Database corresponding to the given App.\n" },
		{ "DisplayName", "Get Instance" },
		{ "ModuleRelativePath", "Public/Database/Database.h" },
		{ "ToolTip", "@brief Get an instance of Database corresponding to your App.\nFirebase Realtime Database uses firebase::App to communicate with Firebase\nAuthentication to authenticate users to the Database server backend.\nIf you call GetInstance() multiple times, you will get\nthe same instance of Database.\n@returns An instance of Database corresponding to the given App." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatabase_GetInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatabase, nullptr, "GetInstance", nullptr, nullptr, sizeof(Database_eventGetInstance_Parms), Z_Construct_UFunction_UDatabase_GetInstance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatabase_GetInstance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDatabase_GetInstance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatabase_GetInstance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDatabase_GetInstance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDatabase_GetInstance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDatabase_GetInstanceFromUrl_Statics
	{
		struct Database_eventGetInstanceFromUrl_Parms
		{
			FString Url;
			UDatabase* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Url_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Url;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatabase_GetInstanceFromUrl_Statics::NewProp_Url_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDatabase_GetInstanceFromUrl_Statics::NewProp_Url = { "Url", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Database_eventGetInstanceFromUrl_Parms, Url), METADATA_PARAMS(Z_Construct_UFunction_UDatabase_GetInstanceFromUrl_Statics::NewProp_Url_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatabase_GetInstanceFromUrl_Statics::NewProp_Url_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatabase_GetInstanceFromUrl_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Database" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDatabase_GetInstanceFromUrl_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Database_eventGetInstanceFromUrl_Parms, ReturnValue), Z_Construct_UClass_UDatabase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UDatabase_GetInstanceFromUrl_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatabase_GetInstanceFromUrl_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDatabase_GetInstanceFromUrl_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatabase_GetInstanceFromUrl_Statics::NewProp_Url,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatabase_GetInstanceFromUrl_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatabase_GetInstanceFromUrl_Statics::Function_MetaDataParams[] = {
		{ "Category", "Firebase|Database" },
		{ "Comment", "/// @brief Gets an instance of FirebaseDatabase for the specified URL.\n/// If you call GetInstance() multiple times with the same App and URL, you\n/// will get the same instance of Database\n/// @param[in] Url The URL of your Firebase Realtime Database. This overrides\n/// any url specified in the App options.\n/// @returns An instance of Database corresponding to the given App and URL.\n" },
		{ "DisplayName", "Get Instance from URL" },
		{ "ModuleRelativePath", "Public/Database/Database.h" },
		{ "ToolTip", "@brief Gets an instance of FirebaseDatabase for the specified URL.\nIf you call GetInstance() multiple times with the same App and URL, you\nwill get the same instance of Database\n@param[in] Url The URL of your Firebase Realtime Database. This overrides\nany url specified in the App options.\n@returns An instance of Database corresponding to the given App and URL." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatabase_GetInstanceFromUrl_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatabase, nullptr, "GetInstanceFromUrl", nullptr, nullptr, sizeof(Database_eventGetInstanceFromUrl_Parms), Z_Construct_UFunction_UDatabase_GetInstanceFromUrl_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatabase_GetInstanceFromUrl_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDatabase_GetInstanceFromUrl_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatabase_GetInstanceFromUrl_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDatabase_GetInstanceFromUrl()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDatabase_GetInstanceFromUrl_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDatabase_GetReference_Statics
	{
		struct Database_eventGetReference_Parms
		{
			UDatabaseReference* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatabase_GetReference_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Reference" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDatabase_GetReference_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Database_eventGetReference_Parms, ReturnValue), Z_Construct_UClass_UDatabaseReference_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UDatabase_GetReference_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatabase_GetReference_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDatabase_GetReference_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatabase_GetReference_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatabase_GetReference_Statics::Function_MetaDataParams[] = {
		{ "Category", "Firebase|Database" },
		{ "Comment", "/// @brief Get a DatabaseReference to the root of the database.\n/// @returns A DatabaseReference to the root of the database.\n" },
		{ "ModuleRelativePath", "Public/Database/Database.h" },
		{ "ToolTip", "@brief Get a DatabaseReference to the root of the database.\n@returns A DatabaseReference to the root of the database." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatabase_GetReference_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatabase, nullptr, "GetReference", nullptr, nullptr, sizeof(Database_eventGetReference_Parms), Z_Construct_UFunction_UDatabase_GetReference_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatabase_GetReference_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDatabase_GetReference_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatabase_GetReference_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDatabase_GetReference()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDatabase_GetReference_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDatabase_GetReferenceFromPath_Statics
	{
		struct Database_eventGetReferenceFromPath_Parms
		{
			FString Path;
			UDatabaseReference* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Path_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Path;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatabase_GetReferenceFromPath_Statics::NewProp_Path_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDatabase_GetReferenceFromPath_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Database_eventGetReferenceFromPath_Parms, Path), METADATA_PARAMS(Z_Construct_UFunction_UDatabase_GetReferenceFromPath_Statics::NewProp_Path_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatabase_GetReferenceFromPath_Statics::NewProp_Path_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatabase_GetReferenceFromPath_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Reference" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDatabase_GetReferenceFromPath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Database_eventGetReferenceFromPath_Parms, ReturnValue), Z_Construct_UClass_UDatabaseReference_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UDatabase_GetReferenceFromPath_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatabase_GetReferenceFromPath_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDatabase_GetReferenceFromPath_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatabase_GetReferenceFromPath_Statics::NewProp_Path,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatabase_GetReferenceFromPath_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatabase_GetReferenceFromPath_Statics::Function_MetaDataParams[] = {
		{ "Category", "Firebase|Database" },
		{ "Comment", "/// @brief Get a UDatabaseReference for the specified path.\n///\n/// @returns A DatabaseReference to the specified path in the database.\n/// If you specified an invalid path, the reference's\n/// DatabaseReference::IsValid() will return false.\n" },
		{ "ModuleRelativePath", "Public/Database/Database.h" },
		{ "ToolTip", "@brief Get a UDatabaseReference for the specified path.\n\n@returns A DatabaseReference to the specified path in the database.\nIf you specified an invalid path, the reference's\nDatabaseReference::IsValid() will return false." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatabase_GetReferenceFromPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatabase, nullptr, "GetReferenceFromPath", nullptr, nullptr, sizeof(Database_eventGetReferenceFromPath_Parms), Z_Construct_UFunction_UDatabase_GetReferenceFromPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatabase_GetReferenceFromPath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDatabase_GetReferenceFromPath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatabase_GetReferenceFromPath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDatabase_GetReferenceFromPath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDatabase_GetReferenceFromPath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDatabase_GetReferenceFromUrl_Statics
	{
		struct Database_eventGetReferenceFromUrl_Parms
		{
			FString Url;
			UDatabaseReference* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Url_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Url;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatabase_GetReferenceFromUrl_Statics::NewProp_Url_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDatabase_GetReferenceFromUrl_Statics::NewProp_Url = { "Url", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Database_eventGetReferenceFromUrl_Parms, Url), METADATA_PARAMS(Z_Construct_UFunction_UDatabase_GetReferenceFromUrl_Statics::NewProp_Url_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatabase_GetReferenceFromUrl_Statics::NewProp_Url_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatabase_GetReferenceFromUrl_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Reference" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDatabase_GetReferenceFromUrl_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Database_eventGetReferenceFromUrl_Parms, ReturnValue), Z_Construct_UClass_UDatabaseReference_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UDatabase_GetReferenceFromUrl_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatabase_GetReferenceFromUrl_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDatabase_GetReferenceFromUrl_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatabase_GetReferenceFromUrl_Statics::NewProp_Url,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatabase_GetReferenceFromUrl_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatabase_GetReferenceFromUrl_Statics::Function_MetaDataParams[] = {
		{ "Category", "Firebase|Database" },
		{ "Comment", "/// @brief Get a DatabaseReference for the provided URL, which must belong to\n/// the database URL this instance is already connected to.\n/// @returns A DatabaseReference to the specified path in the database.\n/// If you specified an invalid path, the reference's\n/// DatabaseReference::IsValid() will return false.\n" },
		{ "ModuleRelativePath", "Public/Database/Database.h" },
		{ "ToolTip", "@brief Get a DatabaseReference for the provided URL, which must belong to\nthe database URL this instance is already connected to.\n@returns A DatabaseReference to the specified path in the database.\nIf you specified an invalid path, the reference's\nDatabaseReference::IsValid() will return false." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatabase_GetReferenceFromUrl_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatabase, nullptr, "GetReferenceFromUrl", nullptr, nullptr, sizeof(Database_eventGetReferenceFromUrl_Parms), Z_Construct_UFunction_UDatabase_GetReferenceFromUrl_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatabase_GetReferenceFromUrl_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDatabase_GetReferenceFromUrl_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatabase_GetReferenceFromUrl_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDatabase_GetReferenceFromUrl()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDatabase_GetReferenceFromUrl_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDatabase_GetUrl_Statics
	{
		struct Database_eventGetUrl_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatabase_GetUrl_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "URL" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDatabase_GetUrl_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Database_eventGetUrl_Parms, ReturnValue), METADATA_PARAMS(Z_Construct_UFunction_UDatabase_GetUrl_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatabase_GetUrl_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDatabase_GetUrl_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatabase_GetUrl_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatabase_GetUrl_Statics::Function_MetaDataParams[] = {
		{ "Category", "Firebase|Database" },
		{ "Comment", "/// @brief Get the URL that this Database was created with.\n/// @returns The URL this Database was created with, or an empty string if\n/// this Database was created with default parameters. \n" },
		{ "DisplayName", "Get URL" },
		{ "ModuleRelativePath", "Public/Database/Database.h" },
		{ "ToolTip", "@brief Get the URL that this Database was created with.\n@returns The URL this Database was created with, or an empty string if\nthis Database was created with default parameters." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatabase_GetUrl_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatabase, nullptr, "GetUrl", nullptr, nullptr, sizeof(Database_eventGetUrl_Parms), Z_Construct_UFunction_UDatabase_GetUrl_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatabase_GetUrl_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDatabase_GetUrl_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatabase_GetUrl_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDatabase_GetUrl()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDatabase_GetUrl_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDatabase_GoOffline_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatabase_GoOffline_Statics::Function_MetaDataParams[] = {
		{ "Category", "Firebase|Database" },
		{ "Comment", "/// @brief Shuts down the connection to the Firebase Realtime Database\n/// backend until GoOnline() is called.\n" },
		{ "DisplayName", "Go Offline" },
		{ "ModuleRelativePath", "Public/Database/Database.h" },
		{ "ToolTip", "@brief Shuts down the connection to the Firebase Realtime Database\nbackend until GoOnline() is called." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatabase_GoOffline_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatabase, nullptr, "GoOffline", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDatabase_GoOffline_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatabase_GoOffline_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDatabase_GoOffline()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDatabase_GoOffline_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDatabase_GoOnline_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatabase_GoOnline_Statics::Function_MetaDataParams[] = {
		{ "Category", "Firebase|Database" },
		{ "Comment", "/// @brief Resumes the connection to the Firebase Realtime Database backend\n/// after a previous GoOffline() call.\n" },
		{ "DisplayName", "Go Online" },
		{ "ModuleRelativePath", "Public/Database/Database.h" },
		{ "ToolTip", "@brief Resumes the connection to the Firebase Realtime Database backend\nafter a previous GoOffline() call." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatabase_GoOnline_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatabase, nullptr, "GoOnline", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDatabase_GoOnline_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatabase_GoOnline_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDatabase_GoOnline()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDatabase_GoOnline_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDatabase_PurgeOutstandingWrites_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatabase_PurgeOutstandingWrites_Statics::Function_MetaDataParams[] = {
		{ "Category", "Firebase|Database" },
		{ "Comment", "/// @brief Purge all pending writes to the Firebase Realtime Database server.\n/// The Firebase Realtime Database client automatically queues writes and\n/// sends them to the server at the earliest opportunity, depending on network\n/// connectivity. In some cases (e.g. offline usage) there may be a large\n/// number of writes waiting to be sent. Calling this method will purge all\n/// outstanding writes so they are abandoned. All writes will be purged,\n/// including transactions and onDisconnect() writes. The writes will be\n/// rolled back locally, perhaps triggering events for affected event\n/// listeners, and the client will not (re-)send them to the Firebase backend.\n" },
		{ "DisplayName", "Purge Outstanding Writes" },
		{ "ModuleRelativePath", "Public/Database/Database.h" },
		{ "ToolTip", "@brief Purge all pending writes to the Firebase Realtime Database server.\nThe Firebase Realtime Database client automatically queues writes and\nsends them to the server at the earliest opportunity, depending on network\nconnectivity. In some cases (e.g. offline usage) there may be a large\nnumber of writes waiting to be sent. Calling this method will purge all\noutstanding writes so they are abandoned. All writes will be purged,\nincluding transactions and onDisconnect() writes. The writes will be\nrolled back locally, perhaps triggering events for affected event\nlisteners, and the client will not (re-)send them to the Firebase backend." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatabase_PurgeOutstandingWrites_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatabase, nullptr, "PurgeOutstandingWrites", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDatabase_PurgeOutstandingWrites_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatabase_PurgeOutstandingWrites_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDatabase_PurgeOutstandingWrites()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDatabase_PurgeOutstandingWrites_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDatabase_SetLogLevel_Statics
	{
		struct Database_eventSetLogLevel_Parms
		{
			EDatabaseLogLevel DatabaseLogLevel;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DatabaseLogLevel_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DatabaseLogLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_DatabaseLogLevel;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDatabase_SetLogLevel_Statics::NewProp_DatabaseLogLevel_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatabase_SetLogLevel_Statics::NewProp_DatabaseLogLevel_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDatabase_SetLogLevel_Statics::NewProp_DatabaseLogLevel = { "DatabaseLogLevel", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Database_eventSetLogLevel_Parms, DatabaseLogLevel), Z_Construct_UEnum_FirebaseFeatures_EDatabaseLogLevel, METADATA_PARAMS(Z_Construct_UFunction_UDatabase_SetLogLevel_Statics::NewProp_DatabaseLogLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatabase_SetLogLevel_Statics::NewProp_DatabaseLogLevel_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDatabase_SetLogLevel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatabase_SetLogLevel_Statics::NewProp_DatabaseLogLevel_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatabase_SetLogLevel_Statics::NewProp_DatabaseLogLevel,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatabase_SetLogLevel_Statics::Function_MetaDataParams[] = {
		{ "Category", "Firebase|Database" },
		{ "Comment", "/// Set the log verbosity of this Database instance.\n/// The log filtering is cumulative with Firebase App. That is, this library's\n/// log messages will only be displayed if they are not filtered out by this\n/// library's log level setting and by Firebase App's log level setting\n/// @note On Android this can only be set before any operations have been\n/// performed with the object.\n/// @param[in] log_level Log level, by default this is set to kLogLevelInfo.\n" },
		{ "DisplayName", "Set Log Level" },
		{ "ModuleRelativePath", "Public/Database/Database.h" },
		{ "ToolTip", "Set the log verbosity of this Database instance.\nThe log filtering is cumulative with Firebase App. That is, this library's\nlog messages will only be displayed if they are not filtered out by this\nlibrary's log level setting and by Firebase App's log level setting\n@note On Android this can only be set before any operations have been\nperformed with the object.\n@param[in] log_level Log level, by default this is set to kLogLevelInfo." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatabase_SetLogLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatabase, nullptr, "SetLogLevel", nullptr, nullptr, sizeof(Database_eventSetLogLevel_Parms), Z_Construct_UFunction_UDatabase_SetLogLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatabase_SetLogLevel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDatabase_SetLogLevel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatabase_SetLogLevel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDatabase_SetLogLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDatabase_SetLogLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDatabase_SetPersistenceEnabled_Statics
	{
		struct Database_eventSetPersistenceEnabled_Parms
		{
			bool bEnabled;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[];
#endif
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatabase_SetPersistenceEnabled_Statics::NewProp_bEnabled_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UDatabase_SetPersistenceEnabled_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((Database_eventSetPersistenceEnabled_Parms*)Obj)->bEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDatabase_SetPersistenceEnabled_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Database_eventSetPersistenceEnabled_Parms), &Z_Construct_UFunction_UDatabase_SetPersistenceEnabled_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UDatabase_SetPersistenceEnabled_Statics::NewProp_bEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatabase_SetPersistenceEnabled_Statics::NewProp_bEnabled_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDatabase_SetPersistenceEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatabase_SetPersistenceEnabled_Statics::NewProp_bEnabled,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatabase_SetPersistenceEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "Firebase|Database" },
		{ "Comment", "/// @brief Sets whether pending write data will persist between application\n/// exits.\n/// The Firebase Database client will cache synchronized data and keep track\n/// of all writes you've initiated while your application is running. It\n/// seamlessly handles intermittent network connections and re-sends write\n/// operations when the network connection is restored. However by default\n/// your write operations and cached data are only stored in-memory and will\n/// be lost when your app restarts. By setting this value to `true`, the data\n/// will be persisted to on-device (disk) storage and will thus be available\n/// again when the app is restarted (even when there is no network\n/// connectivity at that time).\n/// @note SetPersistenceEnabled should be called before creating any instances\n/// of DatabaseReference, and only needs to be called once per application.\n/// @param[in] enabled Set this to true to persist write data to on-device\n/// (disk) storage, or false to discard pending writes when the app exits.\n" },
		{ "DisplayName", "Set Persistence Enabled" },
		{ "ModuleRelativePath", "Public/Database/Database.h" },
		{ "ToolTip", "@brief Sets whether pending write data will persist between application\nexits.\nThe Firebase Database client will cache synchronized data and keep track\nof all writes you've initiated while your application is running. It\nseamlessly handles intermittent network connections and re-sends write\noperations when the network connection is restored. However by default\nyour write operations and cached data are only stored in-memory and will\nbe lost when your app restarts. By setting this value to `true`, the data\nwill be persisted to on-device (disk) storage and will thus be available\nagain when the app is restarted (even when there is no network\nconnectivity at that time).\n@note SetPersistenceEnabled should be called before creating any instances\nof DatabaseReference, and only needs to be called once per application.\n@param[in] enabled Set this to true to persist write data to on-device\n(disk) storage, or false to discard pending writes when the app exits." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatabase_SetPersistenceEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatabase, nullptr, "SetPersistenceEnabled", nullptr, nullptr, sizeof(Database_eventSetPersistenceEnabled_Parms), Z_Construct_UFunction_UDatabase_SetPersistenceEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatabase_SetPersistenceEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDatabase_SetPersistenceEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatabase_SetPersistenceEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDatabase_SetPersistenceEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDatabase_SetPersistenceEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UDatabase_NoRegister()
	{
		return UDatabase::StaticClass();
	}
	struct Z_Construct_UClass_UDatabase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDatabase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_FirebaseFeatures,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDatabase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDatabase_GetInstance, "GetInstance" }, // 3973691271
		{ &Z_Construct_UFunction_UDatabase_GetInstanceFromUrl, "GetInstanceFromUrl" }, // 3187789716
		{ &Z_Construct_UFunction_UDatabase_GetReference, "GetReference" }, // 2050511081
		{ &Z_Construct_UFunction_UDatabase_GetReferenceFromPath, "GetReferenceFromPath" }, // 3363239780
		{ &Z_Construct_UFunction_UDatabase_GetReferenceFromUrl, "GetReferenceFromUrl" }, // 3362503655
		{ &Z_Construct_UFunction_UDatabase_GetUrl, "GetUrl" }, // 1646418178
		{ &Z_Construct_UFunction_UDatabase_GoOffline, "GoOffline" }, // 1886640205
		{ &Z_Construct_UFunction_UDatabase_GoOnline, "GoOnline" }, // 3932187301
		{ &Z_Construct_UFunction_UDatabase_PurgeOutstandingWrites, "PurgeOutstandingWrites" }, // 3909946759
		{ &Z_Construct_UFunction_UDatabase_SetLogLevel, "SetLogLevel" }, // 3480497188
		{ &Z_Construct_UFunction_UDatabase_SetPersistenceEnabled, "SetPersistenceEnabled" }, // 1166699758
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatabase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/// @brief Entry point for the Firebase Realtime Database C++ SDK.\n/// To use the SDK, call UDatabase::GetInstance() to obtain\n/// an instance of Database, then use GetReference() to obtain references to\n/// child paths within the database. From there you can set data via\n/// UQuery::SetValue(), get data via UQuery::GetValue(), attach listeners, and\n/// more.\n" },
		{ "IncludePath", "Database/Database.h" },
		{ "ModuleRelativePath", "Public/Database/Database.h" },
		{ "ToolTip", "@brief Entry point for the Firebase Realtime Database C++ SDK.\nTo use the SDK, call UDatabase::GetInstance() to obtain\nan instance of Database, then use GetReference() to obtain references to\nchild paths within the database. From there you can set data via\nUQuery::SetValue(), get data via UQuery::GetValue(), attach listeners, and\nmore." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDatabase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDatabase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDatabase_Statics::ClassParams = {
		&UDatabase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UDatabase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDatabase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDatabase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDatabase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDatabase, 169120172);
	template<> FIREBASEFEATURES_API UClass* StaticClass<UDatabase>()
	{
		return UDatabase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDatabase(Z_Construct_UClass_UDatabase, &UDatabase::StaticClass, TEXT("/Script/FirebaseFeatures"), TEXT("UDatabase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDatabase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
