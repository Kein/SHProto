#pragma once
#include "CoreMinimal.h"
#include "SHEnemyHitReactionSelectionDamageTypeConfiguration.h"
#include "SHEnemyHitReactionSelectionConfiguration.generated.h"

USTRUCT(BlueprintType)
struct FSHEnemyHitReactionSelectionConfiguration {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TArray<FSHEnemyHitReactionSelectionDamageTypeConfiguration> DamageTypeConfigurations;
    
    SHPROTO_API FSHEnemyHitReactionSelectionConfiguration();
};

