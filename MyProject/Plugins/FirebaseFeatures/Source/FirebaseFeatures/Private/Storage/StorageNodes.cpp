// Copyright Pandores Marketplace 2021. All Rights Reserved.

#include "Storage/StorageNodes.h"

#include "FirebaseFeatures.h"


void UStorageBlueprintLibrary::Pause(FFirebaseStorageController& Controller, EFirebaseStorageBlueprintExecutionPin& Branches)
{
	Branches = Controller.Pause() ? EFirebaseStorageBlueprintExecutionPin::Success : EFirebaseStorageBlueprintExecutionPin::Failed;
}

void UStorageBlueprintLibrary::Resume(FFirebaseStorageController& Controller, EFirebaseStorageBlueprintExecutionPin& Branches)
{
	Branches = Controller.Resume() ? EFirebaseStorageBlueprintExecutionPin::Success : EFirebaseStorageBlueprintExecutionPin::Failed;
}

void UStorageBlueprintLibrary::Cancel(FFirebaseStorageController& Controller, EFirebaseStorageBlueprintExecutionPin& Branches)
{
	Branches = Controller.Cancel() ? EFirebaseStorageBlueprintExecutionPin::Success : EFirebaseStorageBlueprintExecutionPin::Failed;
}

bool UStorageBlueprintLibrary::IsPaused(FFirebaseStorageController& Controller)
{
	return Controller.Cancel();
}

int64 UStorageBlueprintLibrary::BytesTransferred(const FFirebaseStorageController& Controller)
{
	return Controller.BytesTransferred();
}

int64 UStorageBlueprintLibrary::TotalByteCount(const FFirebaseStorageController& Controller)
{
	return Controller.TotalByteCount();
}

UFirebaseStorageReference* UStorageBlueprintLibrary::GetReference(const FFirebaseStorageController& Controller)
{
	return Controller.GetReference();
}

bool UStorageBlueprintLibrary::IsValid(const FFirebaseStorageController& Controller)
{
	return Controller.IsValid();
}

FString UStorageBlueprintLibrary::GetBucket(const FFirebaseStorageMetadata& Metadata)
{
	return Metadata.GetBucket();
}

void UStorageBlueprintLibrary::SetCachControl(UPARAM(ref) FFirebaseStorageMetadata& Metadata, const FString& CacheControl)
{
	Metadata.SetCachControl(CacheControl);
}

FString UStorageBlueprintLibrary::GetCacheControl(const FFirebaseStorageMetadata& Metadata)
{
	return Metadata.GetCacheControl();
}

void UStorageBlueprintLibrary::SetContentDisposition(UPARAM(ref) FFirebaseStorageMetadata& Metadata, const FString& Disposition)
{
	Metadata.SetContentDisposition(Disposition);
}

FString UStorageBlueprintLibrary::GetContentDisposition(const FFirebaseStorageMetadata& Metadata)
{
	return Metadata.GetContentDisposition();
}

void UStorageBlueprintLibrary::SetContentEncoding(UPARAM(ref) FFirebaseStorageMetadata& Metadata, const FString& Encoding)
{
	Metadata.SetContentEncoding(Encoding);
}

FString UStorageBlueprintLibrary::GetContentEncoding(const FFirebaseStorageMetadata& Metadata)
{
	return Metadata.GetContentEncoding();
}

void UStorageBlueprintLibrary::SetContentLanguage(UPARAM(ref) FFirebaseStorageMetadata& Metadata, const FString& Language)
{
	return Metadata.SetContentLanguage(Language);
}

FString UStorageBlueprintLibrary::GetContentLanguage(const FFirebaseStorageMetadata& Metadata)
{
	return Metadata.GetContentLanguage();
}

void UStorageBlueprintLibrary::SetContentType(UPARAM(ref) FFirebaseStorageMetadata& Metadata, const FString& Type)
{
	Metadata.SetContentType(Type);
}

FString UStorageBlueprintLibrary::ContentType(const FFirebaseStorageMetadata& Metadata)
{
	return Metadata.ContentType();
}

int64 UStorageBlueprintLibrary::GetCreationTime(const FFirebaseStorageMetadata& Metadata)
{
	return Metadata.GetCreationTime();
}

TMap<FString, FString> UStorageBlueprintLibrary::GetCustomMetadata(const FFirebaseStorageMetadata& Metadata)
{
	return Metadata.GetCustomMetadata();
}

int64 UStorageBlueprintLibrary::GetGeneration(const FFirebaseStorageMetadata& Metadata)
{
	return Metadata.GetGeneration();
}

int64 UStorageBlueprintLibrary::GetMetadataGeneration(const FFirebaseStorageMetadata& Metadata)
{
	return Metadata.GetMetadataGeneration();
}

