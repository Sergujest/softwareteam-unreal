// Copyright Pandores Marketplace 2021. All Rights Reserved.

#include "Firestore/Query.h"

#if WITH_FIREBASE_FIRESTORE 
    THIRD_PARTY_INCLUDES_START
#		include "firebase/future.h"
#		include "firebase/firestore/query_snapshot.h"
#		include "firebase/firestore/listener_registration.h"
    THIRD_PARTY_INCLUDES_END
#endif // WITH_FIREBASE_FIRESTORE 

#include "Async/Async.h"

UFirestoreQuery::UFirestoreQuery()
#if WITH_FIREBASE_FIRESTORE 
	: Reference(new firebase::firestore::Query())
#endif
{

}

UFirestoreQuery::~UFirestoreQuery()
{
}

UFirestoreQuery* UFirestoreQuery::WhereEqualTo(const FString& Field, const FFirestoreFieldValue& Value)
{
	UFirestoreQuery* const Query = NewObject<UFirestoreQuery>();

#if WITH_FIREBASE_FIRESTORE 
	*Query->Reference = Reference->WhereEqualTo(TCHAR_TO_UTF8(*Field), Value);
#endif

	return Query;
}

UFirestoreQuery* UFirestoreQuery::WhereEqualToFieldPath(const FFirestoreFieldPath& Field, const FFirestoreFieldValue& Value)
{
	UFirestoreQuery* const Query = NewObject<UFirestoreQuery>();

#if WITH_FIREBASE_FIRESTORE 
	*Query->Reference = Reference->WhereEqualTo(Field, Value);
#endif


	return Query;
}

UFirestoreQuery* UFirestoreQuery::WhereLessThan(const FString& field, const FFirestoreFieldValue& value)
{
	UFirestoreQuery* const Query = NewObject<UFirestoreQuery>();

#if WITH_FIREBASE_FIRESTORE 
	*Query->Reference = Reference->WhereLessThan(TCHAR_TO_UTF8(*field), value);
#endif 

	return Query;
}

UFirestoreQuery* UFirestoreQuery::WhereLessThanFieldPath(const FFirestoreFieldPath& field, const FFirestoreFieldValue& value)
{
	UFirestoreQuery* const Query = NewObject<UFirestoreQuery>();

#if WITH_FIREBASE_FIRESTORE 
	*Query->Reference = Reference->WhereLessThan(field, value);
#endif

	return Query;
}

UFirestoreQuery* UFirestoreQuery::WhereLessThanOrEqualTo(const FString& field, const FFirestoreFieldValue& value)
{
	UFirestoreQuery* const Query = NewObject<UFirestoreQuery>();

#if WITH_FIREBASE_FIRESTORE 
	*Query->Reference = Reference->WhereLessThanOrEqualTo(TCHAR_TO_UTF8(*field), value);
#endif

	return Query;
}

UFirestoreQuery* UFirestoreQuery::WhereLessThanOrEqualToFieldPath(const FFirestoreFieldPath& field, const FFirestoreFieldValue& value)
{
	UFirestoreQuery* const Query = NewObject<UFirestoreQuery>();

#if WITH_FIREBASE_FIRESTORE 
	*Query->Reference = Reference->WhereLessThanOrEqualTo(field, value);
#endif

	return Query;
}

UFirestoreQuery* UFirestoreQuery::WhereGreaterThan(const FString& field, const FFirestoreFieldValue& value)
{
	UFirestoreQuery* const Query = NewObject<UFirestoreQuery>();

#if WITH_FIREBASE_FIRESTORE 
	*Query->Reference = Reference->WhereGreaterThan(TCHAR_TO_UTF8(*field), value);
#endif

	return Query;
}

UFirestoreQuery* UFirestoreQuery::WhereGreaterThanFieldPath(const FFirestoreFieldPath& field, const FFirestoreFieldValue& value)
{
	UFirestoreQuery* const Query = NewObject<UFirestoreQuery>();

#if WITH_FIREBASE_FIRESTORE 
	*Query->Reference = Reference->WhereGreaterThan(field, value);
#endif

	return Query;
}

