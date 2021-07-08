// Copyright Pandores Marketplace 2021. All Rights Reserved.

#include "Storage/StorageReference.h"

#include "FirebaseFeatures.h"

#include "Async/Async.h"

THIRD_PARTY_INCLUDES_START
#	include "firebase/storage.h"
#	include "firebase/storage/controller.h"
#	include "firebase/storage/listener.h"
THIRD_PARTY_INCLUDES_END

FFirebaseStorageMetadata::FFirebaseStorageMetadata()
{
	// We don't want that struct initialization run by UE4 creates
	// a new metadata before the App instance is created.
	// This is typically the case while cooking.
	if (firebase::App::GetInstance())
	{
		Metadata = MakeUnique<firebase::storage::Metadata>();
	}
}

FFirebaseStorageMetadata::FFirebaseStorageMetadata(const FFirebaseStorageMetadata& Other)
{
	*this = Other;
}

FFirebaseStorageMetadata::FFirebaseStorageMetadata(FFirebaseStorageMetadata&& Other)
	: Metadata(MoveTemp(Other.Metadata))
{
}

FFirebaseStorageMetadata& FFirebaseStorageMetadata::operator=(const FFirebaseStorageMetadata& Other)
{
	if (Other.Metadata)
	{
		if (Metadata)
		{
			*Metadata = *Other.Metadata;
		}
		else
		{
			Metadata = MakeUnique<firebase::storage::Metadata>(*Other.Metadata);
		}
	}
	else
	{
		Metadata.Reset(nullptr);
	}

	return *this;
}

FFirebaseStorageMetadata& FFirebaseStorageMetadata::operator=(FFirebaseStorageMetadata&& Other)
{
	Metadata = MoveTemp(Other.Metadata);
	return *this;
}
FString FFirebaseStorageMetadata::GetBucket() const
{
	return Metadata ? UTF8_TO_TCHAR(Metadata->bucket()) : TEXT("");
}

void	FFirebaseStorageMetadata::SetCachControl(const FString& cache_control)
{
	if (Metadata)
	{
		Metadata->set_cache_control(TCHAR_TO_UTF8(*cache_control));
	}
}

FString FFirebaseStorageMetadata::GetCacheControl() const
{
	return Metadata ? UTF8_TO_TCHAR(Metadata->cache_control()) : TEXT("");
}

void	FFirebaseStorageMetadata::SetContentDisposition(const FString& disposition)
{
	if (Metadata)
	{
		Metadata->set_content_disposition(TCHAR_TO_UTF8(*disposition));
	}
}

FString FFirebaseStorageMetadata::GetContentDisposition() const
{
	return Metadata ? UTF8_TO_TCHAR(Metadata->content_disposition()) : TEXT("");
}

void	FFirebaseStorageMetadata::SetContentEncoding(const FString& encoding)
{
	if (Metadata)
	{
		Metadata->set_content_encoding(TCHAR_TO_UTF8(*encoding));
	}
}

FString FFirebaseStorageMetadata::GetContentEncoding() const
{
	return Metadata ? UTF8_TO_TCHAR(Metadata->content_encoding()) : TEXT("");
}

void	FFirebaseStorageMetadata::SetContentLanguage(const FString& language)
{
	if (Metadata)
	{
		Metadata->set_content_language(TCHAR_TO_UTF8(*language));
	}
}

FString FFirebaseStorageMetadata::GetContentLanguage() const
{
	return Metadata ? UTF8_TO_TCHAR(Metadata->content_language()) : TEXT("");
}

void	FFirebaseStorageMetadata::SetContentType(const FString& type)
{
	if (Metadata)
	{
		Metadata->set_content_type(TCHAR_TO_UTF8(*type));
	}
}

FString FFirebaseStorageMetadata::ContentType() const
{
	return Metadata ? UTF8_TO_TCHAR(Metadata->content_type()) : TEXT("");
}

int64	FFirebaseStorageMetadata::GetCreationTime() const
{
	return Metadata ? Metadata->creation_time() : 0;
}

int64	FFirebaseStorageMetadata::GetGeneration() const
{
	return Metadata ? Metadata->generation() : 0;
}

int64	FFirebaseStorageMetadata::GetMetadataGeneration() const
{
	return Metadata ? Metadata->metadata_generation() : 0;
}

FString FFirebaseStorageMetadata::GetName() const
{
	return Metadata ? UTF8_TO_TCHAR(Metadata->name()) : TEXT("");
}