FString UStorageBlueprintLibrary::GetName(const FFirebaseStorageMetadata& Metadata)
{
	return Metadata.GetName();
}

FString UStorageBlueprintLibrary::GetPath(const FFirebaseStorageMetadata& Metadata)
{
	return Metadata.GetPath();
}

UFirebaseStorageReference* UStorageBlueprintLibrary::GetReference_Metadata(const FFirebaseStorageMetadata& Metadata)
{
	return Metadata.GetReference();
}

int64 UStorageBlueprintLibrary::GetSizeBytes(const FFirebaseStorageMetadata& Metadata)
{
	return Metadata.GetSizeBytes();
}

int64 UStorageBlueprintLibrary::GetUpdatedTime(const FFirebaseStorageMetadata& Metadata)
{
	return Metadata.GetUpdatedTime();
}

bool UStorageBlueprintLibrary::IsValid_Metadata(const FFirebaseStorageMetadata& Metadata)
{
	return Metadata.IsValid();
}

FString UStorageBlueprintLibrary::GetMd5Hash(const FFirebaseStorageMetadata& Metadata)
{
	return Metadata.GetMd5Hash();
}

#define CHECK_REFERENCE(...)											\
	if (!_Reference)													\
	{																	\
		UE_LOG(LogFirebaseStorage, Error,								\
			TEXT("Passed a nullptr Storage reference to function."));	\
		OnActionOver(EFirebaseStorageError::Unknown, ## __VA_ARGS__);	\
		SetReadyToDestroy();											\
		return;															\
	}

#define CALL_CALLBACK(Name, ...) do										\
	{																	\
		(Error == EFirebaseStorageError::None ? Name : OnError)			\
			.Broadcast(Error, ## __VA_ARGS__);							\
		SetReadyToDestroy();											\
	} while(0)

UStorageDeleteProxy* UStorageDeleteProxy::Delete(UFirebaseStorageReference* StorageReference)
{
	ThisClass* const Proxy = NewObject<ThisClass>();

	Proxy->_Reference = StorageReference;

	return Proxy;
}

void UStorageDeleteProxy::Activate()
{
	CHECK_REFERENCE();

	_Reference->Delete(FFirebaseStorageCallback::CreateUObject(this, &ThisClass::OnActionOver));
}

void UStorageDeleteProxy::OnActionOver(const EFirebaseStorageError Error)
{
	CALL_CALLBACK(OnDeleted);
}

UStorageGetFileProxy* UStorageGetFileProxy::GetFile(UFirebaseStorageReference* StorageReference, const FString& Path)
{
	ThisClass* const Proxy = NewObject<ThisClass>();

	Proxy->_Reference = StorageReference;
	Proxy->_Path = Path;

	return Proxy;
}

void UStorageGetFileProxy::Activate()
{
	CHECK_REFERENCE(0);
	
	_Reference->GetFile
	(
		_Path,
		Controller,
		FFirebaseStorageInt64Callback	  ::CreateUObject(this, &ThisClass::OnActionOver),
		FFirebaseStorageControllerCallback::CreateUObject(this, &ThisClass::OnProgressInternal),
		FFirebaseStorageControllerCallback::CreateUObject(this, &ThisClass::OnPausedInternal)
	);
}

void UStorageGetFileProxy::OnActionOver(const EFirebaseStorageError Error, const int64 Bytes)
{
	CALL_CALLBACK(OnFileDownloaded, Bytes, Controller);
}


void UStorageGetFileProxy::OnPausedInternal(FFirebaseStorageController& ActionController)
{
	OnPaused.Broadcast(EFirebaseStorageError::None, Controller.BytesTransferred(), Controller);
}

void UStorageGetFileProxy::OnProgressInternal(FFirebaseStorageController& ActionController)
{
	OnProgress.Broadcast(EFirebaseStorageError::None, Controller.BytesTransferred(), Controller);
}

UStorageGetBytesProxy* UStorageGetBytesProxy::GetBytes(UFirebaseStorageReference* StorageReference, const int64 BufferSize)
{
	ThisClass* const Proxy = NewObject<ThisClass>();

	Proxy->_Reference = StorageReference;
	Proxy->_BufferSize = BufferSize;

	return Proxy;
}

void UStorageGetBytesProxy::Activate()
{
	CHECK_REFERENCE(TArray<uint8>());

	_Reference->GetBytes
	(
		_BufferSize,
		Controller,
		FFirebaseStorageBinaryCallback::CreateUObject(this, &ThisClass::OnActionOver),
		FFirebaseStorageControllerCallback::CreateUObject(this, &ThisClass::OnProgressInternal),
		FFirebaseStorageControllerCallback::CreateUObject(this, &ThisClass::OnPausedInternal)
	);
}

void UStorageGetBytesProxy::OnActionOver(const EFirebaseStorageError Error, const TArray<uint8>& Bytes)
{
	CALL_CALLBACK(OnFileDownloaded, Bytes, Controller);
}

void UStorageGetBytesProxy::OnPausedInternal(FFirebaseStorageController& ActionController)
{
	OnPaused.Broadcast(EFirebaseStorageError::None, TArray<uint8>(), Controller);
}

void UStorageGetBytesProxy::OnProgressInternal(FFirebaseStorageController& ActionController)
{
	OnProgress.Broadcast(EFirebaseStorageError::None, TArray<uint8>(), Controller);
}

UStorageGetDownloadUrlProxy* UStorageGetDownloadUrlProxy::GetDownloadUrl(UFirebaseStorageReference* StorageReference)
{
	ThisClass* const Proxy = NewObject<ThisClass>();

	Proxy->_Reference = StorageReference;

	return Proxy;
}

void UStorageGetDownloadUrlProxy::Activate()
{
	CHECK_REFERENCE(TEXT(""));

	_Reference->GetDownloadUrl(FFirebaseStorageStringCallback::CreateUObject(this, &ThisClass::OnActionOver));
}

void UStorageGetDownloadUrlProxy::OnActionOver(const EFirebaseStorageError Error, const FString& Url)
{
	CALL_CALLBACK(OnUrlReceived, Url);
}

UStorageGetMetadataProxy* UStorageGetMetadataProxy::GetMetadata(UFirebaseStorageReference* StorageReference)
{
	ThisClass* const Proxy = NewObject<ThisClass>();

	Proxy->_Reference = StorageReference;

	return Proxy;
}

void UStorageGetMetadataProxy::Activate()
{
	CHECK_REFERENCE(FFirebaseStorageMetadata());

	_Reference->GetMetadata(FFirebaseStorageMetadataCallback::CreateUObject(this, &ThisClass::OnActionOver));
}

void UStorageGetMetadataProxy::OnActionOver(const EFirebaseStorageError Error, const FFirebaseStorageMetadata& Metadata)
{
	CALL_CALLBACK(OnMetadataReceived, Metadata);
}

UStorageUpdateMetadataProxy* UStorageUpdateMetadataProxy::UpdateMetadata(UFirebaseStorageReference* StorageReference,
	const FFirebaseStorageMetadata& Metadata)
{
	ThisClass* const Proxy = NewObject<ThisClass>();

	Proxy->_Reference = StorageReference;
	Proxy->_Metadata = Metadata;

	return Proxy;
}

void UStorageUpdateMetadataProxy::Activate()
{
	CHECK_REFERENCE(FFirebaseStorageMetadata());

	_Reference->UpdateMetadata(_Metadata, FFirebaseStorageMetadataCallback::CreateUObject(this, &ThisClass::OnActionOver));
}

void UStorageUpdateMetadataProxy::OnActionOver(const EFirebaseStorageError Error, const FFirebaseStorageMetadata& Metadata)
{
	CALL_CALLBACK(OnMetadataUpdated, Metadata);
}

UStoragePutBytesProxy* UStoragePutBytesProxy::PutBytes(UFirebaseStorageReference* StorageReference, const TArray<uint8>& Bytes)
{
	ThisClass* const Proxy = NewObject<ThisClass>();

	Proxy->_Reference = StorageReference;
	Proxy->_Bytes  = Bytes;

	return Proxy;
}

void UStoragePutBytesProxy::Activate()
{
	CHECK_REFERENCE(FFirebaseStorageMetadata());

	_Reference->PutBytes
	(
		_Bytes,
		Controller,
		FFirebaseStorageMetadataCallback  ::CreateUObject(this, &ThisClass::OnActionOver),
		FFirebaseStorageControllerCallback::CreateUObject(this, &ThisClass::OnProgressInternal),
		FFirebaseStorageControllerCallback::CreateUObject(this, &ThisClass::OnPausedInternal)
	);
}

void UStoragePutBytesProxy::OnActionOver(const EFirebaseStorageError Error, const FFirebaseStorageMetadata& Meta)
{
	CALL_CALLBACK(OnBytesUploaded, Meta, Controller);
}

void UStoragePutBytesProxy::OnPausedInternal(FFirebaseStorageController& ActionController)
{
	OnPaused.Broadcast(EFirebaseStorageError::None, FFirebaseStorageMetadata(), Controller);
}

void UStoragePutBytesProxy::OnProgressInternal(FFirebaseStorageController& ActionController)
{
	OnProgress.Broadcast(EFirebaseStorageError::None, FFirebaseStorageMetadata(), Controller);
}


UStoragePutBytesWithMetadataProxy* UStoragePutBytesWithMetadataProxy::PutBytesWithMetadata(UFirebaseStorageReference* StorageReference, const TArray<uint8>& Bytes, const FFirebaseStorageMetadata& Metadata)
{
	ThisClass* const Proxy = NewObject<ThisClass>();

	Proxy->_Reference = StorageReference;
	Proxy->_Bytes = Bytes;
	Proxy->_Meta = Metadata;

	return Proxy;
}

void UStoragePutBytesWithMetadataProxy::Activate()
{
	CHECK_REFERENCE(FFirebaseStorageMetadata());

	_Reference->PutBytes
	(
		_Bytes,
		_Meta,
		Controller,
		FFirebaseStorageMetadataCallback::CreateUObject(this, &ThisClass::OnActionOver),
		FFirebaseStorageControllerCallback::CreateUObject(this, &ThisClass::OnProgressInternal),
		FFirebaseStorageControllerCallback::CreateUObject(this, &ThisClass::OnPausedInternal)
	);
}

void UStoragePutBytesWithMetadataProxy::OnActionOver(const EFirebaseStorageError Error, const FFirebaseStorageMetadata& Meta)
{
	CALL_CALLBACK(OnBytesUploaded, Meta, Controller);
}

void UStoragePutBytesWithMetadataProxy::OnPausedInternal(FFirebaseStorageController& ActionController)
{
	OnPaused.Broadcast(EFirebaseStorageError::None, FFirebaseStorageMetadata(), Controller);
}

void UStoragePutBytesWithMetadataProxy::OnProgressInternal(FFirebaseStorageController& ActionController)
{
	OnProgress.Broadcast(EFirebaseStorageError::None, FFirebaseStorageMetadata(), Controller);
}


UStoragePutFileProxy* UStoragePutFileProxy::PutFile(UFirebaseStorageReference* StorageReference, const FString& Path)
{
	ThisClass* const Proxy = NewObject<ThisClass>();

	Proxy->_Reference = StorageReference;
	Proxy->_Path = Path;

	return Proxy;
}

void UStoragePutFileProxy::Activate()
{
	CHECK_REFERENCE(FFirebaseStorageMetadata());

	_Reference->PutFile
	(
		_Path,
		Controller,
		FFirebaseStorageMetadataCallback::CreateUObject(this, &ThisClass::OnActionOver),
		FFirebaseStorageControllerCallback::CreateUObject(this, &ThisClass::OnProgressInternal),
		FFirebaseStorageControllerCallback::CreateUObject(this, &ThisClass::OnPausedInternal)
	);
}

void UStoragePutFileProxy::OnActionOver(const EFirebaseStorageError Error, const FFirebaseStorageMetadata& Meta)
{
	CALL_CALLBACK(OnFileUploaded, Meta, Controller);
}

void UStoragePutFileProxy::OnPausedInternal(FFirebaseStorageController& ActionController)
{
	OnPaused.Broadcast(EFirebaseStorageError::None, FFirebaseStorageMetadata(), Controller);
}

void UStoragePutFileProxy::OnProgressInternal(FFirebaseStorageController& ActionController)
{
	OnProgress.Broadcast(EFirebaseStorageError::None, FFirebaseStorageMetadata(), Controller);
}


UStoragePutFileWithMetadataProxy* UStoragePutFileWithMetadataProxy::PutFileWithMetadata(UFirebaseStorageReference* StorageReference,
	const FString& Path, const FFirebaseStorageMetadata& Metadata)
{
	ThisClass* const Proxy = NewObject<ThisClass>();

	Proxy->_Reference = StorageReference;
	Proxy->_Path = Path;
	Proxy->_Meta = Metadata;

	return Proxy;
}

void UStoragePutFileWithMetadataProxy::Activate()
{
	CHECK_REFERENCE(FFirebaseStorageMetadata());

	_Reference->PutFile
	(
		_Path,
		_Meta,
		Controller,
		FFirebaseStorageMetadataCallback  ::CreateUObject(this, &ThisClass::OnActionOver),
		FFirebaseStorageControllerCallback::CreateUObject(this, &ThisClass::OnProgressInternal),
		FFirebaseStorageControllerCallback::CreateUObject(this, &ThisClass::OnPausedInternal)
	);
}

void UStoragePutFileWithMetadataProxy::OnActionOver(const EFirebaseStorageError Error, const FFirebaseStorageMetadata& Meta)
{
	CALL_CALLBACK(OnFileUploaded, Meta, Controller);
}

void UStoragePutFileWithMetadataProxy::OnPausedInternal(FFirebaseStorageController& ActionController)
{
	OnPaused.Broadcast(EFirebaseStorageError::None, FFirebaseStorageMetadata(), Controller);
}

void UStoragePutFileWithMetadataProxy::OnProgressInternal(FFirebaseStorageController& ActionController)
{
	OnProgress.Broadcast(EFirebaseStorageError::None, FFirebaseStorageMetadata(), Controller);
}

#undef CALL_CALLBACK
#undef CHECK_REFERENCE
