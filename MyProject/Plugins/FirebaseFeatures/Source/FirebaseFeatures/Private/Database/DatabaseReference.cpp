// Copyright Pandores Marketplace 2021. All Rights Reserved.

#include "Database/DatabaseReference.h"

THIRD_PARTY_INCLUDES_START
#	include "firebase/database.h"
#	include "firebase/variant.h"
THIRD_PARTY_INCLUDES_END

#include "FirebaseFeatures.h"

#include "Async/Async.h"

/**
 *	Not a function, we don't want to copy the ErrorMessage across calls...
 **/
#define CreateCallbackForFutureVoid(ErrorMessage)														\
	[Callback](const firebase::Future<void>& Future) -> void											\
	{																									\
		const EFirebaseDatabaseError Error = (EFirebaseDatabaseError)Future.error();					\
		if (Error != EFirebaseDatabaseError::None)														\
		{																								\
			UE_LOG(LogFirebaseDatabase, Error, TEXT(ErrorMessage) TEXT(" Code: %d. Message: %s"),		\
				Future.error(), UTF8_TO_TCHAR(Future.error_message()));									\
		}																								\
		AsyncTask(ENamedThreads::GameThread, [Error, Callback]() -> void								\
		{																								\
			Callback.ExecuteIfBound(Error);																\
		});																								\
	}																							

	
class FChildListener final : public firebase::database::ChildListener
{
 public:
	 FChildListener(UDatabaseQuery* const InQuery)
		 : Query(InQuery)
	 {
	 }
	virtual ~FChildListener()
	{

	}
	virtual void OnChildAdded(const firebase::database::DataSnapshot& snapshot, const char* previous_sibling_key)
	{
		UE_LOG(LogFirebaseDatabase, Log, TEXT("Child Added Event fired."));

		FString Key = previous_sibling_key ? UTF8_TO_TCHAR(previous_sibling_key) : TEXT("");

		AsyncTask(ENamedThreads::GameThread, [snapshot, Key = MoveTemp(Key), LocalQuery = this->Query]() -> void
		{
			if (LocalQuery.IsValid())
			{
				UDataSnapshot* const Snap = NewObject<UDataSnapshot>();
				Snap->Snapshot = snapshot;

				LocalQuery->OnChildAdded.Broadcast(Snap, Key);
			}
		});
	}
	virtual void OnChildChanged(const firebase::database::DataSnapshot& snapshot, const char* previous_sibling_key)
	{
		UE_LOG(LogFirebaseDatabase, Log, TEXT("Child Changed Event fired."));

		FString Key = UTF8_TO_TCHAR(previous_sibling_key);
		TWeakObjectPtr<UDatabaseQuery> LocalQuery = Query;

		AsyncTask(ENamedThreads::GameThread, [snapshot, Key = MoveTemp(Key), LocalQuery]() -> void
		{
			if (LocalQuery.IsValid())
			{
				UDataSnapshot* const Snap = NewObject<UDataSnapshot>();
				Snap->Snapshot = snapshot;

				LocalQuery->OnChildChanged.Broadcast(Snap, Key);
			}
		});
	}
	virtual void OnChildMoved(const firebase::database::DataSnapshot& snapshot, const char* previous_sibling_key)
	{
		UE_LOG(LogFirebaseDatabase, Log, TEXT("Child Moved Event fired."));

		FString Key = previous_sibling_key ? UTF8_TO_TCHAR(previous_sibling_key) : TEXT("");

		AsyncTask(ENamedThreads::GameThread, [snapshot, Key = MoveTemp(Key), LocalQuery = Query]() -> void
		{
			if (LocalQuery.IsValid())
			{
				UDataSnapshot* const Snap = NewObject<UDataSnapshot>();
				Snap->Snapshot = snapshot;

				LocalQuery->OnChildMoved.Broadcast(Snap, Key);
			}
		});
	}
	virtual void OnChildRemoved(const firebase::database::DataSnapshot& snapshot)
	{
		UE_LOG(LogFirebaseDatabase, Log, TEXT("Child Removed Event fired."));

		AsyncTask(ENamedThreads::GameThread, [snapshot, LocalQuery = Query]() -> void
		{
			if (LocalQuery.IsValid())
			{
				UDataSnapshot* const Snap = NewObject<UDataSnapshot>();
				Snap->Snapshot = snapshot;

				LocalQuery->OnChildRemoved.Broadcast(Snap, TEXT(""));
			}
		});
	}
	virtual void OnCancelled(const firebase::database::Error& error, const char* error_message)
	{
		FString Message = UTF8_TO_TCHAR(error_message);
	
		UE_LOG(LogFirebaseDatabase, Log, TEXT("Child Event Cancelled fired. Reason: %s"), *Message);

		const EFirebaseDatabaseError Error = (EFirebaseDatabaseError)error;

		AsyncTask(ENamedThreads::GameThread, [Error, Message = MoveTemp(Message), LocalQuery = Query]() -> void
		{
			if (LocalQuery.IsValid())
			{
				LocalQuery->OnCancelled.Broadcast(Error, Message);
			}
		});
	}
private:
	TWeakObjectPtr<UDatabaseQuery> Query;
};


