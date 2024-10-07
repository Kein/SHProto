#pragma once
#include "CoreMinimal.h"
#include "TriggerEffect.h"
#include "MultiPositionVibrationTriggerEffect.generated.h"

UCLASS()
class UCCE_API UMultiPositionVibrationTriggerEffect : public UTriggerEffect {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint8 Frequency;
    
    UPROPERTY(EditAnywhere)
    uint8 Amplitude[10];
    
    UMultiPositionVibrationTriggerEffect();

};

