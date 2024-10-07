#pragma once
#include "CoreMinimal.h"
#include "TriggerEffect.h"
#include "FeedbackTriggerEffect.generated.h"

UCLASS()
class UCCE_API UFeedbackTriggerEffect : public UTriggerEffect {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint8 position;
    
    UPROPERTY(EditAnywhere)
    uint8 Strength;
    
    UFeedbackTriggerEffect();

};