UFirestoreQuery* UFirestoreQuery::WhereGreaterThanOrEqualTo(const FString& field, const FFirestoreFieldValue& value)
{
	UFirestoreQuery* const Query = NewObject<UFirestoreQuery>();

#if WITH_FIREBASE_FIRESTORE 
	*Query->Reference = Reference->WhereGreaterThanOrEqualTo(TCHAR_TO_UTF8(*field), value);
#endif 

	return Query;
}

UFirestoreQuery* UFirestoreQuery::WhereGreaterThanOrEqualToFielPath(const FFirestoreFieldPath& field, const FFirestoreFieldValue& value)
{
	UFirestoreQuery* const Query = NewObject<UFirestoreQuery>();

#if WITH_FIREBASE_FIRESTORE 
	*Query->Reference = Reference->WhereGreaterThanOrEqualTo(field, value);
#endif

	return Query;
}

UFirestoreQuery* UFirestoreQuery::WhereArrayContains(const FString& field, const FFirestoreFieldValue& value)
{
	UFirestoreQuery* const Query = NewObject<UFirestoreQuery>();

#if WITH_FIREBASE_FIRESTORE 
	*Query->Reference = Reference->WhereArrayContains(TCHAR_TO_UTF8(*field), value);
#endif

	return Query;
}

UFirestoreQuery* UFirestoreQuery::WhereArrayContainsFieldPath(const FFirestoreFieldPath& field, const FFirestoreFieldValue& value)
{
	UFirestoreQuery* const Query = NewObject<UFirestoreQuery>();

#if WITH_FIREBASE_FIRESTORE 
	*Query->Reference = Reference->WhereArrayContains(field, value);
#endif

	return Query;
}

UFirestoreQuery* UFirestoreQuery::WhereArrayContainsAny(const FString& field, const TArray<FFirestoreFieldValue>& values)
{
	UFirestoreQuery* const Query = NewObject<UFirestoreQuery>();

#if WITH_FIREBASE_FIRESTORE 
	std::vector<firebase::firestore::FieldValue> RawValues;
	
	RawValues.reserve(values.Num());

	for (const auto& Val : values)
	{
		RawValues.push_back(Val);
	}

	*Query->Reference = Reference->WhereArrayContainsAny(TCHAR_TO_UTF8(*field), MoveTemp(RawValues));
#endif

	return Query;
}

UFirestoreQuery* UFirestoreQuery::WhereArrayContainsAnyFielPath(const FFirestoreFieldPath& field, const TArray<FFirestoreFieldValue>& values)
{
	UFirestoreQuery* const Query = NewObject<UFirestoreQuery>();

#if WITH_FIREBASE_FIRESTORE 
	std::vector<firebase::firestore::FieldValue> RawValues;

	RawValues.reserve(values.Num());

	for (const auto& Val : values)
	{
		RawValues.push_back(Val);
	}

	*Query->Reference = Reference->WhereArrayContainsAny(field, MoveTemp(RawValues));
#endif

	return Query;
}

UFirestoreQuery* UFirestoreQuery::WhereIn(const FString& field, const TArray<FFirestoreFieldValue>& values)
{
	UFirestoreQuery* const Query = NewObject<UFirestoreQuery>();

#if WITH_FIREBASE_FIRESTORE 
	std::vector<firebase::firestore::FieldValue> RawValues;

	RawValues.reserve(values.Num());

	for (const auto& Val : values)
	{
		RawValues.push_back(Val);
	}

	*Query->Reference = Reference->WhereIn(TCHAR_TO_UTF8(*field), MoveTemp(RawValues));
#endif

	return Query;
}