FString FFirebaseStorageMetadata::GetPath() const
{
	return Metadata ? UTF8_TO_TCHAR(Metadata->path()) : TEXT("");
}

int64	FFirebaseStorageMetadata::GetSizeBytes() const
{
	return Metadata ? Metadata->size_bytes() : 0;
}

int64	FFirebaseStorageMetadata::GetUpdatedTime() const
{
	return Metadata ? Metadata->updated_time() : 0;
}

bool	FFirebaseStorageMetadata::IsValid() const
{
	return Metadata ? Metadata->is_valid() : false;
}

FString FFirebaseStorageMetadata::GetMd5Hash() const
{
	return Metadata ? UTF8_TO_TCHAR(Metadata->md5_hash()) : TEXT("");
}

TMap<FString, FString> FFirebaseStorageMetadata::GetCustomMetadata() const
{
	TMap<FString, FString> CustomMeta;

	if (Metadata)
	{
		const auto* const RawMeta = Metadata->custom_metadata();

		for (const auto& MetaElem : *RawMeta)
		{
			CustomMeta.Emplace(UTF8_TO_TCHAR(MetaElem.first.c_str()), UTF8_TO_TCHAR(MetaElem.second.c_str()));
		}
	}

	return CustomMeta;
}

UFirebaseStorageReference* FFirebaseStorageMetadata::GetReference() const
{
	if (Metadata)
	{
		UFirebaseStorageReference* const Ref = NewObject<UFirebaseStorageReference>();

		Ref->Reference = Metadata->GetReference();

		return Ref;
	}

	return nullptr;
}

FFirebaseStorageMetadata::operator firebase::storage::Metadata& ()
{
	check(Metadata);
	return *Metadata;
}

FFirebaseStorageMetadata::operator const firebase::storage::Metadata& () const
{
	check(Metadata);
	return *Metadata;
}


class FStorageListener final : public firebase::storage::Listener
{
public:
	FStorageListener(
		const FFirebaseStorageControllerCallback& OnProgress,
		const FFirebaseStorageControllerCallback& OnPaused
	) 
		: OnProgressEvent(OnProgress)
		, OnPausedEvent(OnProgress)
	{
	}
	virtual ~FStorageListener()
	{
	}
	virtual void OnPaused(firebase::storage::Controller* controller)
	{
		if (OnPausedEvent.IsBound())
		{
			FFirebaseStorageController Controller;
			*Controller.Controller = *controller;
			
			const FFirebaseStorageControllerCallback& Local = OnPausedEvent;
			AsyncTask(ENamedThreads::GameThread, [Local, Controller = MoveTemp(Controller)]() mutable -> void
			{
				Local.ExecuteIfBound(Controller);
			});
		}
	}
	virtual void OnProgress(firebase::storage::Controller* controller)
	{
		if (OnProgressEvent.IsBound())
		{
			FFirebaseStorageController Controller;
			*Controller.Controller = *controller;
			
			const FFirebaseStorageControllerCallback& Local = OnProgressEvent;
			AsyncTask(ENamedThreads::GameThread, [Local, Controller = MoveTemp(Controller)]() mutable -> void
			{
				Local.ExecuteIfBound(Controller);
			});
		}
	}
private:
	FFirebaseStorageControllerCallback OnProgressEvent;
	FFirebaseStorageControllerCallback OnPausedEvent;
};

FFirebaseStorageController::FFirebaseStorageController()
	: Controller(MakeShared<firebase::storage::Controller>())
{
}

FFirebaseStorageController::FFirebaseStorageController(const FFirebaseStorageController& Other)
{
	*this = Other;
}

FFirebaseStorageController::FFirebaseStorageController(FFirebaseStorageController&& Other)
{
	*this = MoveTemp(Other);
}

FFirebaseStorageController& FFirebaseStorageController::operator=(const FFirebaseStorageController& Other)
{
	Controller = Other.Controller;
	return *this;
}

FFirebaseStorageController& FFirebaseStorageController::operator=(FFirebaseStorageController&& Other)
{
	Controller = MoveTemp(Other.Controller);
	return *this;
}

bool FFirebaseStorageController::Pause()
{
	return Controller ? Controller->Pause() : false;
}

bool FFirebaseStorageController::Resume()
{
	return Controller ? Controller->Resume() : false;
}

