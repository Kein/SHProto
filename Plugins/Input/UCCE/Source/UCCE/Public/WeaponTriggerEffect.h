#pragma once
#include "CoreMinimal.h"
#include "TriggerEffect.h"
#include "WeaponTriggerEffect.generated.h"

UCLASS()
class UCCE_API UWeaponTriggerEffect : public UTriggerEffect {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint8 StartPosition;
    
    UPROPERTY(EditAnywhere)
    uint8 EndPosition;
    
    UPROPERTY(EditAnywhere)
    uint8 Strength;
    
    UWeaponTriggerEffect();

};

