// Copyright Pandores Marketplace 2021. All Rights Reserved.

#include "Auth/Auth.h"

THIRD_PARTY_INCLUDES_START
#	include "firebase/auth.h"
THIRD_PARTY_INCLUDES_END

#include "Auth/AuthHelper.h"
#include "Auth/User.h"
#include "Async/Async.h"

#include "FirebaseFeatures.h"

FFederatedAuthProvider::FFederatedAuthProvider(TSharedPtr<firebase::auth::FederatedOAuthProvider> Provider)
	: AuthProvider(Provider)
{
}

FFederatedAuthProvider::FFederatedAuthProvider()
{
}

FFederatedAuthProvider::FFederatedAuthProvider(const FFederatedAuthProvider& Other)
	: AuthProvider(Other.AuthProvider)
{
}

FFederatedAuthProvider::FFederatedAuthProvider(FFederatedAuthProvider&& Other)
	: AuthProvider(MoveTemp(Other.AuthProvider))
{
}

FFederatedAuthProvider& FFederatedAuthProvider::operator=(const FFederatedAuthProvider& Other)
{
	AuthProvider = Other.AuthProvider;
	return *this;
}

FFederatedAuthProvider& FFederatedAuthProvider::operator=(FFederatedAuthProvider&& Other)
{
	AuthProvider = MoveTemp(Other.AuthProvider);
	return *this;
}

FFederatedAuthProvider::~FFederatedAuthProvider()
{
}

FCredential::FCredential()
	: Credential(MakeUnique<firebase::auth::Credential>())
{
}

FCredential::FCredential(const firebase::auth::Credential* InCredential)
	: Credential(MakeUnique<firebase::auth::Credential>(*InCredential))
{
}

FCredential::FCredential(FCredential&& Other)
{
	*this = MoveTemp(Other);
}

FCredential::FCredential(const FCredential& Other) 
{
	if (Other.Credential)
	{
		Credential = MakeUnique<firebase::auth::Credential>(*Other.Credential);
	}
	else
	{
		FCredential();
	}
}

FCredential& FCredential::operator=(const FCredential& Other)
{
	if (Credential)
	{
		*Credential = *Other.Credential;
	}
	else
	{
		Credential = MakeUnique<firebase::auth::Credential>(*Other.Credential);
	}
	return *this;
}

FCredential& FCredential::operator=(FCredential&& Other)
{
	Credential = MoveTemp(Other.Credential);
	return *this;
}

FCredential::~FCredential()
{
}

FString FCredential::Provider() const
{
	return Credential ? UTF8_TO_TCHAR(Credential->provider().c_str()) : TEXT("");
}

bool FCredential::IsValid() const
{
	return Credential ? Credential->is_valid() : false;
}

firebase::auth::Auth* FAuth::GetAuth()
{
	firebase::auth::Auth* const Auth = firebase::auth::Auth::GetAuth(firebase::App::GetInstance());

	checkf(Auth != nullptr, TEXT("Failed to get auth."));

	return Auth;
}

UUser* FAuth::CurrentUser()
{
	firebase::auth::User* const Current = GetAuth()->current_user();
	if (!Current)
	{
		return nullptr;
	}

	UUser* const User = NewObject<UUser>();
	User->User = Current;

	return User;
}

void FAuth::FetchProvidersForEmail(const FString& Email, const FFetchProvidersForEmailCallback& Callback)
{
	GetAuth()->FetchProvidersForEmail(TCHAR_TO_UTF8(*Email)).OnCompletion([Callback](const firebase::Future<firebase::auth::Auth::FetchProvidersResult>& Future) -> void
	{
		const EFirebaseAuthError ErrorCode = (EFirebaseAuthError)Future.error();
		
		
		if (ErrorCode != EFirebaseAuthError::None)
		{
			UE_LOG(LogFirebaseAuth, Error, TEXT("Failed to fetch providers for email: Code %s. Message: %s"),
				ErrorCode, UTF8_TO_TCHAR(Future.error_message()));
		}
		
		if (Callback.IsBound())
		{
			TArray<FString> Providers;
			if (ErrorCode == EFirebaseAuthError::None)
			{
				for (const auto& Provider : Future.result()->providers)
				{
					Providers.Emplace(UTF8_TO_TCHAR(Provider.c_str()));
				}
			}

			AsyncTask(ENamedThreads::GameThread, [Callback, ErrorCode, Providers]() -> void
			{
				Callback.ExecuteIfBound(ErrorCode, Providers);
			});
		}
	});
}

