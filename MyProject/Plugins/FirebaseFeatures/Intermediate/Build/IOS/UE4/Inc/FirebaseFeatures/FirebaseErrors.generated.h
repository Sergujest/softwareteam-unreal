// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FIREBASEFEATURES_FirebaseErrors_generated_h
#error "FirebaseErrors.generated.h already included, missing '#pragma once' in FirebaseErrors.h"
#endif
#define FIREBASEFEATURES_FirebaseErrors_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Public_FirebaseSdk_FirebaseErrors_h


#define FOREACH_ENUM_EFIREBASESTORAGEERROR(op) \
	op(EFirebaseStorageError::None) \
	op(EFirebaseStorageError::Unknown) \
	op(EFirebaseStorageError::ObjectNotFound) \
	op(EFirebaseStorageError::BucketNotFound) \
	op(EFirebaseStorageError::ProjectNotFound) \
	op(EFirebaseStorageError::QuotaExceeded) \
	op(EFirebaseStorageError::Unauthenticated) \
	op(EFirebaseStorageError::Unauthorized) \
	op(EFirebaseStorageError::RetryLimitExceeded) \
	op(EFirebaseStorageError::NonMatchingChecksum) \
	op(EFirebaseStorageError::DownloadSizeExceeded) \
	op(EFirebaseStorageError::Cancelled) 

enum class EFirebaseStorageError : uint8;
template<> FIREBASEFEATURES_API UEnum* StaticEnum<EFirebaseStorageError>();

#define FOREACH_ENUM_EFIREBASEFUNCTIONSERROR(op) \
	op(EFirebaseFunctionsError::None) \
	op(EFirebaseFunctionsError::Cancelled) \
	op(EFirebaseFunctionsError::Unknown) \
	op(EFirebaseFunctionsError::InvalidArgument) \
	op(EFirebaseFunctionsError::DeadlineExceeded) \
	op(EFirebaseFunctionsError::NotFound) \
	op(EFirebaseFunctionsError::AlreadyExists) \
	op(EFirebaseFunctionsError::PermissionDenied) \
	op(EFirebaseFunctionsError::Unauthenticated) \
	op(EFirebaseFunctionsError::ResourceExhausted) \
	op(EFirebaseFunctionsError::FailedPrecondition) \
	op(EFirebaseFunctionsError::Aborted) \
	op(EFirebaseFunctionsError::OutOfRange) \
	op(EFirebaseFunctionsError::Unimplemented) \
	op(EFirebaseFunctionsError::Internal) \
	op(EFirebaseFunctionsError::Unavailable) \
	op(EFirebaseFunctionsError::DataLoss) 

enum class EFirebaseFunctionsError : uint8;
template<> FIREBASEFEATURES_API UEnum* StaticEnum<EFirebaseFunctionsError>();

#define FOREACH_ENUM_EFIRESTOREERROR(op) \
	op(EFirestoreError::Ok) \
	op(EFirestoreError::Cancelled) \
	op(EFirestoreError::Unknown) \
	op(EFirestoreError::InvalidArgument) \
	op(EFirestoreError::DeadlineExceeded) \
	op(EFirestoreError::NotFound) \
	op(EFirestoreError::AlreadyExists) \
	op(EFirestoreError::PermissionDenied) \
	op(EFirestoreError::ResourceExhausted) \
	op(EFirestoreError::FailedPrecondition) \
	op(EFirestoreError::Aborted) \
	op(EFirestoreError::OutOfRange) \
	op(EFirestoreError::Unimplemented) \
	op(EFirestoreError::Internal) \
	op(EFirestoreError::Unavailable) \
	op(EFirestoreError::DataLoss) \
	op(EFirestoreError::Unauthenticated) 

enum class EFirestoreError : uint8;
template<> FIREBASEFEATURES_API UEnum* StaticEnum<EFirestoreError>();

