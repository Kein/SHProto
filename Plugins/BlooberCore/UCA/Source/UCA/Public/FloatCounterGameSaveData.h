#pragma once
#include "CoreMinimal.h"
#include "FloatCounterGameSaveData.generated.h"

USTRUCT()
struct FFloatCounterGameSaveData {
    GENERATED_BODY()
public:
    UPROPERTY()
    FName Name;
    
    UPROPERTY()
    float Value;
    
    UCA_API FFloatCounterGameSaveData();
};

