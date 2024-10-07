#pragma once
#include "CoreMinimal.h"
#include "SHEnemyHitReactionSelectionHitReactionRequiredActiveHitReaction.h"
#include "SHEnemyHitReactionSelectionHitReactionRequiredActiveHitReactions.generated.h"

USTRUCT()
struct FSHEnemyHitReactionSelectionHitReactionRequiredActiveHitReactions {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TArray<FSHEnemyHitReactionSelectionHitReactionRequiredActiveHitReaction> RequiredHitReactions;
    
    SHPROTO_API FSHEnemyHitReactionSelectionHitReactionRequiredActiveHitReactions();
};

