// Copyright Pandores Marketplace 2021. All Rights Reserved.

#include "AdMob/InterstitialAd.h"

THIRD_PARTY_INCLUDES_START
#	include "firebase/admob/interstitial_ad.h"
THIRD_PARTY_INCLUDES_END

#include "AdMob/AdMobHelper.h"
#include "AdMob/AdMobTypes.h"

#include "Async/Async.h"

#include "FirebaseFeatures.h"

DECLARE_LOG_CATEGORY_CLASS(LogAdMobInterstitialAd, Log, All);

class FInterstitialAdListener final 
#if WITH_FIREBASE_ADMOB
	: public firebase::admob::InterstitialAd::Listener
#endif // WITH_FIREBASE_ADMOB
{
public:
#if WITH_FIREBASE_ADMOB
	FInterstitialAdListener(UInterstitialAd* const InAd)
		: Ad(InAd)
	{
	}

	virtual void OnPresentationStateChanged
	(
		firebase::admob::InterstitialAd* interstitial_ad,
		firebase::admob::InterstitialAd::PresentationState state
	)
	{
		UE_LOG(LogAdMobInterstitialAd, Log, TEXT("Interstitial Ad presentation state has changed."));

		if (Ad.IsValid())
		{
			Ad->OnPresentationStateChangedInternal
			(
				static_cast<EAdMobInterstitialAdPresentationState>(state)
			);
		}
	}

	virtual ~FInterstitialAdListener()
	{
	}

private:
	TSoftObjectPtr<UInterstitialAd> Ad;
#endif // WITH_FIREBASE_ADMOB
};

UInterstitialAd::UInterstitialAd()
	: Listener(nullptr)
	, InterstitialAd(nullptr)
{
}

UInterstitialAd::~UInterstitialAd()
{
#if WITH_FIREBASE_ADMOB
	if (InterstitialAd)
	{
		delete InterstitialAd;
	}

	if (Listener)
	{
		delete Listener;
	}
#endif // WITH_FIREBASE_ADMOB
}

void UInterstitialAd::OnPresentationStateChangedInternal(const EAdMobInterstitialAdPresentationState PresentationState)
{
	OnPresentationChangedEvent.Broadcast(PresentationState);
}

void UInterstitialAd::Initialize(const FString& AdUnit, const FAdMobCallback& Callback)
{
#if WITH_FIREBASE_ADMOB
	if (!InterstitialAd)
	{
		InterstitialAd = new firebase::admob::InterstitialAd();
	}

	if (!Listener)
	{
		Listener = new FInterstitialAdListener(this);
	}

	if (InterstitialAd->InitializeLastResult().status() == firebase::FutureStatus::kFutureStatusComplete)
	{
		UE_LOG(LogAdMobInterstitialAd, Warning, TEXT("Initialize called on an initialized interstitial ad."));
		Callback.ExecuteIfBound(EAdMobError::AlreadyInitialized);
		return;
	}

	if (InterstitialAd->InitializeLastResult().status() == firebase::FutureStatus::kFutureStatusPending)
	{
		UE_LOG(LogAdMobInterstitialAd, Warning, TEXT("Initialize called on an interstitial ad that is being initialized."));
		Callback.ExecuteIfBound(EAdMobError::AlreadyInitialized);
		return;
	}

	TWeakObjectPtr<UInterstitialAd> Self;

	InterstitialAd->Initialize(FAdMobHelper::GetAdParent(), TCHAR_TO_UTF8(*AdUnit))

	.OnCompletion([Callback, Self = MoveTemp(Self)](const firebase::Future<void>& _Future) mutable -> void
	{
		const EAdMobError Error = (EAdMobError)_Future.error();
		if (Error != EAdMobError::None)
		{
			UE_LOG(LogAdMobInterstitialAd, Error, TEXT("Failed to initialize Interstitial Ad: Code %d. Message: %s"), _Future.error(), _Future.error_message());
		}
		else
		{
			UE_LOG(LogAdMobInterstitialAd, Log, TEXT("New Interstitial Ad initialized."));
		}

		AsyncTask(ENamedThreads::GameThread, [Error, Callback, Self = MoveTemp(Self)]() -> void
		{
			if (Self.IsValid())
			{
				Self->InterstitialAd->SetListener(Self->Listener);
			}

			Callback.ExecuteIfBound(Error);
		});
	});
#else
	UE_LOG(LogAdMobInterstitialAd, Warning, TEXT("Interstial Ad created but AdMob is disabled."));
	Callback.ExecuteIfBound((EAdMobError)0);
#endif
}

void UInterstitialAd::LoadAd(const FAdMobAdRequest& AdRequest, const FAdMobCallback& Callback)
{
#if WITH_FIREBASE_ADMOB
	if (InterstitialAd)
	{
		InterstitialAd->LoadAd(ADMOB_CONVERT_AD_REQUEST(AdRequest)).
			
		OnCompletion([Callback](const firebase::Future<void> _Future)
		{
			const EAdMobError Error = (EAdMobError)_Future.error();
			if (Error != EAdMobError::None)
			{
				UE_LOG(LogAdMobInterstitialAd, Error, TEXT("Failed to load ad for Interstitial Ad: Code %d. Message: %s"), _Future.error(), _Future.error_message());
			}
			AsyncTask(ENamedThreads::GameThread, [Error, Callback]() -> void
			{
				Callback.ExecuteIfBound(Error);
			});
		});
	}
#else
	Callback.ExecuteIfBound((EAdMobError)0);
#endif
}

void UInterstitialAd::Show(const FAdMobCallback& Callback)
{
#if WITH_FIREBASE_ADMOB 
	if (InterstitialAd)
	{
		InterstitialAd->Show().
			
		OnCompletion([Callback](const firebase::Future<void> _Future)
		{
			const EAdMobError Error = (EAdMobError)_Future.error();
			if (Error != EAdMobError::None)
			{
				UE_LOG(LogAdMobInterstitialAd, Error, TEXT("Failed to Show Interstitial Ad: Code %d. Message: %s"), _Future.error(), _Future.error_message());
			}
			AsyncTask(ENamedThreads::GameThread, [Error, Callback]() -> void
			{
				Callback.ExecuteIfBound(Error);
			});
		});
	}
#else
	Callback.ExecuteIfBound((EAdMobError)0);
#endif
}

EAdMobInterstitialAdPresentationState UInterstitialAd::GetPresentationState() const
{
#if WITH_FIREBASE_ADMOB
	if (InterstitialAd)
	{
		return static_cast<EAdMobInterstitialAdPresentationState>(InterstitialAd->presentation_state());
	}
#endif // WITH_FIREBASE_ADMOB
	return EAdMobInterstitialAdPresentationState::PresentationStateHidden;
}


