#pragma once
#include "CoreMinimal.h"
#include "AchievementCounterThresholdConfig.generated.h"

USTRUCT()
struct FAchievementCounterThresholdConfig {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    FName AchievementId;
    
    UPROPERTY(VisibleAnywhere)
    uint32 Value;
    
    UPROPERTY(VisibleAnywhere)
    bool IsSinglePlaythrough;
    
    UCA_API FAchievementCounterThresholdConfig();
};

