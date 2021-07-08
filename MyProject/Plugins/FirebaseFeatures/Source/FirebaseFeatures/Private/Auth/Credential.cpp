// Copyright Pandores Marketplace 2021. All Rights Reserved.

#include "Auth/Credential.h"

THIRD_PARTY_INCLUDES_START
#	include "firebase/app.h"
#	include "firebase/future.h"
#	include "firebase/auth.h"
#	include "firebase/auth/credential.h"
THIRD_PARTY_INCLUDES_END

#include "FirebaseFeatures.h"
#include "Async/Async.h"


class FPhoneProviderListener final : public firebase::auth::PhoneAuthProvider::Listener
{
public:
	typedef firebase::auth::PhoneAuthProvider::ForceResendingToken TForceResendingToken;

public:
	FPhoneProviderListener
	(
		const FCredentialCallback&					CredCb,
		const FCodeAutoRetrievalTimeoutCallback&	RetrCb,
		const FVerificationFailedCallback&			VerifCb,
		const FCodeSentCallback&					CodeCb
	)
		: Cred  (CredCb)
		, Retr  (RetrCb)
		, Verif (VerifCb)
		, Code  (CodeCb)
	{	
	}
	
	virtual ~FPhoneProviderListener()
	{
	}
	
	virtual void OnVerificationCompleted(firebase::auth::Credential credential)
	{
		UE_LOG(LogFirebaseAuth, Log, TEXT("Phone provider verification completed."));

		FCredentialCallback Cb = Cred;
		FCredential Data(&credential);

		AsyncTask(ENamedThreads::GameThread, [Cb, Data = MoveTemp(Data)]() -> void
		{
			Cb.ExecuteIfBound(Data);
		});
	}

	virtual void OnVerificationFailed(const std::string& error)
	{
		const FString Error = UTF8_TO_TCHAR(error.c_str());
		UE_LOG(LogFirebaseAuth, Log, TEXT("Phone provider verification failed. Error: %s"), *Error);

		FVerificationFailedCallback Cb = Verif;

		AsyncTask(ENamedThreads::GameThread, [Cb, Error]() -> void
		{
			Cb.ExecuteIfBound(Error);
		});
	}

	virtual void OnCodeSent(const std::string& verification_id, const TForceResendingToken& force_resending_token)
	{
		UE_LOG(LogFirebaseAuth, Log, TEXT("Code for phone provider sent."));
		
		FForceResendingToken Token((void*)&force_resending_token);
		FString VerifId = UTF8_TO_TCHAR(verification_id.c_str());

		FCodeSentCallback Cb = Code;
		AsyncTask(ENamedThreads::GameThread, [Cb, Token, VerifId = MoveTemp(VerifId)]() -> void
		{
			Cb.ExecuteIfBound(VerifId, Token);
		});
	}

	virtual void OnCodeAutoRetrievalTimeOut(const std::string& verification_id)
	{
		UE_LOG(LogFirebaseAuth, Log, TEXT("Code auto retrieval timeout for phone provider reached."));

		FCodeAutoRetrievalTimeoutCallback Cb = Retr;
		FString VerifId = UTF8_TO_TCHAR(verification_id.c_str());

		AsyncTask(ENamedThreads::GameThread, [Cb, VerifId = MoveTemp(VerifId)]() -> void
		{
			Cb.ExecuteIfBound(VerifId);
		});
	}

private:
	FCredentialCallback					Cred;
	FCodeAutoRetrievalTimeoutCallback	Retr;
	FVerificationFailedCallback			Verif;
	FCodeSentCallback					Code;
};

FForceResendingToken::FForceResendingToken() 
	: Token(nullptr)
{
}

FForceResendingToken::FForceResendingToken(void* const InToken)
{
	Token = InToken ? new FPhoneProviderListener::TForceResendingToken(*(FPhoneProviderListener::TForceResendingToken*)InToken) : nullptr;
}

