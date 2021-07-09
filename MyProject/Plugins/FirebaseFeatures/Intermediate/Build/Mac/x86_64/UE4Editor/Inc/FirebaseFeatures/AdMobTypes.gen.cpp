// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FirebaseFeatures/Public/AdMob/AdMobTypes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAdMobTypes() {}
// Cross Module References
	FIREBASEFEATURES_API UEnum* Z_Construct_UEnum_FirebaseFeatures_EAdMobChildDirectedTreatmentState();
	UPackage* Z_Construct_UPackage__Script_FirebaseFeatures();
	FIREBASEFEATURES_API UEnum* Z_Construct_UEnum_FirebaseFeatures_EAdMobGender();
	FIREBASEFEATURES_API UEnum* Z_Construct_UEnum_FirebaseFeatures_EAdMobPresentationState();
	FIREBASEFEATURES_API UEnum* Z_Construct_UEnum_FirebaseFeatures_EAdMobError();
	FIREBASEFEATURES_API UScriptStruct* Z_Construct_UScriptStruct_FAdMobRewardItem();
	FIREBASEFEATURES_API UScriptStruct* Z_Construct_UScriptStruct_FAdMobAdRequest();
	FIREBASEFEATURES_API UScriptStruct* Z_Construct_UScriptStruct_FAdSize();
