// Copyright Pandores Marketplace 2021. All Rights Reserved.

#pragma once


#include "CoreMinimal.h"

#if !defined(WITH_FIREBASE_FIRESTORE)
#	define WITH_FIREBASE_FIRESTORE 0
#endif

#if WITH_FIREBASE_FIRESTORE 
THIRD_PARTY_INCLUDES_START
#	include "firebase/firestore/query.h"
THIRD_PARTY_INCLUDES_END
#endif // WITH_FIREBASE_FIRESTORE 

#include "Firestore/DocumentSnapshot.h"
#include "Firestore/FieldValue.h"
#include "Firestore/FieldPath.h"
#include "Firestore/Firestore.h"
#include "Query.generated.h"

DECLARE_DELEGATE_TwoParams(FFirestoreQueryCallback, EFirestoreError, const TArray<FFirestoreDocumentSnapshot>&);

UDELEGATE()
DECLARE_DYNAMIC_DELEGATE_TwoParams(
	FQuerySnapshotListener, 
		const EFirestoreError, Error, 
		const TArray<FFirestoreDocumentSnapshot>&, DocumentSnapshots
);

UENUM(BlueprintType)
enum class EFirestoreQueryDirection : uint8
{
	Ascending,
	Descending,
};

UCLASS(BlueprintType)
class FIREBASEFEATURES_API UFirestoreQuery : public UObject
{
	GENERATED_BODY()
private:
	friend class UFirestore;

public:
	UFirestoreQuery();
	~UFirestoreQuery();

	/**
	 * @brief Creates and returns a new Query with the additional filter that
	 * documents must contain the specified field and the value should be equal to
	 * the specified value.
	 *
	 * @param Field The name of the field to compare.
	 * @param Value The value for comparison.
	 *
	 * @return The created Query.
	 */
	UFUNCTION(BlueprintCallable, Category = "Firebase|Firestore|Query")
	UFirestoreQuery* WhereEqualTo(const FString& Field, const FFirestoreFieldValue& Value);

	/**
	 * @brief Creates and returns a new Query with the additional filter that
	 * documents must contain the specified field and the value should be equal to
	 * the specified value.
	 *
	 * @param Field The path of the field to compare.
	 * @param Value The value for comparison.
	 *
	 * @return The created Query.
	 */
	UFUNCTION(BlueprintCallable, Category = "Firebase|Firestore|Query")
	UFirestoreQuery* WhereEqualToFieldPath(const FFirestoreFieldPath& Field, const FFirestoreFieldValue& Value);

	/**
	 * @brief Creates and returns a new Query with the additional filter that
	 * documents must contain the specified field and the value should be less
	 * than the specified value.
	 *
	 * @param[in] field The name of the field to compare.
	 * @param[in] value The value for comparison.
	 *
	 * @return The created Query.
	 */
	UFUNCTION(BlueprintCallable, Category = "Firebase|Firestore|Query")
	UFirestoreQuery* WhereLessThan(const FString& Field, const FFirestoreFieldValue& Value);

	/**
	 * @brief Creates and returns a new Query with the additional filter that
	 * documents must contain the specified field and the value should be less
	 * than the specified value.
	 *
	 * @param[in] field The path of the field to compare.
	 * @param[in] value The value for comparison.
	 *
	 * @return The created Query.
	 */
	UFUNCTION(BlueprintCallable, Category = "Firebase|Firestore|Query")
	UFirestoreQuery* WhereLessThanFieldPath(const FFirestoreFieldPath& Field, const FFirestoreFieldValue& Value);

	/**
	 * @brief Creates and returns a new Query with the additional filter that
	 * documents must contain the specified field and the value should be less
	 * than or equal to the specified value.
	 *
	 * @param[in] field The name of the field to compare.
	 * @param[in] value The value for comparison.
	 *
	 * @return The created Query.
	 */
	UFUNCTION(BlueprintCallable, Category = "Firebase|Firestore|Query")
	UFirestoreQuery* WhereLessThanOrEqualTo(const FString& Field,
		const FFirestoreFieldValue& Value);

	/**
	 * @brief Creates and returns a new Query with the additional filter that
	 * documents must contain the specified field and the value should be less
	 * than or equal to the specified value.
	 *
	 * @param[in] field The path of the field to compare.
	 * @param[in] value The value for comparison.
	 *
	 * @return The created Query.
	 */
	UFUNCTION(BlueprintCallable, Category = "Firebase|Firestore|Query")
	UFirestoreQuery* WhereLessThanOrEqualToFieldPath(const FFirestoreFieldPath& Field,
		const FFirestoreFieldValue& Value);

