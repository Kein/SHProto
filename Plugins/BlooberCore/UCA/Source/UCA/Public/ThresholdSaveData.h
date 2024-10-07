#pragma once
#include "CoreMinimal.h"
#include "ThresholdSaveData.generated.h"

USTRUCT()
struct FThresholdSaveData {
    GENERATED_BODY()
public:
    UPROPERTY()
    FName AchievementId;
    
    UPROPERTY()
    bool IsUnlocked;
    
    UCA_API FThresholdSaveData();
};