// End Cross Module References
	static UEnum* EAdMobChildDirectedTreatmentState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_FirebaseFeatures_EAdMobChildDirectedTreatmentState, Z_Construct_UPackage__Script_FirebaseFeatures(), TEXT("EAdMobChildDirectedTreatmentState"));
		}
		return Singleton;
	}
	template<> FIREBASEFEATURES_API UEnum* StaticEnum<EAdMobChildDirectedTreatmentState>()
	{
		return EAdMobChildDirectedTreatmentState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAdMobChildDirectedTreatmentState(EAdMobChildDirectedTreatmentState_StaticEnum, TEXT("/Script/FirebaseFeatures"), TEXT("EAdMobChildDirectedTreatmentState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_FirebaseFeatures_EAdMobChildDirectedTreatmentState_Hash() { return 3511612002U; }
	UEnum* Z_Construct_UEnum_FirebaseFeatures_EAdMobChildDirectedTreatmentState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_FirebaseFeatures();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAdMobChildDirectedTreatmentState"), 0, Get_Z_Construct_UEnum_FirebaseFeatures_EAdMobChildDirectedTreatmentState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAdMobChildDirectedTreatmentState::Unknown", (int64)EAdMobChildDirectedTreatmentState::Unknown },
				{ "EAdMobChildDirectedTreatmentState::Tagged", (int64)EAdMobChildDirectedTreatmentState::Tagged },
				{ "EAdMobChildDirectedTreatmentState::NotTagged", (int64)EAdMobChildDirectedTreatmentState::NotTagged },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "/// @brief Indicates whether an ad request is considered tagged for\n/// child-directed treatment.\n" },
				{ "ModuleRelativePath", "Public/AdMob/AdMobTypes.h" },
				{ "NotTagged.Comment", "/// The request is not tagged for child-directed treatment.\n" },
				{ "NotTagged.Name", "EAdMobChildDirectedTreatmentState::NotTagged" },
				{ "NotTagged.ToolTip", "The request is not tagged for child-directed treatment." },
				{ "Tagged.Comment", "/// The request is tagged for child-directed treatment.\n" },
				{ "Tagged.Name", "EAdMobChildDirectedTreatmentState::Tagged" },
				{ "Tagged.ToolTip", "The request is tagged for child-directed treatment." },
				{ "ToolTip", "@brief Indicates whether an ad request is considered tagged for\nchild-directed treatment." },
				{ "Unknown.Comment", "/// The child-directed status for the request is not indicated.\n" },
				{ "Unknown.Name", "EAdMobChildDirectedTreatmentState::Unknown" },
				{ "Unknown.ToolTip", "The child-directed status for the request is not indicated." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_FirebaseFeatures,
				nullptr,
				"EAdMobChildDirectedTreatmentState",
				"EAdMobChildDirectedTreatmentState",
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
	static UEnum* EAdMobGender_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_FirebaseFeatures_EAdMobGender, Z_Construct_UPackage__Script_FirebaseFeatures(), TEXT("EAdMobGender"));
		}
		return Singleton;
	}
	template<> FIREBASEFEATURES_API UEnum* StaticEnum<EAdMobGender>()
	{
		return EAdMobGender_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAdMobGender(EAdMobGender_StaticEnum, TEXT("/Script/FirebaseFeatures"), TEXT("EAdMobGender"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_FirebaseFeatures_EAdMobGender_Hash() { return 1113758632U; }
	UEnum* Z_Construct_UEnum_FirebaseFeatures_EAdMobGender()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_FirebaseFeatures();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAdMobGender"), 0, Get_Z_Construct_UEnum_FirebaseFeatures_EAdMobGender_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAdMobGender::Unknown", (int64)EAdMobGender::Unknown },
				{ "EAdMobGender::Male", (int64)EAdMobGender::Male },
				{ "EAdMobGender::Female", (int64)EAdMobGender::Female },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Female.Comment", "/// The current user is known to be female.\n" },
				{ "Female.Name", "EAdMobGender::Female" },
				{ "Female.ToolTip", "The current user is known to be female." },
				{ "Male.Comment", "/// The current user is known to be male.\n" },
				{ "Male.Name", "EAdMobGender::Male" },
				{ "Male.ToolTip", "The current user is known to be male." },
				{ "ModuleRelativePath", "Public/AdMob/AdMobTypes.h" },
				{ "Unknown.Comment", "/// The gender of the current user is unknown or unspecified by the publisher.\n" },
				{ "Unknown.Name", "EAdMobGender::Unknown" },
				{ "Unknown.ToolTip", "The gender of the current user is unknown or unspecified by the publisher." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_FirebaseFeatures,
				nullptr,
				"EAdMobGender",
				"EAdMobGender",
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
	static UEnum* EAdMobPresentationState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_FirebaseFeatures_EAdMobPresentationState, Z_Construct_UPackage__Script_FirebaseFeatures(), TEXT("EAdMobPresentationState"));
		}
		return Singleton;
	}
	template<> FIREBASEFEATURES_API UEnum* StaticEnum<EAdMobPresentationState>()
	{
		return EAdMobPresentationState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAdMobPresentationState(EAdMobPresentationState_StaticEnum, TEXT("/Script/FirebaseFeatures"), TEXT("EAdMobPresentationState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_FirebaseFeatures_EAdMobPresentationState_Hash() { return 968198330U; }
	UEnum* Z_Construct_UEnum_FirebaseFeatures_EAdMobPresentationState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_FirebaseFeatures();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAdMobPresentationState"), 0, Get_Z_Construct_UEnum_FirebaseFeatures_EAdMobPresentationState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAdMobPresentationState::Hidden", (int64)EAdMobPresentationState::Hidden },
				{ "EAdMobPresentationState::CoveringUI", (int64)EAdMobPresentationState::CoveringUI },
				{ "EAdMobPresentationState::VideoHasStarted", (int64)EAdMobPresentationState::VideoHasStarted },
				{ "EAdMobPresentationState::VideoHasCompleted", (int64)EAdMobPresentationState::VideoHasCompleted },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "/// The possible presentation states for rewarded video.\n" },
				{ "CoveringUI.Comment", "/// A rewarded video ad is completely covering the screen or has caused\n/// focus to leave the application (for example, when opening an external\n/// browser during a clickthrough), but the video associated with the ad has\n/// yet to begin playing.\n" },
				{ "CoveringUI.Name", "EAdMobPresentationState::CoveringUI" },
				{ "CoveringUI.ToolTip", "A rewarded video ad is completely covering the screen or has caused\nfocus to leave the application (for example, when opening an external\nbrowser during a clickthrough), but the video associated with the ad has\nyet to begin playing." },
				{ "Hidden.Comment", "/// No ad is currently being shown.\n" },
				{ "Hidden.Name", "EAdMobPresentationState::Hidden" },
				{ "Hidden.ToolTip", "No ad is currently being shown." },
				{ "ModuleRelativePath", "Public/AdMob/AdMobTypes.h" },
				{ "ToolTip", "The possible presentation states for rewarded video." },
				{ "VideoHasCompleted.Comment", "/// The rewarded video has played and completed.\n" },
				{ "VideoHasCompleted.Name", "EAdMobPresentationState::VideoHasCompleted" },
				{ "VideoHasCompleted.ToolTip", "The rewarded video has played and completed." },
				{ "VideoHasStarted.Comment", "/// All of the above conditions are true *except* that the video associated\n/// with the ad began playing at some point in the past.\n" },
				{ "VideoHasStarted.Name", "EAdMobPresentationState::VideoHasStarted" },
				{ "VideoHasStarted.ToolTip", "All of the above conditions are true *except* that the video associated\nwith the ad began playing at some point in the past." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_FirebaseFeatures,
				nullptr,
				"EAdMobPresentationState",
				"EAdMobPresentationState",
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
	static UEnum* EAdMobError_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_FirebaseFeatures_EAdMobError, Z_Construct_UPackage__Script_FirebaseFeatures(), TEXT("EAdMobError"));
		}
		return Singleton;
	}
	template<> FIREBASEFEATURES_API UEnum* StaticEnum<EAdMobError>()
	{
		return EAdMobError_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAdMobError(EAdMobError_StaticEnum, TEXT("/Script/FirebaseFeatures"), TEXT("EAdMobError"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_FirebaseFeatures_EAdMobError_Hash() { return 244338574U; }
	UEnum* Z_Construct_UEnum_FirebaseFeatures_EAdMobError()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_FirebaseFeatures();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAdMobError"), 0, Get_Z_Construct_UEnum_FirebaseFeatures_EAdMobError_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAdMobError::None", (int64)EAdMobError::None },
				{ "EAdMobError::Uninitialized", (int64)EAdMobError::Uninitialized },
				{ "EAdMobError::AlreadyInitialized", (int64)EAdMobError::AlreadyInitialized },
				{ "EAdMobError::LoadInProgress", (int64)EAdMobError::LoadInProgress },
				{ "EAdMobError::InternalError", (int64)EAdMobError::InternalError },
				{ "EAdMobError::InvalidRequest", (int64)EAdMobError::InvalidRequest },
				{ "EAdMobError::NetworkError", (int64)EAdMobError::NetworkError },
				{ "EAdMobError::NoFill", (int64)EAdMobError::NoFill },
				{ "EAdMobError::NoWindowToken", (int64)EAdMobError::NoWindowToken },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AlreadyInitialized.Comment", "/// The ad is already initialized (repeat call).\n" },
				{ "AlreadyInitialized.Name", "EAdMobError::AlreadyInitialized" },
				{ "AlreadyInitialized.ToolTip", "The ad is already initialized (repeat call)." },
				{ "BlueprintType", "true" },
				{ "InternalError.Comment", "/// A call to load an ad has failed due to an internal SDK error.\n" },
				{ "InternalError.Name", "EAdMobError::InternalError" },
				{ "InternalError.ToolTip", "A call to load an ad has failed due to an internal SDK error." },
				{ "InvalidRequest.Comment", "/// A call to load an ad has failed due to an invalid request.\n" },
				{ "InvalidRequest.Name", "EAdMobError::InvalidRequest" },
				{ "InvalidRequest.ToolTip", "A call to load an ad has failed due to an invalid request." },
				{ "LoadInProgress.Comment", "/// A call has failed because an ad is currently loading.\n" },
				{ "LoadInProgress.Name", "EAdMobError::LoadInProgress" },
				{ "LoadInProgress.ToolTip", "A call has failed because an ad is currently loading." },
				{ "ModuleRelativePath", "Public/AdMob/AdMobTypes.h" },
				{ "NetworkError.Comment", "/// A call to load an ad has failed due to a network error.\n" },
				{ "NetworkError.Name", "EAdMobError::NetworkError" },
				{ "NetworkError.ToolTip", "A call to load an ad has failed due to a network error." },
				{ "NoFill.Comment", "/// A call to load an ad has failed because no ad was available to serve.\n" },
				{ "NoFill.Name", "EAdMobError::NoFill" },
				{ "NoFill.ToolTip", "A call to load an ad has failed because no ad was available to serve." },
				{ "None.Comment", "/// Call completed successfully.\n" },
				{ "None.Name", "EAdMobError::None" },
				{ "None.ToolTip", "Call completed successfully." },
				{ "NoWindowToken.Comment", "/// An attempt has been made to show an ad on an Android Activity that has\n/// no window token (such as one that's not done initializing).\n" },
				{ "NoWindowToken.Name", "EAdMobError::NoWindowToken" },
				{ "NoWindowToken.ToolTip", "An attempt has been made to show an ad on an Android Activity that has\nno window token (such as one that's not done initializing)." },
				{ "Uninitialized.Comment", "/// The ad has not been fully initialized.\n" },
				{ "Uninitialized.Name", "EAdMobError::Uninitialized" },
				{ "Uninitialized.ToolTip", "The ad has not been fully initialized." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_FirebaseFeatures,
				nullptr,
				"EAdMobError",
				"EAdMobError",
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
class UScriptStruct* FAdMobRewardItem::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FIREBASEFEATURES_API uint32 Get_Z_Construct_UScriptStruct_FAdMobRewardItem_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAdMobRewardItem, Z_Construct_UPackage__Script_FirebaseFeatures(), TEXT("AdMobRewardItem"), sizeof(FAdMobRewardItem), Get_Z_Construct_UScriptStruct_FAdMobRewardItem_Hash());
	}
	return Singleton;
}
template<> FIREBASEFEATURES_API UScriptStruct* StaticStruct<FAdMobRewardItem>()
{
	return FAdMobRewardItem::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAdMobRewardItem(FAdMobRewardItem::StaticStruct, TEXT("/Script/FirebaseFeatures"), TEXT("AdMobRewardItem"), false, nullptr, nullptr);
static struct FScriptStruct_FirebaseFeatures_StaticRegisterNativesFAdMobRewardItem
{
	FScriptStruct_FirebaseFeatures_StaticRegisterNativesFAdMobRewardItem()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AdMobRewardItem")),new UScriptStruct::TCppStructOps<FAdMobRewardItem>);
	}
} ScriptStruct_FirebaseFeatures_StaticRegisterNativesFAdMobRewardItem;
	struct Z_Construct_UScriptStruct_FAdMobRewardItem_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Amount_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Amount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RewardType_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_RewardType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdMobRewardItem_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AdMob/AdMobTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAdMobRewardItem_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAdMobRewardItem>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdMobRewardItem_Statics::NewProp_Amount_MetaData[] = {
		{ "Category", "AdMob" },
		{ "Comment", "/// The reward amount.\n" },
		{ "ModuleRelativePath", "Public/AdMob/AdMobTypes.h" },
		{ "ToolTip", "The reward amount." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAdMobRewardItem_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAdMobRewardItem, Amount), METADATA_PARAMS(Z_Construct_UScriptStruct_FAdMobRewardItem_Statics::NewProp_Amount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdMobRewardItem_Statics::NewProp_Amount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdMobRewardItem_Statics::NewProp_RewardType_MetaData[] = {
		{ "Category", "AdMob" },
		{ "Comment", "/// A string description of the type of reward (such as \"coins\" or \"points\").\n" },
		{ "ModuleRelativePath", "Public/AdMob/AdMobTypes.h" },
		{ "ToolTip", "A string description of the type of reward (such as \"coins\" or \"points\")." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAdMobRewardItem_Statics::NewProp_RewardType = { "RewardType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAdMobRewardItem, RewardType), METADATA_PARAMS(Z_Construct_UScriptStruct_FAdMobRewardItem_Statics::NewProp_RewardType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdMobRewardItem_Statics::NewProp_RewardType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAdMobRewardItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAdMobRewardItem_Statics::NewProp_Amount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAdMobRewardItem_Statics::NewProp_RewardType,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAdMobRewardItem_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FirebaseFeatures,
		nullptr,
		&NewStructOps,
		"AdMobRewardItem",
		sizeof(FAdMobRewardItem),
		alignof(FAdMobRewardItem),
		Z_Construct_UScriptStruct_FAdMobRewardItem_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdMobRewardItem_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAdMobRewardItem_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdMobRewardItem_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAdMobRewardItem()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAdMobRewardItem_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_FirebaseFeatures();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AdMobRewardItem"), sizeof(FAdMobRewardItem), Get_Z_Construct_UScriptStruct_FAdMobRewardItem_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAdMobRewardItem_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAdMobRewardItem_Hash() { return 2940776492U; }
class UScriptStruct* FAdMobAdRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FIREBASEFEATURES_API uint32 Get_Z_Construct_UScriptStruct_FAdMobAdRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAdMobAdRequest, Z_Construct_UPackage__Script_FirebaseFeatures(), TEXT("AdMobAdRequest"), sizeof(FAdMobAdRequest), Get_Z_Construct_UScriptStruct_FAdMobAdRequest_Hash());
	}
	return Singleton;
}
template<> FIREBASEFEATURES_API UScriptStruct* StaticStruct<FAdMobAdRequest>()
{
	return FAdMobAdRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAdMobAdRequest(FAdMobAdRequest::StaticStruct, TEXT("/Script/FirebaseFeatures"), TEXT("AdMobAdRequest"), false, nullptr, nullptr);
static struct FScriptStruct_FirebaseFeatures_StaticRegisterNativesFAdMobAdRequest
{
	FScriptStruct_FirebaseFeatures_StaticRegisterNativesFAdMobAdRequest()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AdMobAdRequest")),new UScriptStruct::TCppStructOps<FAdMobAdRequest>);
	}
} ScriptStruct_FirebaseFeatures_StaticRegisterNativesFAdMobAdRequest;
	struct Z_Construct_UScriptStruct_FAdMobAdRequest_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TestDeviceIds_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TestDeviceIds_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TestDeviceIds;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Keywords_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Keywords_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Keywords;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Extras_ValueProp;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Extras_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Extras_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_Extras;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BirthdayDay_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_BirthdayDay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BirthdayMonth_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_BirthdayMonth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BirthdayYear_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_BirthdayYear;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Gender_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Gender_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Gender;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TaggedForChildDirectedTreatment_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TaggedForChildDirectedTreatment_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_TaggedForChildDirectedTreatment;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdMobAdRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AdMob/AdMobTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAdMobAdRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAdMobAdRequest>();
	}
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAdMobAdRequest_Statics::NewProp_TestDeviceIds_Inner = { "TestDeviceIds", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdMobAdRequest_Statics::NewProp_TestDeviceIds_MetaData[] = {
		{ "Category", "AdMob" },
		{ "Comment", "/// An array of test device IDs specifying devices that test ads will be\n/// returned for.\n" },
		{ "ModuleRelativePath", "Public/AdMob/AdMobTypes.h" },
		{ "ToolTip", "An array of test device IDs specifying devices that test ads will be\nreturned for." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAdMobAdRequest_Statics::NewProp_TestDeviceIds = { "TestDeviceIds", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAdMobAdRequest, TestDeviceIds), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAdMobAdRequest_Statics::NewProp_TestDeviceIds_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdMobAdRequest_Statics::NewProp_TestDeviceIds_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAdMobAdRequest_Statics::NewProp_Keywords_Inner = { "Keywords", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdMobAdRequest_Statics::NewProp_Keywords_MetaData[] = {
		{ "Category", "AdMob" },
		{ "Comment", "/// An array of keywords or phrases describing the current user activity, such\n/// as \"Sports Scores\" or \"Football.\"\n" },
		{ "ModuleRelativePath", "Public/AdMob/AdMobTypes.h" },
		{ "ToolTip", "An array of keywords or phrases describing the current user activity, such\nas \"Sports Scores\" or \"Football.\"" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAdMobAdRequest_Statics::NewProp_Keywords = { "Keywords", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAdMobAdRequest, Keywords), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAdMobAdRequest_Statics::NewProp_Keywords_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdMobAdRequest_Statics::NewProp_Keywords_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAdMobAdRequest_Statics::NewProp_Extras_ValueProp = { "Extras", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAdMobAdRequest_Statics::NewProp_Extras_Key_KeyProp = { "Extras_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdMobAdRequest_Statics::NewProp_Extras_MetaData[] = {
		{ "Category", "AdMob" },
		{ "Comment", "/// A @ref KeyValuePair specifying additional parameters accepted by an ad\n/// network.\n" },
		{ "ModuleRelativePath", "Public/AdMob/AdMobTypes.h" },
		{ "ToolTip", "A @ref KeyValuePair specifying additional parameters accepted by an ad\nnetwork." },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FAdMobAdRequest_Statics::NewProp_Extras = { "Extras", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAdMobAdRequest, Extras), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAdMobAdRequest_Statics::NewProp_Extras_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdMobAdRequest_Statics::NewProp_Extras_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdMobAdRequest_Statics::NewProp_BirthdayDay_MetaData[] = {
		{ "Category", "AdMob" },
		{ "Comment", "/// The day the user was born. Specify the user's birthday to increase ad\n/// relevancy.\n" },
		{ "ModuleRelativePath", "Public/AdMob/AdMobTypes.h" },
		{ "ToolTip", "The day the user was born. Specify the user's birthday to increase ad\nrelevancy." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAdMobAdRequest_Statics::NewProp_BirthdayDay = { "BirthdayDay", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAdMobAdRequest, BirthdayDay), METADATA_PARAMS(Z_Construct_UScriptStruct_FAdMobAdRequest_Statics::NewProp_BirthdayDay_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdMobAdRequest_Statics::NewProp_BirthdayDay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdMobAdRequest_Statics::NewProp_BirthdayMonth_MetaData[] = {
		{ "Category", "AdMob" },
		{ "Comment", "/// The month the user was born. Specify the user's birthday to increase ad\n/// relevancy.\n" },
		{ "ModuleRelativePath", "Public/AdMob/AdMobTypes.h" },
		{ "ToolTip", "The month the user was born. Specify the user's birthday to increase ad\nrelevancy." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAdMobAdRequest_Statics::NewProp_BirthdayMonth = { "BirthdayMonth", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAdMobAdRequest, BirthdayMonth), METADATA_PARAMS(Z_Construct_UScriptStruct_FAdMobAdRequest_Statics::NewProp_BirthdayMonth_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdMobAdRequest_Statics::NewProp_BirthdayMonth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdMobAdRequest_Statics::NewProp_BirthdayYear_MetaData[] = {
		{ "Category", "AdMob" },
		{ "Comment", "/// The year the user was born. Specify the user's birthday to increase ad\n/// relevancy.\n" },
		{ "ModuleRelativePath", "Public/AdMob/AdMobTypes.h" },
		{ "ToolTip", "The year the user was born. Specify the user's birthday to increase ad\nrelevancy." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAdMobAdRequest_Statics::NewProp_BirthdayYear = { "BirthdayYear", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAdMobAdRequest, BirthdayYear), METADATA_PARAMS(Z_Construct_UScriptStruct_FAdMobAdRequest_Statics::NewProp_BirthdayYear_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdMobAdRequest_Statics::NewProp_BirthdayYear_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAdMobAdRequest_Statics::NewProp_Gender_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdMobAdRequest_Statics::NewProp_Gender_MetaData[] = {
		{ "Category", "AdMob" },
		{ "Comment", "/// The user's @ref Gender. Specify the user's gender to increase ad\n/// relevancy.\n" },
		{ "ModuleRelativePath", "Public/AdMob/AdMobTypes.h" },
		{ "ToolTip", "The user's @ref Gender. Specify the user's gender to increase ad\nrelevancy." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAdMobAdRequest_Statics::NewProp_Gender = { "Gender", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAdMobAdRequest, Gender), Z_Construct_UEnum_FirebaseFeatures_EAdMobGender, METADATA_PARAMS(Z_Construct_UScriptStruct_FAdMobAdRequest_Statics::NewProp_Gender_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdMobAdRequest_Statics::NewProp_Gender_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAdMobAdRequest_Statics::NewProp_TaggedForChildDirectedTreatment_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdMobAdRequest_Statics::NewProp_TaggedForChildDirectedTreatment_MetaData[] = {
		{ "Category", "AdMob" },
		{ "Comment", "/// Specifies whether the request should be considered as child-directed for\n/// purposes of the Children's Online Privacy Protection Act (COPPA).\n" },
		{ "ModuleRelativePath", "Public/AdMob/AdMobTypes.h" },
		{ "ToolTip", "Specifies whether the request should be considered as child-directed for\npurposes of the Children's Online Privacy Protection Act (COPPA)." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAdMobAdRequest_Statics::NewProp_TaggedForChildDirectedTreatment = { "TaggedForChildDirectedTreatment", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAdMobAdRequest, TaggedForChildDirectedTreatment), Z_Construct_UEnum_FirebaseFeatures_EAdMobChildDirectedTreatmentState, METADATA_PARAMS(Z_Construct_UScriptStruct_FAdMobAdRequest_Statics::NewProp_TaggedForChildDirectedTreatment_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdMobAdRequest_Statics::NewProp_TaggedForChildDirectedTreatment_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAdMobAdRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAdMobAdRequest_Statics::NewProp_TestDeviceIds_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAdMobAdRequest_Statics::NewProp_TestDeviceIds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAdMobAdRequest_Statics::NewProp_Keywords_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAdMobAdRequest_Statics::NewProp_Keywords,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAdMobAdRequest_Statics::NewProp_Extras_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAdMobAdRequest_Statics::NewProp_Extras_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAdMobAdRequest_Statics::NewProp_Extras,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAdMobAdRequest_Statics::NewProp_BirthdayDay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAdMobAdRequest_Statics::NewProp_BirthdayMonth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAdMobAdRequest_Statics::NewProp_BirthdayYear,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAdMobAdRequest_Statics::NewProp_Gender_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAdMobAdRequest_Statics::NewProp_Gender,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAdMobAdRequest_Statics::NewProp_TaggedForChildDirectedTreatment_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAdMobAdRequest_Statics::NewProp_TaggedForChildDirectedTreatment,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAdMobAdRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FirebaseFeatures,
		nullptr,
		&NewStructOps,
		"AdMobAdRequest",
		sizeof(FAdMobAdRequest),
		alignof(FAdMobAdRequest),
		Z_Construct_UScriptStruct_FAdMobAdRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdMobAdRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAdMobAdRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdMobAdRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAdMobAdRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAdMobAdRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_FirebaseFeatures();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AdMobAdRequest"), sizeof(FAdMobAdRequest), Get_Z_Construct_UScriptStruct_FAdMobAdRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAdMobAdRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAdMobAdRequest_Hash() { return 567362456U; }
class UScriptStruct* FAdSize::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FIREBASEFEATURES_API uint32 Get_Z_Construct_UScriptStruct_FAdSize_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAdSize, Z_Construct_UPackage__Script_FirebaseFeatures(), TEXT("AdSize"), sizeof(FAdSize), Get_Z_Construct_UScriptStruct_FAdSize_Hash());
	}
	return Singleton;
}
template<> FIREBASEFEATURES_API UScriptStruct* StaticStruct<FAdSize>()
{
	return FAdSize::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAdSize(FAdSize::StaticStruct, TEXT("/Script/FirebaseFeatures"), TEXT("AdSize"), false, nullptr, nullptr);
static struct FScriptStruct_FirebaseFeatures_StaticRegisterNativesFAdSize
{
	FScriptStruct_FirebaseFeatures_StaticRegisterNativesFAdSize()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AdSize")),new UScriptStruct::TCppStructOps<FAdSize>);
	}
} ScriptStruct_FirebaseFeatures_StaticRegisterNativesFAdSize;
	struct Z_Construct_UScriptStruct_FAdSize_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Height_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Height;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Width_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Width;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdSize_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AdMob/AdMobTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAdSize_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAdSize>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdSize_Statics::NewProp_Height_MetaData[] = {
		{ "Category", "AdMob" },
		{ "Comment", "/// Height of the ad (in points or dp).\n" },
		{ "ModuleRelativePath", "Public/AdMob/AdMobTypes.h" },
		{ "ToolTip", "Height of the ad (in points or dp)." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAdSize_Statics::NewProp_Height = { "Height", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAdSize, Height), METADATA_PARAMS(Z_Construct_UScriptStruct_FAdSize_Statics::NewProp_Height_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdSize_Statics::NewProp_Height_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdSize_Statics::NewProp_Width_MetaData[] = {
		{ "Category", "AdMob" },
		{ "Comment", "/// Width of the ad (in points or dp).\n" },
		{ "ModuleRelativePath", "Public/AdMob/AdMobTypes.h" },
		{ "ToolTip", "Width of the ad (in points or dp)." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAdSize_Statics::NewProp_Width = { "Width", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAdSize, Width), METADATA_PARAMS(Z_Construct_UScriptStruct_FAdSize_Statics::NewProp_Width_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdSize_Statics::NewProp_Width_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAdSize_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAdSize_Statics::NewProp_Height,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAdSize_Statics::NewProp_Width,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAdSize_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FirebaseFeatures,
		nullptr,
		&NewStructOps,
		"AdSize",
		sizeof(FAdSize),
		alignof(FAdSize),
		Z_Construct_UScriptStruct_FAdSize_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdSize_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAdSize_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdSize_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAdSize()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAdSize_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_FirebaseFeatures();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AdSize"), sizeof(FAdSize), Get_Z_Construct_UScriptStruct_FAdSize_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAdSize_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAdSize_Hash() { return 732619190U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
