#pragma once
#include "CoreMinimal.h"
#include "AchievementCounterThresholdConfig.h"
#include "EAchievementCounterType.h"
#include "AchievementCounterConfig.generated.h"

USTRUCT(BlueprintType)
struct FAchievementCounterConfig {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    FName Name;
    
    UPROPERTY(VisibleAnywhere)
    EAchievementCounterType Type;
    
    UPROPERTY(EditFixedSize, VisibleAnywhere)
    TArray<FAchievementCounterThresholdConfig> Thresholds;
    
    UCA_API FAchievementCounterConfig();
};

