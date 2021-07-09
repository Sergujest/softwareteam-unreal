// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FirebaseFeatures/Public/FirebaseSdk/FirebaseErrors.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFirebaseErrors() {}
// Cross Module References
	FIREBASEFEATURES_API UEnum* Z_Construct_UEnum_FirebaseFeatures_EFirebaseStorageError();
	UPackage* Z_Construct_UPackage__Script_FirebaseFeatures();
	FIREBASEFEATURES_API UEnum* Z_Construct_UEnum_FirebaseFeatures_EFirebaseFunctionsError();
	FIREBASEFEATURES_API UEnum* Z_Construct_UEnum_FirebaseFeatures_EFirestoreError();
	FIREBASEFEATURES_API UEnum* Z_Construct_UEnum_FirebaseFeatures_EFirebaseAuthError();
// End Cross Module References
	static UEnum* EFirebaseStorageError_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_FirebaseFeatures_EFirebaseStorageError, Z_Construct_UPackage__Script_FirebaseFeatures(), TEXT("EFirebaseStorageError"));
		}
		return Singleton;
	}
	template<> FIREBASEFEATURES_API UEnum* StaticEnum<EFirebaseStorageError>()
	{
		return EFirebaseStorageError_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EFirebaseStorageError(EFirebaseStorageError_StaticEnum, TEXT("/Script/FirebaseFeatures"), TEXT("EFirebaseStorageError"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_FirebaseFeatures_EFirebaseStorageError_Hash() { return 1242907927U; }
	UEnum* Z_Construct_UEnum_FirebaseFeatures_EFirebaseStorageError()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_FirebaseFeatures();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EFirebaseStorageError"), 0, Get_Z_Construct_UEnum_FirebaseFeatures_EFirebaseStorageError_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EFirebaseStorageError::None", (int64)EFirebaseStorageError::None },
				{ "EFirebaseStorageError::Unknown", (int64)EFirebaseStorageError::Unknown },
				{ "EFirebaseStorageError::ObjectNotFound", (int64)EFirebaseStorageError::ObjectNotFound },
				{ "EFirebaseStorageError::BucketNotFound", (int64)EFirebaseStorageError::BucketNotFound },
				{ "EFirebaseStorageError::ProjectNotFound", (int64)EFirebaseStorageError::ProjectNotFound },
				{ "EFirebaseStorageError::QuotaExceeded", (int64)EFirebaseStorageError::QuotaExceeded },
				{ "EFirebaseStorageError::Unauthenticated", (int64)EFirebaseStorageError::Unauthenticated },
				{ "EFirebaseStorageError::Unauthorized", (int64)EFirebaseStorageError::Unauthorized },
				{ "EFirebaseStorageError::RetryLimitExceeded", (int64)EFirebaseStorageError::RetryLimitExceeded },
				{ "EFirebaseStorageError::NonMatchingChecksum", (int64)EFirebaseStorageError::NonMatchingChecksum },
				{ "EFirebaseStorageError::DownloadSizeExceeded", (int64)EFirebaseStorageError::DownloadSizeExceeded },
				{ "EFirebaseStorageError::Cancelled", (int64)EFirebaseStorageError::Cancelled },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "BucketNotFound.Comment", "/// No bucket is configured for Cloud Storage.\n" },
				{ "BucketNotFound.Name", "EFirebaseStorageError::BucketNotFound" },
				{ "BucketNotFound.ToolTip", "No bucket is configured for Cloud Storage." },
				{ "Cancelled.Comment", "/// User cancelled the operation.\n" },
				{ "Cancelled.Name", "EFirebaseStorageError::Cancelled" },
				{ "Cancelled.ToolTip", "User cancelled the operation." },
				{ "Comment", "/// Error code returned by Cloud Storage C++ functions.\n" },
				{ "DownloadSizeExceeded.Comment", "/// Size of the downloaded file exceeds the amount of memory allocated for the\n/// download.\n" },
				{ "DownloadSizeExceeded.Name", "EFirebaseStorageError::DownloadSizeExceeded" },
				{ "DownloadSizeExceeded.ToolTip", "Size of the downloaded file exceeds the amount of memory allocated for the\ndownload." },
				{ "ModuleRelativePath", "Public/FirebaseSdk/FirebaseErrors.h" },
				{ "None.Comment", "/// The operation was a success, no error occurred.\n" },
				{ "None.Name", "EFirebaseStorageError::None" },
				{ "None.ToolTip", "The operation was a success, no error occurred." },
				{ "NonMatchingChecksum.Comment", "/// File on the client does not match the checksum of the file received by the\n/// server.\n" },
				{ "NonMatchingChecksum.Name", "EFirebaseStorageError::NonMatchingChecksum" },
				{ "NonMatchingChecksum.ToolTip", "File on the client does not match the checksum of the file received by the\nserver." },
				{ "ObjectNotFound.Comment", "/// No object exists at the desired reference.\n" },
				{ "ObjectNotFound.Name", "EFirebaseStorageError::ObjectNotFound" },
				{ "ObjectNotFound.ToolTip", "No object exists at the desired reference." },
				{ "ProjectNotFound.Comment", "/// No project is configured for Cloud Storage.\n" },
				{ "ProjectNotFound.Name", "EFirebaseStorageError::ProjectNotFound" },
				{ "ProjectNotFound.ToolTip", "No project is configured for Cloud Storage." },
				{ "QuotaExceeded.Comment", "/// Quota on your Cloud Storage bucket has been exceeded.\n" },
				{ "QuotaExceeded.Name", "EFirebaseStorageError::QuotaExceeded" },
				{ "QuotaExceeded.ToolTip", "Quota on your Cloud Storage bucket has been exceeded." },
				{ "RetryLimitExceeded.Comment", "/// The maximum time limit on an operation (upload, download, delete, etc.)\n/// has been exceeded.\n" },
				{ "RetryLimitExceeded.Name", "EFirebaseStorageError::RetryLimitExceeded" },
				{ "RetryLimitExceeded.ToolTip", "The maximum time limit on an operation (upload, download, delete, etc.)\nhas been exceeded." },
				{ "ToolTip", "Error code returned by Cloud Storage C++ functions." },
				{ "Unauthenticated.Comment", "/// User is unauthenticated.\n" },
				{ "Unauthenticated.Name", "EFirebaseStorageError::Unauthenticated" },
				{ "Unauthenticated.ToolTip", "User is unauthenticated." },
				{ "Unauthorized.Comment", "/// User is not authorized to perform the desired action.\n" },
				{ "Unauthorized.Name", "EFirebaseStorageError::Unauthorized" },
				{ "Unauthorized.ToolTip", "User is not authorized to perform the desired action." },
				{ "Unknown.Comment", "/// An unknown error occurred.\n" },
				{ "Unknown.Name", "EFirebaseStorageError::Unknown" },
				{ "Unknown.ToolTip", "An unknown error occurred." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_FirebaseFeatures,
				nullptr,
				"EFirebaseStorageError",
				"EFirebaseStorageError",
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
	static UEnum* EFirebaseFunctionsError_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_FirebaseFeatures_EFirebaseFunctionsError, Z_Construct_UPackage__Script_FirebaseFeatures(), TEXT("EFirebaseFunctionsError"));
		}
		return Singleton;
	}
	template<> FIREBASEFEATURES_API UEnum* StaticEnum<EFirebaseFunctionsError>()
	{
		return EFirebaseFunctionsError_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EFirebaseFunctionsError(EFirebaseFunctionsError_StaticEnum, TEXT("/Script/FirebaseFeatures"), TEXT("EFirebaseFunctionsError"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_FirebaseFeatures_EFirebaseFunctionsError_Hash() { return 2674043458U; }
	UEnum* Z_Construct_UEnum_FirebaseFeatures_EFirebaseFunctionsError()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_FirebaseFeatures();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EFirebaseFunctionsError"), 0, Get_Z_Construct_UEnum_FirebaseFeatures_EFirebaseFunctionsError_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EFirebaseFunctionsError::None", (int64)EFirebaseFunctionsError::None },
				{ "EFirebaseFunctionsError::Cancelled", (int64)EFirebaseFunctionsError::Cancelled },
				{ "EFirebaseFunctionsError::Unknown", (int64)EFirebaseFunctionsError::Unknown },
				{ "EFirebaseFunctionsError::InvalidArgument", (int64)EFirebaseFunctionsError::InvalidArgument },
				{ "EFirebaseFunctionsError::DeadlineExceeded", (int64)EFirebaseFunctionsError::DeadlineExceeded },
				{ "EFirebaseFunctionsError::NotFound", (int64)EFirebaseFunctionsError::NotFound },
				{ "EFirebaseFunctionsError::AlreadyExists", (int64)EFirebaseFunctionsError::AlreadyExists },
				{ "EFirebaseFunctionsError::PermissionDenied", (int64)EFirebaseFunctionsError::PermissionDenied },
				{ "EFirebaseFunctionsError::Unauthenticated", (int64)EFirebaseFunctionsError::Unauthenticated },
				{ "EFirebaseFunctionsError::ResourceExhausted", (int64)EFirebaseFunctionsError::ResourceExhausted },
				{ "EFirebaseFunctionsError::FailedPrecondition", (int64)EFirebaseFunctionsError::FailedPrecondition },
				{ "EFirebaseFunctionsError::Aborted", (int64)EFirebaseFunctionsError::Aborted },
				{ "EFirebaseFunctionsError::OutOfRange", (int64)EFirebaseFunctionsError::OutOfRange },
				{ "EFirebaseFunctionsError::Unimplemented", (int64)EFirebaseFunctionsError::Unimplemented },
				{ "EFirebaseFunctionsError::Internal", (int64)EFirebaseFunctionsError::Internal },
				{ "EFirebaseFunctionsError::Unavailable", (int64)EFirebaseFunctionsError::Unavailable },
				{ "EFirebaseFunctionsError::DataLoss", (int64)EFirebaseFunctionsError::DataLoss },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Aborted.Comment", "// The operation was aborted, typically due to a concurrency issue such as\n// a sequencer check failure or transaction abort.\n//\n// See the guidelines above for deciding between `FAILED_PRECONDITION`,\n// `ABORTED`, and `UNAVAILABLE`.\n//\n// HTTP Mapping: 409 Conflict\n" },
				{ "Aborted.Name", "EFirebaseFunctionsError::Aborted" },
				{ "Aborted.ToolTip", "The operation was aborted, typically due to a concurrency issue such as\na sequencer check failure or transaction abort.\n\nSee the guidelines above for deciding between `FAILED_PRECONDITION`,\n`ABORTED`, and `UNAVAILABLE`.\n\nHTTP Mapping: 409 Conflict" },
				{ "AlreadyExists.Comment", "// The entity that a client attempted to create (e.g., file or directory)\n// already exists.\n//\n// HTTP Mapping: 409 Conflict\n" },
				{ "AlreadyExists.Name", "EFirebaseFunctionsError::AlreadyExists" },
				{ "AlreadyExists.ToolTip", "The entity that a client attempted to create (e.g., file or directory)\nalready exists.\n\nHTTP Mapping: 409 Conflict" },
				{ "BlueprintType", "true" },
				{ "Cancelled.Comment", "// The operation was cancelled, typically by the caller.\n//\n// HTTP Mapping: 499 Client Closed Request\n" },
				{ "Cancelled.Name", "EFirebaseFunctionsError::Cancelled" },
				{ "Cancelled.ToolTip", "The operation was cancelled, typically by the caller.\n\nHTTP Mapping: 499 Client Closed Request" },
				{ "Comment", "/// Error code returned by Cloud Functions C++ functions.\n/// Standard gRPC error codes, as defined in:\n/// https://github.com/googleapis/googleapis/blob/master/google/rpc/code.proto\n" },
				{ "DataLoss.Comment", "// Unrecoverable data loss or corruption.\n//\n// HTTP Mapping: 500 Internal Server Error\n" },
				{ "DataLoss.Name", "EFirebaseFunctionsError::DataLoss" },
				{ "DataLoss.ToolTip", "Unrecoverable data loss or corruption.\n\nHTTP Mapping: 500 Internal Server Error" },
				{ "DeadlineExceeded.Comment", "// The deadline expired before the operation could complete. For operations\n// that change the state of the system, this error may be returned\n// even if the operation has completed successfully.  For example, a\n// successful response from a server could have been delayed long\n// enough for the deadline to expire.\n//\n// HTTP Mapping: 504 Gateway Timeout\n" },
				{ "DeadlineExceeded.Name", "EFirebaseFunctionsError::DeadlineExceeded" },
				{ "DeadlineExceeded.ToolTip", "The deadline expired before the operation could complete. For operations\nthat change the state of the system, this error may be returned\neven if the operation has completed successfully.  For example, a\nsuccessful response from a server could have been delayed long\nenough for the deadline to expire.\n\nHTTP Mapping: 504 Gateway Timeout" },
				{ "FailedPrecondition.Comment", "// The operation was rejected because the system is not in a state\n// required for the operation's execution.  For example, the directory\n// to be deleted is non-empty, an rmdir operation is applied to\n// a non-directory, etc.\n//\n// Service implementors can use the following guidelines to decide\n// between `FAILED_PRECONDITION`, `ABORTED`, and `UNAVAILABLE`:\n//  (a) Use `UNAVAILABLE` if the client can retry just the failing call.\n//  (b) Use `ABORTED` if the client should retry at a higher level\n//      (e.g., when a client-specified test-and-set fails, indicating the\n//      client should restart a read-modify-write sequence).\n//  (c) Use `FAILED_PRECONDITION` if the client should not retry until\n//      the system state has been explicitly fixed.  E.g., if an \"rmdir\"\n//      fails because the directory is non-empty, `FAILED_PRECONDITION`\n//      should be returned since the client should not retry unless\n//      the files are deleted from the directory.\n//\n// HTTP Mapping: 400 Bad Request\n" },
				{ "FailedPrecondition.Name", "EFirebaseFunctionsError::FailedPrecondition" },
				{ "FailedPrecondition.ToolTip", "The operation was rejected because the system is not in a state\nrequired for the operation's execution.  For example, the directory\nto be deleted is non-empty, an rmdir operation is applied to\na non-directory, etc.\n\nService implementors can use the following guidelines to decide\nbetween `FAILED_PRECONDITION`, `ABORTED`, and `UNAVAILABLE`:\n (a) Use `UNAVAILABLE` if the client can retry just the failing call.\n (b) Use `ABORTED` if the client should retry at a higher level\n     (e.g., when a client-specified test-and-set fails, indicating the\n     client should restart a read-modify-write sequence).\n (c) Use `FAILED_PRECONDITION` if the client should not retry until\n     the system state has been explicitly fixed.  E.g., if an \"rmdir\"\n     fails because the directory is non-empty, `FAILED_PRECONDITION`\n     should be returned since the client should not retry unless\n     the files are deleted from the directory.\n\nHTTP Mapping: 400 Bad Request" },
				{ "Internal.Comment", "// Internal errors.  This means that some invariants expected by the\n// underlying system have been broken.  This error code is reserved\n// for serious errors.\n//\n// HTTP Mapping: 500 Internal Server Error\n" },
				{ "Internal.Name", "EFirebaseFunctionsError::Internal" },
				{ "Internal.ToolTip", "Internal errors.  This means that some invariants expected by the\nunderlying system have been broken.  This error code is reserved\nfor serious errors.\n\nHTTP Mapping: 500 Internal Server Error" },
				{ "InvalidArgument.Comment", "// The client specified an invalid argument.  Note that this differs\n// from `FAILED_PRECONDITION`.  `INVALID_ARGUMENT` indicates arguments\n// that are problematic regardless of the state of the system\n// (e.g., a malformed file name).\n//\n// HTTP Mapping: 400 Bad Request\n" },
				{ "InvalidArgument.Name", "EFirebaseFunctionsError::InvalidArgument" },
				{ "InvalidArgument.ToolTip", "The client specified an invalid argument.  Note that this differs\nfrom `FAILED_PRECONDITION`.  `INVALID_ARGUMENT` indicates arguments\nthat are problematic regardless of the state of the system\n(e.g., a malformed file name).\n\nHTTP Mapping: 400 Bad Request" },
				{ "ModuleRelativePath", "Public/FirebaseSdk/FirebaseErrors.h" },
				{ "None.Comment", "// Not an error; returned on success\n//\n// HTTP Mapping: 200 OK\n" },
				{ "None.Name", "EFirebaseFunctionsError::None" },
				{ "None.ToolTip", "Not an error; returned on success\n\nHTTP Mapping: 200 OK" },
				{ "NotFound.Comment", "// Some requested entity (e.g., file or directory) was not found.\n//\n// Note to server developers: if a request is denied for an entire class\n// of users, such as gradual feature rollout or undocumented whitelist,\n// `NOT_FOUND` may be used. If a request is denied for some users within\n// a class of users, such as user-based access control, `PERMISSION_DENIED`\n// must be used.\n//\n// HTTP Mapping: 404 Not Found\n" },
				{ "NotFound.Name", "EFirebaseFunctionsError::NotFound" },
				{ "NotFound.ToolTip", "Some requested entity (e.g., file or directory) was not found.\n\nNote to server developers: if a request is denied for an entire class\nof users, such as gradual feature rollout or undocumented whitelist,\n`NOT_FOUND` may be used. If a request is denied for some users within\na class of users, such as user-based access control, `PERMISSION_DENIED`\nmust be used.\n\nHTTP Mapping: 404 Not Found" },
				{ "OutOfRange.Comment", "// The operation was attempted past the valid range.  E.g., seeking or\n// reading past end-of-file.\n//\n// Unlike `INVALID_ARGUMENT`, this error indicates a problem that may\n// be fixed if the system state changes. For example, a 32-bit file\n// system will generate `INVALID_ARGUMENT` if asked to read at an\n// offset that is not in the range [0,2^32-1], but it will generate\n// `OUT_OF_RANGE` if asked to read from an offset past the current\n// file size.\n//\n// There is a fair bit of overlap between `FAILED_PRECONDITION` and\n// `OUT_OF_RANGE`.  We recommend using `OUT_OF_RANGE` (the more specific\n// error) when it applies so that callers who are iterating through\n// a space can easily look for an `OUT_OF_RANGE` error to detect when\n// they are done.\n//\n// HTTP Mapping: 400 Bad Request\n" },
				{ "OutOfRange.Name", "EFirebaseFunctionsError::OutOfRange" },
				{ "OutOfRange.ToolTip", "The operation was attempted past the valid range.  E.g., seeking or\nreading past end-of-file.\n\nUnlike `INVALID_ARGUMENT`, this error indicates a problem that may\nbe fixed if the system state changes. For example, a 32-bit file\nsystem will generate `INVALID_ARGUMENT` if asked to read at an\noffset that is not in the range [0,2^32-1], but it will generate\n`OUT_OF_RANGE` if asked to read from an offset past the current\nfile size.\n\nThere is a fair bit of overlap between `FAILED_PRECONDITION` and\n`OUT_OF_RANGE`.  We recommend using `OUT_OF_RANGE` (the more specific\nerror) when it applies so that callers who are iterating through\na space can easily look for an `OUT_OF_RANGE` error to detect when\nthey are done.\n\nHTTP Mapping: 400 Bad Request" },
				{ "PermissionDenied.Comment", "// The caller does not have permission to execute the specified\n// operation. `PERMISSION_DENIED` must not be used for rejections\n// caused by exhausting some resource (use `RESOURCE_EXHAUSTED`\n// instead for those errors). `PERMISSION_DENIED` must not be\n// used if the caller can not be identified (use `UNAUTHENTICATED`\n// instead for those errors). This error code does not imply the\n// request is valid or the requested entity exists or satisfies\n// other pre-conditions.\n//\n// HTTP Mapping: 403 Forbidden\n" },
				{ "PermissionDenied.Name", "EFirebaseFunctionsError::PermissionDenied" },
				{ "PermissionDenied.ToolTip", "The caller does not have permission to execute the specified\noperation. `PERMISSION_DENIED` must not be used for rejections\ncaused by exhausting some resource (use `RESOURCE_EXHAUSTED`\ninstead for those errors). `PERMISSION_DENIED` must not be\nused if the caller can not be identified (use `UNAUTHENTICATED`\ninstead for those errors). This error code does not imply the\nrequest is valid or the requested entity exists or satisfies\nother pre-conditions.\n\nHTTP Mapping: 403 Forbidden" },
				{ "ResourceExhausted.Comment", "// Some resource has been exhausted, perhaps a per-user quota, or\n// perhaps the entire file system is out of space.\n//\n// HTTP Mapping: 429 Too Many Requests\n" },
				{ "ResourceExhausted.Name", "EFirebaseFunctionsError::ResourceExhausted" },
				{ "ResourceExhausted.ToolTip", "Some resource has been exhausted, perhaps a per-user quota, or\nperhaps the entire file system is out of space.\n\nHTTP Mapping: 429 Too Many Requests" },
				{ "ToolTip", "Error code returned by Cloud Functions C++ functions.\nStandard gRPC error codes, as defined in:\nhttps:github.com/googleapis/googleapis/blob/master/google/rpc/code.proto" },
				{ "Unauthenticated.Comment", "// The request does not have valid authentication credentials for the\n// operation.\n//\n// HTTP Mapping: 401 Unauthorized\n" },
				{ "Unauthenticated.Name", "EFirebaseFunctionsError::Unauthenticated" },
				{ "Unauthenticated.ToolTip", "The request does not have valid authentication credentials for the\noperation.\n\nHTTP Mapping: 401 Unauthorized" },
				{ "Unavailable.Comment", "// The service is currently unavailable.  This is most likely a\n// transient condition, which can be corrected by retrying with\n// a backoff.\n//\n// See the guidelines above for deciding between `FAILED_PRECONDITION`,\n// `ABORTED`, and `UNAVAILABLE`.\n//\n// HTTP Mapping: 503 Service Unavailable\n" },
				{ "Unavailable.Name", "EFirebaseFunctionsError::Unavailable" },
				{ "Unavailable.ToolTip", "The service is currently unavailable.  This is most likely a\ntransient condition, which can be corrected by retrying with\na backoff.\n\nSee the guidelines above for deciding between `FAILED_PRECONDITION`,\n`ABORTED`, and `UNAVAILABLE`.\n\nHTTP Mapping: 503 Service Unavailable" },
				{ "Unimplemented.Comment", "// The operation is not implemented or is not supported/enabled in this\n// service.\n//\n// HTTP Mapping: 501 Not Implemented\n" },
				{ "Unimplemented.Name", "EFirebaseFunctionsError::Unimplemented" },
				{ "Unimplemented.ToolTip", "The operation is not implemented or is not supported/enabled in this\nservice.\n\nHTTP Mapping: 501 Not Implemented" },
				{ "Unknown.Comment", "// Unknown error.  For example, this error may be returned when\n// a `Status` value received from another address space belongs to\n// an error space that is not known in this address space.  Also\n// errors raised by APIs that do not return enough error information\n// may be converted to this error.\n//\n// HTTP Mapping: 500 Internal Server Error\n" },
				{ "Unknown.Name", "EFirebaseFunctionsError::Unknown" },
				{ "Unknown.ToolTip", "Unknown error.  For example, this error may be returned when\na `Status` value received from another address space belongs to\nan error space that is not known in this address space.  Also\nerrors raised by APIs that do not return enough error information\nmay be converted to this error.\n\nHTTP Mapping: 500 Internal Server Error" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_FirebaseFeatures,
				nullptr,
				"EFirebaseFunctionsError",
				"EFirebaseFunctionsError",
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
	static UEnum* EFirestoreError_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_FirebaseFeatures_EFirestoreError, Z_Construct_UPackage__Script_FirebaseFeatures(), TEXT("EFirestoreError"));
		}
		return Singleton;
	}
	template<> FIREBASEFEATURES_API UEnum* StaticEnum<EFirestoreError>()
	{
		return EFirestoreError_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EFirestoreError(EFirestoreError_StaticEnum, TEXT("/Script/FirebaseFeatures"), TEXT("EFirestoreError"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_FirebaseFeatures_EFirestoreError_Hash() { return 726728137U; }
	UEnum* Z_Construct_UEnum_FirebaseFeatures_EFirestoreError()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_FirebaseFeatures();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EFirestoreError"), 0, Get_Z_Construct_UEnum_FirebaseFeatures_EFirestoreError_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EFirestoreError::Ok", (int64)EFirestoreError::Ok },
				{ "EFirestoreError::Cancelled", (int64)EFirestoreError::Cancelled },
				{ "EFirestoreError::Unknown", (int64)EFirestoreError::Unknown },
				{ "EFirestoreError::InvalidArgument", (int64)EFirestoreError::InvalidArgument },
				{ "EFirestoreError::DeadlineExceeded", (int64)EFirestoreError::DeadlineExceeded },
				{ "EFirestoreError::NotFound", (int64)EFirestoreError::NotFound },
				{ "EFirestoreError::AlreadyExists", (int64)EFirestoreError::AlreadyExists },
				{ "EFirestoreError::PermissionDenied", (int64)EFirestoreError::PermissionDenied },
				{ "EFirestoreError::ResourceExhausted", (int64)EFirestoreError::ResourceExhausted },
				{ "EFirestoreError::FailedPrecondition", (int64)EFirestoreError::FailedPrecondition },
				{ "EFirestoreError::Aborted", (int64)EFirestoreError::Aborted },
				{ "EFirestoreError::OutOfRange", (int64)EFirestoreError::OutOfRange },
				{ "EFirestoreError::Unimplemented", (int64)EFirestoreError::Unimplemented },
				{ "EFirestoreError::Internal", (int64)EFirestoreError::Internal },
				{ "EFirestoreError::Unavailable", (int64)EFirestoreError::Unavailable },
				{ "EFirestoreError::DataLoss", (int64)EFirestoreError::DataLoss },
				{ "EFirestoreError::Unauthenticated", (int64)EFirestoreError::Unauthenticated },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Aborted.Comment", "/**\n   * The operation was aborted, typically due to a concurrency issue like\n   * transaction aborts, etc.\n   */" },
				{ "Aborted.Name", "EFirestoreError::Aborted" },
				{ "Aborted.ToolTip", "The operation was aborted, typically due to a concurrency issue like\ntransaction aborts, etc." },
				{ "AlreadyExists.Comment", "/** Some document that we attempted to create already exists. */" },
				{ "AlreadyExists.Name", "EFirestoreError::AlreadyExists" },
				{ "AlreadyExists.ToolTip", "Some document that we attempted to create already exists." },
				{ "BlueprintType", "true" },
				{ "Cancelled.Comment", "/** The operation was cancelled (typically by the caller). */" },
				{ "Cancelled.Name", "EFirestoreError::Cancelled" },
				{ "Cancelled.ToolTip", "The operation was cancelled (typically by the caller)." },
				{ "DataLoss.Comment", "/** Unrecoverable data loss or corruption. */" },
				{ "DataLoss.Name", "EFirestoreError::DataLoss" },
				{ "DataLoss.ToolTip", "Unrecoverable data loss or corruption." },
				{ "DeadlineExceeded.Comment", "/**\n   * Deadline expired before operation could complete. For operations that\n   * change the state of the system, this error may be returned even if the\n   * operation has completed successfully. For example, a successful response\n   * from a server could have been delayed long enough for the deadline to\n   * expire.\n   */" },
				{ "DeadlineExceeded.Name", "EFirestoreError::DeadlineExceeded" },
				{ "DeadlineExceeded.ToolTip", "Deadline expired before operation could complete. For operations that\nchange the state of the system, this error may be returned even if the\noperation has completed successfully. For example, a successful response\nfrom a server could have been delayed long enough for the deadline to\nexpire." },
				{ "FailedPrecondition.Comment", "/**\n   * Operation was rejected because the system is not in a state required for\n   * the operation's execution.\n   */" },
				{ "FailedPrecondition.Name", "EFirestoreError::FailedPrecondition" },
				{ "FailedPrecondition.ToolTip", "Operation was rejected because the system is not in a state required for\nthe operation's execution." },
				{ "Internal.Comment", "/**\n   * Internal errors. Means some invariants expected by underlying system has\n   * been broken. If you see one of these errors, something is very broken.\n   */" },
				{ "Internal.Name", "EFirestoreError::Internal" },
				{ "Internal.ToolTip", "Internal errors. Means some invariants expected by underlying system has\nbeen broken. If you see one of these errors, something is very broken." },
				{ "InvalidArgument.Comment", "/**\n   * Client specified an invalid argument. Note that this differs from\n   * FailedPrecondition. InvalidArgument indicates arguments that are\n   * problematic regardless of the state of the system (e.g., an invalid field\n   * name).\n   */" },
				{ "InvalidArgument.Name", "EFirestoreError::InvalidArgument" },
				{ "InvalidArgument.ToolTip", "Client specified an invalid argument. Note that this differs from\nFailedPrecondition. InvalidArgument indicates arguments that are\nproblematic regardless of the state of the system (e.g., an invalid field\nname)." },
				{ "ModuleRelativePath", "Public/FirebaseSdk/FirebaseErrors.h" },
				{ "NotFound.Comment", "/** Some requested document was not found. */" },
				{ "NotFound.Name", "EFirestoreError::NotFound" },
				{ "NotFound.ToolTip", "Some requested document was not found." },
				{ "Ok.Comment", "/** The operation completed successfully. */// Note: NSError objects will never have a code with this value.\n" },
				{ "Ok.Name", "EFirestoreError::Ok" },
				{ "Ok.ToolTip", "The operation completed successfully. // Note: NSError objects will never have a code with this value." },
				{ "OutOfRange.Comment", "/** Operation was attempted past the valid range. */" },
				{ "OutOfRange.Name", "EFirestoreError::OutOfRange" },
				{ "OutOfRange.ToolTip", "Operation was attempted past the valid range." },
				{ "PermissionDenied.Comment", "/** The caller does not have permission to execute the specified operation. */" },
				{ "PermissionDenied.Name", "EFirestoreError::PermissionDenied" },
				{ "PermissionDenied.ToolTip", "The caller does not have permission to execute the specified operation." },
				{ "ResourceExhausted.Comment", "/**\n   * Some resource has been exhausted, perhaps a per-user quota, or perhaps the\n   * entire file system is out of space.\n   */" },
				{ "ResourceExhausted.Name", "EFirestoreError::ResourceExhausted" },
				{ "ResourceExhausted.ToolTip", "Some resource has been exhausted, perhaps a per-user quota, or perhaps the\nentire file system is out of space." },
				{ "Unauthenticated.Comment", "/**\n   * The request does not have valid authentication credentials for the\n   * operation.\n   */" },
				{ "Unauthenticated.Name", "EFirestoreError::Unauthenticated" },
				{ "Unauthenticated.ToolTip", "The request does not have valid authentication credentials for the\noperation." },
				{ "Unavailable.Comment", "/**\n   * The service is currently unavailable. This is a most likely a transient\n   * condition and may be corrected by retrying with a backoff.\n   */" },
				{ "Unavailable.Name", "EFirestoreError::Unavailable" },
				{ "Unavailable.ToolTip", "The service is currently unavailable. This is a most likely a transient\ncondition and may be corrected by retrying with a backoff." },
				{ "Unimplemented.Comment", "/** Operation is not implemented or not supported/enabled. */" },
				{ "Unimplemented.Name", "EFirestoreError::Unimplemented" },
				{ "Unimplemented.ToolTip", "Operation is not implemented or not supported/enabled." },
				{ "Unknown.Comment", "/** Unknown error or an error from a different error domain. */" },
				{ "Unknown.Name", "EFirestoreError::Unknown" },
				{ "Unknown.ToolTip", "Unknown error or an error from a different error domain." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_FirebaseFeatures,
				nullptr,
				"EFirestoreError",
				"EFirestoreError",
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
	static UEnum* EFirebaseAuthError_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_FirebaseFeatures_EFirebaseAuthError, Z_Construct_UPackage__Script_FirebaseFeatures(), TEXT("EFirebaseAuthError"));
		}
		return Singleton;
	}
	template<> FIREBASEFEATURES_API UEnum* StaticEnum<EFirebaseAuthError>()
	{
		return EFirebaseAuthError_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EFirebaseAuthError(EFirebaseAuthError_StaticEnum, TEXT("/Script/FirebaseFeatures"), TEXT("EFirebaseAuthError"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_FirebaseFeatures_EFirebaseAuthError_Hash() { return 3531053550U; }
	UEnum* Z_Construct_UEnum_FirebaseFeatures_EFirebaseAuthError()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_FirebaseFeatures();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EFirebaseAuthError"), 0, Get_Z_Construct_UEnum_FirebaseFeatures_EFirebaseAuthError_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EFirebaseAuthError::None", (int64)EFirebaseAuthError::None },
				{ "EFirebaseAuthError::Unimplemented", (int64)EFirebaseAuthError::Unimplemented },
				{ "EFirebaseAuthError::Failure", (int64)EFirebaseAuthError::Failure },
				{ "EFirebaseAuthError::InvalidCustomToken", (int64)EFirebaseAuthError::InvalidCustomToken },
				{ "EFirebaseAuthError::CustomTokenMismatch", (int64)EFirebaseAuthError::CustomTokenMismatch },
				{ "EFirebaseAuthError::InvalidCredential", (int64)EFirebaseAuthError::InvalidCredential },
				{ "EFirebaseAuthError::UserDisabled", (int64)EFirebaseAuthError::UserDisabled },
				{ "EFirebaseAuthError::AccountExistsWithDifferentCredentials", (int64)EFirebaseAuthError::AccountExistsWithDifferentCredentials },
				{ "EFirebaseAuthError::OperationNotAllowed", (int64)EFirebaseAuthError::OperationNotAllowed },
				{ "EFirebaseAuthError::EmailAlreadyInUse", (int64)EFirebaseAuthError::EmailAlreadyInUse },
				{ "EFirebaseAuthError::RequiresRecentLogin", (int64)EFirebaseAuthError::RequiresRecentLogin },
				{ "EFirebaseAuthError::CredentialAlreadyInUse", (int64)EFirebaseAuthError::CredentialAlreadyInUse },
				{ "EFirebaseAuthError::InvalidEmail", (int64)EFirebaseAuthError::InvalidEmail },
				{ "EFirebaseAuthError::WrongPassword", (int64)EFirebaseAuthError::WrongPassword },
				{ "EFirebaseAuthError::TooManyRequests", (int64)EFirebaseAuthError::TooManyRequests },
				{ "EFirebaseAuthError::UserNotFound", (int64)EFirebaseAuthError::UserNotFound },
				{ "EFirebaseAuthError::ProviderAlreadyLinked", (int64)EFirebaseAuthError::ProviderAlreadyLinked },
				{ "EFirebaseAuthError::NoSuchProvider", (int64)EFirebaseAuthError::NoSuchProvider },
				{ "EFirebaseAuthError::InvalidUserToken", (int64)EFirebaseAuthError::InvalidUserToken },
				{ "EFirebaseAuthError::UserTokenExpired", (int64)EFirebaseAuthError::UserTokenExpired },
				{ "EFirebaseAuthError::NetworkRequestFailed", (int64)EFirebaseAuthError::NetworkRequestFailed },
				{ "EFirebaseAuthError::InvalidApiKey", (int64)EFirebaseAuthError::InvalidApiKey },
				{ "EFirebaseAuthError::AppNotAuthorized", (int64)EFirebaseAuthError::AppNotAuthorized },
				{ "EFirebaseAuthError::UserMismatch", (int64)EFirebaseAuthError::UserMismatch },
				{ "EFirebaseAuthError::WeakPassword", (int64)EFirebaseAuthError::WeakPassword },
				{ "EFirebaseAuthError::NoSignedInUser", (int64)EFirebaseAuthError::NoSignedInUser },
				{ "EFirebaseAuthError::ApiNotAvailable", (int64)EFirebaseAuthError::ApiNotAvailable },
				{ "EFirebaseAuthError::ExpiredActionCode", (int64)EFirebaseAuthError::ExpiredActionCode },
				{ "EFirebaseAuthError::InvalidActionCode", (int64)EFirebaseAuthError::InvalidActionCode },
				{ "EFirebaseAuthError::InvalidMessagePayload", (int64)EFirebaseAuthError::InvalidMessagePayload },
				{ "EFirebaseAuthError::InvalidPhoneNumber", (int64)EFirebaseAuthError::InvalidPhoneNumber },
				{ "EFirebaseAuthError::MissingPhoneNumber", (int64)EFirebaseAuthError::MissingPhoneNumber },
				{ "EFirebaseAuthError::InvalidRecipientEmail", (int64)EFirebaseAuthError::InvalidRecipientEmail },
				{ "EFirebaseAuthError::InvalidSender", (int64)EFirebaseAuthError::InvalidSender },
				{ "EFirebaseAuthError::InvalidVerificationCode", (int64)EFirebaseAuthError::InvalidVerificationCode },
				{ "EFirebaseAuthError::InvalidVerificationId", (int64)EFirebaseAuthError::InvalidVerificationId },
				{ "EFirebaseAuthError::MissingVerificationCode", (int64)EFirebaseAuthError::MissingVerificationCode },
				{ "EFirebaseAuthError::MissingVerificationId", (int64)EFirebaseAuthError::MissingVerificationId },
				{ "EFirebaseAuthError::MissingEmail", (int64)EFirebaseAuthError::MissingEmail },
				{ "EFirebaseAuthError::MissingPassword", (int64)EFirebaseAuthError::MissingPassword },
				{ "EFirebaseAuthError::QuotaExceeded", (int64)EFirebaseAuthError::QuotaExceeded },
				{ "EFirebaseAuthError::RetryPhoneAuth", (int64)EFirebaseAuthError::RetryPhoneAuth },
				{ "EFirebaseAuthError::SessionExpired", (int64)EFirebaseAuthError::SessionExpired },
				{ "EFirebaseAuthError::AppNotVerified", (int64)EFirebaseAuthError::AppNotVerified },
				{ "EFirebaseAuthError::AppVerificationFailed", (int64)EFirebaseAuthError::AppVerificationFailed },
				{ "EFirebaseAuthError::CaptchaCheckFailed", (int64)EFirebaseAuthError::CaptchaCheckFailed },
				{ "EFirebaseAuthError::InvalidAppCredential", (int64)EFirebaseAuthError::InvalidAppCredential },
				{ "EFirebaseAuthError::MissingAppCredential", (int64)EFirebaseAuthError::MissingAppCredential },
				{ "EFirebaseAuthError::InvalidClientId", (int64)EFirebaseAuthError::InvalidClientId },
				{ "EFirebaseAuthError::InvalidContinueUri", (int64)EFirebaseAuthError::InvalidContinueUri },
				{ "EFirebaseAuthError::MissingContinueUri", (int64)EFirebaseAuthError::MissingContinueUri },
				{ "EFirebaseAuthError::KeychainError", (int64)EFirebaseAuthError::KeychainError },
				{ "EFirebaseAuthError::MissingAppToken", (int64)EFirebaseAuthError::MissingAppToken },
				{ "EFirebaseAuthError::MissingIosBundleId", (int64)EFirebaseAuthError::MissingIosBundleId },
				{ "EFirebaseAuthError::NotificationNotForwarded", (int64)EFirebaseAuthError::NotificationNotForwarded },
				{ "EFirebaseAuthError::UnauthorizedDomain", (int64)EFirebaseAuthError::UnauthorizedDomain },
				{ "EFirebaseAuthError::WebContextAlreadyPresented", (int64)EFirebaseAuthError::WebContextAlreadyPresented },
				{ "EFirebaseAuthError::WebContextCancelled", (int64)EFirebaseAuthError::WebContextCancelled },
				{ "EFirebaseAuthError::DynamicLinkNotActivated", (int64)EFirebaseAuthError::DynamicLinkNotActivated },
				{ "EFirebaseAuthError::Cancelled", (int64)EFirebaseAuthError::Cancelled },
				{ "EFirebaseAuthError::InvalidProviderId", (int64)EFirebaseAuthError::InvalidProviderId },
				{ "EFirebaseAuthError::WebInternalError", (int64)EFirebaseAuthError::WebInternalError },
				{ "EFirebaseAuthError::WebStorateUnsupported", (int64)EFirebaseAuthError::WebStorateUnsupported },
				{ "EFirebaseAuthError::TenantIdMismatch", (int64)EFirebaseAuthError::TenantIdMismatch },
				{ "EFirebaseAuthError::UnsupportedTenantOperation", (int64)EFirebaseAuthError::UnsupportedTenantOperation },
				{ "EFirebaseAuthError::InvalidLinkDomain", (int64)EFirebaseAuthError::InvalidLinkDomain },
				{ "EFirebaseAuthError::RejectedCredential", (int64)EFirebaseAuthError::RejectedCredential },
				{ "EFirebaseAuthError::PhoneNumberNotFound", (int64)EFirebaseAuthError::PhoneNumberNotFound },
				{ "EFirebaseAuthError::InvalidTenantId", (int64)EFirebaseAuthError::InvalidTenantId },
				{ "EFirebaseAuthError::MissingClientIdentifier", (int64)EFirebaseAuthError::MissingClientIdentifier },
				{ "EFirebaseAuthError::MissingMultiFactorSession", (int64)EFirebaseAuthError::MissingMultiFactorSession },
				{ "EFirebaseAuthError::MissingMultiFactorInfo", (int64)EFirebaseAuthError::MissingMultiFactorInfo },
				{ "EFirebaseAuthError::InvalidMultiFactorSession", (int64)EFirebaseAuthError::InvalidMultiFactorSession },
				{ "EFirebaseAuthError::MultiFactorInfoNotFound", (int64)EFirebaseAuthError::MultiFactorInfoNotFound },
				{ "EFirebaseAuthError::AdminRestrictedOperation", (int64)EFirebaseAuthError::AdminRestrictedOperation },
				{ "EFirebaseAuthError::UnverifiedEmail", (int64)EFirebaseAuthError::UnverifiedEmail },
				{ "EFirebaseAuthError::SecondFactorAlreadyEnrolled", (int64)EFirebaseAuthError::SecondFactorAlreadyEnrolled },
				{ "EFirebaseAuthError::MaximumSecondFactorCountExceeded", (int64)EFirebaseAuthError::MaximumSecondFactorCountExceeded },
				{ "EFirebaseAuthError::UnsupportedFirstFactor", (int64)EFirebaseAuthError::UnsupportedFirstFactor },
				{ "EFirebaseAuthError::EmailChangeNeedsVerification", (int64)EFirebaseAuthError::EmailChangeNeedsVerification },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AccountExistsWithDifferentCredentials.Comment", "/// Indicates an account already exists with the same email address but using\n/// different sign-in credentials. Account linking is required.\n/// Caused by \"Sign in with credential\" methods.\n" },
				{ "AccountExistsWithDifferentCredentials.Name", "EFirebaseAuthError::AccountExistsWithDifferentCredentials" },
				{ "AccountExistsWithDifferentCredentials.ToolTip", "Indicates an account already exists with the same email address but using\ndifferent sign-in credentials. Account linking is required.\nCaused by \"Sign in with credential\" methods." },
				{ "AdminRestrictedOperation.Comment", "/// Indicates that a request was made that is restricted to administrators\n/// only.\n" },
				{ "AdminRestrictedOperation.Name", "EFirebaseAuthError::AdminRestrictedOperation" },
				{ "AdminRestrictedOperation.ToolTip", "Indicates that a request was made that is restricted to administrators\nonly." },
				{ "ApiNotAvailable.Comment", "/// This can happen when certain methods on App are performed, when the auth\n/// API is not loaded.\n///\n/// @note This error is only reported on Android.\n" },
				{ "ApiNotAvailable.Name", "EFirebaseAuthError::ApiNotAvailable" },
				{ "ApiNotAvailable.ToolTip", "This can happen when certain methods on App are performed, when the auth\nAPI is not loaded.\n\n@note This error is only reported on Android." },
				{ "AppNotAuthorized.Comment", "/// Indicates the App is not authorized to use Firebase Authentication with\n/// the provided API Key.\n/// Common error code for all API Methods.\n/// On Android this error should no longer occur (as of 2016 v3).\n/// Common error code for all API Methods.\n" },
				{ "AppNotAuthorized.Name", "EFirebaseAuthError::AppNotAuthorized" },
				{ "AppNotAuthorized.ToolTip", "Indicates the App is not authorized to use Firebase Authentication with\nthe provided API Key.\nCommon error code for all API Methods.\nOn Android this error should no longer occur (as of 2016 v3).\nCommon error code for all API Methods." },
				{ "AppNotVerified.Comment", "/// Indicates that the app could not be verified by Firebase during phone\n/// number authentication.\n///\n/// @note This error is iOS-specific.\n" },
				{ "AppNotVerified.Name", "EFirebaseAuthError::AppNotVerified" },
				{ "AppNotVerified.ToolTip", "Indicates that the app could not be verified by Firebase during phone\nnumber authentication.\n\n@note This error is iOS-specific." },
				{ "AppVerificationFailed.Comment", "/// Indicates a general failure during the app verification flow.\n///\n/// @note This error is iOS-specific.\n" },
				{ "AppVerificationFailed.Name", "EFirebaseAuthError::AppVerificationFailed" },
				{ "AppVerificationFailed.ToolTip", "Indicates a general failure during the app verification flow.\n\n@note This error is iOS-specific." },
				{ "BlueprintType", "true" },
				{ "Cancelled.Comment", "/// Indicates that the operation was cancelled.\n" },
				{ "Cancelled.Name", "EFirebaseAuthError::Cancelled" },
				{ "Cancelled.ToolTip", "Indicates that the operation was cancelled." },
				{ "CaptchaCheckFailed.Comment", "/// Indicates that the reCAPTCHA token is not valid.\n///\n/// @note This error is iOS-specific.\n" },
				{ "CaptchaCheckFailed.Name", "EFirebaseAuthError::CaptchaCheckFailed" },
				{ "CaptchaCheckFailed.ToolTip", "Indicates that the reCAPTCHA token is not valid.\n\n@note This error is iOS-specific." },
				{ "CredentialAlreadyInUse.Comment", "/// Indicates an attempt to link with a credential that has already been\n/// linked with a different Firebase account.\n/// Caused by \"Set account info\" methods.\n" },
				{ "CredentialAlreadyInUse.Name", "EFirebaseAuthError::CredentialAlreadyInUse" },
				{ "CredentialAlreadyInUse.ToolTip", "Indicates an attempt to link with a credential that has already been\nlinked with a different Firebase account.\nCaused by \"Set account info\" methods." },
				{ "CustomTokenMismatch.Comment", "/// Indicates the service account and the API key belong to different\n/// projects.\n/// Caused by \"Bring your own auth\" methods.\n" },
				{ "CustomTokenMismatch.Name", "EFirebaseAuthError::CustomTokenMismatch" },
				{ "CustomTokenMismatch.ToolTip", "Indicates the service account and the API key belong to different\nprojects.\nCaused by \"Bring your own auth\" methods." },
				{ "DynamicLinkNotActivated.Comment", "/// Indicates that Dynamic Links in the Firebase Console is not activated.\n" },
				{ "DynamicLinkNotActivated.Name", "EFirebaseAuthError::DynamicLinkNotActivated" },
				{ "DynamicLinkNotActivated.ToolTip", "Indicates that Dynamic Links in the Firebase Console is not activated." },
				{ "EmailAlreadyInUse.Comment", "/// Indicates the email used to attempt a sign up is already in use.\n/// Caused by \"Set account info\" methods.\n" },
				{ "EmailAlreadyInUse.Name", "EFirebaseAuthError::EmailAlreadyInUse" },
				{ "EmailAlreadyInUse.ToolTip", "Indicates the email used to attempt a sign up is already in use.\nCaused by \"Set account info\" methods." },
				{ "EmailChangeNeedsVerification.Comment", "/// Indicates that a second factor users attempted to change their email with\n/// updateEmail instead of verifyBeforeUpdateEmail.\n" },
				{ "EmailChangeNeedsVerification.Name", "EFirebaseAuthError::EmailChangeNeedsVerification" },
				{ "EmailChangeNeedsVerification.ToolTip", "Indicates that a second factor users attempted to change their email with\nupdateEmail instead of verifyBeforeUpdateEmail." },
				{ "ExpiredActionCode.Comment", "/// Indicates the out-of-band authentication code is expired.\n" },
				{ "ExpiredActionCode.Name", "EFirebaseAuthError::ExpiredActionCode" },
				{ "ExpiredActionCode.ToolTip", "Indicates the out-of-band authentication code is expired." },
				{ "Failure.Comment", "/// This indicates an internal error.\n/// Common error code for all API Methods.\n" },
				{ "Failure.Name", "EFirebaseAuthError::Failure" },
				{ "Failure.ToolTip", "This indicates an internal error.\nCommon error code for all API Methods." },
				{ "InvalidActionCode.Comment", "/// Indicates the out-of-band authentication code is invalid.\n" },
				{ "InvalidActionCode.Name", "EFirebaseAuthError::InvalidActionCode" },
				{ "InvalidActionCode.ToolTip", "Indicates the out-of-band authentication code is invalid." },
				{ "InvalidApiKey.Comment", "/// Indicates an invalid API key was supplied in the request.\n/// For Android these should no longer occur (as of 2016 v3).\n/// Common error code for all API Methods.\n" },
				{ "InvalidApiKey.Name", "EFirebaseAuthError::InvalidApiKey" },
				{ "InvalidApiKey.ToolTip", "Indicates an invalid API key was supplied in the request.\nFor Android these should no longer occur (as of 2016 v3).\nCommon error code for all API Methods." },
				{ "InvalidAppCredential.Comment", "/// Indicates that an invalid APNS device token was used in the verifyClient\n/// request.\n///\n/// @note This error is iOS-specific.\n" },
				{ "InvalidAppCredential.Name", "EFirebaseAuthError::InvalidAppCredential" },
				{ "InvalidAppCredential.ToolTip", "Indicates that an invalid APNS device token was used in the verifyClient\nrequest.\n\n@note This error is iOS-specific." },
				{ "InvalidClientId.Comment", "/// Indicates that the clientID used to invoke a web flow is invalid.\n///\n/// @note This error is iOS-specific.\n" },
				{ "InvalidClientId.Name", "EFirebaseAuthError::InvalidClientId" },
				{ "InvalidClientId.ToolTip", "Indicates that the clientID used to invoke a web flow is invalid.\n\n@note This error is iOS-specific." },
				{ "InvalidContinueUri.Comment", "/// Indicates that the domain specified in the continue URI is not valid.\n///\n/// @note This error is iOS-specific.\n" },
				{ "InvalidContinueUri.Name", "EFirebaseAuthError::InvalidContinueUri" },
				{ "InvalidContinueUri.ToolTip", "Indicates that the domain specified in the continue URI is not valid.\n\n@note This error is iOS-specific." },
				{ "InvalidCredential.Comment", "/// Indicates the IDP token or requestUri is invalid.\n/// Caused by \"Sign in with credential\" methods.\n" },
				{ "InvalidCredential.Name", "EFirebaseAuthError::InvalidCredential" },
				{ "InvalidCredential.ToolTip", "Indicates the IDP token or requestUri is invalid.\nCaused by \"Sign in with credential\" methods." },
				{ "InvalidCustomToken.Comment", "/// Indicates a validation error with the custom token.\n/// This error originates from \"bring your own auth\" methods.\n" },
				{ "InvalidCustomToken.Name", "EFirebaseAuthError::InvalidCustomToken" },
				{ "InvalidCustomToken.ToolTip", "Indicates a validation error with the custom token.\nThis error originates from \"bring your own auth\" methods." },
				{ "InvalidEmail.Comment", "/// Indicates an invalid email address.\n/// Caused by \"Sign in with password\" methods.\n" },
				{ "InvalidEmail.Name", "EFirebaseAuthError::InvalidEmail" },
				{ "InvalidEmail.ToolTip", "Indicates an invalid email address.\nCaused by \"Sign in with password\" methods." },
				{ "InvalidLinkDomain.Comment", "/// Indicates that an FDL domain used for an out of band code flow is either\n/// not configured or is unauthorized for the current project.\n" },
				{ "InvalidLinkDomain.Name", "EFirebaseAuthError::InvalidLinkDomain" },
				{ "InvalidLinkDomain.ToolTip", "Indicates that an FDL domain used for an out of band code flow is either\nnot configured or is unauthorized for the current project." },
				{ "InvalidMessagePayload.Comment", "/// Indicates that there are invalid parameters in the payload during a\n/// \"send password reset email\" attempt.\n" },
				{ "InvalidMessagePayload.Name", "EFirebaseAuthError::InvalidMessagePayload" },
				{ "InvalidMessagePayload.ToolTip", "Indicates that there are invalid parameters in the payload during a\n\"send password reset email\" attempt." },
				{ "InvalidMultiFactorSession.Comment", "/// Indicates that a second factor challenge request was made containing an\n/// invalid proof of first factor sign-in.\n" },
				{ "InvalidMultiFactorSession.Name", "EFirebaseAuthError::InvalidMultiFactorSession" },
				{ "InvalidMultiFactorSession.ToolTip", "Indicates that a second factor challenge request was made containing an\ninvalid proof of first factor sign-in." },
				{ "InvalidPhoneNumber.Comment", "/// Indicates that an invalid phone number was provided.\n/// This is caused when the user is entering a phone number for verification.\n" },
				{ "InvalidPhoneNumber.Name", "EFirebaseAuthError::InvalidPhoneNumber" },
				{ "InvalidPhoneNumber.ToolTip", "Indicates that an invalid phone number was provided.\nThis is caused when the user is entering a phone number for verification." },
				{ "InvalidProviderId.Comment", "/// Indicates that the provider id given for the web operation is invalid.\n" },
				{ "InvalidProviderId.Name", "EFirebaseAuthError::InvalidProviderId" },
				{ "InvalidProviderId.ToolTip", "Indicates that the provider id given for the web operation is invalid." },
				{ "InvalidRecipientEmail.Comment", "/// Indicates that the recipient email is invalid.\n" },
				{ "InvalidRecipientEmail.Name", "EFirebaseAuthError::InvalidRecipientEmail" },
				{ "InvalidRecipientEmail.ToolTip", "Indicates that the recipient email is invalid." },
				{ "InvalidSender.Comment", "/// Indicates that the sender email is invalid during a \"send password reset\n/// email\" attempt.\n" },
				{ "InvalidSender.Name", "EFirebaseAuthError::InvalidSender" },
				{ "InvalidSender.ToolTip", "Indicates that the sender email is invalid during a \"send password reset\nemail\" attempt." },
				{ "InvalidTenantId.Comment", "/// Indicates that a request was made to the backend with an invalid tenant\n/// ID.\n" },
				{ "InvalidTenantId.Name", "EFirebaseAuthError::InvalidTenantId" },
				{ "InvalidTenantId.ToolTip", "Indicates that a request was made to the backend with an invalid tenant\nID." },
				{ "InvalidUserToken.Comment", "/// Indicates user's saved auth credential is invalid, the user needs to sign\n/// in again.\n/// Caused by requests with an STS id token.\n" },
				{ "InvalidUserToken.Name", "EFirebaseAuthError::InvalidUserToken" },
				{ "InvalidUserToken.ToolTip", "Indicates user's saved auth credential is invalid, the user needs to sign\nin again.\nCaused by requests with an STS id token." },
				{ "InvalidVerificationCode.Comment", "/// Indicates that an invalid verification code was used in the\n/// verifyPhoneNumber request.\n" },
				{ "InvalidVerificationCode.Name", "EFirebaseAuthError::InvalidVerificationCode" },
				{ "InvalidVerificationCode.ToolTip", "Indicates that an invalid verification code was used in the\nverifyPhoneNumber request." },
				{ "InvalidVerificationId.Comment", "/// Indicates that an invalid verification ID was used in the\n/// verifyPhoneNumber request.\n" },
				{ "InvalidVerificationId.Name", "EFirebaseAuthError::InvalidVerificationId" },
				{ "InvalidVerificationId.ToolTip", "Indicates that an invalid verification ID was used in the\nverifyPhoneNumber request." },
				{ "KeychainError.Comment", "/// Indicates an error occurred while attempting to access the keychain.\n/// Common error code for all API Methods.\n///\n/// @note This error is iOS-specific.\n" },
				{ "KeychainError.Name", "EFirebaseAuthError::KeychainError" },
				{ "KeychainError.ToolTip", "Indicates an error occurred while attempting to access the keychain.\nCommon error code for all API Methods.\n\n@note This error is iOS-specific." },
				{ "MaximumSecondFactorCountExceeded.Comment", "/// Indicates that the user has reached the maximum number of allowed second\n/// factors and is attempting to enroll another one.\n" },
				{ "MaximumSecondFactorCountExceeded.Name", "EFirebaseAuthError::MaximumSecondFactorCountExceeded" },
				{ "MaximumSecondFactorCountExceeded.ToolTip", "Indicates that the user has reached the maximum number of allowed second\nfactors and is attempting to enroll another one." },
				{ "MissingAppCredential.Comment", "/// Indicates that the APNS device token is missing in the verifyClient\n/// request.\n///\n/// @note This error is iOS-specific.\n" },
				{ "MissingAppCredential.Name", "EFirebaseAuthError::MissingAppCredential" },
				{ "MissingAppCredential.ToolTip", "Indicates that the APNS device token is missing in the verifyClient\nrequest.\n\n@note This error is iOS-specific." },
				{ "MissingAppToken.Comment", "/// Indicates that the APNs device token could not be obtained. The app may\n/// not have set up remote notification correctly, or may have failed to\n/// forward the APNs device token to FIRAuth if app delegate swizzling is\n/// disabled.\n///\n/// @note This error is iOS-specific.\n" },
				{ "MissingAppToken.Name", "EFirebaseAuthError::MissingAppToken" },
				{ "MissingAppToken.ToolTip", "Indicates that the APNs device token could not be obtained. The app may\nnot have set up remote notification correctly, or may have failed to\nforward the APNs device token to FIRAuth if app delegate swizzling is\ndisabled.\n\n@note This error is iOS-specific." },
				{ "MissingClientIdentifier.Comment", "/// Indicates that a request was made to the backend without a valid client\n/// identifier.\n" },
				{ "MissingClientIdentifier.Name", "EFirebaseAuthError::MissingClientIdentifier" },
				{ "MissingClientIdentifier.ToolTip", "Indicates that a request was made to the backend without a valid client\nidentifier." },
				{ "MissingContinueUri.Comment", "/// Indicates that a continue URI was not provided in a request to the backend\n/// which requires one.\n" },
				{ "MissingContinueUri.Name", "EFirebaseAuthError::MissingContinueUri" },
				{ "MissingContinueUri.ToolTip", "Indicates that a continue URI was not provided in a request to the backend\nwhich requires one." },
				{ "MissingEmail.Comment", "/// Indicates that an email address was expected but one was not provided.\n" },
				{ "MissingEmail.Name", "EFirebaseAuthError::MissingEmail" },
				{ "MissingEmail.ToolTip", "Indicates that an email address was expected but one was not provided." },
				{ "MissingIosBundleId.Comment", "/// Indicates that the iOS bundle ID is missing when an iOS App Store ID is\n/// provided.\n///\n/// @note This error is iOS-specific.\n" },
				{ "MissingIosBundleId.Name", "EFirebaseAuthError::MissingIosBundleId" },
				{ "MissingIosBundleId.ToolTip", "Indicates that the iOS bundle ID is missing when an iOS App Store ID is\nprovided.\n\n@note This error is iOS-specific." },
				{ "MissingMultiFactorInfo.Comment", "/// Indicates that a second factor challenge request was made where a second\n/// factor identifier was not provided.\n" },
				{ "MissingMultiFactorInfo.Name", "EFirebaseAuthError::MissingMultiFactorInfo" },
				{ "MissingMultiFactorInfo.ToolTip", "Indicates that a second factor challenge request was made where a second\nfactor identifier was not provided." },
				{ "MissingMultiFactorSession.Comment", "/// Indicates that a second factor challenge request was made without proof of\n/// a successful first factor sign-in.\n" },
				{ "MissingMultiFactorSession.Name", "EFirebaseAuthError::MissingMultiFactorSession" },
				{ "MissingMultiFactorSession.ToolTip", "Indicates that a second factor challenge request was made without proof of\na successful first factor sign-in." },
				{ "MissingPassword.Comment", "/// Represents the error code for when an application attempts to create an\n/// email/password account with an empty/null password field.\n///\n/// @note This error is only reported on Android.\n" },
				{ "MissingPassword.Name", "EFirebaseAuthError::MissingPassword" },
				{ "MissingPassword.ToolTip", "Represents the error code for when an application attempts to create an\nemail/password account with an empty/null password field.\n\n@note This error is only reported on Android." },
				{ "MissingPhoneNumber.Comment", "/// Indicates that a phone number was not provided during phone number\n/// verification.\n///\n/// @note This error is iOS-specific.\n" },
				{ "MissingPhoneNumber.Name", "EFirebaseAuthError::MissingPhoneNumber" },
				{ "MissingPhoneNumber.ToolTip", "Indicates that a phone number was not provided during phone number\nverification.\n\n@note This error is iOS-specific." },
				{ "MissingVerificationCode.Comment", "/// Indicates that the phone auth credential was created with an empty\n/// verification code.\n" },
				{ "MissingVerificationCode.Name", "EFirebaseAuthError::MissingVerificationCode" },
				{ "MissingVerificationCode.ToolTip", "Indicates that the phone auth credential was created with an empty\nverification code." },
				{ "MissingVerificationId.Comment", "/// Indicates that the phone auth credential was created with an empty\n/// verification ID.\n" },
				{ "MissingVerificationId.Name", "EFirebaseAuthError::MissingVerificationId" },
				{ "MissingVerificationId.ToolTip", "Indicates that the phone auth credential was created with an empty\nverification ID." },
				{ "ModuleRelativePath", "Public/FirebaseSdk/FirebaseErrors.h" },
				{ "MultiFactorInfoNotFound.Comment", "/// Indicates that the user does not have a second factor matching the\n/// provided identifier.\n" },
				{ "MultiFactorInfoNotFound.Name", "EFirebaseAuthError::MultiFactorInfoNotFound" },
				{ "MultiFactorInfoNotFound.ToolTip", "Indicates that the user does not have a second factor matching the\nprovided identifier." },
				{ "NetworkRequestFailed.Comment", "/// Indicates a network error occurred (such as a timeout, interrupted\n/// connection, or unreachable host). These types of errors are often\n/// recoverable with a retry.\n/// Common error code for all API Methods.\n" },
				{ "NetworkRequestFailed.Name", "EFirebaseAuthError::NetworkRequestFailed" },
				{ "NetworkRequestFailed.ToolTip", "Indicates a network error occurred (such as a timeout, interrupted\nconnection, or unreachable host). These types of errors are often\nrecoverable with a retry.\nCommon error code for all API Methods." },
				{ "None.Comment", "/// Success.\n" },
				{ "None.Name", "EFirebaseAuthError::None" },
				{ "None.ToolTip", "Success." },
				{ "NoSignedInUser.Comment", "/// Internal api usage error code when there is no signed-in user\n/// and getAccessToken is called.\n///\n/// @note This error is only reported on Android.\n" },
				{ "NoSignedInUser.Name", "EFirebaseAuthError::NoSignedInUser" },
				{ "NoSignedInUser.ToolTip", "Internal api usage error code when there is no signed-in user\nand getAccessToken is called.\n\n@note This error is only reported on Android." },
				{ "NoSuchProvider.Comment", "/// Indicates an attempt to unlink a provider that is not linked.\n/// Caused by \"Link credential\" methods.\n" },
				{ "NoSuchProvider.Name", "EFirebaseAuthError::NoSuchProvider" },
				{ "NoSuchProvider.ToolTip", "Indicates an attempt to unlink a provider that is not linked.\nCaused by \"Link credential\" methods." },
				{ "NotificationNotForwarded.Comment", "/// Indicates that the app fails to forward remote notification to FIRAuth.\n///\n/// @note This error is iOS-specific.\n" },
				{ "NotificationNotForwarded.Name", "EFirebaseAuthError::NotificationNotForwarded" },
				{ "NotificationNotForwarded.ToolTip", "Indicates that the app fails to forward remote notification to FIRAuth.\n\n@note This error is iOS-specific." },
				{ "OperationNotAllowed.Comment", "/// Indicates the administrator disabled sign in with the specified identity\n/// provider.\n/// Caused by \"Set account info\" methods.\n" },
				{ "OperationNotAllowed.Name", "EFirebaseAuthError::OperationNotAllowed" },
				{ "OperationNotAllowed.ToolTip", "Indicates the administrator disabled sign in with the specified identity\nprovider.\nCaused by \"Set account info\" methods." },
				{ "PhoneNumberNotFound.Comment", "/// Indicates that the phone number provided in the MFA sign in flow to be\n/// verified does not correspond to a phone second factor for the user.\n" },
				{ "PhoneNumberNotFound.Name", "EFirebaseAuthError::PhoneNumberNotFound" },
				{ "PhoneNumberNotFound.ToolTip", "Indicates that the phone number provided in the MFA sign in flow to be\nverified does not correspond to a phone second factor for the user." },
				{ "ProviderAlreadyLinked.Comment", "/// Indicates an attempt to link a provider to which the account is already\n/// linked.\n/// Caused by \"Link credential\" methods.\n" },
				{ "ProviderAlreadyLinked.Name", "EFirebaseAuthError::ProviderAlreadyLinked" },
				{ "ProviderAlreadyLinked.ToolTip", "Indicates an attempt to link a provider to which the account is already\nlinked.\nCaused by \"Link credential\" methods." },
				{ "QuotaExceeded.Comment", "/// Indicates that the project's quota for this operation (SMS messages,\n/// sign-ins, account creation) has been exceeded. Try again later.\n" },
				{ "QuotaExceeded.Name", "EFirebaseAuthError::QuotaExceeded" },
				{ "QuotaExceeded.ToolTip", "Indicates that the project's quota for this operation (SMS messages,\nsign-ins, account creation) has been exceeded. Try again later." },
				{ "RejectedCredential.Comment", "/// Indicates that credential related request data is invalid. This can occur\n/// when there is a project number mismatch (sessionInfo, spatula header,\n/// temporary proof),\n/// an incorrect temporary proof phone number, or during game center sign in\n/// when the user is\n/// already signed into a different game center account.\n" },
				{ "RejectedCredential.Name", "EFirebaseAuthError::RejectedCredential" },
				{ "RejectedCredential.ToolTip", "Indicates that credential related request data is invalid. This can occur\nwhen there is a project number mismatch (sessionInfo, spatula header,\ntemporary proof),\nan incorrect temporary proof phone number, or during game center sign in\nwhen the user is\nalready signed into a different game center account." },
				{ "RequiresRecentLogin.Comment", "/// Indicates the user has attemped to change email or password more than 5\n/// minutes after signing in, and will need to refresh the credentials.\n/// Caused by \"Set account info\" methods.\n" },
				{ "RequiresRecentLogin.Name", "EFirebaseAuthError::RequiresRecentLogin" },
				{ "RequiresRecentLogin.ToolTip", "Indicates the user has attemped to change email or password more than 5\nminutes after signing in, and will need to refresh the credentials.\nCaused by \"Set account info\" methods." },
				{ "RetryPhoneAuth.Comment", "/// Thrown when one or more of the credentials passed to a method fail to\n/// identify and/or authenticate the user subject of that operation. Inspect\n/// the error message to find out the specific cause.\n/// @note This error is only reported on Android.\n" },
				{ "RetryPhoneAuth.Name", "EFirebaseAuthError::RetryPhoneAuth" },
				{ "RetryPhoneAuth.ToolTip", "Thrown when one or more of the credentials passed to a method fail to\nidentify and/or authenticate the user subject of that operation. Inspect\nthe error message to find out the specific cause.\n@note This error is only reported on Android." },
				{ "SecondFactorAlreadyEnrolled.Comment", "/// Indicates that the user is trying to enroll a second factor that already\n/// exists on their account.\n" },
				{ "SecondFactorAlreadyEnrolled.Name", "EFirebaseAuthError::SecondFactorAlreadyEnrolled" },
				{ "SecondFactorAlreadyEnrolled.ToolTip", "Indicates that the user is trying to enroll a second factor that already\nexists on their account." },
				{ "SessionExpired.Comment", "/// Indicates that the SMS code has expired.\n" },
				{ "SessionExpired.Name", "EFirebaseAuthError::SessionExpired" },
				{ "SessionExpired.ToolTip", "Indicates that the SMS code has expired." },
				{ "TenantIdMismatch.Comment", "/// Indicates that the provided tenant ID does not match the Auth instance's\n/// tenant ID.\n" },
				{ "TenantIdMismatch.Name", "EFirebaseAuthError::TenantIdMismatch" },
				{ "TenantIdMismatch.ToolTip", "Indicates that the provided tenant ID does not match the Auth instance's\ntenant ID." },
				{ "TooManyRequests.Comment", "/// Indicates that too many requests were made to a server method.\n/// Common error code for all API methods.\n" },
				{ "TooManyRequests.Name", "EFirebaseAuthError::TooManyRequests" },
				{ "TooManyRequests.ToolTip", "Indicates that too many requests were made to a server method.\nCommon error code for all API methods." },
				{ "UnauthorizedDomain.Comment", "/// Indicates that the domain specified in the continue URL is not white-\n/// listed in the Firebase console.\n///\n/// @note This error is iOS-specific.\n" },
				{ "UnauthorizedDomain.Name", "EFirebaseAuthError::UnauthorizedDomain" },
				{ "UnauthorizedDomain.ToolTip", "Indicates that the domain specified in the continue URL is not white-\nlisted in the Firebase console.\n\n@note This error is iOS-specific." },
				{ "Unimplemented.Comment", "/// Function will be implemented in a later revision of the API.\n" },
				{ "Unimplemented.Name", "EFirebaseAuthError::Unimplemented" },
				{ "Unimplemented.ToolTip", "Function will be implemented in a later revision of the API." },
				{ "UnsupportedFirstFactor.Comment", "/// Indicates that a user either attempted to enroll in 2FA with an\n/// unsupported first factor or is enrolled and attempts a first factor sign\n/// in that is not supported for 2FA users.\n" },
				{ "UnsupportedFirstFactor.Name", "EFirebaseAuthError::UnsupportedFirstFactor" },
				{ "UnsupportedFirstFactor.ToolTip", "Indicates that a user either attempted to enroll in 2FA with an\nunsupported first factor or is enrolled and attempts a first factor sign\nin that is not supported for 2FA users." },
				{ "UnsupportedTenantOperation.Comment", "/// Indicates that a request was made to the backend with an associated tenant\n/// ID for an operation that does not support multi-tenancy.\n" },
				{ "UnsupportedTenantOperation.Name", "EFirebaseAuthError::UnsupportedTenantOperation" },
				{ "UnsupportedTenantOperation.ToolTip", "Indicates that a request was made to the backend with an associated tenant\nID for an operation that does not support multi-tenancy." },
				{ "UnverifiedEmail.Comment", "/// Indicates that the user's email must be verified to perform that request.\n" },
				{ "UnverifiedEmail.Name", "EFirebaseAuthError::UnverifiedEmail" },
				{ "UnverifiedEmail.ToolTip", "Indicates that the user's email must be verified to perform that request." },
				{ "UserDisabled.Comment", "/// Indicates the user's account is disabled on the server.\n/// Caused by \"Sign in with credential\" methods.\n" },
				{ "UserDisabled.Name", "EFirebaseAuthError::UserDisabled" },
				{ "UserDisabled.ToolTip", "Indicates the user's account is disabled on the server.\nCaused by \"Sign in with credential\" methods." },
				{ "UserMismatch.Comment", "/// Indicates that an attempt was made to reauthenticate with a user which is\n/// not the current user.\n" },
				{ "UserMismatch.Name", "EFirebaseAuthError::UserMismatch" },
				{ "UserMismatch.ToolTip", "Indicates that an attempt was made to reauthenticate with a user which is\nnot the current user." },
				{ "UserNotFound.Comment", "/// Indicates the user account was not found.\n/// Send password request email error code.\n/// Common error code for all API methods.\n" },
				{ "UserNotFound.Name", "EFirebaseAuthError::UserNotFound" },
				{ "UserNotFound.ToolTip", "Indicates the user account was not found.\nSend password request email error code.\nCommon error code for all API methods." },
				{ "UserTokenExpired.Comment", "/// Indicates the saved token has expired.\n/// For example, the user may have changed account password on another device.\n/// The user needs to sign in again on the device that made this request.\n/// Caused by requests with an STS id token.\n" },
				{ "UserTokenExpired.Name", "EFirebaseAuthError::UserTokenExpired" },
				{ "UserTokenExpired.ToolTip", "Indicates the saved token has expired.\nFor example, the user may have changed account password on another device.\nThe user needs to sign in again on the device that made this request.\nCaused by requests with an STS id token." },
				{ "WeakPassword.Comment", "/// Indicates an attempt to set a password that is considered too weak.\n" },
				{ "WeakPassword.Name", "EFirebaseAuthError::WeakPassword" },
				{ "WeakPassword.ToolTip", "Indicates an attempt to set a password that is considered too weak." },
				{ "WebContextAlreadyPresented.Comment", "/// Indicates that an attempt was made to present a new web context while one\n/// was already being presented.\n" },
				{ "WebContextAlreadyPresented.Name", "EFirebaseAuthError::WebContextAlreadyPresented" },
				{ "WebContextAlreadyPresented.ToolTip", "Indicates that an attempt was made to present a new web context while one\nwas already being presented." },
				{ "WebContextCancelled.Comment", "/// Indicates that the URL presentation was cancelled prematurely by the user.\n" },
				{ "WebContextCancelled.Name", "EFirebaseAuthError::WebContextCancelled" },
				{ "WebContextCancelled.ToolTip", "Indicates that the URL presentation was cancelled prematurely by the user." },
				{ "WebInternalError.Comment", "/// Indicates that an internal error occurred during a web operation.\n" },
				{ "WebInternalError.Name", "EFirebaseAuthError::WebInternalError" },
				{ "WebInternalError.ToolTip", "Indicates that an internal error occurred during a web operation." },
				{ "WebStorateUnsupported.Comment", "/// Indicates that 3rd party cookies or data are disabled, or that there was\n/// a problem with the browser.\n" },
				{ "WebStorateUnsupported.Name", "EFirebaseAuthError::WebStorateUnsupported" },
				{ "WebStorateUnsupported.ToolTip", "Indicates that 3rd party cookies or data are disabled, or that there was\na problem with the browser." },
				{ "WrongPassword.Comment", "/// Indicates the user attempted sign in with a wrong password.\n/// Caused by \"Sign in with password\" methods.\n" },
				{ "WrongPassword.Name", "EFirebaseAuthError::WrongPassword" },
				{ "WrongPassword.ToolTip", "Indicates the user attempted sign in with a wrong password.\nCaused by \"Sign in with password\" methods." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_FirebaseFeatures,
				nullptr,
				"EFirebaseAuthError",
				"EFirebaseAuthError",
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
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
