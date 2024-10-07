#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ThresholdSaveData.h"
#include "CollectionCounterSaveData.generated.h"

USTRUCT(BlueprintType)
struct FCollectionCounterSaveData {
    GENERATED_BODY()
public:
    UPROPERTY()
    FName Name;
    
    UPROPERTY()
    TArray<FThresholdSaveData> Thresholds;
    
    UPROPERTY()
    TArray<FGuid> Value;
    
    UCA_API FCollectionCounterSaveData();
};

