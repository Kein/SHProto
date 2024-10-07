#pragma once
#include "CoreMinimal.h"
#include "ThresholdSaveData.h"
#include "FloatCounterSaveData.generated.h"

USTRUCT(BlueprintType)
struct FFloatCounterSaveData {
    GENERATED_BODY()
public:
    UPROPERTY()
    FName Name;
    
    UPROPERTY()
    TArray<FThresholdSaveData> Thresholds;
    
    UPROPERTY()
    float Value;
    
    UCA_API FFloatCounterSaveData();
};