FForceResendingToken::FForceResendingToken(const FForceResendingToken& Other)
{
	Token = Other.Token ? new FPhoneProviderListener::TForceResendingToken(*(FPhoneProviderListener::TForceResendingToken*)Other.Token) : nullptr;
}

FForceResendingToken::FForceResendingToken(FForceResendingToken&& Other)
{
	Token = Other.Token;

	Other.Token = nullptr;
}

FForceResendingToken& FForceResendingToken::operator=(const FForceResendingToken& Other)
{
	if (Token && Other.Token)
	{
		*((FPhoneProviderListener::TForceResendingToken*)Token) = *((FPhoneProviderListener::TForceResendingToken*)Other.Token);
	}
	else if (Other.Token)
	{
		Token = new FPhoneProviderListener::TForceResendingToken(*(FPhoneProviderListener::TForceResendingToken*)Other.Token);
	}
	else
	{
		delete (FPhoneProviderListener::TForceResendingToken*)Token;
		Token = nullptr;
	}
	return *this;
}

FForceResendingToken::~FForceResendingToken()
{
	if (Token)
	{
		delete (FPhoneProviderListener::TForceResendingToken*)Token;
	}
}

FCredential UCredentialLibrary::GetCredentialFromEmail(const FString& Email, const FString& Password)
{
	const firebase::auth::Credential RawCredential = firebase::auth::EmailAuthProvider::GetCredential(TCHAR_TO_UTF8(*Email), TCHAR_TO_UTF8(*Password));

	FCredential Credential;

	*Credential.Credential = RawCredential;

	return Credential;
}

FCredential UCredentialLibrary::GetCredentialFromFacebook(const FString& AccessToken)
{
	const firebase::auth::Credential RawCredential = firebase::auth::FacebookAuthProvider::GetCredential(TCHAR_TO_UTF8(*AccessToken));

	FCredential Credential;

	*Credential.Credential = RawCredential;

	return Credential;
}

void UCredentialLibrary::GetCredentialFromGameCenter(const FGetCredentialCallback& Callback)
{
#if PLATFORM_IOS || PLATFORM_MAC
	firebase::auth::GameCenterAuthProvider::GetCredential().OnCompletion([Callback](const firebase::Future<firebase::auth::Credential>& Future) -> void
	{
		const EFirebaseAuthError Error = (EFirebaseAuthError)Future.error();
		if (Error == EFirebaseAuthError::None)
		{
			UE_LOG(LogFirebaseAuth, Error, TEXT("Failed to get credential from Game Center. Code: %d. Message: %s"), Error, UTF8_TO_TCHAR(Future.error_message()));
		}

		FCredential Credential = Future.result();

		AsyncTask(ENamedThreads::GameThread, [Callback, Error, Credential = MoveTemp(Credential)]() -> void
		{
			Callback.ExecuteIfBound(Error, Credential);
		});
	});
#else // !PLATFORM_IOS && !PLATFORM_MAC
	UE_LOG(LogFirebaseAuth, Error, TEXT("Tried to get credential from Game Center but the platform doesn't support it."));
	Callback.ExecuteIfBound(EFirebaseAuthError::InvalidCredential, FCredential());
#endif // !PLATFORM_IOS && !PLATFORM_MAC
}

bool UCredentialLibrary::IsAuthenticatedWithGameCenter()
{
	return firebase::auth::GameCenterAuthProvider::IsPlayerAuthenticated();
}

FCredential UCredentialLibrary::GetCredentialFromGitHub(const FString& Token)
{
	const firebase::auth::Credential RawCredential = firebase::auth::GitHubAuthProvider::GetCredential(TCHAR_TO_UTF8(*Token));

	FCredential Credential;

	*Credential.Credential = RawCredential;

	return Credential;
}

