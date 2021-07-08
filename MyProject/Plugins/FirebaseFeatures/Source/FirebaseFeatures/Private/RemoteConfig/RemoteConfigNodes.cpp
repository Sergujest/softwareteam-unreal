// Copyright Pandores Marketplace 2021. All Rights Reserved.

#include "RemoteConfigNodes.h"

UFetchProxy* UFetchProxy::Fetch()
{
	ThisClass* const Proxy = NewObject<ThisClass>();

	return Proxy;
}

void UFetchProxy::Activate()
{
	UFirebaseRemoteConfig::Fetch(FRemoteConfigCallback::CreateUObject(this, &ThisClass::OnActionOver));
}

void UFetchProxy::OnActionOver()
{
	OnFetched.Broadcast();
	SetReadyToDestroy();
}

UFetchWithCacheExpirationProxy* UFetchWithCacheExpirationProxy::FetchWithCacheExpiration(const int32 CacheExpirationInSeconds)
{
	ThisClass* const Proxy = NewObject<ThisClass>();

	Proxy->_CacheExpirationInSeconds = CacheExpirationInSeconds;

	return Proxy;
}

void UFetchWithCacheExpirationProxy::Activate()
{
	UFirebaseRemoteConfig::Fetch(_CacheExpirationInSeconds, FRemoteConfigCallback::CreateUObject(this, &ThisClass::OnActionOver));
}

void UFetchWithCacheExpirationProxy::OnActionOver()
{
	OnFetched.Broadcast();
	SetReadyToDestroy();
}






