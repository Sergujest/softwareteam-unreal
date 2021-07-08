// Copyright Pandores Marketplace 2021. All Rights Reserved.

#include "Functions/CallableReference.h"

THIRD_PARTY_INCLUDES_START
#	include "firebase/functions/callable_reference.h"
#	include "firebase/functions/callable_result.h"
THIRD_PARTY_INCLUDES_END

#include "Async/Async.h"
#include "FirebaseFeatures.h"


FFirebaseHttpsCallableReference::FFirebaseHttpsCallableReference()
	: Reference(MakeUnique<firebase::functions::HttpsCallableReference>())
{
}

FFirebaseHttpsCallableReference::FFirebaseHttpsCallableReference(const firebase::functions::HttpsCallableReference& InReference)
	: Reference(MakeUnique<firebase::functions::HttpsCallableReference>(InReference))
{
}

FFirebaseHttpsCallableReference::FFirebaseHttpsCallableReference(const FFirebaseHttpsCallableReference& Other)
	: FFirebaseHttpsCallableReference()
{
	*Reference = *Other.Reference;
}

FFirebaseHttpsCallableReference::FFirebaseHttpsCallableReference(FFirebaseHttpsCallableReference&& Other)
	: FFirebaseHttpsCallableReference()
{
	*Reference = MoveTemp(*Other.Reference);
}

FFirebaseHttpsCallableReference::~FFirebaseHttpsCallableReference()
{
}

FFirebaseHttpsCallableReference& FFirebaseHttpsCallableReference::operator=(const FFirebaseHttpsCallableReference& Other)
{
	*Reference = *Other.Reference;
	return *this;
}

FFirebaseHttpsCallableReference& FFirebaseHttpsCallableReference::operator=(FFirebaseHttpsCallableReference&& Other)
{
	*Reference = MoveTemp(*Other.Reference);
	return *this;
}

bool FFirebaseHttpsCallableReference::IsValid() const
{
	return Reference->is_valid();
}

void FFirebaseHttpsCallableReference::Call(const FFunctionsCallCallback& Callback)
{
	using namespace firebase;
	Reference->Call().OnCompletion([Callback](const Future<functions::HttpsCallableResult>& Future) -> void
	{
		const EFirebaseFunctionsError Error = (EFirebaseFunctionsError)Future.error();
		if (Error != EFirebaseFunctionsError::None)
		{
			UE_LOG(LogFirebaseFunctions, Error, TEXT("Functions Call failed. Code: %d. Message: %s"),
				Error, UTF8_TO_TCHAR(Future.error_message()));
		}

		if (Callback.IsBound())
		{
			const functions::HttpsCallableResult& Result = Future.result() ? *Future.result() : functions::HttpsCallableResult();

			AsyncTask(ENamedThreads::GameThread, [Callback, Error, Result]() -> void
			{
				Callback.ExecuteIfBound(Error, Result.data());
			});
		}
	});
}

static void CallInternal(firebase::functions::HttpsCallableReference& Ref, const FFirebaseVariant& Data, const FFunctionsCallCallback& Callback)
{
	Ref.Call(Data.GetRawVariant()).OnCompletion([Callback](const firebase::Future<firebase::functions::HttpsCallableResult>& Future) -> void
		{
			const EFirebaseFunctionsError Error = (EFirebaseFunctionsError)Future.error();
			if (Error != EFirebaseFunctionsError::None)
			{
				UE_LOG(LogFirebaseFunctions, Error, TEXT("Functions Call failed. Code: %d. Message: %s"),
					Error, UTF8_TO_TCHAR(Future.error_message()));
			}

			if (Callback.IsBound())
			{
				firebase::Variant Result = Future.result() ? Future.result()->data() : firebase::Variant::Null();

				AsyncTask(ENamedThreads::GameThread, [Callback, Error, Result = MoveTemp(Result)]() -> void
				{
					Callback.ExecuteIfBound(Error, Result);
				});
			}
		});
}

void FFirebaseHttpsCallableReference::Call(const FFirebaseVariant& Data, const FFunctionsCallCallback& Callback)
{
	CallInternal(*Reference, Data, Callback);
}

