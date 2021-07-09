// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FirebaseFeatures/Public/Messaging/MessagingLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMessagingLibrary() {}
// Cross Module References
	FIREBASEFEATURES_API UEnum* Z_Construct_UEnum_FirebaseFeatures_EFirebaseMessagingError();
	UPackage* Z_Construct_UPackage__Script_FirebaseFeatures();
	FIREBASEFEATURES_API UScriptStruct* Z_Construct_UScriptStruct_FFirebaseMessage();
	FIREBASEFEATURES_API UScriptStruct* Z_Construct_UScriptStruct_FFirebaseNotification();
	FIREBASEFEATURES_API UScriptStruct* Z_Construct_UScriptStruct_FFirebaseAndroidNotificationParams();
// End Cross Module References
	static UEnum* EFirebaseMessagingError_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_FirebaseFeatures_EFirebaseMessagingError, Z_Construct_UPackage__Script_FirebaseFeatures(), TEXT("EFirebaseMessagingError"));
		}
		return Singleton;
	}
	template<> FIREBASEFEATURES_API UEnum* StaticEnum<EFirebaseMessagingError>()
	{
		return EFirebaseMessagingError_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EFirebaseMessagingError(EFirebaseMessagingError_StaticEnum, TEXT("/Script/FirebaseFeatures"), TEXT("EFirebaseMessagingError"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_FirebaseFeatures_EFirebaseMessagingError_Hash() { return 2531592749U; }
	UEnum* Z_Construct_UEnum_FirebaseFeatures_EFirebaseMessagingError()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_FirebaseFeatures();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EFirebaseMessagingError"), 0, Get_Z_Construct_UEnum_FirebaseFeatures_EFirebaseMessagingError_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EFirebaseMessagingError::None", (int64)EFirebaseMessagingError::None },
				{ "EFirebaseMessagingError::FailedToRegisterForRemoteNotifications", (int64)EFirebaseMessagingError::FailedToRegisterForRemoteNotifications },
				{ "EFirebaseMessagingError::InvalidTopicName", (int64)EFirebaseMessagingError::InvalidTopicName },
				{ "EFirebaseMessagingError::NoRegistrationToken", (int64)EFirebaseMessagingError::NoRegistrationToken },
				{ "EFirebaseMessagingError::Unknown", (int64)EFirebaseMessagingError::Unknown },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "/// Error code returned by Firebase Cloud Messaging C++ functions.\n" },
				{ "FailedToRegisterForRemoteNotifications.Comment", "/// Permission to receive notifications was not granted.\n" },
				{ "FailedToRegisterForRemoteNotifications.Name", "EFirebaseMessagingError::FailedToRegisterForRemoteNotifications" },
				{ "FailedToRegisterForRemoteNotifications.ToolTip", "Permission to receive notifications was not granted." },
				{ "InvalidTopicName.Comment", "/// Topic name is invalid for subscription/unsubscription.\n" },
				{ "InvalidTopicName.Name", "EFirebaseMessagingError::InvalidTopicName" },
				{ "InvalidTopicName.ToolTip", "Topic name is invalid for subscription/unsubscription." },
				{ "ModuleRelativePath", "Public/Messaging/MessagingLibrary.h" },
				{ "None.Comment", "/// The operation was a success, no error occurred.\n" },
				{ "None.Name", "EFirebaseMessagingError::None" },
				{ "None.ToolTip", "The operation was a success, no error occurred." },
				{ "NoRegistrationToken.Comment", "/// Could not subscribe/unsubscribe because there is no registration token.\n" },
				{ "NoRegistrationToken.Name", "EFirebaseMessagingError::NoRegistrationToken" },
				{ "NoRegistrationToken.ToolTip", "Could not subscribe/unsubscribe because there is no registration token." },
				{ "ToolTip", "Error code returned by Firebase Cloud Messaging C++ functions." },
				{ "Unknown.Comment", "/// Unknown error.\n" },
				{ "Unknown.Name", "EFirebaseMessagingError::Unknown" },
				{ "Unknown.ToolTip", "Unknown error." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_FirebaseFeatures,
				nullptr,
				"EFirebaseMessagingError",
				"EFirebaseMessagingError",
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
class UScriptStruct* FFirebaseMessage::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FIREBASEFEATURES_API uint32 Get_Z_Construct_UScriptStruct_FFirebaseMessage_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FFirebaseMessage, Z_Construct_UPackage__Script_FirebaseFeatures(), TEXT("FirebaseMessage"), sizeof(FFirebaseMessage), Get_Z_Construct_UScriptStruct_FFirebaseMessage_Hash());
	}
	return Singleton;
}
template<> FIREBASEFEATURES_API UScriptStruct* StaticStruct<FFirebaseMessage>()
{
	return FFirebaseMessage::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FFirebaseMessage(FFirebaseMessage::StaticStruct, TEXT("/Script/FirebaseFeatures"), TEXT("FirebaseMessage"), false, nullptr, nullptr);
static struct FScriptStruct_FirebaseFeatures_StaticRegisterNativesFFirebaseMessage
{
	FScriptStruct_FirebaseFeatures_StaticRegisterNativesFFirebaseMessage()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("FirebaseMessage")),new UScriptStruct::TCppStructOps<FFirebaseMessage>);
	}
} ScriptStruct_FirebaseFeatures_StaticRegisterNativesFFirebaseMessage;
	struct Z_Construct_UScriptStruct_FFirebaseMessage_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_From_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_From;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_To_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_To;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CollapseKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CollapseKey;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Data_ValueProp;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Data_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_Data;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RawData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_RawData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MessageId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MessageId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MessageType_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MessageType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Priority_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Priority;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimeToLive_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TimeToLive;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Error_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Error;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ErrorDescription_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ErrorDescription;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Notification_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Notification;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bNotificationOpened_MetaData[];
#endif
		static void NewProp_bNotificationOpened_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNotificationOpened;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Link_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Link;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OriginalPriority_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_OriginalPriority;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SentTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_SentTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsValid_MetaData[];
