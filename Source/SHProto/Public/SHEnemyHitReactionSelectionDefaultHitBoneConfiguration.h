#pragma once
#include "CoreMinimal.h"
#include "SHEnemyHitReactionSelectionConsecutiveHitConfiguration.h"
#include "SHEnemyHitReactionSelectionDefaultHitBoneConfiguration.generated.h"

USTRUCT()
struct FSHEnemyHitReactionSelectionDefaultHitBoneConfiguration {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TArray<FSHEnemyHitReactionSelectionConsecutiveHitConfiguration> ConsecutiveHits;
    
    SHPROTO_API FSHEnemyHitReactionSelectionDefaultHitBoneConfiguration();
};

