#pragma once
#include "CoreMinimal.h"
#include "SHAdaptiveTriggerFeedbackData.generated.h"

USTRUCT(BlueprintType)
struct FSHAdaptiveTriggerFeedbackData {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    uint8 position;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 Strength;
    
    SHPROTO_API FSHAdaptiveTriggerFeedbackData();
};

