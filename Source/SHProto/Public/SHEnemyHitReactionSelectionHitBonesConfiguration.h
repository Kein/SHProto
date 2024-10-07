#pragma once
#include "CoreMinimal.h"
#include "SHEnemyHitReactionSelectionConsecutiveHitConfiguration.h"
#include "SHEnemyHitReactionSelectionHitBonesConfiguration.generated.h"

USTRUCT()
struct FSHEnemyHitReactionSelectionHitBonesConfiguration {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TArray<FName> HitBoneNames;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FSHEnemyHitReactionSelectionConsecutiveHitConfiguration> ConsecutiveHits;
    
    SHPROTO_API FSHEnemyHitReactionSelectionHitBonesConfiguration();
};

