// Copyright Pandores Marketplace 2021. All Rights Reserved.

#pragma once

#include "FirebaseFeatures.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "FirebaseSdkNodes.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FDynMulOnFbInit);

UCLASS()
class UFirebaseInitializationProxy final : public UBlueprintAsyncActionBase
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintAssignable)
	FDynMulOnFbInit FirebaseInitialized;

public:
	UFUNCTION(BlueprintCallable, Category = "Firebase", meta = (BlueprintInternalUseOnly = "true", DisplayName = "Wait for Firebase SDK Initialization"))
	static UFirebaseInitializationProxy* WaitForInitialization();

	virtual void Activate() override;

private:
	void OnSdkInitialized();

};