FCredential UCredentialLibrary::GetCredentialFromGoogle(const FString& Token, const FString& AccessToken)
{
	const firebase::auth::Credential RawCredential = firebase::auth::GoogleAuthProvider::GetCredential(TCHAR_TO_UTF8(*Token), TCHAR_TO_UTF8(*AccessToken));

	FCredential Credential;

	*Credential.Credential = RawCredential;

	return Credential;
}

FCredential UCredentialLibrary::GetCredentialFromOAuth(const FString& ProviderId, const FString& IdToken, const FString& AccessToken)
{
	const firebase::auth::Credential RawCredential = firebase::auth::OAuthProvider::GetCredential(TCHAR_TO_UTF8(*ProviderId), TCHAR_TO_UTF8(*IdToken), TCHAR_TO_UTF8(*AccessToken));

	FCredential Credential;

	*Credential.Credential = RawCredential;

	return Credential;
}

FCredential UCredentialLibrary::GetCredentialFromOAuthWithOnce(const FString& ProviderId, const FString& IdToken, const FString& Nonce, const FString& AccessToken)
{
	const firebase::auth::Credential RawCredential = firebase::auth::OAuthProvider::GetCredential(TCHAR_TO_UTF8(*ProviderId), TCHAR_TO_UTF8(*IdToken), TCHAR_TO_UTF8(*Nonce), TCHAR_TO_UTF8(*AccessToken));

	FCredential Credential;

	*Credential.Credential = RawCredential;

	return Credential;
}

FCredential UCredentialLibrary::GetCredentialFromPlayGames(const FString& ServerAuthCode)
{
	const firebase::auth::Credential RawCredential = firebase::auth::PlayGamesAuthProvider::GetCredential(TCHAR_TO_UTF8(*ServerAuthCode));

	FCredential Credential;

	*Credential.Credential = RawCredential;

	return Credential;
}

void UCredentialLibrary::VerifyPhoneNumber
(
	const FString&							PhoneNumber,
	const int64								AutoVerifyTimeoutMilliseconds,
	const FCredentialCallback&				OnVerificationCompleted,
	const FVerificationFailedCallback&		OnVerificationFailed,
	const FCodeSentCallback&				OnCodeSent,
	const FCodeAutoRetrievalTimeoutCallback OnCodeAutoRetrievalTimeout,
	const FForceResendingToken&				ForceResendingToken
)
{
	firebase::auth::PhoneAuthProvider& Provider = firebase::auth::PhoneAuthProvider::GetInstance(firebase::auth::Auth::GetAuth(firebase::App::GetInstance()));

	FPhoneProviderListener* const Listener = new FPhoneProviderListener(OnVerificationCompleted, OnCodeAutoRetrievalTimeout, OnVerificationFailed, OnCodeSent);
	Provider.VerifyPhoneNumber(TCHAR_TO_UTF8(*PhoneNumber), AutoVerifyTimeoutMilliseconds, (FPhoneProviderListener::TForceResendingToken*)ForceResendingToken.Token, Listener);
}

FCredential UCredentialLibrary::GetCredential(const FString& VerificationId, const FString& VerificationCode)
{
	firebase::auth::PhoneAuthProvider& Provider = firebase::auth::PhoneAuthProvider::GetInstance(firebase::auth::Auth::GetAuth(firebase::App::GetInstance()));

	const firebase::auth::Credential RawCredential = Provider.GetCredential(TCHAR_TO_UTF8(*VerificationId), TCHAR_TO_UTF8(*VerificationCode));

	FCredential Credential;

	*Credential.Credential = RawCredential;

	return Credential;
}

FCredential UCredentialLibrary::GetCredentialFromTwitter(const FString& Token, const FString& Secret)
{
	const firebase::auth::Credential RawCredential = firebase::auth::TwitterAuthProvider::GetCredential(TCHAR_TO_UTF8(*Token), TCHAR_TO_UTF8(*Secret));

	FCredential Credential;

	*Credential.Credential = RawCredential;

	return Credential;
}
