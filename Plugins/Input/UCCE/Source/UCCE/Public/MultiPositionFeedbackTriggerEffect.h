#pragma once
#include "CoreMinimal.h"
#include "TriggerEffect.h"
#include "MultiPositionFeedbackTriggerEffect.generated.h"

UCLASS()
class UCCE_API UMultiPositionFeedbackTriggerEffect : public UTriggerEffect {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint8 Strength[10];
    
    UMultiPositionFeedbackTriggerEffect();

};

