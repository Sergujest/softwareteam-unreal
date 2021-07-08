// Copyright Pandores Marketplace 2021. All Rights Reserved.

#include "Storage/Storage.h"

THIRD_PARTY_INCLUDES_START
#	include "firebase/storage.h"
#	include "firebase/storage/storage_reference.h"
THIRD_PARTY_INCLUDES_END

#include "Storage/StorageReference.h"

namespace
{
	firebase::storage::Storage* GetStorage()
	{
		check(firebase::App::GetInstance());

		auto* const StorageInstance = firebase::storage::Storage::GetInstance(firebase::App::GetInstance());

		check(StorageInstance);

		return StorageInstance;
	}
};

FString UFirebaseStorage::GetUrl()
{
	return UTF8_TO_TCHAR(GetStorage()->url().c_str());
}

UFirebaseStorageReference* UFirebaseStorage::GetReference()
{
	UFirebaseStorageReference* const Reference = NewObject<UFirebaseStorageReference>();

	Reference->Reference = GetStorage()->GetReference();

	return Reference;
}

UFirebaseStorageReference* UFirebaseStorage::GetReferenceFromPath(const FString& Path)
{
	UFirebaseStorageReference* const Reference = NewObject<UFirebaseStorageReference>();

	Reference->Reference = GetStorage()->GetReference(TCHAR_TO_UTF8(*Path));

	return Reference;
}

UFirebaseStorageReference* UFirebaseStorage::GetReferenceFromUrl(const FString& Url)
{
	UFirebaseStorageReference* const Reference = NewObject<UFirebaseStorageReference>();

	Reference->Reference = GetStorage()->GetReferenceFromUrl(TCHAR_TO_UTF8(*Url));

	return Reference;
}

float UFirebaseStorage::GetMaxDownloadRetryTime()
{
	return (float)GetStorage()->max_download_retry_time();
}

void  UFirebaseStorage::SetMaxDownloadRetryTime(float MaxTransferRetrySeconds)
{
	GetStorage()->set_max_download_retry_time((double)MaxTransferRetrySeconds);
}

float UFirebaseStorage::GetMaxUploadRetryTime()
{
	return (float)GetStorage()->max_upload_retry_time();
}

void  UFirebaseStorage::SetMaxUploadRetryTime(float MaxTransferRetrySeconds)
{
	GetStorage()->set_max_upload_retry_time((double)MaxTransferRetrySeconds);
}

float UFirebaseStorage::GetMaxOperationRetryTime()
{
	return (float)GetStorage()->max_operation_retry_time();
}

void  UFirebaseStorage::SetMaxOperationRetryTime(float MaxTransferRetrySeconds)
{
	GetStorage()->set_max_operation_retry_time((double)MaxTransferRetrySeconds);
}
