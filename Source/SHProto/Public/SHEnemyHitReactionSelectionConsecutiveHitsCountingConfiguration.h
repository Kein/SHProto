#pragma once
#include "CoreMinimal.h"
#include "SHEnemyHitReactionSelectionConsecutiveHitCountingDamageTypeConfiguration.h"
#include "SHEnemyHitReactionSelectionConsecutiveHitsCountingConfiguration.generated.h"

USTRUCT(BlueprintType)
struct FSHEnemyHitReactionSelectionConsecutiveHitsCountingConfiguration {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float CountedHitTimeout;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FSHEnemyHitReactionSelectionConsecutiveHitCountingDamageTypeConfiguration> DamageTypeOverrides;
    
    SHPROTO_API FSHEnemyHitReactionSelectionConsecutiveHitsCountingConfiguration();
};

