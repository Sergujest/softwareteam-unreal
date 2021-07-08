// Copyright Pandores Marketplace 2021. All Rights Reserved.

#include "Functions/FunctionsNodes.h"

bool UFirebaseFunctionsBlueprintLibrary::IsValid(const FFirebaseHttpsCallableReference& HttpsCallable)
{
	return HttpsCallable.IsValid();
}

UCallHttpsFunctionsProxy* UCallHttpsFunctionsProxy::Call(FFirebaseHttpsCallableReference& HttpsCallable)
{
	ThisClass* const Proxy = NewObject<ThisClass>();

	Proxy->Callable = HttpsCallable;

	return Proxy;
}

void UCallHttpsFunctionsProxy::Activate()
{
	Callable.Call(FFunctionsCallCallback::CreateUObject(this, &ThisClass::OnActionOver));
}

void UCallHttpsFunctionsProxy::OnActionOver(const EFirebaseFunctionsError Error, const FFirebaseVariant& Result)
{
	(Error == EFirebaseFunctionsError::None ? OnCalled : OnError).Broadcast(Error, Result);
	SetReadyToDestroy();
}

UCallHttpsFunctionsWithDataProxy* UCallHttpsFunctionsWithDataProxy::CallWithData(FFirebaseHttpsCallableReference& HttpsCallable, const FFirebaseVariant& Data)
{
	ThisClass* const Proxy = NewObject<ThisClass>();

	Proxy->Callable = HttpsCallable;
	Proxy->CallData = Data;

	return Proxy;
}

void UCallHttpsFunctionsWithDataProxy::Activate()
{
	Callable.Call(CallData, FFunctionsCallCallback::CreateUObject(this, &ThisClass::OnActionOver));
}

void UCallHttpsFunctionsWithDataProxy::OnActionOver(const EFirebaseFunctionsError Error, const FFirebaseVariant& Result)
{
	(Error == EFirebaseFunctionsError::None ? OnCalled : OnError).Broadcast(Error, Result);
	SetReadyToDestroy();
}