bool FFirebaseStorageController::Cancel()
{
	return Controller ? Controller->Cancel() : false;
}

bool FFirebaseStorageController::IsPaused() const
{
	return Controller ? Controller->is_paused() : false;
}

int64 FFirebaseStorageController::BytesTransferred() const
{
	return Controller ? (int64)Controller->bytes_transferred() : 0;
}

int64 FFirebaseStorageController::TotalByteCount() const
{
	return Controller ? (int64)Controller->total_byte_count() : 0;
}

UFirebaseStorageReference* FFirebaseStorageController::GetReference() const
{
	if (!Controller)
	{
		return nullptr;
	}

	UFirebaseStorageReference* const Ref = NewObject<UFirebaseStorageReference>();

	Ref->Reference = Controller->GetReference();

	return Ref;
}

bool FFirebaseStorageController::IsValid() const
{
	return Controller && Controller->is_valid();
}

UFirebaseStorageReference* UFirebaseStorageReference::Child(const FString& path) const
{
	UFirebaseStorageReference* const ChildReference = NewObject<UFirebaseStorageReference>();

	ChildReference->Reference = Reference.Child(TCHAR_TO_UTF8(*path));

	return ChildReference;
}

void UFirebaseStorageReference::Delete(FFirebaseStorageCallback Callback)
{
	Reference.Delete().OnCompletion([Callback = MoveTemp(Callback)](const firebase::Future<void>& Future) mutable -> void
	{
		const EFirebaseStorageError Error = (EFirebaseStorageError)Future.error();
		if (Error != EFirebaseStorageError::None)
		{
			UE_LOG(LogFirebaseStorage, Error, TEXT("Failed to delete Storage Reference.")
				TEXT(" Code: %d. Message: %s"), Error, UTF8_TO_TCHAR(Future.error_message()));
		}

		if (Callback.IsBound())
		{
			AsyncTask(ENamedThreads::GameThread, [Error, Callback = MoveTemp(Callback)]() -> void
			{
				Callback.ExecuteIfBound(Error);
			});
		}
	});
}

FString UFirebaseStorageReference::GetBucket()
{
	return UTF8_TO_TCHAR(Reference.bucket().c_str());
}

FString UFirebaseStorageReference::GetFullPath()
{
	return UTF8_TO_TCHAR(Reference.full_path().c_str());
}

void UFirebaseStorageReference::GetFile
(
	const FString& Path, 
	FFirebaseStorageController& Controller, 
	const FFirebaseStorageInt64Callback& Callback,
	const FFirebaseStorageControllerCallback& OnProgress,
	const FFirebaseStorageControllerCallback& OnPaused
)
{
	TSharedPtr<FStorageListener, ESPMode::ThreadSafe> Listener = 
		MakeShared<FStorageListener, ESPMode::ThreadSafe>(OnProgress, OnPaused);

	Reference.GetFile(TCHAR_TO_UTF8(*Path), Listener.Get(), Controller.Controller.Get()).OnCompletion(
		// We capture the Listener here so it outlives the result callback
		[Callback, Listener](const firebase::Future<size_t>& Future) -> void
	{
		const EFirebaseStorageError Error = (EFirebaseStorageError)Future.error();
		if (Error != EFirebaseStorageError::None)
		{
			UE_LOG(LogFirebaseStorage, Error, TEXT("Failed to get file. Code: %d. Message: %s"),
				Error, UTF8_TO_TCHAR(Future.error_message()));
		}

		if (Callback.IsBound())
		{
			const size_t Size = Future.result() ? *Future.result() : 0;
			AsyncTask(ENamedThreads::GameThread, [Callback, Error, Size]() -> void
			{
				Callback.ExecuteIfBound(Error, (int64)Size);
			});
		}
	});
}