	/**
	 * @brief Creates and returns a new Query with the additional filter that
	 * documents must contain the specified field and the value should be greater
	 * than the specified value.
	 *
	 * @param[in] field The name of the field to compare.
	 * @param[in] value The value for comparison.
	 *
	 * @return The created Query.
	 */
	UFUNCTION(BlueprintCallable, Category = "Firebase|Firestore|Query")
	UFirestoreQuery* WhereGreaterThan(const FString& Field,
		const FFirestoreFieldValue& Value);

	/**
	 * @brief Creates and returns a new Query with the additional filter that
	 * documents must contain the specified field and the value should be greater
	 * than the specified value.
	 *
	 * @param[in] field The path of the field to compare.
	 * @param[in] value The value for comparison.
	 *
	 * @return The created Query.
	 */
	UFUNCTION(BlueprintCallable, Category = "Firebase|Firestore|Query")
	UFirestoreQuery* WhereGreaterThanFieldPath(const FFirestoreFieldPath& Field,
		const FFirestoreFieldValue& Value);

	/**
	 * @brief Creates and returns a new Query with the additional filter that
	 * documents must contain the specified field and the value should be greater
	 * than or equal to the specified value.
	 *
	 * @param[in] field The name of the field to compare.
	 * @param[in] value The value for comparison.
	 *
	 * @return The created Query.
	 */
	UFUNCTION(BlueprintCallable, Category = "Firebase|Firestore|Query")
	UFirestoreQuery* WhereGreaterThanOrEqualTo(const FString& Field,
		const FFirestoreFieldValue& Value);

	/**
	 * @brief Creates and returns a new Query with the additional filter that
	 * documents must contain the specified field and the value should be greater
	 * than or equal to the specified value.
	 *
	 * @param[in] field The path of the field to compare.
	 * @param[in] value The value for comparison.
	 *
	 * @return The created Query.
	 */
	UFUNCTION(BlueprintCallable, Category = "Firebase|Firestore|Query")
	UFirestoreQuery* WhereGreaterThanOrEqualToFielPath(const FFirestoreFieldPath& Field,
		const FFirestoreFieldValue& Value);

	/**
	 * @brief Creates and returns a new Query with the additional filter that
	 * documents must contain the specified field, the value must be an array, and
	 * that the array must contain the provided value.
	 *
	 * A Query can have only one `WhereArrayContains()` filter and it cannot be
	 * combined with `WhereArrayContainsAny()` or `WhereIn()`.
	 *
	 * @param[in] field The name of the field containing an array to search.
	 * @param[in] value The value that must be contained in the array.
	 *
	 * @return The created Query.
	 */
	UFUNCTION(BlueprintCallable, Category = "Firebase|Firestore|Query")
	UFirestoreQuery* WhereArrayContains(const FString& Field,
		const FFirestoreFieldValue& Value);

	/**
	 * @brief Creates and returns a new Query with the additional filter that
	 * documents must contain the specified field, the value must be an array, and
	 * that the array must contain the provided value.
	 *
	 * A Query can have only one `WhereArrayContains()` filter and it cannot be
	 * combined with `WhereArrayContainsAny()` or `WhereIn()`.
	 *
	 * @param[in] field The path of the field containing an array to search.
	 * @param[in] value The value that must be contained in the array.
	 *
	 * @return The created Query.
	 */
	UFUNCTION(BlueprintCallable, Category = "Firebase|Firestore|Query")
	UFirestoreQuery* WhereArrayContainsFieldPath(const FFirestoreFieldPath& Field,
		const FFirestoreFieldValue& Value);

	/**
	 * @brief Creates and returns a new Query with the additional filter that
	 * documents must contain the specified field, the value must be an array, and
	 * that the array must contain at least one value from the provided list.
	 *
	 * A Query can have only one `WhereArrayContainsAny()` filter and it cannot be
	 * combined with `WhereArrayContains()` or `WhereIn()`.
	 *
	 * @param[in] field The name of the field containing an array to search.
	 * @param[in] values The list that contains the values to match.
	 *
	 * @return The created Query.
	 */
	UFUNCTION(BlueprintCallable, Category = "Firebase|Firestore|Query")
	UFirestoreQuery* WhereArrayContainsAny(const FString& Field,
		const TArray<FFirestoreFieldValue>& Values);

