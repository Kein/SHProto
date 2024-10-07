#pragma once
#include "CoreMinimal.h"
#include "SHHitReactionVariantDamageReactionConfig.h"
#include "SHHitReactionVariantConfig.generated.h"

USTRUCT(BlueprintType)
struct SHPROTO_API FSHHitReactionVariantConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName HitReactionVariant;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FSHHitReactionVariantDamageReactionConfig> DamageHitReactions;
    
    FSHHitReactionVariantConfig();
};

