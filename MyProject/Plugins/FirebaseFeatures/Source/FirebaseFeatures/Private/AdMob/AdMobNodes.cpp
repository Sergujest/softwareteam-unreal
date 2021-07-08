// Copyright Pandores Marketplace 2021. All Rights Reserved.

#include "AdMobNodes.h"

UShowRewardedVideo* UShowRewardedVideo::ShowRewardedVideo()
{
	return NewObject<UShowRewardedVideo>();
}

void UShowRewardedVideo::Activate()
{
	FRewardedVideo::Show(FAdMobCallback::CreateUObject(this, &UShowRewardedVideo::OnActionOver));
}

void UShowRewardedVideo::OnActionOver(const EAdMobError Error)
{
	(Error == EAdMobError::None ? OnVideoShown : OnError).Broadcast(Error);
	SetReadyToDestroy();
}

ULoadRewardedVideoAd* ULoadRewardedVideoAd::LoadRewardedVideoAd(const FString& AdUnitId, const FAdMobAdRequest& AdRequest)
{
	ULoadRewardedVideoAd* const Proxy = NewObject<ULoadRewardedVideoAd>();

	Proxy->AdRequest = AdRequest;
	Proxy->AdUnitId  = AdUnitId;

	return Proxy;
}

void ULoadRewardedVideoAd::Activate()
{
	FRewardedVideo::LoadAd(AdUnitId, AdRequest, FAdMobCallback::CreateUObject(this, &ULoadRewardedVideoAd::OnActionOver));
}

void ULoadRewardedVideoAd::OnActionOver(const EAdMobError Error)
{
	(Error == EAdMobError::None ? OnAdLoaded : OnError).Broadcast(Error);
	SetReadyToDestroy();
}

UPauseRewardedVideo* UPauseRewardedVideo::PauseRewardedVideo()
{
	return NewObject<UPauseRewardedVideo>();
}

void UPauseRewardedVideo::Activate()
{
	FRewardedVideo::Pause(FAdMobCallback::CreateUObject(this, &UPauseRewardedVideo::OnActionOver));
}

void UPauseRewardedVideo::OnActionOver(const EAdMobError Error)
{
	(Error == EAdMobError::None ? OnVideoPaused : OnError).Broadcast(Error);
	SetReadyToDestroy();
}

UResumeRewardedVideo* UResumeRewardedVideo::ResumeRewardedVideo()
{
	return NewObject<UResumeRewardedVideo>();
}

void UResumeRewardedVideo::Activate()
{
	FRewardedVideo::Resume(FAdMobCallback::CreateUObject(this, &UResumeRewardedVideo::OnActionOver));
}

void UResumeRewardedVideo::OnActionOver(const EAdMobError Error)
{
	(Error == EAdMobError::None ? OnVideoResumed : OnError).Broadcast(Error);
	SetReadyToDestroy();
}

UCreateBannerView* UCreateBannerView::CreateBannerView(const FString& AdUnitId, const FAdSize& AdSize)
{
	UCreateBannerView* const Proxy = NewObject<UCreateBannerView>();

	Proxy->Size		= AdSize;
	Proxy->AdUnitId = AdUnitId;

	return Proxy;
}

void UCreateBannerView::Activate()
{
	Banner = NewObject<UBannerView>();
	UE_LOG(LogTemp, Error, TEXT("App ID: %s"), *AdUnitId);
	Banner->Initialize(AdUnitId, Size, FAdMobCallback::CreateUObject(this, &UCreateBannerView::OnActionOver));
}

void UCreateBannerView::OnActionOver(const EAdMobError Error)
{
	(Error == EAdMobError::None ? OnBannerViewCreated : OnError).Broadcast(Banner, Error);
	SetReadyToDestroy();
}

ULoadAdBannerView* ULoadAdBannerView::LoadAd(UBannerView* const BannerView, const FAdMobAdRequest& AdRequest)
{
	ULoadAdBannerView* const Proxy = NewObject<ULoadAdBannerView>();

	Proxy->Banner = BannerView;
	Proxy->AdRequest = AdRequest;

	return Proxy;
}

void ULoadAdBannerView::Activate()
{
	if (!Banner)
	{
		OnActionOver(EAdMobError::Uninitialized);
		return;
	}

	Banner->LoadAd(AdRequest, FAdMobCallback::CreateUObject(this, &ULoadAdBannerView::OnActionOver));
}

void ULoadAdBannerView::OnActionOver(const EAdMobError Error)
{
	(Error == EAdMobError::None ? OnAdLoaded : OnError).Broadcast(Banner, Error);
	SetReadyToDestroy();
}

UHideAdBannerView* UHideAdBannerView::Hide(UBannerView* const BannerView)
{
	UHideAdBannerView* const Proxy = NewObject<UHideAdBannerView>();

	Proxy->Banner = BannerView;

	return Proxy;
}

void UHideAdBannerView::Activate()
{
	if (!Banner)
	{
		OnActionOver(EAdMobError::Uninitialized);
		return;
	}

	Banner->Hide(FAdMobCallback::CreateUObject(this, &UHideAdBannerView::OnActionOver));
}

void UHideAdBannerView::OnActionOver(const EAdMobError Error)
{
	(Error == EAdMobError::None ? OnHidden : OnError).Broadcast(Banner, Error);
	SetReadyToDestroy();
}

