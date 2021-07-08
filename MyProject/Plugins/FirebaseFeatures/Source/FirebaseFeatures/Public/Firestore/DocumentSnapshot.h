// Copyright Pandores Marketplace 2021. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"

#if !defined(WITH_FIREBASE_FIRESTORE)
#	define WITH_FIREBASE_FIRESTORE 0
#endif 

#if WITH_FIREBASE_FIRESTORE
    THIRD_PARTY_INCLUDES_START
#       include "firebase/firestore/document_snapshot.h"
    THIRD_PARTY_INCLUDES_END
#endif // WITH_FIREBASE_FIRESTORE

#include "Firestore/FieldValue.h"
#include "Firestore/FieldPath.h"
#include "DocumentSnapshot.generated.h"

class UFirestoreDocumentReference;

UENUM(BlueprintType)
enum class EFirestoreServerTimestampBehavior : uint8
{
    /**
     * Return Null for server timestamps that have not yet been set to their
     * final value.
     * Use Default for this value.
     */
    // None = 0,

    /**
     * Return local estimates for server timestamps that have not yet been set
     * to their final value. This estimate will likely differ from the final
     * value and may cause these pending values to change once the server result
     * becomes available.
     */
    Estimate = 1,

     /**
      * Return the previous value for server timestamps that have not yet been
      * set to their final value.
      */
    Previous,

      /** The default behavior, which is equivalent to specifying None. */
    Default = 0,
};

USTRUCT(BlueprintType)
struct FIREBASEFEATURES_API FFirestoreSnapshotMetadata
{
    GENERATED_BODY()
public:
    /**
     * Whether the snapshot contains the result of local writes.
     * Is true if the snapshot contains the result of local writes (for
     * example, Set() or Update() calls) that have not yet been committed to the
     * backend. 
     */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Firebase|Firestore|DocumentSnapshot")
    bool bHasPendingWrites;

    /**
     * Whether the snapshot was created from cached data.
     * Is true if the snapshot was created from cached data rather than
     * guaranteed up-to-date server data. 
     */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Firebase|Firestore|DocumentSnapshot")
    bool bIsFromCache;
};

USTRUCT(BlueprintType)
struct FIREBASEFEATURES_API FFirestoreDocumentSnapshot
{
	GENERATED_BODY()
private:
    friend class UFirestoreDocumentReference;
    friend class UFirestoreQuery;
    friend struct FFirestoreTransaction;

#if WITH_FIREBASE_FIRESTORE
    FFirestoreDocumentSnapshot(const firebase::firestore::DocumentSnapshot& InSnapshot);
#endif

public:
    FFirestoreDocumentSnapshot() {};
    FFirestoreDocumentSnapshot(FFirestoreDocumentSnapshot&&);
    FFirestoreDocumentSnapshot(const FFirestoreDocumentSnapshot&);

    FFirestoreDocumentSnapshot& operator=(const FFirestoreDocumentSnapshot&);
    FFirestoreDocumentSnapshot& operator=(FFirestoreDocumentSnapshot&&);

    FString GetId() const;

    UFirestoreDocumentReference* GetReference() const;

    FFirestoreSnapshotMetadata GetMetadata() const;

    bool Exists() const;

    TMap<FString, FFirestoreFieldValue> GetData(
        EFirestoreServerTimestampBehavior ServerTimestampBehavior = EFirestoreServerTimestampBehavior::Default) const;

    FFirestoreFieldValue Get(
        const FString& Field,
        EFirestoreServerTimestampBehavior ServerTimestampBehavior = EFirestoreServerTimestampBehavior::Default) const;

    FFirestoreFieldValue Get(
        const FFirestoreFieldPath& Field,
        EFirestoreServerTimestampBehavior ServerTimestampBehavior = EFirestoreServerTimestampBehavior::Default) const;

    FString ToString() const;


 #if WITH_FIREBASE_FIRESTORE
    FORCEINLINE operator firebase::firestore::DocumentSnapshot& ()
    {
        return Snapshot;
    }

    FORCEINLINE operator const firebase::firestore::DocumentSnapshot& () const
    {
        return Snapshot;
    }

private:
    firebase::firestore::DocumentSnapshot Snapshot;
#endif // WITH_FIREBASE_FIRESTORE

};
