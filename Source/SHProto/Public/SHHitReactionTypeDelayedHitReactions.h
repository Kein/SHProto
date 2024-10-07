#pragma once
#include "CoreMinimal.h"
#include "SHHitReactionArtificialHitConfiguration.h"
#include "SHHitReactionTypeDelayedHitReactions.generated.h"

USTRUCT(BlueprintType)
struct SHPROTO_API FSHHitReactionTypeDelayedHitReactions {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FSHHitReactionArtificialHitConfiguration> HitReactions;
    
    FSHHitReactionTypeDelayedHitReactions();
};

