#pragma once
#include "CoreMinimal.h"
#include "EMaiAggroStance.h"
#include "SHEnemyHitReactionSelectionHitReactionRequiredAggression.generated.h"

USTRUCT()
struct FSHEnemyHitReactionSelectionHitReactionRequiredAggression {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    EMaiAggroStance MinimumAggressionLevel;
    
    UPROPERTY(EditDefaultsOnly)
    EMaiAggroStance MaximumAggressionLevel;
    
    SHPROTO_API FSHEnemyHitReactionSelectionHitReactionRequiredAggression();
};