void UFirebaseStorageReference::GetBytes
(
	const int64 BufferSize,
	FFirebaseStorageController& Controller,
	const FFirebaseStorageBinaryCallback& Callback,
	const FFirebaseStorageControllerCallback& OnProgress,
	const FFirebaseStorageControllerCallback& OnPaused
)
{
	void* const Buffer = FMemory::Malloc(BufferSize);

	TSharedPtr<FStorageListener, ESPMode::ThreadSafe> Listener =
		MakeShared<FStorageListener, ESPMode::ThreadSafe>(OnProgress, OnPaused);

	Reference.GetBytes
	(
		Buffer,
		BufferSize,
		Listener.Get(),
		Controller.Controller.Get()
	).OnCompletion(
		// We capture the Listener here so it outlives the result callback
		[Callback, Listener = MoveTemp(Listener), Buffer](const firebase::Future<size_t>& Future) -> void
	{
		const EFirebaseStorageError Error = (EFirebaseStorageError)Future.error();
		if (Error != EFirebaseStorageError::None)
		{
			UE_LOG(LogFirebaseStorage, Error, TEXT("Failed to get bytes. Code: %d. Message: %s"),
				Error, UTF8_TO_TCHAR(Future.error_message()));
		}

		if (Callback.IsBound())
		{
			const size_t Size = Future.result() ? *Future.result() : 0;
			AsyncTask(ENamedThreads::GameThread, [Callback, Buffer, Error, Size]() -> void
			{
				TArray<uint8> Data((uint8*)Buffer, Size);
				
				Callback.ExecuteIfBound(Error, Data);
				
				FMemory::Free(Buffer);
			});
		}
		else
		{
			FMemory::Free(Buffer);
		}
	});
}

void UFirebaseStorageReference::GetDownloadUrl(const FFirebaseStorageStringCallback& Callback)
{
	if (!Callback.IsBound())
	{
		return;
	}

	Reference.GetDownloadUrl().OnCompletion([Callback](const firebase::Future<std::string>& Future) -> void
	{
		const EFirebaseStorageError Error = (EFirebaseStorageError)Future.error();
		if (Error != EFirebaseStorageError::None)
		{
			UE_LOG(LogFirebaseStorage, Error, TEXT("Failed to download URL. Code: %d. Message: %s"),
				Error, UTF8_TO_TCHAR(Future.error_message()));
		}

		if (Callback.IsBound())
		{
			FString Url = Future.result() ? UTF8_TO_TCHAR(Future.result()->c_str()) : TEXT("");

			AsyncTask(ENamedThreads::GameThread, [Callback, Error, Url = MoveTemp(Url)]() -> void
			{
				Callback.ExecuteIfBound(Error, Url);
			});
		}		
	});
}

void UFirebaseStorageReference::GetMetadata(const FFirebaseStorageMetadataCallback& Callback)
{
	if (!Callback.IsBound())
	{
		return;
	}

	Reference.GetMetadata().OnCompletion([Callback](const firebase::Future<firebase::storage::Metadata>& Future) -> void
	{
		const EFirebaseStorageError Error = (EFirebaseStorageError)Future.error();
		if (Error != EFirebaseStorageError::None)
		{
			UE_LOG(LogFirebaseStorage, Error, TEXT("Failed to get Metadata. Code: %d. Message: %s"),
				Error, UTF8_TO_TCHAR(Future.error_message()));
		}

		if (Callback.IsBound())
		{
			FFirebaseStorageMetadata Metadata;

			if (Future.result() && Metadata.Metadata)
			{
				*Metadata.Metadata = *Future.result();
			}

			AsyncTask(ENamedThreads::GameThread, [Callback, Error, Metadata = MoveTemp(Metadata)]() -> void
			{
				Callback.ExecuteIfBound(Error, Metadata);
			});
		}
	});
}


void UFirebaseStorageReference::UpdateMetadata(const FFirebaseStorageMetadata& InMetadata,
	const FFirebaseStorageMetadataCallback& Callback)
{
	Reference.UpdateMetadata(InMetadata.IsValid() ? InMetadata : firebase::storage::Metadata())
		.OnCompletion([Callback](const firebase::Future<firebase::storage::Metadata>& Future) -> void
	{
		const EFirebaseStorageError Error = (EFirebaseStorageError)Future.error();
		if (Error != EFirebaseStorageError::None)
		{
			UE_LOG(LogFirebaseStorage, Error, TEXT("Failed to update Metadata. Code: %d. Message: %s"),
				Error, UTF8_TO_TCHAR(Future.error_message()));
		}

		if (Callback.IsBound())
		{
			FFirebaseStorageMetadata Metadata;

			if (Future.result() && Metadata.Metadata)
			{
				*Metadata.Metadata = *Future.result();
			}

			AsyncTask(ENamedThreads::GameThread, [Callback, Error, Metadata = MoveTemp(Metadata)]() -> void
			{
				Callback.ExecuteIfBound(Error, Metadata);
			});
		}
	});
}

