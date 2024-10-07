#pragma once
#include "CoreMinimal.h"
#include "MaiAggroConfig.generated.h"

USTRUCT(BlueprintType)
struct MAI_API FMaiAggroConfig {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float _RequiredAggro;
    
    UPROPERTY(EditAnywhere)
    float _AddAggroOnEnter;
    
    UPROPERTY(EditAnywhere)
    float _AggroDecayCooldown;
    
    UPROPERTY(EditAnywhere)
    float _AggroDecayRate;
    
    UPROPERTY(EditAnywhere)
    float _BaseAggroGain[7];
    
    FMaiAggroConfig();
};