class FValueListener final : public firebase::database::ValueListener
{
public:
	FValueListener(UDatabaseQuery* const InQuery)
		: Query(InQuery)
	{
	}
	virtual ~FValueListener()
	{

	}
	virtual void OnValueChanged(const firebase::database::DataSnapshot& snapshot)
	{
		UE_LOG(LogFirebaseDatabase, Log, TEXT("A value with a listener has changed."));

		TWeakObjectPtr<UDatabaseQuery> LocalQuery = Query;

		AsyncTask(ENamedThreads::GameThread, [snapshot, LocalQuery]() -> void
		{
			if (LocalQuery.IsValid())
			{
				UDataSnapshot* const Snap = NewObject<UDataSnapshot>();
				Snap->Snapshot = snapshot;
				LocalQuery->OnValueChanged.Broadcast(Snap);
			}
		});
	}
	virtual void OnCancelled(const firebase::database::Error& error, const char* error_message)
	{
		FString Message = UTF8_TO_TCHAR(error_message);

		UE_LOG(LogFirebaseDatabase, Warning, TEXT("Value Listener has been cancelled. Reason: %s"), *Message);
		
		const EFirebaseDatabaseError Error = (EFirebaseDatabaseError)error;

		TWeakObjectPtr<UDatabaseQuery> LocalQuery = Query;

		AsyncTask(ENamedThreads::GameThread, [Error, Message = MoveTemp(Message), LocalQuery]() -> void
		{
			if (LocalQuery.IsValid())
			{
				LocalQuery->OnCancelled.Broadcast(Error, Message);
			}
		});
	}
private:
	TWeakObjectPtr<UDatabaseQuery> Query;
};


FMutableData::FMutableData(const firebase::database::MutableData& InMutable)
	: Mutable(MakeUnique<firebase::database::MutableData>(InMutable))
{
}

FMutableData::FMutableData() : Mutable()
{
}

FMutableData::FMutableData(const FMutableData& Other)
{
	*this = Other;
}

FMutableData::~FMutableData()
{
}

FMutableData& FMutableData::operator=(const FMutableData& Other)
{
	Mutable = nullptr;
	if (Other.Mutable.IsValid())
	{
		Mutable.Reset(new firebase::database::MutableData(*Other.Mutable));
	}
	return *this;
}

FMutableData FMutableData::GetChild(const FString& Path)
{
	return Mutable.IsValid() ? Mutable->Child(TCHAR_TO_UTF8(*Path)) : FMutableData();
}

TArray<FMutableData> FMutableData::GetChildren()
{
	TArray<FMutableData> Mutables;

	if (Mutable)
	{
		const auto& Children = Mutable->children();

		for (const auto& Child : Children)
		{
			Mutables.Add(Child);
		}
	}

	return Mutables;
}

int64 FMutableData::GetChildrenCount()
{
	return Mutable ? Mutable->children_count() : 0;
}

FString FMutableData::GetKey() const
{
	return Mutable ? UTF8_TO_TCHAR(Mutable->key()) : TEXT("");
}

