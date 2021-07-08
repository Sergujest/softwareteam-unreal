// Copyright Pandores Marketplace 2021. All Rights Reserved.

#include "FirebaseSdkNodes.h"

UFirebaseInitializationProxy* UFirebaseInitializationProxy::WaitForInitialization()
{
	return NewObject<ThisClass>();
}

void UFirebaseInitializationProxy::Activate()
{
	if (FFirebaseFeaturesModule::IsFirebaseSDKInitialized())
	{
		OnSdkInitialized();
	}
	else
	{
		FFirebaseFeaturesModule::OnSDKInitialized().AddUObject(this, &ThisClass::OnSdkInitialized);
	}
}

void UFirebaseInitializationProxy::OnSdkInitialized()
{
	FirebaseInitialized.Broadcast();
	SetReadyToDestroy();
}

