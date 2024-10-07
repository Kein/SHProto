#pragma once
#include "CoreMinimal.h"
#include "SHEnemyHitReactionSelectionHitReactionTypeVariantConfiguration.generated.h"

USTRUCT()
struct FSHEnemyHitReactionSelectionHitReactionTypeVariantConfiguration {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FName VariantName;
    
    UPROPERTY(EditDefaultsOnly)
    float SelectionWeight;
    
    SHPROTO_API FSHEnemyHitReactionSelectionHitReactionTypeVariantConfiguration();
};

