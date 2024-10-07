#pragma once
#include "CoreMinimal.h"
#include "CollectionCounterGameSaveData.h"
#include "FloatCounterGameSaveData.h"
#include "IntegerCounterGameSaveData.h"
#include "AchievementsGameSaveData.generated.h"

USTRUCT()
struct FAchievementsGameSaveData {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FIntegerCounterGameSaveData> IntegerCounters;
    
    UPROPERTY()
    TArray<FFloatCounterGameSaveData> FloatCounters;
    
    UPROPERTY()
    TArray<FCollectionCounterGameSaveData> CollectionCounters;
    
    UCA_API FAchievementsGameSaveData();
};

