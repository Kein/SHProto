#pragma once
#include "CoreMinimal.h"
#include "ThresholdSaveData.h"
#include "IntegerCounterSaveData.generated.h"

USTRUCT(BlueprintType)
struct FIntegerCounterSaveData {
    GENERATED_BODY()
public:
    UPROPERTY()
    FName Name;
    
    UPROPERTY()
    TArray<FThresholdSaveData> Thresholds;
    
    UPROPERTY()
    uint32 Value;
    
    UCA_API FIntegerCounterSaveData();
};

