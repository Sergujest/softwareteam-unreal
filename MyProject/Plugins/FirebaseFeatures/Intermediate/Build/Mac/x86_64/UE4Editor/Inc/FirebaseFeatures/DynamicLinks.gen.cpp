// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FirebaseFeatures/Public/DynamicLinks/DynamicLinks.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDynamicLinks() {}
// Cross Module References
	FIREBASEFEATURES_API UEnum* Z_Construct_UEnum_FirebaseFeatures_EPathLength();
	UPackage* Z_Construct_UPackage__Script_FirebaseFeatures();
	FIREBASEFEATURES_API UScriptStruct* Z_Construct_UScriptStruct_FDynamicLinkComponents();
	FIREBASEFEATURES_API UScriptStruct* Z_Construct_UScriptStruct_FGoogleAnalyticsParameters();
	FIREBASEFEATURES_API UScriptStruct* Z_Construct_UScriptStruct_FIOSParameters();
	FIREBASEFEATURES_API UScriptStruct* Z_Construct_UScriptStruct_FITunesConnectAnalyticsParameters();
	FIREBASEFEATURES_API UScriptStruct* Z_Construct_UScriptStruct_FAndroidParameters();
	FIREBASEFEATURES_API UScriptStruct* Z_Construct_UScriptStruct_FSocialMetaTagParameters();
	FIREBASEFEATURES_API UScriptStruct* Z_Construct_UScriptStruct_FGeneratedDynamicLink();
	FIREBASEFEATURES_API UScriptStruct* Z_Construct_UScriptStruct_FDynamicLinkOptions();
// End Cross Module References
	static UEnum* EPathLength_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_FirebaseFeatures_EPathLength, Z_Construct_UPackage__Script_FirebaseFeatures(), TEXT("EPathLength"));
		}
		return Singleton;
	}
	template<> FIREBASEFEATURES_API UEnum* StaticEnum<EPathLength>()
	{
		return EPathLength_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EPathLength(EPathLength_StaticEnum, TEXT("/Script/FirebaseFeatures"), TEXT("EPathLength"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_FirebaseFeatures_EPathLength_Hash() { return 3389672051U; }
	UEnum* Z_Construct_UEnum_FirebaseFeatures_EPathLength()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_FirebaseFeatures();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EPathLength"), 0, Get_Z_Construct_UEnum_FirebaseFeatures_EPathLength_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EPathLength::PathLengthDefault", (int64)EPathLength::PathLengthDefault },
				{ "EPathLength::PathLengthShort", (int64)EPathLength::PathLengthShort },
				{ "EPathLength::PathLengthUnguessable", (int64)EPathLength::PathLengthUnguessable },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "/// @brief The desired path length for shortened Dynamic Link URLs.\n" },
				{ "ModuleRelativePath", "Public/DynamicLinks/DynamicLinks.h" },
				{ "PathLengthDefault.Comment", "/// Uses the server-default for the path length.\n/// See https://goo.gl/8yDAqC for more information.\n" },
				{ "PathLengthDefault.Name", "EPathLength::PathLengthDefault" },
				{ "PathLengthDefault.ToolTip", "Uses the server-default for the path length.\nSee https:goo.gl/8yDAqC for more information." },
				{ "PathLengthShort.Comment", "/// Typical short link for non-sensitive links.\n" },
				{ "PathLengthShort.Name", "EPathLength::PathLengthShort" },
				{ "PathLengthShort.ToolTip", "Typical short link for non-sensitive links." },
				{ "PathLengthUnguessable.Comment", "/// Short link that uses a very long path to make it more difficult to\n/// guess. Useful for sensitive links.\n" },
				{ "PathLengthUnguessable.Name", "EPathLength::PathLengthUnguessable" },
				{ "PathLengthUnguessable.ToolTip", "Short link that uses a very long path to make it more difficult to\nguess. Useful for sensitive links." },
				{ "ToolTip", "@brief The desired path length for shortened Dynamic Link URLs." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_FirebaseFeatures,
				nullptr,
				"EPathLength",
				"EPathLength",
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
class UScriptStruct* FDynamicLinkComponents::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FIREBASEFEATURES_API uint32 Get_Z_Construct_UScriptStruct_FDynamicLinkComponents_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDynamicLinkComponents, Z_Construct_UPackage__Script_FirebaseFeatures(), TEXT("DynamicLinkComponents"), sizeof(FDynamicLinkComponents), Get_Z_Construct_UScriptStruct_FDynamicLinkComponents_Hash());
	}
	return Singleton;
}
template<> FIREBASEFEATURES_API UScriptStruct* StaticStruct<FDynamicLinkComponents>()
{
	return FDynamicLinkComponents::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDynamicLinkComponents(FDynamicLinkComponents::StaticStruct, TEXT("/Script/FirebaseFeatures"), TEXT("DynamicLinkComponents"), false, nullptr, nullptr);
static struct FScriptStruct_FirebaseFeatures_StaticRegisterNativesFDynamicLinkComponents
{
	FScriptStruct_FirebaseFeatures_StaticRegisterNativesFDynamicLinkComponents()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("DynamicLinkComponents")),new UScriptStruct::TCppStructOps<FDynamicLinkComponents>);
	}
} ScriptStruct_FirebaseFeatures_StaticRegisterNativesFDynamicLinkComponents;
	struct Z_Construct_UScriptStruct_FDynamicLinkComponents_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Link_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Link;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DomainUriPrefix_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DomainUriPrefix;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GoogleAnalyticsParameters_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GoogleAnalyticsParameters;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IOSParameters_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_IOSParameters;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItunesConnectAnalyticsParameters_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ItunesConnectAnalyticsParameters;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AndroidParameters_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AndroidParameters;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SocialMetaTagParameters_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SocialMetaTagParameters;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDynamicLinkComponents_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/// @brief The information needed to generate a Dynamic Link.\n///\n/// Note that the strings used by the struct are not copied, as so must\n/// either be statically allocated, or must persist in memory until this\n/// struct goes out of scope.\n" },
		{ "ModuleRelativePath", "Public/DynamicLinks/DynamicLinks.h" },
		{ "ToolTip", "@brief The information needed to generate a Dynamic Link.\n\nNote that the strings used by the struct are not copied, as so must\neither be statically allocated, or must persist in memory until this\nstruct goes out of scope." },
	};
