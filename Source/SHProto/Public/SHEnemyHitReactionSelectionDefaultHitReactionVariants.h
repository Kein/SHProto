#pragma once
#include "CoreMinimal.h"
#include "SHEnemyHitReactionSelectionHitReactionTypeVariantConfiguration.h"
#include "SHEnemyHitReactionSelectionDefaultHitReactionVariants.generated.h"

USTRUCT()
struct FSHEnemyHitReactionSelectionDefaultHitReactionVariants {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TArray<FSHEnemyHitReactionSelectionHitReactionTypeVariantConfiguration> KnockdownVariants;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FSHEnemyHitReactionSelectionHitReactionTypeVariantConfiguration> StaggerVariants;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FSHEnemyHitReactionSelectionHitReactionTypeVariantConfiguration> FalterVariants;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FSHEnemyHitReactionSelectionHitReactionTypeVariantConfiguration> NormalVariants;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FSHEnemyHitReactionSelectionHitReactionTypeVariantConfiguration> TwitchVariants;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FSHEnemyHitReactionSelectionHitReactionTypeVariantConfiguration> DeathVariants;
    
    SHPROTO_API FSHEnemyHitReactionSelectionDefaultHitReactionVariants();
};

