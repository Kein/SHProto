#pragma once
#include "CoreMinimal.h"
#include "SHEnemyHitReactionSelectionHitReactionOption.h"
#include "SHEnemyHitReactionSelectionConsecutiveHitConfiguration.generated.h"

USTRUCT()
struct FSHEnemyHitReactionSelectionConsecutiveHitConfiguration {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TArray<FSHEnemyHitReactionSelectionHitReactionOption> HitReactionOptions;
    
    SHPROTO_API FSHEnemyHitReactionSelectionConsecutiveHitConfiguration();
};

