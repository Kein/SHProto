#pragma once
#include "CoreMinimal.h"
#include "SHEnemyHitReactionSelectionHitResponseVariantSettings.h"
#include "SHEnemyHitReactionSelectionHitResponsesConfiguration.generated.h"

USTRUCT(BlueprintType)
struct FSHEnemyHitReactionSelectionHitResponsesConfiguration {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TMap<FName, FSHEnemyHitReactionSelectionHitResponseVariantSettings> KnockdownVariantsSettings;
    
    UPROPERTY(EditDefaultsOnly)
    TMap<FName, FSHEnemyHitReactionSelectionHitResponseVariantSettings> StaggerVariantsSettings;
    
    UPROPERTY(EditDefaultsOnly)
    TMap<FName, FSHEnemyHitReactionSelectionHitResponseVariantSettings> FalterVariantsSettings;
    
    UPROPERTY(EditDefaultsOnly)
    TMap<FName, FSHEnemyHitReactionSelectionHitResponseVariantSettings> NormalVariantsSettings;
    
    UPROPERTY(EditDefaultsOnly)
    TMap<FName, FSHEnemyHitReactionSelectionHitResponseVariantSettings> TwitchVariantsSettings;
    
    SHPROTO_API FSHEnemyHitReactionSelectionHitResponsesConfiguration();
};