FString UFirebaseStorageReference::GetName()
{
	return UTF8_TO_TCHAR(Reference.name().c_str());
}

UFirebaseStorageReference* UFirebaseStorageReference::GetParent()
{
	UFirebaseStorageReference* const Ref = NewObject<UFirebaseStorageReference>();

	Ref->Reference = Reference.GetParent();

	return Ref;
}

void UFirebaseStorageReference::PutBytes
(
	const TArray<uint8>& Bytes,
	FFirebaseStorageController& Controller,
	const FFirebaseStorageMetadataCallback& Callback,
	const FFirebaseStorageControllerCallback& OnProgress,
	const FFirebaseStorageControllerCallback& OnPaused
)
{
	TSharedPtr<FStorageListener, ESPMode::ThreadSafe> Listener =
		MakeShared<FStorageListener, ESPMode::ThreadSafe>(OnProgress, OnPaused);

	Reference.PutBytes
	(
		Bytes.GetData(),
		Bytes.Num(),
		Listener.Get(),
		Controller.Controller.Get()
	).OnCompletion(
		// We capture the Listener here so it outlives the result callback
		[Callback, Listener](const firebase::Future<firebase::storage::Metadata>& Future) -> void
	{
		const EFirebaseStorageError Error = (EFirebaseStorageError)Future.error();
		if (Error != EFirebaseStorageError::None)
		{
			UE_LOG(LogFirebaseStorage, Error, TEXT("Failed to put bytes. Code: %d. Message: %s"),
				Error, UTF8_TO_TCHAR(Future.error_message()));
		}

		if (Callback.IsBound())
		{
			FFirebaseStorageMetadata Metadata;

			if (Future.result() && Metadata.Metadata)
			{
				*Metadata.Metadata = *Future.result();
			}

			AsyncTask(ENamedThreads::GameThread, [Callback, Error, Metadata]() -> void
			{				
				Callback.ExecuteIfBound(Error, Metadata);
			});
		}
	});
}

void UFirebaseStorageReference::PutBytes
(
	const TArray64<uint8>& Bytes,
	FFirebaseStorageController& Controller,
	const FFirebaseStorageMetadataCallback& Callback,
	const FFirebaseStorageControllerCallback& OnProgress,
	const FFirebaseStorageControllerCallback& OnPaused
)
{
	TSharedPtr<FStorageListener, ESPMode::ThreadSafe> Listener =
		MakeShared<FStorageListener, ESPMode::ThreadSafe>(OnProgress, OnPaused);

	Reference.PutBytes
	(
		Bytes.GetData(),
		Bytes.Num(),
		Listener.Get(),
		Controller.Controller.Get()
	).OnCompletion(
		// We capture the Listener here so it outlives the result callback
		[Callback, Listener](const firebase::Future<firebase::storage::Metadata>& Future) -> void
	{
		const EFirebaseStorageError Error = (EFirebaseStorageError)Future.error();
		if (Error != EFirebaseStorageError::None)
		{
			UE_LOG(LogFirebaseStorage, Error, TEXT("Failed to put bytes. Code: %d. Message: %s"),
				Error, UTF8_TO_TCHAR(Future.error_message()));
		}

		if (Callback.IsBound())
		{
			FFirebaseStorageMetadata Metadata;

			if (Future.result() && Metadata.Metadata)
			{
				*Metadata.Metadata = *Future.result();
			}

			AsyncTask(ENamedThreads::GameThread, [Callback, Error, Metadata = MoveTemp(Metadata)]() -> void
			{				
				Callback.ExecuteIfBound(Error, Metadata);
			});
		}
	});
}

