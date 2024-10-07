#pragma once
#include "CoreMinimal.h"
#include "SimpleCounterSaveData.generated.h"

USTRUCT(BlueprintType)
struct FSimpleCounterSaveData {
    GENERATED_BODY()
public:
    UPROPERTY()
    FName Name;
    
    UPROPERTY()
    FName AchievementId;
    
    UPROPERTY()
    bool IsUnlocked;
    
    UCA_API FSimpleCounterSaveData();
};