FFirebaseVariant FMutableData::GetValue() const
{
	if (!Mutable)
	{
		UE_LOG(LogFirebaseDatabase, Warning, TEXT("Called GetValue() on an invalide mutable data."));
		return FFirebaseVariant();
	}

	return Mutable->value();
}

FFirebaseVariant FMutableData::GetPriority()
{
	return Mutable ? FFirebaseVariant(Mutable->priority()) : FFirebaseVariant();
}

bool FMutableData::HasChild(const FString& Path) const
{
	return Mutable ? Mutable->HasChild(TCHAR_TO_UTF8(*Path)) : false;
}

void FMutableData::SetValue(const FFirebaseVariant& Value)
{
	if (Mutable)
	{
		Mutable->set_value(Value);
	}
}

void FMutableData::SetPriority(const FFirebaseVariant& Priority)
{
	if (Mutable)
	{
		Mutable->set_priority(Priority);
	}
}

void UDatabaseQuery::SetQuery(const firebase::database::Query& InQuery)
{
	GetQuery() = InQuery;
}

bool UDataSnapshot::Exists() const
{
	return Snapshot.exists();
}

UDataSnapshot* UDataSnapshot::GetChild(const FString& Path) const
{
	UDataSnapshot* const Snap = NewObject<UDataSnapshot>();
	Snap->Snapshot = Snapshot.Child(TCHAR_TO_UTF8(*Path));
	return Snap;
}

TArray<UDataSnapshot*> UDataSnapshot::GetChildren() const
{
	const std::vector<firebase::database::DataSnapshot> Snapshots = Snapshot.children();
	
	TArray<UDataSnapshot*> Snaps;

	for (const auto& RawSnap : Snapshots)
	{
		UDataSnapshot* const Snap = NewObject<UDataSnapshot>();
		
		Snap->Snapshot = RawSnap;
		
		Snaps.Add(Snap);
	}

	return Snaps;
}

bool UDataSnapshot::HasChildren() const
{
	return Snapshot.has_children();
}

int64 UDataSnapshot::ChildrenCount() const
{
	return (int64)Snapshot.children_count();
}

FString UDataSnapshot::GetKey() const
{
	return UTF8_TO_TCHAR(Snapshot.key());
}

FFirebaseVariant UDataSnapshot::GetValue() const
{
	return Snapshot.value();
}

FFirebaseVariant UDataSnapshot::GetPriority() const
{
	return Snapshot.priority();
}

UDatabaseReference* UDataSnapshot::GetReference() const
{
	UDatabaseReference* const Ref = NewObject<UDatabaseReference>();
	Ref->Reference = Snapshot.GetReference();
	return Ref;
}

bool UDataSnapshot::HasChild(const FString& Path) const
{
	return Snapshot.HasChild(TCHAR_TO_UTF8(*Path));
}

bool UDataSnapshot::IsValid() const
{
	return Snapshot.is_valid();
}

/* static */ firebase::database::TransactionResult UDatabaseReference::DoTransactionWithContext(firebase::database::MutableData* data, void* context)
{
	FTransactionCallback* const Callback = (FTransactionCallback*)context;

	ETransactionResult Res = ETransactionResult::Success;
	if (Callback->IsBound())
	{
		FMutableData Data(*data);
		Res = Callback->Execute(Data);
	}

	delete Callback;

	return firebase::database::TransactionResult(Res);
}

UDatabase* UDatabaseReference::GetDatabase() const
{
	if (!Reference.database())
	{
		return nullptr;
	}

	UDatabase* const Database = NewObject<UDatabase>();
	Database->Url = UTF8_TO_TCHAR(Reference.database()->url());

	return Database;
}

FString UDatabaseReference::GetKey() const
{
	return UTF8_TO_TCHAR(Reference.key());
}

bool UDatabaseReference::IsRoot() const
{
	return Reference.is_root();
}

bool UDatabaseReference::IsValid() const
{
	return Reference.is_valid();
}

UDatabaseReference* UDatabaseReference::GetParent() const
{
	UDatabaseReference* const Ref = NewObject<UDatabaseReference>();

	Ref->Reference = Reference.GetParent();

	return Ref;
}

