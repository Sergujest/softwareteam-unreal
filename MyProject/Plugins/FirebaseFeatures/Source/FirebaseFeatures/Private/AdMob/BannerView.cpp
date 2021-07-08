// Copyright Pandores Marketplace 2021. All Rights Reserved.

#include "AdMob/BannerView.h"

THIRD_PARTY_INCLUDES_START
#	include "firebase/admob/banner_view.h"
#	include "firebase/app.h"
THIRD_PARTY_INCLUDES_END

#include "FirebaseSdk/FirebaseConfig.h"

#include "AdMob/AdMobHelper.h"
#include "FirebaseFeatures.h"

#include "Async/Async.h"


DECLARE_LOG_CATEGORY_CLASS(LogAdMobBannerView, Log, All);

namespace
{
	void ExecuteCallback(const firebase::Future<void>& Future, const FAdMobCallback& Callback, const FString& MessageOnError)
	{
		const EAdMobError Error = (EAdMobError)Future.error();
		if (Error != EAdMobError::None)
		{									
			UE_LOG(LogAdMobBannerView, Error,
				TEXT("%s Code %d. Message: %s"), *MessageOnError, Error,
				UTF8_TO_TCHAR(Future.error_message()));						
		}		

		if (Callback.IsBound())
		{
			if (IsInGameThread())
			{
				Callback.Execute(Error);
			}

			else AsyncTask(ENamedThreads::GameThread, [Callback, Error]() -> void
			{
				Callback.ExecuteIfBound(Error);
			});
		}
	}
};

#define CreateAdMobCallback(ErrorMessage)								\
	[Callback](const firebase::Future<void>& Future) -> void			\
	{																	\
		ExecuteCallback(Future, Callback, TEXT(ErrorMessage));			\
	}

UBannerView::UBannerView()
	: BannerView(nullptr)
{	

}

UBannerView::~UBannerView()
{
#if WITH_FIREBASE_ADMOB
	if (BannerView)
	{
		BannerView->Destroy();
		delete BannerView;
		BannerView = nullptr;
	}
#endif // WITH_FIREBASE_ADMOB
}

void UBannerView::Initialize(const FString& AdUnitId, const FAdSize& Size, const FAdMobCallback& Callback)
{
#if WITH_FIREBASE_ADMOB
	if (!BannerView)
	{
		BannerView = new firebase::admob::BannerView();
	}

	if (BannerView->InitializeLastResult().status() == firebase::FutureStatus::kFutureStatusComplete)
	{
		UE_LOG(LogAdMobBannerView, Warning, TEXT("Initialize() called for a Banner View that has already been initialized."));
		Callback.ExecuteIfBound(EAdMobError::AlreadyInitialized);
		return;
	}

	if (BannerView->InitializeLastResult().status() == firebase::FutureStatus::kFutureStatusPending)
	{
		UE_LOG(LogAdMobBannerView, Warning, TEXT("Initialize() called for a Banner that is being initialized.."));
		Callback.ExecuteIfBound(EAdMobError::AlreadyInitialized);
		return;
	}

	firebase::admob::AdSize NativeSize;
	
	NativeSize.ad_size_type = firebase::admob::AdSizeType::kAdSizeStandard;
	NativeSize.height = Size.Height;
	NativeSize.width  = Size.Width;

	const firebase::admob::AdParent Parent = FAdMobHelper::GetAdParent();

	BannerView->Initialize(Parent, TCHAR_TO_ANSI(*AdUnitId), NativeSize)
		.OnCompletion(CreateAdMobCallback("Failed to initialize Banner view"));
#else // !WITH_FIREBASE_ADMOB
	UE_LOG(LogAdMobBannerView, Warning, TEXT("UBannerView::Initialize() called but AdMob is disabled."));
	Callback.ExecuteIfBound(EAdMobError::None);
#endif // !WITH_FIREBASE_ADMOB
}

void UBannerView::Hide(const FAdMobCallback& Callback)
{
#if WITH_FIREBASE_ADMOB
	if (BannerView)
	{
		BannerView->Hide().OnCompletion(CreateAdMobCallback("Failed to hide Banner View"));
	}
#else // !WITH_FIREBASE_ADMOB
	Callback.ExecuteIfBound(EAdMobError::None);
#endif // !WITH_FIREBASE_ADMOB
}

void UBannerView::Show(const FAdMobCallback& Callback)
{
#if WITH_FIREBASE_ADMOB
	if (BannerView)
	{
		BannerView->Show().OnCompletion(CreateAdMobCallback("Failed to load ad for Banner View"));
	}
#else // !WITH_FIREBASE_ADMOB
	Callback.ExecuteIfBound(EAdMobError::None);
#endif // !WITH_FIREBASE_ADMOB
}

void UBannerView::LoadAd(const FAdMobAdRequest& AdRequest, const FAdMobCallback& Callback)
{
#if WITH_FIREBASE_ADMOB
	if (BannerView)
	{	
		BannerView->LoadAd(ADMOB_CONVERT_AD_REQUEST(AdRequest))
			.OnCompletion(CreateAdMobCallback("Failed to load ad for Banner View")); 
	}
#else // !WITH_FIREBASE_ADMOB
	Callback.ExecuteIfBound(EAdMobError::None);
#endif // !WITH_FIREBASE_ADMOB
}

void UBannerView::MoveTo(const int32 X, const int32 Y, const FAdMobCallback& Callback)
{
#if WITH_FIREBASE_ADMOB
	if (BannerView)
	{
		BannerView->MoveTo(X, Y).OnCompletion(CreateAdMobCallback("Failed to Move Banner View"));
	}
#else // !WITH_FIREBASE_ADMOB
	Callback.ExecuteIfBound(EAdMobError::None);
#endif // !WITH_FIREBASE_ADMOB
}

void UBannerView::MoveTo(const FVector2D Location, const FAdMobCallback& Callback)
{
	MoveTo(Location.X, Location.Y, Callback);
}

void UBannerView::MoveTo(const EAdMobBannerViewPosition Location, const FAdMobCallback& Callback)
{
#if WITH_FIREBASE_ADMOB 
	if (BannerView)
	{
		BannerView->MoveTo((firebase::admob::BannerView::Position)Location)
			.OnCompletion(CreateAdMobCallback("Failed to move Banner View"));
	}
#else // !WITH_FIREBASE_ADMOB
	Callback.ExecuteIfBound(EAdMobError::None);
#endif // !WITH_FIREBASE_ADMOB
}

void UBannerView::Pause(const FAdMobCallback& Callback)
{
#if WITH_FIREBASE_ADMOB
	if (BannerView)
	{
		BannerView->Pause().OnCompletion(CreateAdMobCallback("Failed to pause Banner View")); 
	}
#else // !WITH_FIREBASE_ADMOB
	Callback.ExecuteIfBound(EAdMobError::None);
#endif // !WITH_FIREBASE_ADMOB
}

void UBannerView::Resume(const FAdMobCallback& Callback)
{
#if WITH_FIREBASE_ADMOB
	if (BannerView)
	{
		BannerView->Resume().OnCompletion(CreateAdMobCallback("Failed to Show Banner View."));
	}
#else // !WITH_FIREBASE_ADMOB
	Callback.ExecuteIfBound(EAdMobError::None);
#endif // !WITH_FIREBASE_ADMOB
}

#undef CreateAdMobCallback

