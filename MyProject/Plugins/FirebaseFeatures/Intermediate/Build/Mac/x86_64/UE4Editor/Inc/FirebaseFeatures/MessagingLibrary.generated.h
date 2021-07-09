// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FIREBASEFEATURES_MessagingLibrary_generated_h
#error "MessagingLibrary.generated.h already included, missing '#pragma once' in MessagingLibrary.h"
#endif
#define FIREBASEFEATURES_MessagingLibrary_generated_h

#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Public_Messaging_MessagingLibrary_h_178_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FFirebaseMessage_Statics; \
	static class UScriptStruct* StaticStruct();


template<> FIREBASEFEATURES_API UScriptStruct* StaticStruct<struct FFirebaseMessage>();

#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Public_Messaging_MessagingLibrary_h_51_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FFirebaseNotification_Statics; \
	static class UScriptStruct* StaticStruct();


template<> FIREBASEFEATURES_API UScriptStruct* StaticStruct<struct FFirebaseNotification>();

#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Public_Messaging_MessagingLibrary_h_37_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FFirebaseAndroidNotificationParams_Statics; \
	static class UScriptStruct* StaticStruct();


template<> FIREBASEFEATURES_API UScriptStruct* StaticStruct<struct FFirebaseAndroidNotificationParams>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Public_Messaging_MessagingLibrary_h


#define FOREACH_ENUM_EFIREBASEMESSAGINGERROR(op) \
	op(EFirebaseMessagingError::None) \
	op(EFirebaseMessagingError::FailedToRegisterForRemoteNotifications) \
	op(EFirebaseMessagingError::InvalidTopicName) \
	op(EFirebaseMessagingError::NoRegistrationToken) \
	op(EFirebaseMessagingError::Unknown) 

enum class EFirebaseMessagingError : uint8;
template<> FIREBASEFEATURES_API UEnum* StaticEnum<EFirebaseMessagingError>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