UDatabaseReference* UDatabaseReference::GetRoot() const
{
	UDatabaseReference* const Ref = NewObject<UDatabaseReference>();

	Ref->Reference = Reference.GetRoot();

	return Ref;
}

UDatabaseReference* UDatabaseReference::Child(const FString& Path) const
{
	UDatabaseReference* const Ref = NewObject<UDatabaseReference>();

	Ref->Reference = Reference.Child(TCHAR_TO_UTF8(*Path));

	return Ref;
}

UDatabaseReference* UDatabaseReference::PushChild() const
{
	UDatabaseReference* const Ref = NewObject<UDatabaseReference>();

	Ref->Reference = Reference.PushChild();

	return Ref;
}

#define CHECK_DATABASE_REFERENCE_VALIDITY()											\
	//if (!Query->is_valid())														\
	//{																				\
	//	UE_LOG(LogFirebaseDatabase, Error, TEXT("Database Reference is invalid."));	\
	//	Callback.ExecuteIfBound(EFirebaseDatabaseError::OperationFailed);			\
	//	return;																		\
	//}

void UDatabaseReference::RemoveValue(const FDatabaseCallback& Callback)
{
	CHECK_DATABASE_REFERENCE_VALIDITY();
	Reference.RemoveValue().OnCompletion(CreateCallbackForFutureVoid("Failed to remove value from Database Reference."));
}

void UDatabaseReference::RunTransaction(const bool bTriggerLocalEvents, const FTransactionCallback& TransactionFunction, const FSnapshotCallback& OnTransactionOver)
{
	Reference.RunTransaction
	(
		&UDatabaseReference::DoTransactionWithContext,
		new FTransactionCallback(TransactionFunction),
		bTriggerLocalEvents
	).OnCompletion([OnTransactionOver](const firebase::Future<firebase::database::DataSnapshot>& Future) -> void
	{
		firebase::database::DataSnapshot Snapshot;

		const EFirebaseDatabaseError Error = (EFirebaseDatabaseError)Future.error();
		if (Error != EFirebaseDatabaseError::None)
		{
			UE_LOG(LogFirebaseDatabase, Error, TEXT("Failed to run transaction on Database Reference. Code: %d. Message: %s"), Future.error(), UTF8_TO_TCHAR(Future.error_message()));
		}
		else
		{
			Snapshot = *Future.result();;
		}

		AsyncTask(ENamedThreads::GameThread, [OnTransactionOver, Error, Snapshot]() -> void
		{
			UDataSnapshot* Snap = nullptr;

			if (Snapshot.is_valid())
			{
				Snap = NewObject<UDataSnapshot>();
				Snap->Snapshot = Snapshot;
			}
			
			OnTransactionOver.ExecuteIfBound(Error, Snap);
		});		
	});
}

void UDatabaseReference::SetPriority(const FFirebaseVariant& Priority, const FDatabaseCallback& Callback)
{
	CHECK_DATABASE_REFERENCE_VALIDITY();
	Reference.SetPriority(Priority).OnCompletion(CreateCallbackForFutureVoid("Failed to set priority on Database Reference."));
}

void UDatabaseReference::SetValue(const FFirebaseVariant& Value, const FDatabaseCallback& Callback)
{
	CHECK_DATABASE_REFERENCE_VALIDITY();
	Reference.SetValue(Value).OnCompletion(CreateCallbackForFutureVoid("Failed to set value on Database Reference."));
}

void UDatabaseReference::SetValueAndPriority(const FFirebaseVariant& Value, const FFirebaseVariant& Priority, const FDatabaseCallback& Callback)
{
	CHECK_DATABASE_REFERENCE_VALIDITY();
	Reference.SetValueAndPriority(Value, Priority).OnCompletion(CreateCallbackForFutureVoid("Failed to set value and priority on Database Reference."));
}

void UDatabaseReference::UpdateChildren(const FFirebaseVariant& Values, const FDatabaseCallback& Callback)
{
	CHECK_DATABASE_REFERENCE_VALIDITY();
	Reference.UpdateChildren(Values).OnCompletion(CreateCallbackForFutureVoid("Failed to update children."));
}

#undef CHECK_DATABASE_REFERENCE_VALIDITYs

