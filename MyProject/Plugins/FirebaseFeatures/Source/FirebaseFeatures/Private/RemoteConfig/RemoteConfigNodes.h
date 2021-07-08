// Copyright Pandores Marketplace 2021. All Rights Reserved.

#pragma once

#include "RemoteConfig/RemoteConfig.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "RemoteConfigNodes.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FDynMultOnFetched);

UCLASS()
class UFetchProxy final : public UBlueprintAsyncActionBase
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintAssignable)
	FDynMultOnFetched OnFetched;

public:
	UFUNCTION(BlueprintCallable, Category = "Firebase|RemoteConfig", meta = (BlueprintInternalUseOnly = "true", DisplayName = "Fetch"))
	static UFetchProxy* Fetch();

	virtual void Activate();

private:
	void OnActionOver();
};

UCLASS()
class UFetchWithCacheExpirationProxy final : public UBlueprintAsyncActionBase
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintAssignable)
	FDynMultOnFetched OnFetched;

public:
	UFUNCTION(BlueprintCallable, Category = "Firebase|RemoteConfig", meta = (BlueprintInternalUseOnly = "true", DisplayName = "Fetch with Cache Expiration"))
	static UFetchWithCacheExpirationProxy* FetchWithCacheExpiration(const int32 CacheExpirationInSeconds);

	virtual void Activate();

private:
	void OnActionOver();

	int32 _CacheExpirationInSeconds;
};