#endif
		static void NewProp_bIsValid_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsValid;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFirebaseMessage_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/// @brief Data structure used to send messages to, and receive messages from,\n/// cloud messaging.\n" },
		{ "ModuleRelativePath", "Public/Messaging/MessagingLibrary.h" },
		{ "ToolTip", "@brief Data structure used to send messages to, and receive messages from,\ncloud messaging." },
	};
#endif
	void* Z_Construct_UScriptStruct_FFirebaseMessage_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFirebaseMessage>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFirebaseMessage_Statics::NewProp_From_MetaData[] = {
		{ "Category", "Firebase|Messaging|Message" },
		{ "Comment", "/// Authenticated ID of the sender. This is a project number in most cases.\n///\n/// Any value starting with google.com, goog. or gcm. are reserved.\n///\n/// This field is only used for downstream messages received through\n/// Listener::OnMessage().\n" },
		{ "ModuleRelativePath", "Public/Messaging/MessagingLibrary.h" },
		{ "ToolTip", "Authenticated ID of the sender. This is a project number in most cases.\n\nAny value starting with google.com, goog. or gcm. are reserved.\n\nThis field is only used for downstream messages received through\nListener::OnMessage()." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFirebaseMessage_Statics::NewProp_From = { "From", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFirebaseMessage, From), METADATA_PARAMS(Z_Construct_UScriptStruct_FFirebaseMessage_Statics::NewProp_From_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFirebaseMessage_Statics::NewProp_From_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFirebaseMessage_Statics::NewProp_To_MetaData[] = {
		{ "Category", "Firebase|Messaging|Message" },
		{ "Comment", "/// This parameter specifies the recipient of a message.\n///\n/// For example it can be a registration token, a topic name, an Instance ID\n/// or project ID.\n///\n/// For upstream messages use the format  PROJECT_ID@gcm.googleapis.com.\n///\n/// This field is used for both upstream messages sent with\n/// firebase::messaging::Send() and downstream messages received through\n/// Listener::OnMessage(). For upstream messages,\n/// PROJECT_ID@gcm.googleapis.com or Instance ID are accepted.\n" },
		{ "ModuleRelativePath", "Public/Messaging/MessagingLibrary.h" },
		{ "ToolTip", "This parameter specifies the recipient of a message.\n\nFor example it can be a registration token, a topic name, an Instance ID\nor project ID.\n\nFor upstream messages use the format  PROJECT_ID@gcm.googleapis.com.\n\nThis field is used for both upstream messages sent with\nfirebase::messaging::Send() and downstream messages received through\nListener::OnMessage(). For upstream messages,\nPROJECT_ID@gcm.googleapis.com or Instance ID are accepted." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFirebaseMessage_Statics::NewProp_To = { "To", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFirebaseMessage, To), METADATA_PARAMS(Z_Construct_UScriptStruct_FFirebaseMessage_Statics::NewProp_To_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFirebaseMessage_Statics::NewProp_To_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFirebaseMessage_Statics::NewProp_CollapseKey_MetaData[] = {
		{ "Category", "Firebase|Messaging|Message" },
		{ "Comment", "/// This parameter identifies a group of messages (e.g., with collapse_key:\n/// \"Updates Available\") that can be collapsed, so that only the last message\n/// gets sent when delivery can be resumed.  This is intended to avoid sending\n/// too many of the same messages when the device comes back online or becomes\n/// active.\n///\n/// Note that there is no guarantee of the order in which messages get sent.\n///\n/// Note: A maximum of 4 different collapse keys is allowed at any given time.\n/// This means a FCM connection server can simultaneously store 4 different\n/// send-to-sync messages per client app. If you exceed this number, there is\n/// no guarantee which 4 collapse keys the FCM connection server will keep.\n///\n/// This field is only used for downstream messages received through\n/// Listener::OnMessage().\n" },
		{ "ModuleRelativePath", "Public/Messaging/MessagingLibrary.h" },
		{ "ToolTip", "This parameter identifies a group of messages (e.g., with collapse_key:\n\"Updates Available\") that can be collapsed, so that only the last message\ngets sent when delivery can be resumed.  This is intended to avoid sending\ntoo many of the same messages when the device comes back online or becomes\nactive.\n\nNote that there is no guarantee of the order in which messages get sent.\n\nNote: A maximum of 4 different collapse keys is allowed at any given time.\nThis means a FCM connection server can simultaneously store 4 different\nsend-to-sync messages per client app. If you exceed this number, there is\nno guarantee which 4 collapse keys the FCM connection server will keep.\n\nThis field is only used for downstream messages received through\nListener::OnMessage()." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFirebaseMessage_Statics::NewProp_CollapseKey = { "CollapseKey", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFirebaseMessage, CollapseKey), METADATA_PARAMS(Z_Construct_UScriptStruct_FFirebaseMessage_Statics::NewProp_CollapseKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFirebaseMessage_Statics::NewProp_CollapseKey_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFirebaseMessage_Statics::NewProp_Data_ValueProp = { "Data", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFirebaseMessage_Statics::NewProp_Data_Key_KeyProp = { "Data_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFirebaseMessage_Statics::NewProp_Data_MetaData[] = {
		{ "Category", "Firebase|Messaging|Message" },
		{ "Comment", "/// The metadata, including all original key/value pairs. Includes some of the\n/// HTTP headers used when sending the message. `gcm`, `google` and `goog`\n/// prefixes are reserved for internal use.\n///\n/// This field is used for both upstream messages sent with\n/// firebase::messaging::Send() and downstream messages received through\n/// Listener::OnMessage().\n" },
		{ "ModuleRelativePath", "Public/Messaging/MessagingLibrary.h" },
		{ "ToolTip", "The metadata, including all original key/value pairs. Includes some of the\nHTTP headers used when sending the message. `gcm`, `google` and `goog`\nprefixes are reserved for internal use.\n\nThis field is used for both upstream messages sent with\nfirebase::messaging::Send() and downstream messages received through\nListener::OnMessage()." },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FFirebaseMessage_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFirebaseMessage, Data), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FFirebaseMessage_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFirebaseMessage_Statics::NewProp_Data_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFirebaseMessage_Statics::NewProp_RawData_MetaData[] = {
		{ "Category", "Firebase|Messaging|Message" },
		{ "Comment", "/// Binary payload. This field is currently unused.\n" },
		{ "ModuleRelativePath", "Public/Messaging/MessagingLibrary.h" },
		{ "ToolTip", "Binary payload. This field is currently unused." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFirebaseMessage_Statics::NewProp_RawData = { "RawData", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFirebaseMessage, RawData), METADATA_PARAMS(Z_Construct_UScriptStruct_FFirebaseMessage_Statics::NewProp_RawData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFirebaseMessage_Statics::NewProp_RawData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFirebaseMessage_Statics::NewProp_MessageId_MetaData[] = {
		{ "Category", "Firebase|Messaging|Message" },
		{ "Comment", "/// Message ID. This can be specified by sender. Internally a hash of the\n/// message ID and other elements will be used for storage. The ID must be\n/// unique for each topic subscription - using the same ID may result in\n/// overriding the original message or duplicate delivery.\n///\n/// This field is used for both upstream messages sent with\n/// firebase::messaging::Send() and downstream messages received through\n/// Listener::OnMessage().\n" },
		{ "ModuleRelativePath", "Public/Messaging/MessagingLibrary.h" },
		{ "ToolTip", "Message ID. This can be specified by sender. Internally a hash of the\nmessage ID and other elements will be used for storage. The ID must be\nunique for each topic subscription - using the same ID may result in\noverriding the original message or duplicate delivery.\n\nThis field is used for both upstream messages sent with\nfirebase::messaging::Send() and downstream messages received through\nListener::OnMessage()." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFirebaseMessage_Statics::NewProp_MessageId = { "MessageId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFirebaseMessage, MessageId), METADATA_PARAMS(Z_Construct_UScriptStruct_FFirebaseMessage_Statics::NewProp_MessageId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFirebaseMessage_Statics::NewProp_MessageId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFirebaseMessage_Statics::NewProp_MessageType_MetaData[] = {
		{ "Category", "Firebase|Messaging|Message" },
		{ "Comment", "/// Equivalent with a content-type.\n///\n/// Defined values:\n///   - \"deleted_messages\" - indicates the server had too many messages and\n///     dropped some, and the client should sync with his own server.\n///     Current limit is 100 messages stored.\n///   - \"send_event\" - indicates an upstream message has been pushed to the\n///     FCM server. It does not guarantee the upstream destination received\n///     it.\n///     Parameters: \"message_id\"\n///   - \"send_error\" - indicates an upstream message expired, without being\n///     sent to the FCM server.\n///     Parameters: \"message_id\" and \"error\"\n///\n/// If this field is missing, the message is a regular message.\n///\n/// This field is only used for downstream messages received through\n/// Listener::OnMessage().\n" },
		{ "ModuleRelativePath", "Public/Messaging/MessagingLibrary.h" },
		{ "ToolTip", "Equivalent with a content-type.\n\nDefined values:\n  - \"deleted_messages\" - indicates the server had too many messages and\n    dropped some, and the client should sync with his own server.\n    Current limit is 100 messages stored.\n  - \"send_event\" - indicates an upstream message has been pushed to the\n    FCM server. It does not guarantee the upstream destination received\n    it.\n    Parameters: \"message_id\"\n  - \"send_error\" - indicates an upstream message expired, without being\n    sent to the FCM server.\n    Parameters: \"message_id\" and \"error\"\n\nIf this field is missing, the message is a regular message.\n\nThis field is only used for downstream messages received through\nListener::OnMessage()." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFirebaseMessage_Statics::NewProp_MessageType = { "MessageType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFirebaseMessage, MessageType), METADATA_PARAMS(Z_Construct_UScriptStruct_FFirebaseMessage_Statics::NewProp_MessageType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFirebaseMessage_Statics::NewProp_MessageType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFirebaseMessage_Statics::NewProp_Priority_MetaData[] = {
		{ "Category", "Firebase|Messaging|Message" },
		{ "Comment", "/// Sets the priority of the message. Valid values are \"normal\" and \"high.\" On\n/// iOS, these correspond to APNs priority 5 and 10.\n///\n/// By default, messages are sent with normal priority. Normal priority\n/// optimizes the client app's battery consumption, and should be used unless\n/// immediate delivery is required. For messages with normal priority, the app\n/// may receive the message with unspecified delay.\n///\n/// When a message is sent with high priority, it is sent i\xc2\xa7mmediately, and the\n/// app can wake a sleeping device and open a network connection to your\n/// server.\n///\n/// For more information, see [Setting the priority of a message][1].\n///\n/// This field is only used for downstream messages received through\n/// Listener::OnMessage().\n///\n/// [1]:\n/// https://firebase.google.com/docs/cloud-messaging/concept-options#setting-the-priority-of-a-message\n" },
		{ "ModuleRelativePath", "Public/Messaging/MessagingLibrary.h" },
		{ "ToolTip", "Sets the priority of the message. Valid values are \"normal\" and \"high.\" On\niOS, these correspond to APNs priority 5 and 10.\n\nBy default, messages are sent with normal priority. Normal priority\noptimizes the client app's battery consumption, and should be used unless\nimmediate delivery is required. For messages with normal priority, the app\nmay receive the message with unspecified delay.\n\nWhen a message is sent with high priority, it is sent i\xc2\xa7mmediately, and the\napp can wake a sleeping device and open a network connection to your\nserver.\n\nFor more information, see [Setting the priority of a message][1].\n\nThis field is only used for downstream messages received through\nListener::OnMessage().\n\n[1]:\nhttps:firebase.google.com/docs/cloud-messaging/concept-options#setting-the-priority-of-a-message" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFirebaseMessage_Statics::NewProp_Priority = { "Priority", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFirebaseMessage, Priority), METADATA_PARAMS(Z_Construct_UScriptStruct_FFirebaseMessage_Statics::NewProp_Priority_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFirebaseMessage_Statics::NewProp_Priority_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFirebaseMessage_Statics::NewProp_TimeToLive_MetaData[] = {
		{ "Category", "Firebase|Messaging|Message" },
		{ "Comment", "/// This parameter specifies how long (in seconds) the message should be kept\n/// in FCM storage if the device is offline. The maximum time to live\n/// supported is 4 weeks, and the default value is 4 weeks. For more\n/// information, see [Setting the lifespan of a message][1].\n///\n/// This field is only used for downstream messages received through\n/// Listener::OnMessage().\n///\n/// [1]: https://firebase.google.com/docs/cloud-messaging/concept-options#ttl\n" },
		{ "ModuleRelativePath", "Public/Messaging/MessagingLibrary.h" },
		{ "ToolTip", "This parameter specifies how long (in seconds) the message should be kept\nin FCM storage if the device is offline. The maximum time to live\nsupported is 4 weeks, and the default value is 4 weeks. For more\ninformation, see [Setting the lifespan of a message][1].\n\nThis field is only used for downstream messages received through\nListener::OnMessage().\n\n[1]: https:firebase.google.com/docs/cloud-messaging/concept-options#ttl" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFirebaseMessage_Statics::NewProp_TimeToLive = { "TimeToLive", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFirebaseMessage, TimeToLive), METADATA_PARAMS(Z_Construct_UScriptStruct_FFirebaseMessage_Statics::NewProp_TimeToLive_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFirebaseMessage_Statics::NewProp_TimeToLive_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFirebaseMessage_Statics::NewProp_Error_MetaData[] = {
		{ "Category", "Firebase|Messaging|Message" },
		{ "Comment", "/// Error code. Used in \"nack\" messages for CCS, and in responses from the\n/// server.\n/// See the CCS specification for the externally-supported list.\n///\n/// This field is only used for downstream messages received through\n/// Listener::OnMessage().\n" },
		{ "ModuleRelativePath", "Public/Messaging/MessagingLibrary.h" },
		{ "ToolTip", "Error code. Used in \"nack\" messages for CCS, and in responses from the\nserver.\nSee the CCS specification for the externally-supported list.\n\nThis field is only used for downstream messages received through\nListener::OnMessage()." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFirebaseMessage_Statics::NewProp_Error = { "Error", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFirebaseMessage, Error), METADATA_PARAMS(Z_Construct_UScriptStruct_FFirebaseMessage_Statics::NewProp_Error_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFirebaseMessage_Statics::NewProp_Error_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFirebaseMessage_Statics::NewProp_ErrorDescription_MetaData[] = {
		{ "Category", "Firebase|Messaging|Message" },
		{ "Comment", "/// Human readable details about the error.\n///\n/// This field is only used for downstream messages received through\n/// Listener::OnMessage().\n" },
		{ "ModuleRelativePath", "Public/Messaging/MessagingLibrary.h" },
		{ "ToolTip", "Human readable details about the error.\n\nThis field is only used for downstream messages received through\nListener::OnMessage()." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFirebaseMessage_Statics::NewProp_ErrorDescription = { "ErrorDescription", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFirebaseMessage, ErrorDescription), METADATA_PARAMS(Z_Construct_UScriptStruct_FFirebaseMessage_Statics::NewProp_ErrorDescription_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFirebaseMessage_Statics::NewProp_ErrorDescription_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFirebaseMessage_Statics::NewProp_Notification_MetaData[] = {
		{ "Category", "Firebase|Messaging|Message" },
		{ "Comment", "/// Optional notification to show. This only set if a notification was\n/// received with this message, otherwise it is null.\n///\n/// The notification is only guaranteed to be valid during the call to\n/// Listener::OnMessage(). If you need to keep it around longer you will need\n/// to make a copy of either the Message or Notification. Copying the Message\n/// object implicitly makes a deep copy of the notification (allocated with\n/// new) which is owned by the Message.\n///\n/// This field is only used for downstream messages received through\n/// Listener::OnMessage().\n" },
		{ "ModuleRelativePath", "Public/Messaging/MessagingLibrary.h" },
		{ "ToolTip", "Optional notification to show. This only set if a notification was\nreceived with this message, otherwise it is null.\n\nThe notification is only guaranteed to be valid during the call to\nListener::OnMessage(). If you need to keep it around longer you will need\nto make a copy of either the Message or Notification. Copying the Message\nobject implicitly makes a deep copy of the notification (allocated with\nnew) which is owned by the Message.\n\nThis field is only used for downstream messages received through\nListener::OnMessage()." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFirebaseMessage_Statics::NewProp_Notification = { "Notification", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFirebaseMessage, Notification), Z_Construct_UScriptStruct_FFirebaseNotification, METADATA_PARAMS(Z_Construct_UScriptStruct_FFirebaseMessage_Statics::NewProp_Notification_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFirebaseMessage_Statics::NewProp_Notification_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFirebaseMessage_Statics::NewProp_bNotificationOpened_MetaData[] = {
		{ "Category", "Firebase|Messaging|Message" },
		{ "Comment", "/// A flag indicating whether this message was opened by tapping a\n/// notification in the OS system tray. If the message was received this way\n/// this flag is set to true.\n" },
		{ "ModuleRelativePath", "Public/Messaging/MessagingLibrary.h" },
		{ "ToolTip", "A flag indicating whether this message was opened by tapping a\nnotification in the OS system tray. If the message was received this way\nthis flag is set to true." },
	};
#endif
	void Z_Construct_UScriptStruct_FFirebaseMessage_Statics::NewProp_bNotificationOpened_SetBit(void* Obj)
	{
		((FFirebaseMessage*)Obj)->bNotificationOpened = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FFirebaseMessage_Statics::NewProp_bNotificationOpened = { "bNotificationOpened", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FFirebaseMessage), &Z_Construct_UScriptStruct_FFirebaseMessage_Statics::NewProp_bNotificationOpened_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FFirebaseMessage_Statics::NewProp_bNotificationOpened_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFirebaseMessage_Statics::NewProp_bNotificationOpened_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFirebaseMessage_Statics::NewProp_Link_MetaData[] = {
		{ "Category", "Firebase|Messaging|Message" },
		{ "Comment", "/// The link into the app from the message.\n///\n/// This field is only used for downstream messages received through\n/// Listener::OnMessage().\n" },
		{ "ModuleRelativePath", "Public/Messaging/MessagingLibrary.h" },
		{ "ToolTip", "The link into the app from the message.\n\nThis field is only used for downstream messages received through\nListener::OnMessage()." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFirebaseMessage_Statics::NewProp_Link = { "Link", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFirebaseMessage, Link), METADATA_PARAMS(Z_Construct_UScriptStruct_FFirebaseMessage_Statics::NewProp_Link_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFirebaseMessage_Statics::NewProp_Link_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFirebaseMessage_Statics::NewProp_OriginalPriority_MetaData[] = {
		{ "Category", "Firebase|Messaging|Message" },
		{ "Comment", "/// @cond FIREBASE_APP_INTERNAL\n/// Original priority of the message.\n" },
		{ "ModuleRelativePath", "Public/Messaging/MessagingLibrary.h" },
		{ "ToolTip", "@cond FIREBASE_APP_INTERNAL\nOriginal priority of the message." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFirebaseMessage_Statics::NewProp_OriginalPriority = { "OriginalPriority", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFirebaseMessage, OriginalPriority), METADATA_PARAMS(Z_Construct_UScriptStruct_FFirebaseMessage_Statics::NewProp_OriginalPriority_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFirebaseMessage_Statics::NewProp_OriginalPriority_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFirebaseMessage_Statics::NewProp_SentTime_MetaData[] = {
		{ "Category", "Firebase|Messaging|Message" },
		{ "Comment", "/// UTC timestamp in milliseconds when the message was sent.\n/// See https://en.wikipedia.org/wiki/Unix_time for details of UTC.\n" },
		{ "ModuleRelativePath", "Public/Messaging/MessagingLibrary.h" },
		{ "ToolTip", "UTC timestamp in milliseconds when the message was sent.\nSee https:en.wikipedia.org/wiki/Unix_time for details of UTC." },
	};
#endif
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FFirebaseMessage_Statics::NewProp_SentTime = { "SentTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFirebaseMessage, SentTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FFirebaseMessage_Statics::NewProp_SentTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFirebaseMessage_Statics::NewProp_SentTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFirebaseMessage_Statics::NewProp_bIsValid_MetaData[] = {
		{ "Category", "Firebase|Messaging|Message" },
		{ "Comment", "/// If this FCM message is a valid message containing received data.\n" },
		{ "ModuleRelativePath", "Public/Messaging/MessagingLibrary.h" },
		{ "ToolTip", "If this FCM message is a valid message containing received data." },
	};
#endif
	void Z_Construct_UScriptStruct_FFirebaseMessage_Statics::NewProp_bIsValid_SetBit(void* Obj)
	{
		((FFirebaseMessage*)Obj)->bIsValid = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FFirebaseMessage_Statics::NewProp_bIsValid = { "bIsValid", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FFirebaseMessage), &Z_Construct_UScriptStruct_FFirebaseMessage_Statics::NewProp_bIsValid_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FFirebaseMessage_Statics::NewProp_bIsValid_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFirebaseMessage_Statics::NewProp_bIsValid_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFirebaseMessage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFirebaseMessage_Statics::NewProp_From,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFirebaseMessage_Statics::NewProp_To,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFirebaseMessage_Statics::NewProp_CollapseKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFirebaseMessage_Statics::NewProp_Data_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFirebaseMessage_Statics::NewProp_Data_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFirebaseMessage_Statics::NewProp_Data,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFirebaseMessage_Statics::NewProp_RawData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFirebaseMessage_Statics::NewProp_MessageId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFirebaseMessage_Statics::NewProp_MessageType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFirebaseMessage_Statics::NewProp_Priority,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFirebaseMessage_Statics::NewProp_TimeToLive,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFirebaseMessage_Statics::NewProp_Error,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFirebaseMessage_Statics::NewProp_ErrorDescription,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFirebaseMessage_Statics::NewProp_Notification,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFirebaseMessage_Statics::NewProp_bNotificationOpened,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFirebaseMessage_Statics::NewProp_Link,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFirebaseMessage_Statics::NewProp_OriginalPriority,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFirebaseMessage_Statics::NewProp_SentTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFirebaseMessage_Statics::NewProp_bIsValid,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFirebaseMessage_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FirebaseFeatures,
		nullptr,
		&NewStructOps,
		"FirebaseMessage",
		sizeof(FFirebaseMessage),
		alignof(FFirebaseMessage),
		Z_Construct_UScriptStruct_FFirebaseMessage_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFirebaseMessage_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFirebaseMessage_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFirebaseMessage_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFirebaseMessage()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FFirebaseMessage_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_FirebaseFeatures();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("FirebaseMessage"), sizeof(FFirebaseMessage), Get_Z_Construct_UScriptStruct_FFirebaseMessage_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FFirebaseMessage_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FFirebaseMessage_Hash() { return 1359826968U; }
class UScriptStruct* FFirebaseNotification::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FIREBASEFEATURES_API uint32 Get_Z_Construct_UScriptStruct_FFirebaseNotification_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FFirebaseNotification, Z_Construct_UPackage__Script_FirebaseFeatures(), TEXT("FirebaseNotification"), sizeof(FFirebaseNotification), Get_Z_Construct_UScriptStruct_FFirebaseNotification_Hash());
	}
	return Singleton;
}
template<> FIREBASEFEATURES_API UScriptStruct* StaticStruct<FFirebaseNotification>()
{
	return FFirebaseNotification::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FFirebaseNotification(FFirebaseNotification::StaticStruct, TEXT("/Script/FirebaseFeatures"), TEXT("FirebaseNotification"), false, nullptr, nullptr);
static struct FScriptStruct_FirebaseFeatures_StaticRegisterNativesFFirebaseNotification
{
	FScriptStruct_FirebaseFeatures_StaticRegisterNativesFFirebaseNotification()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("FirebaseNotification")),new UScriptStruct::TCppStructOps<FFirebaseNotification>);
	}
} ScriptStruct_FirebaseFeatures_StaticRegisterNativesFFirebaseNotification;
	struct Z_Construct_UScriptStruct_FFirebaseNotification_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Body_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Body;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Icon_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Icon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Sound_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Sound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Badge_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Badge;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Tag_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Tag;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Color;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClickAction_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ClickAction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BodyLocKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_BodyLocKey;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_BodyLocArgs_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BodyLocArgs_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_BodyLocArgs;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TitleLocKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TitleLocKey;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TitleLocArgs_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TitleLocArgs_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TitleLocArgs;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Android_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Android;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFirebaseNotification_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/// Used for messages that display a notification.\n///\n/// On android, this requires that the app is using the Play Services client\n/// library.\n" },
		{ "ModuleRelativePath", "Public/Messaging/MessagingLibrary.h" },
		{ "ToolTip", "Used for messages that display a notification.\n\nOn android, this requires that the app is using the Play Services client\nlibrary." },
	};
#endif
	void* Z_Construct_UScriptStruct_FFirebaseNotification_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFirebaseNotification>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFirebaseNotification_Statics::NewProp_Title_MetaData[] = {
		{ "Category", "Firebase|Messaging|Message" },
		{ "Comment", "/// Indicates notification title. This field is not visible on iOS phones\n/// and tablets.\n" },
		{ "ModuleRelativePath", "Public/Messaging/MessagingLibrary.h" },
		{ "ToolTip", "Indicates notification title. This field is not visible on iOS phones\nand tablets." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFirebaseNotification_Statics::NewProp_Title = { "Title", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFirebaseNotification, Title), METADATA_PARAMS(Z_Construct_UScriptStruct_FFirebaseNotification_Statics::NewProp_Title_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFirebaseNotification_Statics::NewProp_Title_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFirebaseNotification_Statics::NewProp_Body_MetaData[] = {
		{ "Category", "Firebase|Messaging|Message" },
		{ "Comment", "/// Indicates notification body text.\n" },
		{ "ModuleRelativePath", "Public/Messaging/MessagingLibrary.h" },
		{ "ToolTip", "Indicates notification body text." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFirebaseNotification_Statics::NewProp_Body = { "Body", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFirebaseNotification, Body), METADATA_PARAMS(Z_Construct_UScriptStruct_FFirebaseNotification_Statics::NewProp_Body_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFirebaseNotification_Statics::NewProp_Body_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFirebaseNotification_Statics::NewProp_Icon_MetaData[] = {
		{ "Category", "Firebase|Messaging|Message" },
		{ "Comment", "/// Indicates notification icon. Sets value to myicon for drawable resource\n/// myicon.\n" },
		{ "ModuleRelativePath", "Public/Messaging/MessagingLibrary.h" },
		{ "ToolTip", "Indicates notification icon. Sets value to myicon for drawable resource\nmyicon." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFirebaseNotification_Statics::NewProp_Icon = { "Icon", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFirebaseNotification, Icon), METADATA_PARAMS(Z_Construct_UScriptStruct_FFirebaseNotification_Statics::NewProp_Icon_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFirebaseNotification_Statics::NewProp_Icon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFirebaseNotification_Statics::NewProp_Sound_MetaData[] = {
		{ "Category", "Firebase|Messaging|Message" },
		{ "Comment", "/// Indicates a sound to play when the device receives the notification.\n/// Supports default, or the filename of a sound resource bundled in the\n/// app.\n///\n/// Android sound files must reside in /res/raw/, while iOS sound files\n/// can be in the main bundle of the client app or in the Library/Sounds\n/// folder of the app's data container.\n" },
		{ "ModuleRelativePath", "Public/Messaging/MessagingLibrary.h" },
		{ "ToolTip", "Indicates a sound to play when the device receives the notification.\nSupports default, or the filename of a sound resource bundled in the\napp.\n\nAndroid sound files must reside in /res/raw/, while iOS sound files\ncan be in the main bundle of the client app or in the Library/Sounds\nfolder of the app's data container." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFirebaseNotification_Statics::NewProp_Sound = { "Sound", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFirebaseNotification, Sound), METADATA_PARAMS(Z_Construct_UScriptStruct_FFirebaseNotification_Statics::NewProp_Sound_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFirebaseNotification_Statics::NewProp_Sound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFirebaseNotification_Statics::NewProp_Badge_MetaData[] = {
		{ "Category", "Firebase|Messaging|Message" },
		{ "Comment", "/// Indicates the badge on the client app home icon. iOS only.\n" },
		{ "ModuleRelativePath", "Public/Messaging/MessagingLibrary.h" },
		{ "ToolTip", "Indicates the badge on the client app home icon. iOS only." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFirebaseNotification_Statics::NewProp_Badge = { "Badge", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFirebaseNotification, Badge), METADATA_PARAMS(Z_Construct_UScriptStruct_FFirebaseNotification_Statics::NewProp_Badge_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFirebaseNotification_Statics::NewProp_Badge_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFirebaseNotification_Statics::NewProp_Tag_MetaData[] = {
		{ "Category", "Firebase|Messaging|Message" },
		{ "Comment", "/// Indicates whether each notification results in a new entry in the\n/// notification drawer on Android. If not set, each request creates a new\n/// notification. If set, and a notification with the same tag is already\n/// being shown, the new notification replaces the existing one in the\n/// notification drawer.\n" },
		{ "ModuleRelativePath", "Public/Messaging/MessagingLibrary.h" },
		{ "ToolTip", "Indicates whether each notification results in a new entry in the\nnotification drawer on Android. If not set, each request creates a new\nnotification. If set, and a notification with the same tag is already\nbeing shown, the new notification replaces the existing one in the\nnotification drawer." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFirebaseNotification_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFirebaseNotification, Tag), METADATA_PARAMS(Z_Construct_UScriptStruct_FFirebaseNotification_Statics::NewProp_Tag_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFirebaseNotification_Statics::NewProp_Tag_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFirebaseNotification_Statics::NewProp_Color_MetaData[] = {
		{ "Category", "Firebase|Messaging|Message" },
		{ "Comment", "/// Indicates color of the icon, expressed in \\#rrggbb format. Android only.\n" },
		{ "ModuleRelativePath", "Public/Messaging/MessagingLibrary.h" },
		{ "ToolTip", "Indicates color of the icon, expressed in \\#rrggbb format. Android only." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFirebaseNotification_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFirebaseNotification, Color), METADATA_PARAMS(Z_Construct_UScriptStruct_FFirebaseNotification_Statics::NewProp_Color_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFirebaseNotification_Statics::NewProp_Color_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFirebaseNotification_Statics::NewProp_ClickAction_MetaData[] = {
		{ "Category", "Firebase|Messaging|Message" },
		{ "Comment", "/// The action associated with a user click on the notification.\n///\n/// On Android, if this is set, an activity with a matching intent filter is\n/// launched when user clicks the notification.\n///\n/// If set on iOS, corresponds to category in APNS payload.\n" },
		{ "ModuleRelativePath", "Public/Messaging/MessagingLibrary.h" },
		{ "ToolTip", "The action associated with a user click on the notification.\n\nOn Android, if this is set, an activity with a matching intent filter is\nlaunched when user clicks the notification.\n\nIf set on iOS, corresponds to category in APNS payload." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFirebaseNotification_Statics::NewProp_ClickAction = { "ClickAction", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFirebaseNotification, ClickAction), METADATA_PARAMS(Z_Construct_UScriptStruct_FFirebaseNotification_Statics::NewProp_ClickAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFirebaseNotification_Statics::NewProp_ClickAction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFirebaseNotification_Statics::NewProp_BodyLocKey_MetaData[] = {
		{ "Category", "Firebase|Messaging|Message" },
		{ "Comment", "/// Indicates the key to the body string for localization.\n///\n/// On iOS, this corresponds to \"loc-key\" in APNS payload.\n///\n/// On Android, use the key in the app's string resources when populating this\n/// value.\n" },
		{ "ModuleRelativePath", "Public/Messaging/MessagingLibrary.h" },
		{ "ToolTip", "Indicates the key to the body string for localization.\n\nOn iOS, this corresponds to \"loc-key\" in APNS payload.\n\nOn Android, use the key in the app's string resources when populating this\nvalue." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFirebaseNotification_Statics::NewProp_BodyLocKey = { "BodyLocKey", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFirebaseNotification, BodyLocKey), METADATA_PARAMS(Z_Construct_UScriptStruct_FFirebaseNotification_Statics::NewProp_BodyLocKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFirebaseNotification_Statics::NewProp_BodyLocKey_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFirebaseNotification_Statics::NewProp_BodyLocArgs_Inner = { "BodyLocArgs", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFirebaseNotification_Statics::NewProp_BodyLocArgs_MetaData[] = {
		{ "Category", "Firebase|Messaging|Message" },
		{ "Comment", "/// Indicates the string value to replace format specifiers in body string\n/// for localization.\n///\n/// On iOS, this corresponds to \"loc-args\" in APNS payload.\n///\n/// On Android, these are the format arguments for the string resource. For\n/// more information, see [Formatting strings][1].\n///\n/// [1]:\n/// https://developer.android.com/guide/topics/resources/string-resource.html#FormattingAndStyling\n" },
		{ "ModuleRelativePath", "Public/Messaging/MessagingLibrary.h" },
		{ "ToolTip", "Indicates the string value to replace format specifiers in body string\nfor localization.\n\nOn iOS, this corresponds to \"loc-args\" in APNS payload.\n\nOn Android, these are the format arguments for the string resource. For\nmore information, see [Formatting strings][1].\n\n[1]:\nhttps:developer.android.com/guide/topics/resources/string-resource.html#FormattingAndStyling" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FFirebaseNotification_Statics::NewProp_BodyLocArgs = { "BodyLocArgs", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFirebaseNotification, BodyLocArgs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FFirebaseNotification_Statics::NewProp_BodyLocArgs_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFirebaseNotification_Statics::NewProp_BodyLocArgs_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFirebaseNotification_Statics::NewProp_TitleLocKey_MetaData[] = {
		{ "Category", "Firebase|Messaging|Message" },
		{ "Comment", "/// Indicates the key to the title string for localization.\n///\n/// On iOS, this corresponds to \"title-loc-key\" in APNS payload.\n///\n/// On Android, use the key in the app's string resources when populating this\n/// value.\n" },
		{ "ModuleRelativePath", "Public/Messaging/MessagingLibrary.h" },
		{ "ToolTip", "Indicates the key to the title string for localization.\n\nOn iOS, this corresponds to \"title-loc-key\" in APNS payload.\n\nOn Android, use the key in the app's string resources when populating this\nvalue." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFirebaseNotification_Statics::NewProp_TitleLocKey = { "TitleLocKey", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFirebaseNotification, TitleLocKey), METADATA_PARAMS(Z_Construct_UScriptStruct_FFirebaseNotification_Statics::NewProp_TitleLocKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFirebaseNotification_Statics::NewProp_TitleLocKey_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFirebaseNotification_Statics::NewProp_TitleLocArgs_Inner = { "TitleLocArgs", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFirebaseNotification_Statics::NewProp_TitleLocArgs_MetaData[] = {
		{ "Category", "Firebase|Messaging|Message" },
		{ "Comment", "/// Indicates the string value to replace format specifiers in title string\n/// for localization.\n///\n/// On iOS, this corresponds to \"title-loc-args\" in APNS payload.\n///\n/// On Android, these are the format arguments for the string resource. For\n/// more information, see [Formatting strings][1].\n///\n/// [1]:\n/// https://developer.android.com/guide/topics/resources/string-resource.html#FormattingAndStyling\n" },
		{ "ModuleRelativePath", "Public/Messaging/MessagingLibrary.h" },
		{ "ToolTip", "Indicates the string value to replace format specifiers in title string\nfor localization.\n\nOn iOS, this corresponds to \"title-loc-args\" in APNS payload.\n\nOn Android, these are the format arguments for the string resource. For\nmore information, see [Formatting strings][1].\n\n[1]:\nhttps:developer.android.com/guide/topics/resources/string-resource.html#FormattingAndStyling" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FFirebaseNotification_Statics::NewProp_TitleLocArgs = { "TitleLocArgs", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFirebaseNotification, TitleLocArgs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FFirebaseNotification_Statics::NewProp_TitleLocArgs_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFirebaseNotification_Statics::NewProp_TitleLocArgs_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFirebaseNotification_Statics::NewProp_Android_MetaData[] = {
		{ "Category", "Firebase|Messaging|Message" },
		{ "Comment", "/// Parameters that are unique to the Android implementation.\n" },
		{ "ModuleRelativePath", "Public/Messaging/MessagingLibrary.h" },
		{ "ToolTip", "Parameters that are unique to the Android implementation." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFirebaseNotification_Statics::NewProp_Android = { "Android", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFirebaseNotification, Android), Z_Construct_UScriptStruct_FFirebaseAndroidNotificationParams, METADATA_PARAMS(Z_Construct_UScriptStruct_FFirebaseNotification_Statics::NewProp_Android_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFirebaseNotification_Statics::NewProp_Android_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFirebaseNotification_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFirebaseNotification_Statics::NewProp_Title,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFirebaseNotification_Statics::NewProp_Body,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFirebaseNotification_Statics::NewProp_Icon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFirebaseNotification_Statics::NewProp_Sound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFirebaseNotification_Statics::NewProp_Badge,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFirebaseNotification_Statics::NewProp_Tag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFirebaseNotification_Statics::NewProp_Color,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFirebaseNotification_Statics::NewProp_ClickAction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFirebaseNotification_Statics::NewProp_BodyLocKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFirebaseNotification_Statics::NewProp_BodyLocArgs_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFirebaseNotification_Statics::NewProp_BodyLocArgs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFirebaseNotification_Statics::NewProp_TitleLocKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFirebaseNotification_Statics::NewProp_TitleLocArgs_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFirebaseNotification_Statics::NewProp_TitleLocArgs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFirebaseNotification_Statics::NewProp_Android,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFirebaseNotification_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FirebaseFeatures,
		nullptr,
		&NewStructOps,
		"FirebaseNotification",
		sizeof(FFirebaseNotification),
		alignof(FFirebaseNotification),
		Z_Construct_UScriptStruct_FFirebaseNotification_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFirebaseNotification_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFirebaseNotification_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFirebaseNotification_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFirebaseNotification()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FFirebaseNotification_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_FirebaseFeatures();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("FirebaseNotification"), sizeof(FFirebaseNotification), Get_Z_Construct_UScriptStruct_FFirebaseNotification_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FFirebaseNotification_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FFirebaseNotification_Hash() { return 2921899299U; }
class UScriptStruct* FFirebaseAndroidNotificationParams::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FIREBASEFEATURES_API uint32 Get_Z_Construct_UScriptStruct_FFirebaseAndroidNotificationParams_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FFirebaseAndroidNotificationParams, Z_Construct_UPackage__Script_FirebaseFeatures(), TEXT("FirebaseAndroidNotificationParams"), sizeof(FFirebaseAndroidNotificationParams), Get_Z_Construct_UScriptStruct_FFirebaseAndroidNotificationParams_Hash());
	}
	return Singleton;
}
template<> FIREBASEFEATURES_API UScriptStruct* StaticStruct<FFirebaseAndroidNotificationParams>()
{
	return FFirebaseAndroidNotificationParams::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FFirebaseAndroidNotificationParams(FFirebaseAndroidNotificationParams::StaticStruct, TEXT("/Script/FirebaseFeatures"), TEXT("FirebaseAndroidNotificationParams"), false, nullptr, nullptr);
static struct FScriptStruct_FirebaseFeatures_StaticRegisterNativesFFirebaseAndroidNotificationParams
{
	FScriptStruct_FirebaseFeatures_StaticRegisterNativesFFirebaseAndroidNotificationParams()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("FirebaseAndroidNotificationParams")),new UScriptStruct::TCppStructOps<FFirebaseAndroidNotificationParams>);
	}
} ScriptStruct_FirebaseFeatures_StaticRegisterNativesFFirebaseAndroidNotificationParams;
	struct Z_Construct_UScriptStruct_FFirebaseAndroidNotificationParams_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChannelId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ChannelId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFirebaseAndroidNotificationParams_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/// @brief Data structure for parameters that are unique to the Android\n/// implementation.\n" },
		{ "ModuleRelativePath", "Public/Messaging/MessagingLibrary.h" },
		{ "ToolTip", "@brief Data structure for parameters that are unique to the Android\nimplementation." },
	};
#endif
	void* Z_Construct_UScriptStruct_FFirebaseAndroidNotificationParams_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFirebaseAndroidNotificationParams>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFirebaseAndroidNotificationParams_Statics::NewProp_ChannelId_MetaData[] = {
		{ "Category", "Firebase|Messaging|Message" },
		{ "Comment", "/// The channel id that was provided when the message was sent.\n" },
		{ "ModuleRelativePath", "Public/Messaging/MessagingLibrary.h" },
		{ "ToolTip", "The channel id that was provided when the message was sent." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFirebaseAndroidNotificationParams_Statics::NewProp_ChannelId = { "ChannelId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFirebaseAndroidNotificationParams, ChannelId), METADATA_PARAMS(Z_Construct_UScriptStruct_FFirebaseAndroidNotificationParams_Statics::NewProp_ChannelId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFirebaseAndroidNotificationParams_Statics::NewProp_ChannelId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFirebaseAndroidNotificationParams_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFirebaseAndroidNotificationParams_Statics::NewProp_ChannelId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFirebaseAndroidNotificationParams_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FirebaseFeatures,
		nullptr,
		&NewStructOps,
		"FirebaseAndroidNotificationParams",
		sizeof(FFirebaseAndroidNotificationParams),
		alignof(FFirebaseAndroidNotificationParams),
		Z_Construct_UScriptStruct_FFirebaseAndroidNotificationParams_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFirebaseAndroidNotificationParams_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFirebaseAndroidNotificationParams_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFirebaseAndroidNotificationParams_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFirebaseAndroidNotificationParams()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FFirebaseAndroidNotificationParams_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_FirebaseFeatures();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("FirebaseAndroidNotificationParams"), sizeof(FFirebaseAndroidNotificationParams), Get_Z_Construct_UScriptStruct_FFirebaseAndroidNotificationParams_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FFirebaseAndroidNotificationParams_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FFirebaseAndroidNotificationParams_Hash() { return 3240248565U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