	/**
	 * @brief Creates and returns a new Query with the additional filter that
	 * documents must contain the specified field, the value must be an array, and
	 * that the array must contain at least one value from the provided list.
	 *
	 * A Query can have only one `WhereArrayContainsAny()` filter and it cannot be
	 * combined with` WhereArrayContains()` or `WhereIn()`.
	 *
	 * @param[in] field The path of the field containing an array to search.
	 * @param[in] values The list that contains the values to match.
	 *
	 * @return The created Query.
	 */
	UFUNCTION(BlueprintCallable, Category = "Firebase|Firestore|Query")
	UFirestoreQuery* WhereArrayContainsAnyFielPath(const FFirestoreFieldPath& Field,
		const TArray<FFirestoreFieldValue>& Values);

	/**
	 * @brief Creates and returns a new Query with the additional filter that
	 * documents must contain the specified field and the value must equal one of
	 * the values from the provided list.
	 *
	 * A Query can have only one `WhereIn()` filter and it cannot be
	 * combined with `WhereArrayContainsAny()`.
	 *
	 * @param[in] field The name of the field containing an array to search.
	 * @param[in] values The list that contains the values to match.
	 *
	 * @return The created Query.
	 */
	UFUNCTION(BlueprintCallable, Category = "Firebase|Firestore|Query")
	UFirestoreQuery* WhereIn(const FString& Field,
		const TArray<FFirestoreFieldValue>& Values);

	/**
	 * @brief Creates and returns a new Query with the additional filter that
	 * documents must contain the specified field and the value must equal one of
	 * the values from the provided list.
	 *
	 * A Query can have only one `WhereIn()` filter and it cannot be
	 * combined with `WhereArrayContainsAny()`.
	 *
	 * @param[in] field The path of the field containing an array to search.
	 * @param[in] values The list that contains the values to match.
	 *
	 * @return The created Query.
	 */
	UFUNCTION(BlueprintCallable, Category = "Firebase|Firestore|Query")
	UFirestoreQuery* WhereInFieldPath(const FFirestoreFieldPath& Field,
		const TArray<FFirestoreFieldValue>& Values);

	/**
	 * @brief Creates and returns a new Query that's additionally sorted by the
	 * specified field.
	 *
	 * @param[in] field The field to sort by.
	 * @param[in] direction The direction to sort (optional). If not specified,
	 * order will be ascending.
	 *
	 * @return The created Query.
	 */
	UFUNCTION(BlueprintCallable, Category = "Firebase|Firestore|Query")
	UFirestoreQuery* OrderBy(const FString& Field,
		EFirestoreQueryDirection Direction = EFirestoreQueryDirection::Ascending);

	/**
	 * @brief Creates and returns a new Query that's additionally sorted by the
	 * specified field.
	 *
	 * @param[in] field The field to sort by.
	 * @param[in] direction The direction to sort (optional). If not specified,
	 * order will be ascending.
	 *
	 * @return The created Query.
	 */
	UFUNCTION(BlueprintCallable, Category = "Firebase|Firestore|Query")
	UFirestoreQuery* OrderByFieldPath(const FFirestoreFieldPath& Field,
		EFirestoreQueryDirection Direction = EFirestoreQueryDirection::Ascending);

	/**
	 * @brief Creates and returns a new Query that only returns the first matching
	 * documents up to the specified number.
	 *
	 * @param[in] limit A non-negative integer to specify the maximum number of
	 * items to return.
	 *
	 * @return The created Query.
	 */
	UFUNCTION(BlueprintCallable, Category = "Firebase|Firestore|Query")
	UFirestoreQuery* Limit(int32 Limit);

	/**
	 * @brief Creates and returns a new Query that only returns the last matching
	 * documents up to the specified number.
	 *
	 * @param[in] limit A non-negative integer to specify the maximum number of
	 * items to return.
	 *
	 * @return The created Query.
	 */
	UFUNCTION(BlueprintCallable, Category = "Firebase|Firestore|Query")
	UFirestoreQuery* LimitToLast(int32 Limit);

	/**
	 * @brief Creates and returns a new Query that starts at the provided document
	 * (inclusive). The starting position is relative to the order of the query.
	 * The document must contain all of the fields provided in the order by of
	 * this query.
	 *
	 * @param[in] snapshot The snapshot of the document to start at.
	 *
	 * @return The created Query.
	 */
	UFUNCTION(BlueprintCallable, Category = "Firebase|Firestore|Query")
	UFirestoreQuery* StartAt(const FFirestoreDocumentSnapshot& Snapshot);

