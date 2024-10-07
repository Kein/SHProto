#pragma once
#include "CoreMinimal.h"
#include "SHEnemyTransformationStateVariantDifficultyOverrides.h"
#include "SHEnemyTransformationStateVariantSettings.generated.h"

class USEnemyHitReactionSelection;
class USHHitReactionsSet;

USTRUCT(BlueprintType)
struct FSHEnemyTransformationStateVariantSettings {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    USEnemyHitReactionSelection* HitReactionSelectionConfiguration;
    
    UPROPERTY(EditAnywhere)
    USHHitReactionsSet* HitReactionsSet;
    
    UPROPERTY(EditAnywhere)
    FSHEnemyTransformationStateVariantDifficultyOverrides DifficultyOverrides;
    
    SHPROTO_API FSHEnemyTransformationStateVariantSettings();
};

