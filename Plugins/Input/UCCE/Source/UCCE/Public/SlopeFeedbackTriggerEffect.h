#pragma once
#include "CoreMinimal.h"
#include "TriggerEffect.h"
#include "SlopeFeedbackTriggerEffect.generated.h"

UCLASS()
class UCCE_API USlopeFeedbackTriggerEffect : public UTriggerEffect {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint8 StartPosition;
    
    UPROPERTY(EditAnywhere)
    uint8 EndPosition;
    
    UPROPERTY(EditAnywhere)
    uint8 StartStrength;
    
    UPROPERTY(EditAnywhere)
    uint8 EndStrength;
    
    USlopeFeedbackTriggerEffect();

};

