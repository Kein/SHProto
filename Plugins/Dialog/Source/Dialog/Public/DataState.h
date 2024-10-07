#pragma once
#include "CoreMinimal.h"
#include "ItemState.h"
#include "DataState.generated.h"

USTRUCT(BlueprintType)
struct DIALOG_API FDataState {
    GENERATED_BODY()
public:
    UPROPERTY(SaveGame)
    TArray<uint8> _Blob;
    
    UPROPERTY(SaveGame)
    TMap<int32, FItemState> _ItemStates;
    
    FDataState();
};