UFirestoreQuery* UFirestoreQuery::WhereInFieldPath(const FFirestoreFieldPath& field, const TArray<FFirestoreFieldValue>& values)
{
	UFirestoreQuery* const Query = NewObject<UFirestoreQuery>();

#if WITH_FIREBASE_FIRESTORE 
	std::vector<firebase::firestore::FieldValue> RawValues;

	RawValues.reserve(values.Num());

	for (const auto& Val : values)
	{
		RawValues.push_back(Val);
	}

	*Query->Reference = Reference->WhereIn(field, MoveTemp(RawValues));
#endif

	return Query;
}

UFirestoreQuery* UFirestoreQuery::OrderBy(const FString& field, EFirestoreQueryDirection direction)
{
	UFirestoreQuery* const Query = NewObject<UFirestoreQuery>();

#if WITH_FIREBASE_FIRESTORE 
	*Query->Reference = Reference->OrderBy(TCHAR_TO_UTF8(*field), (firebase::firestore::Query::Direction)direction);
#endif

	return Query;
}

UFirestoreQuery* UFirestoreQuery::OrderByFieldPath(const FFirestoreFieldPath& field, EFirestoreQueryDirection direction)
{
	UFirestoreQuery* const Query = NewObject<UFirestoreQuery>();

#if WITH_FIREBASE_FIRESTORE 
	*Query->Reference = Reference->OrderBy(field, (firebase::firestore::Query::Direction)direction);
#endif

	return Query;
}

UFirestoreQuery* UFirestoreQuery::Limit(int32 limit)
{
	UFirestoreQuery* const Query = NewObject<UFirestoreQuery>();

#if WITH_FIREBASE_FIRESTORE 
	*Query->Reference = Reference->Limit(limit);
#endif

	return Query;
}

UFirestoreQuery* UFirestoreQuery::LimitToLast(int32 limit)
{
	UFirestoreQuery* const Query = NewObject<UFirestoreQuery>();
	
#if WITH_FIREBASE_FIRESTORE 
	*Query->Reference = Reference->LimitToLast(limit);
#endif

	return Query;
}

UFirestoreQuery* UFirestoreQuery::StartAt(const FFirestoreDocumentSnapshot& snapshot)
{
	UFirestoreQuery* const Query = NewObject<UFirestoreQuery>();

#if WITH_FIREBASE_FIRESTORE 
	*Query->Reference = Reference->StartAt(snapshot);
#endif

	return Query;
}

UFirestoreQuery* UFirestoreQuery::StartAtFieldValue(const TArray<FFirestoreFieldValue>& values)
{
	UFirestoreQuery* const Query = NewObject<UFirestoreQuery>();

#if WITH_FIREBASE_FIRESTORE 
	std::vector<firebase::firestore::FieldValue> RawValues;

	RawValues.reserve(values.Num());

	for (const auto& Val : values)
	{
		RawValues.push_back(Val);
	}

	*Query->Reference = Reference->StartAt(RawValues);
#endif

	return Query;
}

UFirestoreQuery* UFirestoreQuery::StartAfter(const FFirestoreDocumentSnapshot& snapshot)
{
	UFirestoreQuery* const Query = NewObject<UFirestoreQuery>();
	
#if WITH_FIREBASE_FIRESTORE 
	*Query->Reference = Reference->StartAfter(snapshot);
#endif

	return Query;
}

UFirestoreQuery* UFirestoreQuery::StartAfterFieldValue(const TArray<FFirestoreFieldValue>& values)
{
	UFirestoreQuery* const Query = NewObject<UFirestoreQuery>();

#if WITH_FIREBASE_FIRESTORE 
	std::vector<firebase::firestore::FieldValue> RawValues;

	RawValues.reserve(values.Num());

	for (const auto& Val : values)
	{
		RawValues.push_back(Val);
	}

	*Query->Reference = Reference->StartAfter(RawValues);
#endif

	return Query;
}

UFirestoreQuery* UFirestoreQuery::EndBefore(const FFirestoreDocumentSnapshot& snapshot)
{
	UFirestoreQuery* const Query = NewObject<UFirestoreQuery>();

#if WITH_FIREBASE_FIRESTORE 
	*Query->Reference = Reference->EndBefore(snapshot);
#endif

	return Query;
}

