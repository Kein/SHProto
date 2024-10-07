#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "TriggerEffect.generated.h"

UCLASS(Abstract)
class UCCE_API UTriggerEffect : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint8 bIsLeftTrigger: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bUseEffectForThreshold: 1;
    
    UTriggerEffect();

};

