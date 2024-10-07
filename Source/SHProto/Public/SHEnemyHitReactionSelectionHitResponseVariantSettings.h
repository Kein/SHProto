#pragma once
#include "CoreMinimal.h"
#include "MinMaxVector2D.h"
#include "SHEnemyHitReactionSelectionHitResponseVariantSettingsAppliedCooldown.h"
#include "SHEnemyHitReactionSelectionHitResponseVariantSettings.generated.h"

USTRUCT()
struct FSHEnemyHitReactionSelectionHitResponseVariantSettings {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FMinMaxVector2D DurationLimit;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FName> BlockedByCooldowns;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FSHEnemyHitReactionSelectionHitResponseVariantSettingsAppliedCooldown> ApplyCooldowns;
    
    SHPROTO_API FSHEnemyHitReactionSelectionHitResponseVariantSettings();
};