FString UDatabaseReference::GetUrl() const
{
	return UTF8_TO_TCHAR(Reference.url().c_str());
}

void UDatabaseReference::GoOffline()
{
	Reference.GoOffline();
}

void UDatabaseReference::GoOnline()
{
	Reference.GoOnline();
}

UDisconnectionHandler* UDatabaseReference::GetDisconnectionHandler()
{
	UDisconnectionHandler* const Handler = NewObject<UDisconnectionHandler>();
	Handler->Handler = Reference.OnDisconnect();
	return Handler;
}

UDatabaseReference::~UDatabaseReference()
{
}

UDisconnectionHandler::UDisconnectionHandler() 
	: Handler(nullptr) 
{
}

#define SafeHandler if (Handler) Handler

void UDisconnectionHandler::Cancel(const FDatabaseCallback& Callback)
{
	SafeHandler->Cancel().OnCompletion(CreateCallbackForFutureVoid("Failed to cancel Disconnection operations."));
}

void UDisconnectionHandler::RemoveValue(const FDatabaseCallback& Callback)
{
	SafeHandler->RemoveValue().OnCompletion(CreateCallbackForFutureVoid("Failed to remove value from disconnection handler."));
}

void UDisconnectionHandler::SetValue(const FFirebaseVariant& Value, const FDatabaseCallback& Callback)
{
	SafeHandler->SetValue(Value).OnCompletion(CreateCallbackForFutureVoid("Failed to set value from disconnection handler."));
}

void UDisconnectionHandler::SetValueAndPriority(const FFirebaseVariant& Value, const FFirebaseVariant& Priority, const FDatabaseCallback& Callback)
{
	SafeHandler->SetValueAndPriority(Value, Priority).OnCompletion(CreateCallbackForFutureVoid("Failed to set value and priority for disconnection handler"));
}

void UDisconnectionHandler::UpdateChildren(const FFirebaseVariant& values, const FDatabaseCallback& Callback)
{
	SafeHandler->UpdateChildren(values).OnCompletion(CreateCallbackForFutureVoid("Failed to update children for disconnection handler."));
}

UDatabaseQuery::UDatabaseQuery()
	: Query()
	, ValueListener(nullptr)
	, ChildListener(nullptr)
{
}

UDatabaseReference::UDatabaseReference()
	: Reference()
{
	ValueListener = nullptr;
	ChildListener = nullptr;
}

bool UDatabaseQuery::IsValid() const
{
	return GetQuery().is_valid();
}

void UDatabaseQuery::GetValue(const FSnapshotCallback& Callback) 
{
	GetQuery().GetValue().OnCompletion([Callback](const firebase::Future<firebase::database::DataSnapshot>& Future) -> void
	{
		const EFirebaseDatabaseError Error = (EFirebaseDatabaseError)Future.error();
		if (Error != EFirebaseDatabaseError::None)
		{
			UE_LOG(LogFirebaseDatabase, Error, TEXT("Failed to get value from Query.") TEXT(" Code: %d. Message: %s"),
				Future.error(), UTF8_TO_TCHAR(Future.error_message()));
		}

		firebase::database::DataSnapshot Snapshot;
		if (Future.result())
		{
			Snapshot = *Future.result();
		}

		if (Callback.IsBound())
		{
			AsyncTask(ENamedThreads::GameThread, [Error, Callback, Snapshot]() -> void
			{
				UDataSnapshot* Snap = nullptr;

				if (Snapshot.is_valid())
				{
					Snap = NewObject<UDataSnapshot>();
					Snap->Snapshot = Snapshot;
				}

				Callback.ExecuteIfBound(Error, Snap);
			});
		}
	});
}

UDatabaseQuery::~UDatabaseQuery()
{
	ClearListeners();
}

void UDatabaseQuery::SetupListeners()
{
	ClearListeners();

	ChildListener = new FChildListener(this);
	ValueListener = new FValueListener(this);

	GetQuery().AddChildListener(ChildListener);
	GetQuery().AddValueListener(ValueListener);
}

void UDatabaseQuery::ClearListeners()
{
	if (ChildListener)
	{
		GetQuery().RemoveChildListener(ChildListener);
		delete ChildListener;
		ChildListener = nullptr;
	}
	if (ValueListener)
	{
		GetQuery().RemoveValueListener(ValueListener);
		delete ValueListener;
		ValueListener = nullptr;
	}
}

