// Copyright Pandores Marketplace 2021. All Rights Reserved.

#pragma once

#include "AdMobTypes.h"
#include "CoreMinimal.h"
#include "BannerView.generated.h"

namespace firebase { namespace admob { class BannerView; } };

UENUM(BlueprintType)
enum class EAdMobBannerViewPosition : uint8
{
	/// Top of the screen, horizontally centered.
	Top = 0,
	/// Bottom of the screen, horizontally centered.
	Bottom,
	/// Top-left corner of the screen.
	TopLeft,
	/// Top-right corner of the screen.
	TopRight,
	/// Bottom-left corner of the screen.
	BottomLeft,
	/// Bottom-right corner of the screen.
	BottomRight,
};

UCLASS(BlueprintType)
class FIREBASEFEATURES_API UBannerView final : public UObject
{
	GENERATED_BODY()

public:
	UBannerView();
	~UBannerView();

	void Initialize	(const FString& AdUnitId, const FAdSize& Size,	const FAdMobCallback& Callback = FAdMobCallback());
	void LoadAd		(const FAdMobAdRequest& AdRequest,				const FAdMobCallback& Callback = FAdMobCallback());
	void MoveTo		(const int32 X, const int32 Y,					const FAdMobCallback& Callback = FAdMobCallback());
	void MoveTo		(const FVector2D Location,						const FAdMobCallback& Callback = FAdMobCallback());
	void MoveTo		(const EAdMobBannerViewPosition Location,		const FAdMobCallback& Callback = FAdMobCallback());
	void Hide		(const FAdMobCallback& Callback = FAdMobCallback());
	void Show		(const FAdMobCallback& Callback = FAdMobCallback());
	void Pause		(const FAdMobCallback& Callback = FAdMobCallback());
	void Resume		(const FAdMobCallback& Callback = FAdMobCallback());

private:
	firebase::admob::BannerView* BannerView;
};

