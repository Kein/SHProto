#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "SHEnemyHitReactionSelectionConsecutiveHitCountingDamageTypeConfiguration.generated.h"

class UDamageType;

USTRUCT()
struct FSHEnemyHitReactionSelectionConsecutiveHitCountingDamageTypeConfiguration {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UDamageType> DamageType;
    
    UPROPERTY(EditDefaultsOnly)
    float CountedHitTimeoutOverride;
    
    SHPROTO_API FSHEnemyHitReactionSelectionConsecutiveHitCountingDamageTypeConfiguration();
};