UDatabaseReference* UDatabaseQuery::GetReference() const
{
	UDatabaseReference* const Ref = NewObject<UDatabaseReference>();
	Ref->Reference = GetQuery().GetReference();
	return Ref;
}

UDatabaseQuery* UDatabaseQuery::OrderByChild(const FString& Path)
{
	UDatabaseQuery* const Ref = NewObject<UDatabaseQuery>();
	Ref->GetQuery() = GetQuery().OrderByChild(TCHAR_TO_UTF8(*Path));
	return Ref;
}

UDatabaseQuery* UDatabaseQuery::OrderByKey()
{
	UDatabaseQuery* const Ref = NewObject<UDatabaseQuery>();
	Ref->Query = GetQuery().OrderByKey();
	return Ref;
}

UDatabaseQuery* UDatabaseQuery::OrderByPriority()
{
	UDatabaseQuery* const Ref = NewObject<UDatabaseQuery>();
	Ref->Query = GetQuery().OrderByPriority();
	return Ref;
}

UDatabaseQuery* UDatabaseQuery::OrderByValue()
{
	UDatabaseQuery* const Ref = NewObject<UDatabaseQuery>();
	Ref->Query = GetQuery().OrderByValue();
	return Ref;
}

UDatabaseQuery* UDatabaseQuery::StartAt(const FFirebaseVariant& OrderValue)
{
	UDatabaseQuery* const Ref = NewObject<UDatabaseQuery>();
	Ref->Query = GetQuery().StartAt(OrderValue);
	return Ref;
}

UDatabaseQuery* UDatabaseQuery::StartAtKey(FFirebaseVariant OrderValue, const FString& ChildKey)
{
	UDatabaseQuery* const Ref = NewObject<UDatabaseQuery>();
	Ref->Query = GetQuery().StartAt(OrderValue, TCHAR_TO_UTF8(*ChildKey));
	return Ref;
}

UDatabaseQuery* UDatabaseQuery::EndAt(const FFirebaseVariant& OrderValue)
{
	UDatabaseQuery* const Ref = NewObject<UDatabaseQuery>();
	Ref->Query = GetQuery().EndAt(OrderValue);
	return Ref;
}

UDatabaseQuery* UDatabaseQuery::EndAtKey(const FFirebaseVariant& order_value, const FString& ChildKey)
{
	UDatabaseQuery* const Ref = NewObject<UDatabaseQuery>();
	Ref->Query = GetQuery().EndAt(order_value, TCHAR_TO_UTF8(*ChildKey));
	return Ref;
}

UDatabaseQuery* UDatabaseQuery::EqualTo(const FFirebaseVariant& OrderValue)
{
	UDatabaseQuery* const Ref = NewObject<UDatabaseQuery>();
	Ref->SetQuery(GetQuery().EqualTo(OrderValue));
	return Ref;
}

UDatabaseQuery* UDatabaseQuery::EqualToKey(const FFirebaseVariant& OrderValue, const FString& ChildKey)
{
	UDatabaseQuery* const Ref = NewObject<UDatabaseQuery>();
	Ref->SetQuery(GetQuery().EqualTo(OrderValue, TCHAR_TO_UTF8(*ChildKey)));
	return Ref;
}

UDatabaseQuery* UDatabaseQuery::LimitToFirst(const int64 Limit)
{
	UDatabaseQuery* const Ref = NewObject<UDatabaseQuery>();
	Ref->SetQuery(GetQuery().LimitToFirst(Limit));
	return Ref;
}

UDatabaseQuery* UDatabaseQuery::LimitToLast(const int64 Limit)
{
	UDatabaseQuery* const Ref = NewObject<UDatabaseQuery>();
	Ref->SetQuery(GetQuery().LimitToLast(Limit));
	return Ref;
}

void UDatabaseQuery::SetKeepSynchronized(const bool bKeepSync)
{
	GetQuery().SetKeepSynchronized(bKeepSync);
}

#undef SafeHandler

#undef CreateCallbackForFutureVoid