#define FOREACH_ENUM_EFIREBASEAUTHERROR(op) \
	op(EFirebaseAuthError::None) \
	op(EFirebaseAuthError::Unimplemented) \
	op(EFirebaseAuthError::Failure) \
	op(EFirebaseAuthError::InvalidCustomToken) \
	op(EFirebaseAuthError::CustomTokenMismatch) \
	op(EFirebaseAuthError::InvalidCredential) \
	op(EFirebaseAuthError::UserDisabled) \
	op(EFirebaseAuthError::AccountExistsWithDifferentCredentials) \
	op(EFirebaseAuthError::OperationNotAllowed) \
	op(EFirebaseAuthError::EmailAlreadyInUse) \
	op(EFirebaseAuthError::RequiresRecentLogin) \
	op(EFirebaseAuthError::CredentialAlreadyInUse) \
	op(EFirebaseAuthError::InvalidEmail) \
	op(EFirebaseAuthError::WrongPassword) \
	op(EFirebaseAuthError::TooManyRequests) \
	op(EFirebaseAuthError::UserNotFound) \
	op(EFirebaseAuthError::ProviderAlreadyLinked) \
	op(EFirebaseAuthError::NoSuchProvider) \
	op(EFirebaseAuthError::InvalidUserToken) \
	op(EFirebaseAuthError::UserTokenExpired) \
	op(EFirebaseAuthError::NetworkRequestFailed) \
	op(EFirebaseAuthError::InvalidApiKey) \
	op(EFirebaseAuthError::AppNotAuthorized) \
	op(EFirebaseAuthError::UserMismatch) \
	op(EFirebaseAuthError::WeakPassword) \
	op(EFirebaseAuthError::NoSignedInUser) \
	op(EFirebaseAuthError::ApiNotAvailable) \
	op(EFirebaseAuthError::ExpiredActionCode) \
	op(EFirebaseAuthError::InvalidActionCode) \
	op(EFirebaseAuthError::InvalidMessagePayload) \
	op(EFirebaseAuthError::InvalidPhoneNumber) \
	op(EFirebaseAuthError::MissingPhoneNumber) \
	op(EFirebaseAuthError::InvalidRecipientEmail) \
	op(EFirebaseAuthError::InvalidSender) \
	op(EFirebaseAuthError::InvalidVerificationCode) \
	op(EFirebaseAuthError::InvalidVerificationId) \
	op(EFirebaseAuthError::MissingVerificationCode) \
	op(EFirebaseAuthError::MissingVerificationId) \
	op(EFirebaseAuthError::MissingEmail) \
	op(EFirebaseAuthError::MissingPassword) \
	op(EFirebaseAuthError::QuotaExceeded) \
	op(EFirebaseAuthError::RetryPhoneAuth) \
	op(EFirebaseAuthError::SessionExpired) \
	op(EFirebaseAuthError::AppNotVerified) \
	op(EFirebaseAuthError::AppVerificationFailed) \
	op(EFirebaseAuthError::CaptchaCheckFailed) \
	op(EFirebaseAuthError::InvalidAppCredential) \
	op(EFirebaseAuthError::MissingAppCredential) \
	op(EFirebaseAuthError::InvalidClientId) \
	op(EFirebaseAuthError::InvalidContinueUri) \
	op(EFirebaseAuthError::MissingContinueUri) \
	op(EFirebaseAuthError::KeychainError) \
	op(EFirebaseAuthError::MissingAppToken) \
	op(EFirebaseAuthError::MissingIosBundleId) \
	op(EFirebaseAuthError::NotificationNotForwarded) \
	op(EFirebaseAuthError::UnauthorizedDomain) \
	op(EFirebaseAuthError::WebContextAlreadyPresented) \
	op(EFirebaseAuthError::WebContextCancelled) \
	op(EFirebaseAuthError::DynamicLinkNotActivated) \
	op(EFirebaseAuthError::Cancelled) \
	op(EFirebaseAuthError::InvalidProviderId) \
	op(EFirebaseAuthError::WebInternalError) \
	op(EFirebaseAuthError::WebStorateUnsupported) \
	op(EFirebaseAuthError::TenantIdMismatch) \
	op(EFirebaseAuthError::UnsupportedTenantOperation) \
	op(EFirebaseAuthError::InvalidLinkDomain) \
	op(EFirebaseAuthError::RejectedCredential) \
	op(EFirebaseAuthError::PhoneNumberNotFound) \
	op(EFirebaseAuthError::InvalidTenantId) \
	op(EFirebaseAuthError::MissingClientIdentifier) \
	op(EFirebaseAuthError::MissingMultiFactorSession) \
	op(EFirebaseAuthError::MissingMultiFactorInfo) \
	op(EFirebaseAuthError::InvalidMultiFactorSession) \
	op(EFirebaseAuthError::MultiFactorInfoNotFound) \
	op(EFirebaseAuthError::AdminRestrictedOperation) \
	op(EFirebaseAuthError::UnverifiedEmail) \
	op(EFirebaseAuthError::SecondFactorAlreadyEnrolled) \
	op(EFirebaseAuthError::MaximumSecondFactorCountExceeded) \
	op(EFirebaseAuthError::UnsupportedFirstFactor) \
	op(EFirebaseAuthError::EmailChangeNeedsVerification) 

enum class EFirebaseAuthError : uint8;
template<> FIREBASEFEATURES_API UEnum* StaticEnum<EFirebaseAuthError>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