#endif
	void* Z_Construct_UScriptStruct_FDynamicLinkComponents_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDynamicLinkComponents>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDynamicLinkComponents_Statics::NewProp_Link_MetaData[] = {
		{ "Category", "Firebase|DynamicLinks" },
		{ "Comment", "/// The link your app will open.\n/// You can specify any URL your app can handle, such as a link to your\n/// app's content, or a URL that initiates some\n/// app-specific logic such as crediting the user with a coupon, or\n/// displaying a specific welcome screen. This link must be a well-formatted\n/// URL, be properly URL-encoded, and use the HTTP or HTTPS scheme.\n/// Note, this field is required.\n" },
		{ "ModuleRelativePath", "Public/DynamicLinks/DynamicLinks.h" },
		{ "ToolTip", "The link your app will open.\nYou can specify any URL your app can handle, such as a link to your\napp's content, or a URL that initiates some\napp-specific logic such as crediting the user with a coupon, or\ndisplaying a specific welcome screen. This link must be a well-formatted\nURL, be properly URL-encoded, and use the HTTP or HTTPS scheme.\nNote, this field is required." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDynamicLinkComponents_Statics::NewProp_Link = { "Link", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDynamicLinkComponents, Link), METADATA_PARAMS(Z_Construct_UScriptStruct_FDynamicLinkComponents_Statics::NewProp_Link_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDynamicLinkComponents_Statics::NewProp_Link_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDynamicLinkComponents_Statics::NewProp_DomainUriPrefix_MetaData[] = {
		{ "Category", "Firebase|DynamicLinks" },
		{ "Comment", "/// The domain (of the form \"https://xyz.app.goo.gl\") to use for this Dynamic\n/// Link. You can find this value in the Dynamic Links section of the Firebase\n/// console.\n///\n/// If you have set up custom domains on your project, set this to your\n/// project's custom domain as listed in the Firebase console.\n///\n/// Only https:// links are supported.\n///\n/// Note, this field is required.\n" },
		{ "ModuleRelativePath", "Public/DynamicLinks/DynamicLinks.h" },
		{ "ToolTip", "The domain (of the form \"https:xyz.app.goo.gl\") to use for this Dynamic\nLink. You can find this value in the Dynamic Links section of the Firebase\nconsole.\n\nIf you have set up custom domains on your project, set this to your\nproject's custom domain as listed in the Firebase console.\n\nOnly https: links are supported.\n\nNote, this field is required." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDynamicLinkComponents_Statics::NewProp_DomainUriPrefix = { "DomainUriPrefix", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDynamicLinkComponents, DomainUriPrefix), METADATA_PARAMS(Z_Construct_UScriptStruct_FDynamicLinkComponents_Statics::NewProp_DomainUriPrefix_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDynamicLinkComponents_Statics::NewProp_DomainUriPrefix_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDynamicLinkComponents_Statics::NewProp_GoogleAnalyticsParameters_MetaData[] = {
		{ "Category", "Firebase|DynamicLinks" },
		{ "Comment", "/// The Google Analytics parameters.\n" },
		{ "ModuleRelativePath", "Public/DynamicLinks/DynamicLinks.h" },
		{ "ToolTip", "The Google Analytics parameters." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDynamicLinkComponents_Statics::NewProp_GoogleAnalyticsParameters = { "GoogleAnalyticsParameters", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDynamicLinkComponents, GoogleAnalyticsParameters), Z_Construct_UScriptStruct_FGoogleAnalyticsParameters, METADATA_PARAMS(Z_Construct_UScriptStruct_FDynamicLinkComponents_Statics::NewProp_GoogleAnalyticsParameters_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDynamicLinkComponents_Statics::NewProp_GoogleAnalyticsParameters_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDynamicLinkComponents_Statics::NewProp_IOSParameters_MetaData[] = {
		{ "Category", "Firebase|DynamicLinks" },
		{ "Comment", "/// The iOS parameters.\n" },
		{ "ModuleRelativePath", "Public/DynamicLinks/DynamicLinks.h" },
		{ "ToolTip", "The iOS parameters." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDynamicLinkComponents_Statics::NewProp_IOSParameters = { "IOSParameters", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDynamicLinkComponents, IOSParameters), Z_Construct_UScriptStruct_FIOSParameters, METADATA_PARAMS(Z_Construct_UScriptStruct_FDynamicLinkComponents_Statics::NewProp_IOSParameters_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDynamicLinkComponents_Statics::NewProp_IOSParameters_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDynamicLinkComponents_Statics::NewProp_ItunesConnectAnalyticsParameters_MetaData[] = {
		{ "Category", "Firebase|DynamicLinks" },
		{ "Comment", "/// The iTunes Connect App Analytics parameters.\n" },
		{ "ModuleRelativePath", "Public/DynamicLinks/DynamicLinks.h" },
		{ "ToolTip", "The iTunes Connect App Analytics parameters." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDynamicLinkComponents_Statics::NewProp_ItunesConnectAnalyticsParameters = { "ItunesConnectAnalyticsParameters", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDynamicLinkComponents, ItunesConnectAnalyticsParameters), Z_Construct_UScriptStruct_FITunesConnectAnalyticsParameters, METADATA_PARAMS(Z_Construct_UScriptStruct_FDynamicLinkComponents_Statics::NewProp_ItunesConnectAnalyticsParameters_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDynamicLinkComponents_Statics::NewProp_ItunesConnectAnalyticsParameters_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDynamicLinkComponents_Statics::NewProp_AndroidParameters_MetaData[] = {
		{ "Category", "Firebase|DynamicLinks" },
		{ "Comment", "/// The Android parameters.\n" },
		{ "ModuleRelativePath", "Public/DynamicLinks/DynamicLinks.h" },
		{ "ToolTip", "The Android parameters." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDynamicLinkComponents_Statics::NewProp_AndroidParameters = { "AndroidParameters", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDynamicLinkComponents, AndroidParameters), Z_Construct_UScriptStruct_FAndroidParameters, METADATA_PARAMS(Z_Construct_UScriptStruct_FDynamicLinkComponents_Statics::NewProp_AndroidParameters_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDynamicLinkComponents_Statics::NewProp_AndroidParameters_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDynamicLinkComponents_Statics::NewProp_SocialMetaTagParameters_MetaData[] = {
		{ "Category", "Firebase|DynamicLinks" },
		{ "Comment", "/// The social meta-tag parameters.\n" },
		{ "ModuleRelativePath", "Public/DynamicLinks/DynamicLinks.h" },
		{ "ToolTip", "The social meta-tag parameters." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDynamicLinkComponents_Statics::NewProp_SocialMetaTagParameters = { "SocialMetaTagParameters", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDynamicLinkComponents, SocialMetaTagParameters), Z_Construct_UScriptStruct_FSocialMetaTagParameters, METADATA_PARAMS(Z_Construct_UScriptStruct_FDynamicLinkComponents_Statics::NewProp_SocialMetaTagParameters_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDynamicLinkComponents_Statics::NewProp_SocialMetaTagParameters_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDynamicLinkComponents_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDynamicLinkComponents_Statics::NewProp_Link,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDynamicLinkComponents_Statics::NewProp_DomainUriPrefix,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDynamicLinkComponents_Statics::NewProp_GoogleAnalyticsParameters,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDynamicLinkComponents_Statics::NewProp_IOSParameters,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDynamicLinkComponents_Statics::NewProp_ItunesConnectAnalyticsParameters,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDynamicLinkComponents_Statics::NewProp_AndroidParameters,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDynamicLinkComponents_Statics::NewProp_SocialMetaTagParameters,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDynamicLinkComponents_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FirebaseFeatures,
		nullptr,
		&NewStructOps,
		"DynamicLinkComponents",
		sizeof(FDynamicLinkComponents),
		alignof(FDynamicLinkComponents),
		Z_Construct_UScriptStruct_FDynamicLinkComponents_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDynamicLinkComponents_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDynamicLinkComponents_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDynamicLinkComponents_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDynamicLinkComponents()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDynamicLinkComponents_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_FirebaseFeatures();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DynamicLinkComponents"), sizeof(FDynamicLinkComponents), Get_Z_Construct_UScriptStruct_FDynamicLinkComponents_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDynamicLinkComponents_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDynamicLinkComponents_Hash() { return 3356750969U; }
class UScriptStruct* FGeneratedDynamicLink::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FIREBASEFEATURES_API uint32 Get_Z_Construct_UScriptStruct_FGeneratedDynamicLink_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGeneratedDynamicLink, Z_Construct_UPackage__Script_FirebaseFeatures(), TEXT("GeneratedDynamicLink"), sizeof(FGeneratedDynamicLink), Get_Z_Construct_UScriptStruct_FGeneratedDynamicLink_Hash());
	}
	return Singleton;
}
template<> FIREBASEFEATURES_API UScriptStruct* StaticStruct<FGeneratedDynamicLink>()
{
	return FGeneratedDynamicLink::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGeneratedDynamicLink(FGeneratedDynamicLink::StaticStruct, TEXT("/Script/FirebaseFeatures"), TEXT("GeneratedDynamicLink"), false, nullptr, nullptr);
static struct FScriptStruct_FirebaseFeatures_StaticRegisterNativesFGeneratedDynamicLink
{
	FScriptStruct_FirebaseFeatures_StaticRegisterNativesFGeneratedDynamicLink()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("GeneratedDynamicLink")),new UScriptStruct::TCppStructOps<FGeneratedDynamicLink>);
	}
} ScriptStruct_FirebaseFeatures_StaticRegisterNativesFGeneratedDynamicLink;
	struct Z_Construct_UScriptStruct_FGeneratedDynamicLink_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Url_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Url;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Warnings_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Warnings_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Warnings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Error_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Error;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeneratedDynamicLink_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/// @brief The returned value from creating a Dynamic Link.\n" },
		{ "ModuleRelativePath", "Public/DynamicLinks/DynamicLinks.h" },
		{ "ToolTip", "@brief The returned value from creating a Dynamic Link." },
	};
#endif
	void* Z_Construct_UScriptStruct_FGeneratedDynamicLink_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGeneratedDynamicLink>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeneratedDynamicLink_Statics::NewProp_Url_MetaData[] = {
		{ "Category", "Firebase|DynamicLinks" },
		{ "Comment", "/// The Dynamic Link value.\n" },
		{ "ModuleRelativePath", "Public/DynamicLinks/DynamicLinks.h" },
		{ "ToolTip", "The Dynamic Link value." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGeneratedDynamicLink_Statics::NewProp_Url = { "Url", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGeneratedDynamicLink, Url), METADATA_PARAMS(Z_Construct_UScriptStruct_FGeneratedDynamicLink_Statics::NewProp_Url_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeneratedDynamicLink_Statics::NewProp_Url_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGeneratedDynamicLink_Statics::NewProp_Warnings_Inner = { "Warnings", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeneratedDynamicLink_Statics::NewProp_Warnings_MetaData[] = {
		{ "Category", "Firebase|DynamicLinks" },
		{ "Comment", "/// Information about potential warnings on link creation.\n///\n/// Usually presence of warnings means parameter format errors, parameter\n/// value errors, or missing parameters.\n" },
		{ "ModuleRelativePath", "Public/DynamicLinks/DynamicLinks.h" },
		{ "ToolTip", "Information about potential warnings on link creation.\n\nUsually presence of warnings means parameter format errors, parameter\nvalue errors, or missing parameters." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGeneratedDynamicLink_Statics::NewProp_Warnings = { "Warnings", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGeneratedDynamicLink, Warnings), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeneratedDynamicLink_Statics::NewProp_Warnings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeneratedDynamicLink_Statics::NewProp_Warnings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeneratedDynamicLink_Statics::NewProp_Error_MetaData[] = {
		{ "Category", "Firebase|DynamicLinks" },
		{ "Comment", "/// If non-empty, the cause of the Dynamic Link generation failure.\n" },
		{ "ModuleRelativePath", "Public/DynamicLinks/DynamicLinks.h" },
		{ "ToolTip", "If non-empty, the cause of the Dynamic Link generation failure." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGeneratedDynamicLink_Statics::NewProp_Error = { "Error", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGeneratedDynamicLink, Error), METADATA_PARAMS(Z_Construct_UScriptStruct_FGeneratedDynamicLink_Statics::NewProp_Error_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeneratedDynamicLink_Statics::NewProp_Error_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGeneratedDynamicLink_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeneratedDynamicLink_Statics::NewProp_Url,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeneratedDynamicLink_Statics::NewProp_Warnings_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeneratedDynamicLink_Statics::NewProp_Warnings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeneratedDynamicLink_Statics::NewProp_Error,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGeneratedDynamicLink_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FirebaseFeatures,
		nullptr,
		&NewStructOps,
		"GeneratedDynamicLink",
		sizeof(FGeneratedDynamicLink),
		alignof(FGeneratedDynamicLink),
		Z_Construct_UScriptStruct_FGeneratedDynamicLink_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeneratedDynamicLink_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGeneratedDynamicLink_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeneratedDynamicLink_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGeneratedDynamicLink()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGeneratedDynamicLink_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_FirebaseFeatures();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GeneratedDynamicLink"), sizeof(FGeneratedDynamicLink), Get_Z_Construct_UScriptStruct_FGeneratedDynamicLink_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGeneratedDynamicLink_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGeneratedDynamicLink_Hash() { return 171442064U; }
class UScriptStruct* FDynamicLinkOptions::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FIREBASEFEATURES_API uint32 Get_Z_Construct_UScriptStruct_FDynamicLinkOptions_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDynamicLinkOptions, Z_Construct_UPackage__Script_FirebaseFeatures(), TEXT("DynamicLinkOptions"), sizeof(FDynamicLinkOptions), Get_Z_Construct_UScriptStruct_FDynamicLinkOptions_Hash());
	}
	return Singleton;
}
template<> FIREBASEFEATURES_API UScriptStruct* StaticStruct<FDynamicLinkOptions>()
{
	return FDynamicLinkOptions::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDynamicLinkOptions(FDynamicLinkOptions::StaticStruct, TEXT("/Script/FirebaseFeatures"), TEXT("DynamicLinkOptions"), false, nullptr, nullptr);
static struct FScriptStruct_FirebaseFeatures_StaticRegisterNativesFDynamicLinkOptions
{
	FScriptStruct_FirebaseFeatures_StaticRegisterNativesFDynamicLinkOptions()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("DynamicLinkOptions")),new UScriptStruct::TCppStructOps<FDynamicLinkOptions>);
	}
} ScriptStruct_FirebaseFeatures_StaticRegisterNativesFDynamicLinkOptions;
	struct Z_Construct_UScriptStruct_FDynamicLinkOptions_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PathLength_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PathLength_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PathLength;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDynamicLinkOptions_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/// @brief Additional options for Dynamic Link creation.\n" },
		{ "ModuleRelativePath", "Public/DynamicLinks/DynamicLinks.h" },
		{ "ToolTip", "@brief Additional options for Dynamic Link creation." },
	};
#endif
	void* Z_Construct_UScriptStruct_FDynamicLinkOptions_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDynamicLinkOptions>();
	}
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FDynamicLinkOptions_Statics::NewProp_PathLength_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDynamicLinkOptions_Statics::NewProp_PathLength_MetaData[] = {
		{ "Category", "Firebase|DynamicLinks" },
		{ "Comment", "/// The desired path length for shortened Dynamic Link URLs.\n" },
		{ "ModuleRelativePath", "Public/DynamicLinks/DynamicLinks.h" },
		{ "ToolTip", "The desired path length for shortened Dynamic Link URLs." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FDynamicLinkOptions_Statics::NewProp_PathLength = { "PathLength", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDynamicLinkOptions, PathLength), Z_Construct_UEnum_FirebaseFeatures_EPathLength, METADATA_PARAMS(Z_Construct_UScriptStruct_FDynamicLinkOptions_Statics::NewProp_PathLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDynamicLinkOptions_Statics::NewProp_PathLength_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDynamicLinkOptions_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDynamicLinkOptions_Statics::NewProp_PathLength_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDynamicLinkOptions_Statics::NewProp_PathLength,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDynamicLinkOptions_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FirebaseFeatures,
		nullptr,
		&NewStructOps,
		"DynamicLinkOptions",
		sizeof(FDynamicLinkOptions),
		alignof(FDynamicLinkOptions),
		Z_Construct_UScriptStruct_FDynamicLinkOptions_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDynamicLinkOptions_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDynamicLinkOptions_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDynamicLinkOptions_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDynamicLinkOptions()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDynamicLinkOptions_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_FirebaseFeatures();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DynamicLinkOptions"), sizeof(FDynamicLinkOptions), Get_Z_Construct_UScriptStruct_FDynamicLinkOptions_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDynamicLinkOptions_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDynamicLinkOptions_Hash() { return 681982459U; }
class UScriptStruct* FSocialMetaTagParameters::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FIREBASEFEATURES_API uint32 Get_Z_Construct_UScriptStruct_FSocialMetaTagParameters_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSocialMetaTagParameters, Z_Construct_UPackage__Script_FirebaseFeatures(), TEXT("SocialMetaTagParameters"), sizeof(FSocialMetaTagParameters), Get_Z_Construct_UScriptStruct_FSocialMetaTagParameters_Hash());
	}
	return Singleton;
}
template<> FIREBASEFEATURES_API UScriptStruct* StaticStruct<FSocialMetaTagParameters>()
{
	return FSocialMetaTagParameters::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSocialMetaTagParameters(FSocialMetaTagParameters::StaticStruct, TEXT("/Script/FirebaseFeatures"), TEXT("SocialMetaTagParameters"), false, nullptr, nullptr);
static struct FScriptStruct_FirebaseFeatures_StaticRegisterNativesFSocialMetaTagParameters
{
	FScriptStruct_FirebaseFeatures_StaticRegisterNativesFSocialMetaTagParameters()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SocialMetaTagParameters")),new UScriptStruct::TCppStructOps<FSocialMetaTagParameters>);
	}
} ScriptStruct_FirebaseFeatures_StaticRegisterNativesFSocialMetaTagParameters;
	struct Z_Construct_UScriptStruct_FSocialMetaTagParameters_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Title_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Title;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Description;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ImageUrl_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ImageUrl;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSocialMetaTagParameters_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/// @brief Social meta-tag Parameters.\n///\n/// Note that the strings used by the struct are not copied, as so must\n/// either be statically allocated, or must persist in memory until the\n/// DynamicLinkComponents that uses them goes out of scope.\n" },
		{ "ModuleRelativePath", "Public/DynamicLinks/DynamicLinks.h" },
		{ "ToolTip", "@brief Social meta-tag Parameters.\n\nNote that the strings used by the struct are not copied, as so must\neither be statically allocated, or must persist in memory until the\nDynamicLinkComponents that uses them goes out of scope." },
	};
#endif
	void* Z_Construct_UScriptStruct_FSocialMetaTagParameters_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSocialMetaTagParameters>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSocialMetaTagParameters_Statics::NewProp_Title_MetaData[] = {
		{ "Category", "Firebase|DynamicLinks" },
		{ "Comment", "/// The title to use when the Dynamic Link is shared in a social post.\n" },
		{ "ModuleRelativePath", "Public/DynamicLinks/DynamicLinks.h" },
		{ "ToolTip", "The title to use when the Dynamic Link is shared in a social post." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSocialMetaTagParameters_Statics::NewProp_Title = { "Title", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSocialMetaTagParameters, Title), METADATA_PARAMS(Z_Construct_UScriptStruct_FSocialMetaTagParameters_Statics::NewProp_Title_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSocialMetaTagParameters_Statics::NewProp_Title_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSocialMetaTagParameters_Statics::NewProp_Description_MetaData[] = {
		{ "Category", "Firebase|DynamicLinks" },
		{ "Comment", "/// The description to use when the Dynamic Link is shared in a social post.\n" },
		{ "ModuleRelativePath", "Public/DynamicLinks/DynamicLinks.h" },
		{ "ToolTip", "The description to use when the Dynamic Link is shared in a social post." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSocialMetaTagParameters_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSocialMetaTagParameters, Description), METADATA_PARAMS(Z_Construct_UScriptStruct_FSocialMetaTagParameters_Statics::NewProp_Description_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSocialMetaTagParameters_Statics::NewProp_Description_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSocialMetaTagParameters_Statics::NewProp_ImageUrl_MetaData[] = {
		{ "Category", "Firebase|DynamicLinks" },
		{ "Comment", "/// The URL to an image related to this link.\n" },
		{ "ModuleRelativePath", "Public/DynamicLinks/DynamicLinks.h" },
		{ "ToolTip", "The URL to an image related to this link." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSocialMetaTagParameters_Statics::NewProp_ImageUrl = { "ImageUrl", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSocialMetaTagParameters, ImageUrl), METADATA_PARAMS(Z_Construct_UScriptStruct_FSocialMetaTagParameters_Statics::NewProp_ImageUrl_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSocialMetaTagParameters_Statics::NewProp_ImageUrl_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSocialMetaTagParameters_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSocialMetaTagParameters_Statics::NewProp_Title,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSocialMetaTagParameters_Statics::NewProp_Description,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSocialMetaTagParameters_Statics::NewProp_ImageUrl,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSocialMetaTagParameters_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FirebaseFeatures,
		nullptr,
		&NewStructOps,
		"SocialMetaTagParameters",
		sizeof(FSocialMetaTagParameters),
		alignof(FSocialMetaTagParameters),
		Z_Construct_UScriptStruct_FSocialMetaTagParameters_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSocialMetaTagParameters_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSocialMetaTagParameters_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSocialMetaTagParameters_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSocialMetaTagParameters()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSocialMetaTagParameters_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_FirebaseFeatures();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SocialMetaTagParameters"), sizeof(FSocialMetaTagParameters), Get_Z_Construct_UScriptStruct_FSocialMetaTagParameters_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSocialMetaTagParameters_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSocialMetaTagParameters_Hash() { return 2646699019U; }
class UScriptStruct* FAndroidParameters::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FIREBASEFEATURES_API uint32 Get_Z_Construct_UScriptStruct_FAndroidParameters_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAndroidParameters, Z_Construct_UPackage__Script_FirebaseFeatures(), TEXT("AndroidParameters"), sizeof(FAndroidParameters), Get_Z_Construct_UScriptStruct_FAndroidParameters_Hash());
	}
	return Singleton;
}
template<> FIREBASEFEATURES_API UScriptStruct* StaticStruct<FAndroidParameters>()
{
	return FAndroidParameters::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAndroidParameters(FAndroidParameters::StaticStruct, TEXT("/Script/FirebaseFeatures"), TEXT("AndroidParameters"), false, nullptr, nullptr);
static struct FScriptStruct_FirebaseFeatures_StaticRegisterNativesFAndroidParameters
{
	FScriptStruct_FirebaseFeatures_StaticRegisterNativesFAndroidParameters()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AndroidParameters")),new UScriptStruct::TCppStructOps<FAndroidParameters>);
	}
} ScriptStruct_FirebaseFeatures_StaticRegisterNativesFAndroidParameters;
	struct Z_Construct_UScriptStruct_FAndroidParameters_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PackageName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PackageName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FallbackUrl_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FallbackUrl;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinimumVersion_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_MinimumVersion;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAndroidParameters_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/// @brief Android Parameters.\n///\n/// Note that the strings used by the struct are not copied, as so must\n/// either be statically allocated, or must persist in memory until the\n/// DynamicLinkComponents that uses them goes out of scope.\n" },
		{ "ModuleRelativePath", "Public/DynamicLinks/DynamicLinks.h" },
		{ "ToolTip", "@brief Android Parameters.\n\nNote that the strings used by the struct are not copied, as so must\neither be statically allocated, or must persist in memory until the\nDynamicLinkComponents that uses them goes out of scope." },
	};
#endif
	void* Z_Construct_UScriptStruct_FAndroidParameters_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAndroidParameters>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAndroidParameters_Statics::NewProp_PackageName_MetaData[] = {
		{ "Category", "Firebase|DynamicLinks" },
		{ "Comment", "/// The package name of the Android app to use to open the link. The app\n/// must be connected to your project from the Overview page of the Firebase\n/// console.\n/// Note this field is required.\n" },
		{ "ModuleRelativePath", "Public/DynamicLinks/DynamicLinks.h" },
		{ "ToolTip", "The package name of the Android app to use to open the link. The app\nmust be connected to your project from the Overview page of the Firebase\nconsole.\nNote this field is required." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAndroidParameters_Statics::NewProp_PackageName = { "PackageName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAndroidParameters, PackageName), METADATA_PARAMS(Z_Construct_UScriptStruct_FAndroidParameters_Statics::NewProp_PackageName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAndroidParameters_Statics::NewProp_PackageName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAndroidParameters_Statics::NewProp_FallbackUrl_MetaData[] = {
		{ "Category", "Firebase|DynamicLinks" },
		{ "Comment", "/// The link to open when the app isn't installed.\n///\n/// Specify this to do something other than install your app from the\n/// Play Store when the app isn't installed, such as open the mobile web\n/// version of the content, or display a promotional page for your app.\n" },
		{ "ModuleRelativePath", "Public/DynamicLinks/DynamicLinks.h" },
		{ "ToolTip", "The link to open when the app isn't installed.\n\nSpecify this to do something other than install your app from the\nPlay Store when the app isn't installed, such as open the mobile web\nversion of the content, or display a promotional page for your app." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAndroidParameters_Statics::NewProp_FallbackUrl = { "FallbackUrl", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAndroidParameters, FallbackUrl), METADATA_PARAMS(Z_Construct_UScriptStruct_FAndroidParameters_Statics::NewProp_FallbackUrl_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAndroidParameters_Statics::NewProp_FallbackUrl_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAndroidParameters_Statics::NewProp_MinimumVersion_MetaData[] = {
		{ "Category", "Firebase|DynamicLinks" },
		{ "Comment", "/// The versionCode of the minimum version of your app that can open the link.\n" },
		{ "ModuleRelativePath", "Public/DynamicLinks/DynamicLinks.h" },
		{ "ToolTip", "The versionCode of the minimum version of your app that can open the link." },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FAndroidParameters_Statics::NewProp_MinimumVersion = { "MinimumVersion", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAndroidParameters, MinimumVersion), METADATA_PARAMS(Z_Construct_UScriptStruct_FAndroidParameters_Statics::NewProp_MinimumVersion_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAndroidParameters_Statics::NewProp_MinimumVersion_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAndroidParameters_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAndroidParameters_Statics::NewProp_PackageName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAndroidParameters_Statics::NewProp_FallbackUrl,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAndroidParameters_Statics::NewProp_MinimumVersion,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAndroidParameters_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FirebaseFeatures,
		nullptr,
		&NewStructOps,
		"AndroidParameters",
		sizeof(FAndroidParameters),
		alignof(FAndroidParameters),
		Z_Construct_UScriptStruct_FAndroidParameters_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAndroidParameters_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAndroidParameters_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAndroidParameters_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAndroidParameters()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAndroidParameters_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_FirebaseFeatures();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AndroidParameters"), sizeof(FAndroidParameters), Get_Z_Construct_UScriptStruct_FAndroidParameters_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAndroidParameters_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAndroidParameters_Hash() { return 204477106U; }
class UScriptStruct* FITunesConnectAnalyticsParameters::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FIREBASEFEATURES_API uint32 Get_Z_Construct_UScriptStruct_FITunesConnectAnalyticsParameters_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FITunesConnectAnalyticsParameters, Z_Construct_UPackage__Script_FirebaseFeatures(), TEXT("ITunesConnectAnalyticsParameters"), sizeof(FITunesConnectAnalyticsParameters), Get_Z_Construct_UScriptStruct_FITunesConnectAnalyticsParameters_Hash());
	}
	return Singleton;
}
template<> FIREBASEFEATURES_API UScriptStruct* StaticStruct<FITunesConnectAnalyticsParameters>()
{
	return FITunesConnectAnalyticsParameters::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FITunesConnectAnalyticsParameters(FITunesConnectAnalyticsParameters::StaticStruct, TEXT("/Script/FirebaseFeatures"), TEXT("ITunesConnectAnalyticsParameters"), false, nullptr, nullptr);
static struct FScriptStruct_FirebaseFeatures_StaticRegisterNativesFITunesConnectAnalyticsParameters
{
	FScriptStruct_FirebaseFeatures_StaticRegisterNativesFITunesConnectAnalyticsParameters()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ITunesConnectAnalyticsParameters")),new UScriptStruct::TCppStructOps<FITunesConnectAnalyticsParameters>);
	}
} ScriptStruct_FirebaseFeatures_StaticRegisterNativesFITunesConnectAnalyticsParameters;
	struct Z_Construct_UScriptStruct_FITunesConnectAnalyticsParameters_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProviderToken_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ProviderToken;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AffiliateToken_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AffiliateToken;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CampaignToken_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CampaignToken;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FITunesConnectAnalyticsParameters_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/// @brief iTunes Connect App Analytics Parameters.\n///\n/// Note that the strings used by the struct are not copied, as so must\n/// either be statically allocated, or must persist in memory until the\n/// DynamicLinkComponents that uses them goes out of scope.\n" },
		{ "ModuleRelativePath", "Public/DynamicLinks/DynamicLinks.h" },
		{ "ToolTip", "@brief iTunes Connect App Analytics Parameters.\n\nNote that the strings used by the struct are not copied, as so must\neither be statically allocated, or must persist in memory until the\nDynamicLinkComponents that uses them goes out of scope." },
	};
#endif
	void* Z_Construct_UScriptStruct_FITunesConnectAnalyticsParameters_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FITunesConnectAnalyticsParameters>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FITunesConnectAnalyticsParameters_Statics::NewProp_ProviderToken_MetaData[] = {
		{ "Category", "Firebase|DynamicLinks" },
		{ "Comment", "/// The provider token that enables analytics for Dynamic Links from\n/// within iTunes Connect.\n" },
		{ "ModuleRelativePath", "Public/DynamicLinks/DynamicLinks.h" },
		{ "ToolTip", "The provider token that enables analytics for Dynamic Links from\nwithin iTunes Connect." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FITunesConnectAnalyticsParameters_Statics::NewProp_ProviderToken = { "ProviderToken", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FITunesConnectAnalyticsParameters, ProviderToken), METADATA_PARAMS(Z_Construct_UScriptStruct_FITunesConnectAnalyticsParameters_Statics::NewProp_ProviderToken_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FITunesConnectAnalyticsParameters_Statics::NewProp_ProviderToken_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FITunesConnectAnalyticsParameters_Statics::NewProp_AffiliateToken_MetaData[] = {
		{ "Category", "Firebase|DynamicLinks" },
		{ "Comment", "/// The affiliate token used to create affiliate-coded links.\n" },
		{ "ModuleRelativePath", "Public/DynamicLinks/DynamicLinks.h" },
		{ "ToolTip", "The affiliate token used to create affiliate-coded links." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FITunesConnectAnalyticsParameters_Statics::NewProp_AffiliateToken = { "AffiliateToken", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FITunesConnectAnalyticsParameters, AffiliateToken), METADATA_PARAMS(Z_Construct_UScriptStruct_FITunesConnectAnalyticsParameters_Statics::NewProp_AffiliateToken_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FITunesConnectAnalyticsParameters_Statics::NewProp_AffiliateToken_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FITunesConnectAnalyticsParameters_Statics::NewProp_CampaignToken_MetaData[] = {
		{ "Category", "Firebase|DynamicLinks" },
		{ "Comment", "/// The campaign token that developers can add to any link in order to\n/// track sales from a specific marketing campaign.\n" },
		{ "ModuleRelativePath", "Public/DynamicLinks/DynamicLinks.h" },
		{ "ToolTip", "The campaign token that developers can add to any link in order to\ntrack sales from a specific marketing campaign." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FITunesConnectAnalyticsParameters_Statics::NewProp_CampaignToken = { "CampaignToken", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FITunesConnectAnalyticsParameters, CampaignToken), METADATA_PARAMS(Z_Construct_UScriptStruct_FITunesConnectAnalyticsParameters_Statics::NewProp_CampaignToken_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FITunesConnectAnalyticsParameters_Statics::NewProp_CampaignToken_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FITunesConnectAnalyticsParameters_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FITunesConnectAnalyticsParameters_Statics::NewProp_ProviderToken,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FITunesConnectAnalyticsParameters_Statics::NewProp_AffiliateToken,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FITunesConnectAnalyticsParameters_Statics::NewProp_CampaignToken,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FITunesConnectAnalyticsParameters_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FirebaseFeatures,
		nullptr,
		&NewStructOps,
		"ITunesConnectAnalyticsParameters",
		sizeof(FITunesConnectAnalyticsParameters),
		alignof(FITunesConnectAnalyticsParameters),
		Z_Construct_UScriptStruct_FITunesConnectAnalyticsParameters_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FITunesConnectAnalyticsParameters_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FITunesConnectAnalyticsParameters_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FITunesConnectAnalyticsParameters_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FITunesConnectAnalyticsParameters()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FITunesConnectAnalyticsParameters_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_FirebaseFeatures();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ITunesConnectAnalyticsParameters"), sizeof(FITunesConnectAnalyticsParameters), Get_Z_Construct_UScriptStruct_FITunesConnectAnalyticsParameters_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FITunesConnectAnalyticsParameters_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FITunesConnectAnalyticsParameters_Hash() { return 4215580363U; }
class UScriptStruct* FIOSParameters::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FIREBASEFEATURES_API uint32 Get_Z_Construct_UScriptStruct_FIOSParameters_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FIOSParameters, Z_Construct_UPackage__Script_FirebaseFeatures(), TEXT("IOSParameters"), sizeof(FIOSParameters), Get_Z_Construct_UScriptStruct_FIOSParameters_Hash());
	}
	return Singleton;
}
template<> FIREBASEFEATURES_API UScriptStruct* StaticStruct<FIOSParameters>()
{
	return FIOSParameters::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FIOSParameters(FIOSParameters::StaticStruct, TEXT("/Script/FirebaseFeatures"), TEXT("IOSParameters"), false, nullptr, nullptr);
static struct FScriptStruct_FirebaseFeatures_StaticRegisterNativesFIOSParameters
{
	FScriptStruct_FirebaseFeatures_StaticRegisterNativesFIOSParameters()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("IOSParameters")),new UScriptStruct::TCppStructOps<FIOSParameters>);
	}
} ScriptStruct_FirebaseFeatures_StaticRegisterNativesFIOSParameters;
	struct Z_Construct_UScriptStruct_FIOSParameters_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BundleId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_BundleId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FallbackUrl_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FallbackUrl;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomScheme_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CustomScheme;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IpadFallbackUrl_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_IpadFallbackUrl;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IpadBundleId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_IpadBundleId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AppStoreId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AppStoreId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinimumVersion_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MinimumVersion;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FIOSParameters_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/// @brief iOS Parameters.\n///\n/// Note that the strings used by the struct are not copied, as so must\n/// either be statically allocated, or must persist in memory until the\n/// DynamicLinkComponents that uses them goes out of scope.\n" },
		{ "ModuleRelativePath", "Public/DynamicLinks/DynamicLinks.h" },
		{ "ToolTip", "@brief iOS Parameters.\n\nNote that the strings used by the struct are not copied, as so must\neither be statically allocated, or must persist in memory until the\nDynamicLinkComponents that uses them goes out of scope." },
	};
#endif
	void* Z_Construct_UScriptStruct_FIOSParameters_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FIOSParameters>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FIOSParameters_Statics::NewProp_BundleId_MetaData[] = {
		{ "Category", "Firebase|DynamicLinks" },
		{ "Comment", "/// The parameters ID of the iOS app to use to open the link. The app must be\n/// connected to your project from the Overview page of the Firebase console.\n/// Note this field is required.\n" },
		{ "ModuleRelativePath", "Public/DynamicLinks/DynamicLinks.h" },
		{ "ToolTip", "The parameters ID of the iOS app to use to open the link. The app must be\nconnected to your project from the Overview page of the Firebase console.\nNote this field is required." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FIOSParameters_Statics::NewProp_BundleId = { "BundleId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FIOSParameters, BundleId), METADATA_PARAMS(Z_Construct_UScriptStruct_FIOSParameters_Statics::NewProp_BundleId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIOSParameters_Statics::NewProp_BundleId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FIOSParameters_Statics::NewProp_FallbackUrl_MetaData[] = {
		{ "Category", "Firebase|DynamicLinks" },
		{ "Comment", "/// The link to open on iOS if the app is not installed.\n///\n/// Specify this to do something other than install your app from the\n/// App Store when the app isn't installed, such as open the mobile\n/// web version of the content, or display a promotional page for your app.\n" },
		{ "ModuleRelativePath", "Public/DynamicLinks/DynamicLinks.h" },
		{ "ToolTip", "The link to open on iOS if the app is not installed.\n\nSpecify this to do something other than install your app from the\nApp Store when the app isn't installed, such as open the mobile\nweb version of the content, or display a promotional page for your app." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FIOSParameters_Statics::NewProp_FallbackUrl = { "FallbackUrl", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FIOSParameters, FallbackUrl), METADATA_PARAMS(Z_Construct_UScriptStruct_FIOSParameters_Statics::NewProp_FallbackUrl_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIOSParameters_Statics::NewProp_FallbackUrl_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FIOSParameters_Statics::NewProp_CustomScheme_MetaData[] = {
		{ "Category", "Firebase|DynamicLinks" },
		{ "Comment", "/// The app's custom URL scheme, if defined to be something other than your\n/// app's parameters ID.\n" },
		{ "ModuleRelativePath", "Public/DynamicLinks/DynamicLinks.h" },
		{ "ToolTip", "The app's custom URL scheme, if defined to be something other than your\napp's parameters ID." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FIOSParameters_Statics::NewProp_CustomScheme = { "CustomScheme", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FIOSParameters, CustomScheme), METADATA_PARAMS(Z_Construct_UScriptStruct_FIOSParameters_Statics::NewProp_CustomScheme_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIOSParameters_Statics::NewProp_CustomScheme_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FIOSParameters_Statics::NewProp_IpadFallbackUrl_MetaData[] = {
		{ "Category", "Firebase|DynamicLinks" },
		{ "Comment", "/// The link to open on iPad if the app is not installed.\n///\n/// Overrides fallback_url when on iPad.\n" },
		{ "ModuleRelativePath", "Public/DynamicLinks/DynamicLinks.h" },
		{ "ToolTip", "The link to open on iPad if the app is not installed.\n\nOverrides fallback_url when on iPad." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FIOSParameters_Statics::NewProp_IpadFallbackUrl = { "IpadFallbackUrl", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FIOSParameters, IpadFallbackUrl), METADATA_PARAMS(Z_Construct_UScriptStruct_FIOSParameters_Statics::NewProp_IpadFallbackUrl_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIOSParameters_Statics::NewProp_IpadFallbackUrl_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FIOSParameters_Statics::NewProp_IpadBundleId_MetaData[] = {
		{ "Category", "Firebase|DynamicLinks" },
		{ "Comment", "/// The iPad parameters ID of the app.\n" },
		{ "ModuleRelativePath", "Public/DynamicLinks/DynamicLinks.h" },
		{ "ToolTip", "The iPad parameters ID of the app." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FIOSParameters_Statics::NewProp_IpadBundleId = { "IpadBundleId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FIOSParameters, IpadBundleId), METADATA_PARAMS(Z_Construct_UScriptStruct_FIOSParameters_Statics::NewProp_IpadBundleId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIOSParameters_Statics::NewProp_IpadBundleId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FIOSParameters_Statics::NewProp_AppStoreId_MetaData[] = {
		{ "Category", "Firebase|DynamicLinks" },
		{ "Comment", "/// The App Store ID, used to send users to the App Store when the app isn't\n/// installed.\n" },
		{ "ModuleRelativePath", "Public/DynamicLinks/DynamicLinks.h" },
		{ "ToolTip", "The App Store ID, used to send users to the App Store when the app isn't\ninstalled." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FIOSParameters_Statics::NewProp_AppStoreId = { "AppStoreId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FIOSParameters, AppStoreId), METADATA_PARAMS(Z_Construct_UScriptStruct_FIOSParameters_Statics::NewProp_AppStoreId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIOSParameters_Statics::NewProp_AppStoreId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FIOSParameters_Statics::NewProp_MinimumVersion_MetaData[] = {
		{ "Category", "Firebase|DynamicLinks" },
		{ "Comment", "/// The minimum version of your app that can open the link.\n" },
		{ "ModuleRelativePath", "Public/DynamicLinks/DynamicLinks.h" },
		{ "ToolTip", "The minimum version of your app that can open the link." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FIOSParameters_Statics::NewProp_MinimumVersion = { "MinimumVersion", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FIOSParameters, MinimumVersion), METADATA_PARAMS(Z_Construct_UScriptStruct_FIOSParameters_Statics::NewProp_MinimumVersion_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIOSParameters_Statics::NewProp_MinimumVersion_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FIOSParameters_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIOSParameters_Statics::NewProp_BundleId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIOSParameters_Statics::NewProp_FallbackUrl,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIOSParameters_Statics::NewProp_CustomScheme,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIOSParameters_Statics::NewProp_IpadFallbackUrl,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIOSParameters_Statics::NewProp_IpadBundleId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIOSParameters_Statics::NewProp_AppStoreId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIOSParameters_Statics::NewProp_MinimumVersion,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FIOSParameters_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FirebaseFeatures,
		nullptr,
		&NewStructOps,
		"IOSParameters",
		sizeof(FIOSParameters),
		alignof(FIOSParameters),
		Z_Construct_UScriptStruct_FIOSParameters_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIOSParameters_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FIOSParameters_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIOSParameters_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FIOSParameters()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FIOSParameters_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_FirebaseFeatures();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("IOSParameters"), sizeof(FIOSParameters), Get_Z_Construct_UScriptStruct_FIOSParameters_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FIOSParameters_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FIOSParameters_Hash() { return 666208561U; }
class UScriptStruct* FGoogleAnalyticsParameters::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FIREBASEFEATURES_API uint32 Get_Z_Construct_UScriptStruct_FGoogleAnalyticsParameters_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGoogleAnalyticsParameters, Z_Construct_UPackage__Script_FirebaseFeatures(), TEXT("GoogleAnalyticsParameters"), sizeof(FGoogleAnalyticsParameters), Get_Z_Construct_UScriptStruct_FGoogleAnalyticsParameters_Hash());
	}
	return Singleton;
}
template<> FIREBASEFEATURES_API UScriptStruct* StaticStruct<FGoogleAnalyticsParameters>()
{
	return FGoogleAnalyticsParameters::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGoogleAnalyticsParameters(FGoogleAnalyticsParameters::StaticStruct, TEXT("/Script/FirebaseFeatures"), TEXT("GoogleAnalyticsParameters"), false, nullptr, nullptr);
static struct FScriptStruct_FirebaseFeatures_StaticRegisterNativesFGoogleAnalyticsParameters
{
	FScriptStruct_FirebaseFeatures_StaticRegisterNativesFGoogleAnalyticsParameters()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("GoogleAnalyticsParameters")),new UScriptStruct::TCppStructOps<FGoogleAnalyticsParameters>);
	}
} ScriptStruct_FirebaseFeatures_StaticRegisterNativesFGoogleAnalyticsParameters;
	struct Z_Construct_UScriptStruct_FGoogleAnalyticsParameters_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Source_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Source;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Medium_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Medium;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Campaign_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Campaign;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Term_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Term;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Content_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Content;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGoogleAnalyticsParameters_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/// @brief Google Analytics Parameters.\n///\n/// Note that the strings used by the struct are not copied, as so must\n/// either be statically allocated, or must persist in memory until the\n/// DynamicLinkComponents that uses them goes out of scope.\n" },
		{ "ModuleRelativePath", "Public/DynamicLinks/DynamicLinks.h" },
		{ "ToolTip", "@brief Google Analytics Parameters.\n\nNote that the strings used by the struct are not copied, as so must\neither be statically allocated, or must persist in memory until the\nDynamicLinkComponents that uses them goes out of scope." },
	};
#endif
	void* Z_Construct_UScriptStruct_FGoogleAnalyticsParameters_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGoogleAnalyticsParameters>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGoogleAnalyticsParameters_Statics::NewProp_Source_MetaData[] = {
		{ "Category", "Firebase|DynamicLinks" },
		{ "Comment", "/// The campaign source; used to identify a search engine, newsletter,\n/// or other source.\n" },
		{ "ModuleRelativePath", "Public/DynamicLinks/DynamicLinks.h" },
		{ "ToolTip", "The campaign source; used to identify a search engine, newsletter,\nor other source." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGoogleAnalyticsParameters_Statics::NewProp_Source = { "Source", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGoogleAnalyticsParameters, Source), METADATA_PARAMS(Z_Construct_UScriptStruct_FGoogleAnalyticsParameters_Statics::NewProp_Source_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGoogleAnalyticsParameters_Statics::NewProp_Source_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGoogleAnalyticsParameters_Statics::NewProp_Medium_MetaData[] = {
		{ "Category", "Firebase|DynamicLinks" },
		{ "Comment", "/// The campaign medium; used to identify a medium such as email or\n/// cost-per-click (cpc).\n" },
		{ "ModuleRelativePath", "Public/DynamicLinks/DynamicLinks.h" },
		{ "ToolTip", "The campaign medium; used to identify a medium such as email or\ncost-per-click (cpc)." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGoogleAnalyticsParameters_Statics::NewProp_Medium = { "Medium", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGoogleAnalyticsParameters, Medium), METADATA_PARAMS(Z_Construct_UScriptStruct_FGoogleAnalyticsParameters_Statics::NewProp_Medium_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGoogleAnalyticsParameters_Statics::NewProp_Medium_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGoogleAnalyticsParameters_Statics::NewProp_Campaign_MetaData[] = {
		{ "Category", "Firebase|DynamicLinks" },
		{ "Comment", "/// The campaign name; The individual campaign name, slogan, promo code, etc.\n/// for a product.\n" },
		{ "ModuleRelativePath", "Public/DynamicLinks/DynamicLinks.h" },
		{ "ToolTip", "The campaign name; The individual campaign name, slogan, promo code, etc.\nfor a product." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGoogleAnalyticsParameters_Statics::NewProp_Campaign = { "Campaign", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGoogleAnalyticsParameters, Campaign), METADATA_PARAMS(Z_Construct_UScriptStruct_FGoogleAnalyticsParameters_Statics::NewProp_Campaign_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGoogleAnalyticsParameters_Statics::NewProp_Campaign_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGoogleAnalyticsParameters_Statics::NewProp_Term_MetaData[] = {
		{ "Category", "Firebase|DynamicLinks" },
		{ "Comment", "/// The campaign term; used with paid search to supply the keywords for ads.\n" },
		{ "ModuleRelativePath", "Public/DynamicLinks/DynamicLinks.h" },
		{ "ToolTip", "The campaign term; used with paid search to supply the keywords for ads." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGoogleAnalyticsParameters_Statics::NewProp_Term = { "Term", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGoogleAnalyticsParameters, Term), METADATA_PARAMS(Z_Construct_UScriptStruct_FGoogleAnalyticsParameters_Statics::NewProp_Term_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGoogleAnalyticsParameters_Statics::NewProp_Term_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGoogleAnalyticsParameters_Statics::NewProp_Content_MetaData[] = {
		{ "Category", "Firebase|DynamicLinks" },
		{ "Comment", "/// The campaign content; used for A/B testing and content-targeted ads to\n/// differentiate ads or links that point to the same URL.\n" },
		{ "ModuleRelativePath", "Public/DynamicLinks/DynamicLinks.h" },
		{ "ToolTip", "The campaign content; used for A/B testing and content-targeted ads to\ndifferentiate ads or links that point to the same URL." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGoogleAnalyticsParameters_Statics::NewProp_Content = { "Content", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGoogleAnalyticsParameters, Content), METADATA_PARAMS(Z_Construct_UScriptStruct_FGoogleAnalyticsParameters_Statics::NewProp_Content_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGoogleAnalyticsParameters_Statics::NewProp_Content_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGoogleAnalyticsParameters_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGoogleAnalyticsParameters_Statics::NewProp_Source,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGoogleAnalyticsParameters_Statics::NewProp_Medium,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGoogleAnalyticsParameters_Statics::NewProp_Campaign,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGoogleAnalyticsParameters_Statics::NewProp_Term,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGoogleAnalyticsParameters_Statics::NewProp_Content,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGoogleAnalyticsParameters_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FirebaseFeatures,
		nullptr,
		&NewStructOps,
		"GoogleAnalyticsParameters",
		sizeof(FGoogleAnalyticsParameters),
		alignof(FGoogleAnalyticsParameters),
		Z_Construct_UScriptStruct_FGoogleAnalyticsParameters_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGoogleAnalyticsParameters_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGoogleAnalyticsParameters_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGoogleAnalyticsParameters_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGoogleAnalyticsParameters()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGoogleAnalyticsParameters_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_FirebaseFeatures();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GoogleAnalyticsParameters"), sizeof(FGoogleAnalyticsParameters), Get_Z_Construct_UScriptStruct_FGoogleAnalyticsParameters_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGoogleAnalyticsParameters_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGoogleAnalyticsParameters_Hash() { return 2702016816U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
