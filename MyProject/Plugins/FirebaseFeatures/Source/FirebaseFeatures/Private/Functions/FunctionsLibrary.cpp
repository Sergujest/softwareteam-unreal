// Copyright Pandores Marketplace 2021. All Rights Reserved.
#include "Functions/FunctionsLibrary.h"

THIRD_PARTY_INCLUDES_START
#	include "firebase/functions.h"
#	include "firebase/functions/callable_reference.h"
THIRD_PARTY_INCLUDES_END

void UFirebaseFunctionsLibrary::UseFunctionsEmulator(const FString& Name)
{
	using namespace firebase;

	functions::Functions* const Functions = functions::Functions::GetInstance(App::GetInstance());

	check(Functions != nullptr);

	Functions->UseFunctionsEmulator(TCHAR_TO_UTF8(*Name));
}

FFirebaseHttpsCallableReference UFirebaseFunctionsLibrary::GetHttpsCallable(const FString& Name)
{
	using namespace firebase;
	
	functions::Functions* const Functions = functions::Functions::GetInstance(App::GetInstance());

	check(Functions != nullptr);

	return Functions->GetHttpsCallable(TCHAR_TO_UTF8(*Name));
}