void FAuth::SignInWithCustomToken(const FString& Token, const FSignInUserCallback& Callback)
{
	GetAuth()->SignInWithCustomToken(TCHAR_TO_UTF8(*Token)).OnCompletion([Callback](const firebase::Future<firebase::auth::User*>& Future) -> void
	{
		const EFirebaseAuthError Error = (EFirebaseAuthError)Future.error();

		if (Error != EFirebaseAuthError::None)
		{
			UE_LOG(LogFirebaseAuth, Error, TEXT("Failed to sign in with custom token. Code: %d. Message: %s"), Error, UTF8_TO_TCHAR(Future.error_message()));
		}

		if (Callback.IsBound())
		{
			AsyncTask(ENamedThreads::GameThread, [Callback, Future]() -> void
			{
				UUser* User = nullptr;

				if (Future.result() && *Future.result())
				{
					User = NewObject<UUser>();
					User->User = *Future.result();
				}

				Callback.ExecuteIfBound((EFirebaseAuthError)Future.error(), User);
			});
		}
	});
}

void FAuth::SignInWithCredential(const FCredential& Credential, const FSignInUserCallback& Callback)
{
	if (Credential.Credential == nullptr)
	{
		UE_LOG(LogFirebaseAuth, Error, TEXT("Tried to sign in with invalid credentials."));
		Callback.ExecuteIfBound(EFirebaseAuthError::InvalidCredential, nullptr);
		return;
	}

	GetAuth()->SignInWithCredential(*Credential.Credential).OnCompletion([Callback](const firebase::Future<firebase::auth::User*>& Future) -> void
	{
		const EFirebaseAuthError Error = (EFirebaseAuthError)Future.error();

		if (Error != EFirebaseAuthError::None)
		{
			UE_LOG(LogFirebaseAuth, Error, TEXT("Failed to sign in with credential. Code: %d. Message: %s"), Future.error(), UTF8_TO_TCHAR(Future.error_message()));
		}

		if (Callback.IsBound())
		{
			AsyncTask(ENamedThreads::GameThread, [Callback, Future]() -> void
			{
				UUser* User = nullptr;

				if (Future.result() && *Future.result())
				{
					User = NewObject<UUser>();
					User->User = *Future.result();
				}

				Callback.ExecuteIfBound((EFirebaseAuthError)Future.error(), User);
			});
		}
	});
}

void FAuth::SignInWithProvider(const FFederatedAuthProvider& AuthProvider, const FSignInCallback& Callback)
{
	if (!AuthProvider.AuthProvider)
	{
		UE_LOG(LogFirebaseAuth, Error, TEXT("Passed and invalid AuthProvider to sign in with provider."));
		Callback.ExecuteIfBound(EFirebaseAuthError::NoSuchProvider, FSignInResult());
		return;
	}

	if (!GetAuth())
	{
		UE_LOG(LogFirebaseAuth, Error, TEXT("Invalid Auth."));
		return;
	}

	GetAuth()->SignInWithProvider(AuthProvider.AuthProvider.Get()).OnCompletion([Callback](const firebase::Future<firebase::auth::SignInResult>& Future) -> void
	{
		const EFirebaseAuthError Error = (EFirebaseAuthError)Future.error();
		if (Error != EFirebaseAuthError::None)
		{
			UE_LOG(LogFirebaseAuth, Error, TEXT("Failed to sign in with provider. Code: %d. Message: %s"), Future.error(), UTF8_TO_TCHAR(Future.error_message()))
		}

		firebase::auth::SignInResult RawResult;
		
		if (Future.result())
		{
			RawResult = *Future.result();
		}

		AsyncTask(ENamedThreads::GameThread, [Callback, Error, RawResult = MoveTemp(RawResult)]() -> void
		{
			Callback.ExecuteIfBound(Error, FAuthHelper::ConvertSignInResult(&RawResult));
		});
	});
}

void FAuth::SignInAndRetrieveDataWithCredential(const FCredential& Credential, const FSignInCallback& Callback)
{
	if (!Credential.Credential)
	{
		UE_LOG(LogFirebaseAuth, Error, TEXT("Passed an invalid credential to sign in and retrieve data with credential."));
		Callback.ExecuteIfBound(EFirebaseAuthError::InvalidCredential, FSignInResult());
		return;
	}

	GetAuth()->SignInAndRetrieveDataWithCredential(*Credential.Credential).OnCompletion([Callback](const firebase::Future<firebase::auth::SignInResult>& Future) -> void
	{
		if (Future.error() != (int32)EFirebaseAuthError::None)
		{
			UE_LOG(LogFirebaseAuth, Error, TEXT("Failed to sign in and retrieve data with credential. Code: %d. Message: %s"), Future.error(), UTF8_TO_TCHAR(Future.error_message()))
		}

		AsyncTask(ENamedThreads::GameThread, [Callback, Future]()->void
		{
			Callback.ExecuteIfBound((EFirebaseAuthError)Future.error(), FAuthHelper::ConvertSignInResult(Future.result() ? Future.result() : nullptr));
		});
	});
}

