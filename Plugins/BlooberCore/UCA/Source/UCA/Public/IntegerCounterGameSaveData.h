#pragma once
#include "CoreMinimal.h"
#include "IntegerCounterGameSaveData.generated.h"

USTRUCT()
struct FIntegerCounterGameSaveData {
    GENERATED_BODY()
public:
    UPROPERTY()
    FName Name;
    
    UPROPERTY()
    uint32 Value;
    
    UCA_API FIntegerCounterGameSaveData();
};