	/**
	 * @brief Creates and returns a new Query that starts at the provided fields
	 * relative to the order of the query. The order of the field values must
	 * match the order of the order by clauses of the query.
	 *
	 * @param[in] values The field values to start this query at, in order of the
	 * query's order by.
	 *
	 * @return The created Query.
	 */
	UFUNCTION(BlueprintCallable, Category = "Firebase|Firestore|Query")
	UFirestoreQuery* StartAtFieldValue(const TArray<FFirestoreFieldValue>& Values);

	/**
	 * @brief Creates and returns a new Query that starts after the provided
	 * document (inclusive). The starting position is relative to the order of the
	 * query. The document must contain all of the fields provided in the order by
	 * of this query.
	 *
	 * @param[in] snapshot The snapshot of the document to start after.
	 *
	 * @return The created Query.
	 */
	UFUNCTION(BlueprintCallable, Category = "Firebase|Firestore|Query")
	UFirestoreQuery* StartAfter(const FFirestoreDocumentSnapshot& Snapshot);

	/**
	 * @brief Creates and returns a new Query that starts after the provided
	 * fields relative to the order of the query. The order of the field values
	 * must match the order of the order by clauses of the query.
	 *
	 * @param[in] values The field values to start this query after, in order of
	 * the query's order by.
	 *
	 * @return The created Query.
	 */
	UFUNCTION(BlueprintCallable, Category = "Firebase|Firestore|Query")
	UFirestoreQuery* StartAfterFieldValue(const TArray<FFirestoreFieldValue>& Values);

	/**
	 * @brief Creates and returns a new Query that ends before the provided
	 * document (inclusive). The end position is relative to the order of the
	 * query. The document must contain all of the fields provided in the order by
	 * of this query.
	 *
	 * @param[in] snapshot The snapshot of the document to end before.
	 *
	 * @return The created Query.
	 */
	UFUNCTION(BlueprintCallable, Category = "Firebase|Firestore|Query")
	UFirestoreQuery* EndBefore(const FFirestoreDocumentSnapshot& Snapshot);

	/**
	 * @brief Creates and returns a new Query that ends before the provided fields
	 * relative to the order of the query. The order of the field values must
	 * match the order of the order by clauses of the query.
	 *
	 * @param[in] values The field values to end this query before, in order of
	 * the query's order by.
	 *
	 * @return The created Query.
	 */
	UFUNCTION(BlueprintCallable, Category = "Firebase|Firestore|Query")
	UFirestoreQuery* EndBeforeFieldValue(const TArray<FFirestoreFieldValue>& Values);

	/**
	 * @brief Creates and returns a new Query that ends at the provided document
	 * (inclusive). The end position is relative to the order of the query. The
	 * document must contain all of the fields provided in the order by of this
	 * query.
	 *
	 * @param[in] snapshot The snapshot of the document to end at.
	 *
	 * @return The created Query.
	 */
	UFUNCTION(BlueprintCallable, Category = "Firebase|Firestore|Query")
	UFirestoreQuery* EndAt(const FFirestoreDocumentSnapshot& Snapshot);

	/**
	 * @brief Creates and returns a new Query that ends at the provided fields
	 * relative to the order of the query. The order of the field values must
	 * match the order of the order by clauses of the query.
	 *
	 * @param[in] values The field values to end this query at, in order of the
	 * query's order by.
	 *
	 * @return The created Query.
	 */
	UFUNCTION(BlueprintCallable, Category = "Firebase|Firestore|Query")
	UFirestoreQuery* EndAtValues(const TArray<FFirestoreFieldValue>& Values);

	/**
	 * @brief Executes the query and returns the results as a QuerySnapshot.
	 *
	 * By default, Get() attempts to provide up-to-date data when possible by
	 * waiting for data from the server, but it may return cached data or fail if
	 * you are offline and the server cannot be reached. This behavior can be
	 * altered via the Source parameter.
	 *
	 * @param Source A value to configure the get behavior (optional).
	 */
	void Get(const EFirestoreSource Source, FFirestoreQueryCallback Callback) const;

	void AddSnapshotListener(FQuerySnapshotListener Listener);

protected:

#if WITH_FIREBASE_FIRESTORE 
	TUniquePtr<firebase::firestore::Query> Reference;
#endif 
};