void FAuth::SignInAnonymously(const FSignInUserCallback& Callback)
{
	GetAuth()->SignInAnonymously().OnCompletion([Callback](const firebase::Future<firebase::auth::User*> Future) -> void
	{
		if (Future.error() != (int32)EFirebaseAuthError::None)
		{
			UE_LOG(LogFirebaseAuth, Error, TEXT("Failed to sign in anonymously. Code: %d. Message: %s"), Future.error(), UTF8_TO_TCHAR(Future.error_message()));
		}
		
		AsyncTask(ENamedThreads::GameThread, [Callback, Future]()->void
		{
			Callback.ExecuteIfBound((EFirebaseAuthError)Future.error(), FAuthHelper::ConvertUser(Future.result() ? *Future.result() : nullptr));
		});
	});
}

void FAuth::SignInWithEmailAndPassword(const FString& Email, const FString& Password, const FSignInUserCallback& Callback)
{
	GetAuth()->SignInWithEmailAndPassword(TCHAR_TO_UTF8(*Email), TCHAR_TO_UTF8(*Password)).OnCompletion([Callback](const firebase::Future<firebase::auth::User*> Future) -> void
	{
		if (Future.error() != (int32)EFirebaseAuthError::None)
		{
			UE_LOG(LogFirebaseAuth, Error, TEXT("Failed to sign in with email and password. Code: %d. Message: %s"), Future.error(), UTF8_TO_TCHAR(Future.error_message()));
		}
		
		AsyncTask(ENamedThreads::GameThread, [Callback, Future]() -> void
		{
			Callback.ExecuteIfBound((EFirebaseAuthError)Future.error(), FAuthHelper::ConvertUser(Future.result() ? *Future.result() : nullptr));
		});
	});
}

void FAuth::CreateUserWithEmailAndPassword(const FString& Email, const FString& Password, const FSignInUserCallback& Callback)
{
	GetAuth()->CreateUserWithEmailAndPassword(TCHAR_TO_UTF8(*Email), TCHAR_TO_UTF8(*Password)).OnCompletion([Callback](const firebase::Future<firebase::auth::User*> Future) -> void
	{
		if (Future.error() != (int32)EFirebaseAuthError::None)
		{
			UE_LOG(LogFirebaseAuth, Error, TEXT("Failed to sign in with email and password. Code: %d. Message: %s"), Future.error(), UTF8_TO_TCHAR(Future.error_message()));
		}
		
		AsyncTask(ENamedThreads::GameThread, [Callback, Future]() -> void
		{
			Callback.ExecuteIfBound((EFirebaseAuthError)Future.error(), FAuthHelper::ConvertUser(Future.result() ? *Future.result() : nullptr));
		});
	});
}

void FAuth::SignOut()
{
	GetAuth()->SignOut();
}

void FAuth::SendPasswordResetEmail(const FString& Email, const FAuthCallback& Callback)
{
	GetAuth()->SendPasswordResetEmail(TCHAR_TO_UTF8(*Email)).OnCompletion([Callback](const firebase::Future<void> Future) -> void
	{
		const EFirebaseAuthError Error = (EFirebaseAuthError)Future.error();
		if (Error != EFirebaseAuthError::None)
		{
			UE_LOG(LogFirebaseAuth, Error, TEXT("Failed to send password reset email. Code: %d. Message: %s"), Error, UTF8_TO_TCHAR(Future.error_message()));
		}

		AsyncTask(ENamedThreads::GameThread, [Callback, Error]() -> void
		{
			Callback.ExecuteIfBound(Error);
		});
	});
}

FFederatedAuthProvider FAuth::CreateFederatedOAuthProvider(const FFederatedOAuthProviderData& ProviderData)
{
	firebase::auth::FederatedOAuthProviderData Data;

	for (const FString& Scope : ProviderData.Scopes)
	{
		Data.scopes.push_back(TCHAR_TO_UTF8(*Scope));
	}

	for (const auto& Parameter : ProviderData.CustomParameters)
	{
		Data.custom_parameters.insert({ TCHAR_TO_UTF8(*Parameter.Key), TCHAR_TO_UTF8(*Parameter.Key) });
	}

	Data.provider_id = TCHAR_TO_UTF8(*ProviderData.ProviderId);

	TSharedPtr<firebase::auth::FederatedOAuthProvider> Provider = MakeShared<firebase::auth::FederatedOAuthProvider>();

	Provider->SetProviderData(Data);

	return FFederatedAuthProvider(Provider);
}


