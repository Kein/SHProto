#pragma once
#include "CoreMinimal.h"
#include "SHEnemyHitReactionSelectionHitReactionTypeVariantConfiguration.h"
#include "SHEnemyHitReactionSelectionHitReactionTypeConfiguration.generated.h"

USTRUCT()
struct FSHEnemyHitReactionSelectionHitReactionTypeConfiguration {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float Chance;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FSHEnemyHitReactionSelectionHitReactionTypeVariantConfiguration> Variants;
    
    SHPROTO_API FSHEnemyHitReactionSelectionHitReactionTypeConfiguration();
};

