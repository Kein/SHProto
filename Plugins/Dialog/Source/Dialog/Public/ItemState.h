#pragma once
#include "CoreMinimal.h"
#include "ItemState.generated.h"

USTRUCT()
struct DIALOG_API FItemState {
    GENERATED_BODY()
public:
    UPROPERTY(SaveGame)
    TMap<FName, int32> _Fields;
    
    FItemState();
};

