#pragma once
#include "CoreMinimal.h"
#include "SHEnemyTransformationStateVariantDifficultyOverrides.generated.h"

class USEnemyHitReactionSelection;

USTRUCT()
struct FSHEnemyTransformationStateVariantDifficultyOverrides {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    USEnemyHitReactionSelection* HitReactionSelectionConfigurationEasy;
    
    UPROPERTY(EditAnywhere)
    USEnemyHitReactionSelection* HitReactionSelectionConfigurationMedium;
    
    UPROPERTY(EditAnywhere)
    USEnemyHitReactionSelection* HitReactionSelectionConfigurationHard;
    
    SHPROTO_API FSHEnemyTransformationStateVariantDifficultyOverrides();
};