UFirestoreQuery* UFirestoreQuery::EndBeforeFieldValue(const TArray<FFirestoreFieldValue>& values)
{
	UFirestoreQuery* const Query = NewObject<UFirestoreQuery>();

#if WITH_FIREBASE_FIRESTORE 
	std::vector<firebase::firestore::FieldValue> RawValues;

	RawValues.reserve(values.Num());

	for (const auto& Val : values)
	{
		RawValues.push_back(Val);
	}

	*Query->Reference = Reference->EndBefore(RawValues);
#endif
	
	return Query;
}

UFirestoreQuery* UFirestoreQuery::EndAt(const FFirestoreDocumentSnapshot& snapshot)
{
	UFirestoreQuery* const Query = NewObject<UFirestoreQuery>();

#if WITH_FIREBASE_FIRESTORE 
	*Query->Reference = Reference->EndAt(snapshot);
#endif
	
	return Query;
}

UFirestoreQuery* UFirestoreQuery::EndAtValues(const TArray<FFirestoreFieldValue>& values)
{
	UFirestoreQuery* const Query = NewObject<UFirestoreQuery>();

#if WITH_FIREBASE_FIRESTORE 
	std::vector<firebase::firestore::FieldValue> RawValues;

	RawValues.reserve(values.Num());

	for (const auto& Val : values)
	{
		RawValues.push_back(Val);
	}

	*Query->Reference = Reference->EndAt(RawValues);
#endif
	
	return Query;
}

void UFirestoreQuery::Get(const EFirestoreSource Source, FFirestoreQueryCallback Callback) const
{
#if WITH_FIREBASE_FIRESTORE 
	using namespace firebase;

	Reference->Get(static_cast<firestore::Source>(Source)).OnCompletion(
		[Callback = MoveTemp(Callback)](const Future<firestore::QuerySnapshot>& Result) mutable -> void
	{
		const EFirestoreError Error = (EFirestoreError)Result.error();
		if (Error != EFirestoreError::Ok)
		{
			UE_LOG(LogFirestore, Error, TEXT("Failed to get Query. Reason: %s."), UTF8_TO_TCHAR(Result.error_message()));
		}

		TArray<FFirestoreDocumentSnapshot> Snapshots;

		if (const firestore::QuerySnapshot* const QuerySnap = Result.result())
		{
			Snapshots.Reserve(QuerySnap->documents().size());
			for (firestore::DocumentSnapshot& Document : QuerySnap->documents())
			{
				Snapshots.Emplace(FFirestoreDocumentSnapshot(Document));
			}
		}

		AsyncTask(ENamedThreads::GameThread, [Callback = MoveTemp(Callback), Snapshots = MoveTemp(Snapshots), Error]() -> void
		{
			Callback.ExecuteIfBound(Error, Snapshots);
		});
	});
#endif // WITH_FIREBASE_FIRESTORE 
}

void UFirestoreQuery::AddSnapshotListener(FQuerySnapshotListener Listener)
{
#if !PLATFORM_LINUX && WITH_FIREBASE_FIRESTORE && defined(FIREBASE_USE_STD_FUNCTION)
	Reference->AddSnapshotListener([Listener = MoveTemp(Listener)]
	(const firebase::firestore::QuerySnapshot& Result, firebase::firestore::Error Error) -> void
	{
		TArray<FFirestoreDocumentSnapshot> Snapshots;

		Snapshots.Reserve(Result.documents().size());

		for (firebase::firestore::DocumentSnapshot& Document : Result.documents())
		{
			Snapshots.Emplace(FFirestoreDocumentSnapshot(Document));
		}

		AsyncTask(ENamedThreads::GameThread, [Listener, Snapshots = MoveTemp(Snapshots), Error]() -> void
		{
			Listener.ExecuteIfBound((EFirestoreError)Error, Snapshots);
		});		
	});
#endif
}

