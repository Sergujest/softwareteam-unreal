// Copyright Pandores Marketplace 2021. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "FirebaseSdk/FirebaseVariant.h"
#include "FirebaseSdk/FirebaseErrors.h"
#include "CallableReference.generated.h"

namespace firebase { namespace functions { class HttpsCallableReference; } };

DECLARE_DELEGATE_TwoParams(FFunctionsCallCallback, const EFirebaseFunctionsError, const FFirebaseVariant&);

/// Represents a reference to a Cloud Functions object.
/// Developers can call HTTPS Callable Functions.
USTRUCT(BlueprintType)
struct FIREBASEFEATURES_API FFirebaseHttpsCallableReference
{
	GENERATED_BODY()
public:
	FFirebaseHttpsCallableReference();
	FFirebaseHttpsCallableReference(const firebase::functions::HttpsCallableReference& InReference);
	FFirebaseHttpsCallableReference(const FFirebaseHttpsCallableReference&  Other);
	FFirebaseHttpsCallableReference(FFirebaseHttpsCallableReference&& Other);
	~FFirebaseHttpsCallableReference();

	FFirebaseHttpsCallableReference& operator=(const FFirebaseHttpsCallableReference& Other);
	FFirebaseHttpsCallableReference& operator=(FFirebaseHttpsCallableReference&& Other);

	/// @brief Calls the function.
	void Call(const FFunctionsCallCallback& Callback = FFunctionsCallCallback());

	/// @brief Calls the function.
	///
	/// @param[in] Data The params to pass to the function.
	/// @returns The result of the call;
	void Call(const FFirebaseVariant& Data, const FFunctionsCallCallback& Callback = FFunctionsCallCallback());

	/// @brief Returns true if this HttpsCallableReference is valid, false if it
	/// is not valid. An invalid HttpsCallableReference indicates that the
	/// reference is uninitialized (created with the default constructor) or that
	/// there was an error retrieving the reference.
	///
	/// @returns true if this HttpsCallableReference is valid, false if this
	/// HttpsCallableReference is invalid.
	bool IsValid() const;

private:
	TUniquePtr<firebase::functions::HttpsCallableReference> Reference;
};
