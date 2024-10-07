#pragma once
#include "CoreMinimal.h"
#include "ESHHitReactionResponseType.h"
#include "SHEnemyHitReactionSelectionHitReactionRequiredActiveHitReaction.generated.h"

USTRUCT()
struct FSHEnemyHitReactionSelectionHitReactionRequiredActiveHitReaction {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    ESHHitReactionResponseType HitReactionType;
    
    UPROPERTY(EditDefaultsOnly)
    FName VariantName;
    
    SHPROTO_API FSHEnemyHitReactionSelectionHitReactionRequiredActiveHitReaction();
};

