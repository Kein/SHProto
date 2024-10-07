#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "SHHitReactionVariantDamageReactionConfig.generated.h"

class UDamageType;
class USHHitReactionsBodyMap;

USTRUCT(BlueprintType)
struct SHPROTO_API FSHHitReactionVariantDamageReactionConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<UDamageType> DamageType;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    USHHitReactionsBodyMap* HitReactionBodyMap;
    
    FSHHitReactionVariantDamageReactionConfig();
};