UShowBannerView* UShowBannerView::Show(UBannerView* const BannerView)
{
	UShowBannerView* const Proxy = NewObject<UShowBannerView>();

	Proxy->Banner = BannerView;

	return Proxy;
}

void UShowBannerView::Activate()
{
	if (!Banner)
	{
		OnActionOver(EAdMobError::Uninitialized);
		return;
	}

	Banner->Show(FAdMobCallback::CreateUObject(this, &UShowBannerView::OnActionOver));
}

void UShowBannerView::OnActionOver(const EAdMobError Error)
{
	(Error == EAdMobError::None ? OnShown : OnError).Broadcast(Banner, Error);
	SetReadyToDestroy();
}

UPauseBannerView* UPauseBannerView::Pause(UBannerView* const BannerView)
{
	UPauseBannerView* const Proxy = NewObject<UPauseBannerView>();

	Proxy->Banner = BannerView;

	return Proxy;
}

void UPauseBannerView::Activate()
{
	if (!Banner)
	{
		OnActionOver(EAdMobError::Uninitialized);
		return;
	}

	Banner->Pause(FAdMobCallback::CreateUObject(this, &UPauseBannerView::OnActionOver));
}

void UPauseBannerView::OnActionOver(const EAdMobError Error)
{
	(Error == EAdMobError::None ? OnPaused : OnError).Broadcast(Banner, Error);
	SetReadyToDestroy();
}

UResumeBannerView* UResumeBannerView::Resume(UBannerView* const BannerView)
{
	UResumeBannerView* const Proxy = NewObject<UResumeBannerView>();

	Proxy->Banner = BannerView;

	return Proxy;
}

void UResumeBannerView::Activate()
{
	if (!Banner)
	{
		OnActionOver(EAdMobError::Uninitialized);
		return;
	}

	Banner->Resume(FAdMobCallback::CreateUObject(this, &UResumeBannerView::OnActionOver));
}

void UResumeBannerView::OnActionOver(const EAdMobError Error)
{
	(Error == EAdMobError::None ? OnResumed : OnError).Broadcast(Banner, Error);
	SetReadyToDestroy();
}

UMoveToBannerView* UMoveToBannerView::MoveTo(UBannerView* const BannerView, const int32 X, const int32 Y)
{
	UMoveToBannerView* const Proxy = NewObject<UMoveToBannerView>();

	Proxy->Banner = BannerView;
	Proxy->X = X;
	Proxy->Y = Y;

	return Proxy;
}

void UMoveToBannerView::Activate()
{
	if (!Banner)
	{
		OnActionOver(EAdMobError::Uninitialized);
		return;
	}

	Banner->MoveTo(X, Y, FAdMobCallback::CreateUObject(this, &UMoveToBannerView::OnActionOver));
}

void UMoveToBannerView::OnActionOver(const EAdMobError Error)
{
	(Error == EAdMobError::None ? OnMoved : OnError).Broadcast(Banner, Error);
	SetReadyToDestroy();
}


UCreateInterstitialAd* UCreateInterstitialAd::CreateInterstitialAd(const FString& AdUnitId)
{
	UCreateInterstitialAd* const Proxy = NewObject<UCreateInterstitialAd>();

	Proxy->AdUnitId = AdUnitId;

	return Proxy;
}

void UCreateInterstitialAd::Activate()
{
	Interstitial = NewObject<UInterstitialAd>();

	Interstitial->Initialize(AdUnitId, FAdMobCallback::CreateUObject(this, &UCreateInterstitialAd::OnActionOver));
}

void UCreateInterstitialAd::OnActionOver(const EAdMobError Error)
{
	(Error == EAdMobError::None ? OnInterstitialAdCreated : OnError).Broadcast(Interstitial, Error);
	SetReadyToDestroy();
}

ULoadAdInterstitial* ULoadAdInterstitial::LoadAd(UInterstitialAd* const InterstitialAd, const FAdMobAdRequest& AdRequest)
{
	ULoadAdInterstitial* const Proxy = NewObject<ULoadAdInterstitial>();

	Proxy->AdRequest	= AdRequest;
	Proxy->Interstitial = InterstitialAd;

	return Proxy;
}

void ULoadAdInterstitial::Activate()
{
	if (!Interstitial)
	{
		OnActionOver(EAdMobError::Uninitialized);
		return;
	}
	Interstitial->LoadAd(AdRequest, FAdMobCallback::CreateUObject(this, &ULoadAdInterstitial::OnActionOver));
}

void ULoadAdInterstitial::OnActionOver(const EAdMobError Error)
{
	(Error == EAdMobError::None ? OnAdLoaded : OnError).Broadcast(Interstitial, Error);
	SetReadyToDestroy();
}

UShowInterstitial* UShowInterstitial::Show(UInterstitialAd* const InterstitialAd)
{
	UShowInterstitial* const Proxy = NewObject<UShowInterstitial>();

	Proxy->Interstitial = InterstitialAd;

	return Proxy;
}

void UShowInterstitial::Activate()
{
	if (!Interstitial)
	{
		OnActionOver(EAdMobError::Uninitialized);
		return;
	}
	Interstitial->Show(FAdMobCallback::CreateUObject(this, &UShowInterstitial::OnActionOver));
}

void UShowInterstitial::OnActionOver(const EAdMobError Error)
{
	(Error == EAdMobError::None ? OnShown : OnError).Broadcast(Interstitial, Error);
	SetReadyToDestroy();
}

