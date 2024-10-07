#pragma once
#include "CoreMinimal.h"
#include "TriggerEffect.h"
#include "VibrationTriggerEffect.generated.h"

UCLASS()
class UCCE_API UVibrationTriggerEffect : public UTriggerEffect {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint8 position;
    
    UPROPERTY(EditAnywhere)
    uint8 Frequency;
    
    UPROPERTY(EditAnywhere)
    uint8 Amplitude;
    
    UVibrationTriggerEffect();

};

