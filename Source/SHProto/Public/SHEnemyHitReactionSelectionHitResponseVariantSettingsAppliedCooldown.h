#pragma once
#include "CoreMinimal.h"
#include "SHEnemyHitReactionSelectionHitResponseVariantSettingsAppliedCooldown.generated.h"

USTRUCT()
struct FSHEnemyHitReactionSelectionHitResponseVariantSettingsAppliedCooldown {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FName CooldownCounterName;
    
    UPROPERTY(EditDefaultsOnly)
    float CooldownDuration;
    
    SHPROTO_API FSHEnemyHitReactionSelectionHitResponseVariantSettingsAppliedCooldown();
};

