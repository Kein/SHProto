#pragma once
#include "CoreMinimal.h"
#include "SHAdaptiveTriggerWeaponData.generated.h"

USTRUCT(BlueprintType)
struct FSHAdaptiveTriggerWeaponData {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    uint8 StartPosition;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 EndPosition;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 Strength;
    
    SHPROTO_API FSHAdaptiveTriggerWeaponData();
};