void UFirebaseStorageReference::PutBytes
(
	const TArray<uint8>& Bytes,
	const FFirebaseStorageMetadata& InMetadata,
	FFirebaseStorageController& Controller,
	const FFirebaseStorageMetadataCallback& Callback,
	const FFirebaseStorageControllerCallback& OnProgress,
	const FFirebaseStorageControllerCallback& OnPaused
)
{
	TSharedPtr<FStorageListener, ESPMode::ThreadSafe> Listener =
		MakeShared<FStorageListener, ESPMode::ThreadSafe>(OnProgress, OnPaused);

	Reference.PutBytes
	(
		Bytes.GetData(),
		Bytes.Num(),
		InMetadata.IsValid() ? InMetadata : firebase::storage::Metadata(),
		Listener.Get(),
		Controller.Controller.Get()
	).OnCompletion(
		// We capture the Listener here so it outlives the result callback
		[Callback, Listener](const firebase::Future<firebase::storage::Metadata>& Future) -> void
	{
		const EFirebaseStorageError Error = (EFirebaseStorageError)Future.error();
		if (Error != EFirebaseStorageError::None)
		{
			UE_LOG(LogFirebaseStorage, Error, TEXT("Failed to put bytes. Code: %d. Message: %s"),
				Error, UTF8_TO_TCHAR(Future.error_message()));
		}

		if (Callback.IsBound())
		{
			FFirebaseStorageMetadata Metadata;

			if (Future.result() && Metadata.Metadata)
			{
				*Metadata.Metadata = *Future.result();
			}

			AsyncTask(ENamedThreads::GameThread, [Callback, Error, Metadata]() -> void
			{				
				Callback.ExecuteIfBound(Error, Metadata);
			});
		}
	});
}

void UFirebaseStorageReference::PutFile
(
	const FString& Path,
	FFirebaseStorageController& Controller,
	const FFirebaseStorageMetadataCallback& Callback,
	const FFirebaseStorageControllerCallback& OnProgress,
	const FFirebaseStorageControllerCallback& OnPaused
)
{
	TSharedPtr<FStorageListener, ESPMode::ThreadSafe> Listener =
		MakeShared<FStorageListener, ESPMode::ThreadSafe>(OnProgress, OnPaused);

	Reference.PutFile
	(
		TCHAR_TO_UTF8(*Path),
		Listener.Get(),
		Controller.Controller.Get()
	).OnCompletion(
		// We capture the Listener here so it outlives the result callback
		[Callback, Listener](const firebase::Future<firebase::storage::Metadata>& Future) -> void
	{
		const EFirebaseStorageError Error = (EFirebaseStorageError)Future.error();
		if (Error != EFirebaseStorageError::None)
		{
			UE_LOG(LogFirebaseStorage, Error, TEXT("Failed to put file. Code: %d. Message: %s"),
				Error, UTF8_TO_TCHAR(Future.error_message()));
		}

		if (Callback.IsBound())
		{
			FFirebaseStorageMetadata _Metadata;

			if (Future.result() && _Metadata.Metadata)
			{
				*_Metadata.Metadata = *Future.result();
			}

			AsyncTask(ENamedThreads::GameThread, [Callback, Error, _Metadata = MoveTemp(_Metadata)]() -> void
			{				
				Callback.ExecuteIfBound(Error, _Metadata);
			});
		}
	});
}

void UFirebaseStorageReference::PutFile
(
	const FString& Path,
	const FFirebaseStorageMetadata& InMetadata,
	FFirebaseStorageController& Controller,
	const FFirebaseStorageMetadataCallback& Callback,
	const FFirebaseStorageControllerCallback& OnProgress,
	const FFirebaseStorageControllerCallback& OnPaused
)
{
	TSharedPtr<FStorageListener, ESPMode::ThreadSafe> Listener =
		MakeShared<FStorageListener, ESPMode::ThreadSafe>(OnProgress, OnPaused);

	Reference.PutFile
	(
		TCHAR_TO_UTF8(*Path),
		InMetadata.IsValid() ? InMetadata : firebase::storage::Metadata(),
		Listener.Get(),
		Controller.Controller.Get()
	).OnCompletion(
		// We capture the Listener here so it outlives the result callback
		[Callback, Listener](const firebase::Future<firebase::storage::Metadata>& Future) -> void
	{
		const EFirebaseStorageError Error = (EFirebaseStorageError)Future.error();
		if (Error != EFirebaseStorageError::None)
		{
			UE_LOG(LogFirebaseStorage, Error, TEXT("Failed to put file. Code: %d. Message: %s"),
				Error, UTF8_TO_TCHAR(Future.error_message()));
		}

		if (Callback.IsBound())
		{
			FFirebaseStorageMetadata Metadata;

			if (Future.result() && Metadata.Metadata)
			{
				*Metadata.Metadata = *Future.result();
			}

			AsyncTask(ENamedThreads::GameThread, [Callback, Error, Metadata = MoveTemp(Metadata)]() -> void
			{				
				Callback.ExecuteIfBound(Error, Metadata);
			});
		}
	});
}

bool UFirebaseStorageReference::IsValid() const
{
	return Reference.is_valid();
}


