#pragma once
#include "CoreMinimal.h"
#include "MaiAggroDifficulty.generated.h"

USTRUCT(BlueprintType)
struct MAI_API FMaiAggroDifficulty {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float _AggroDecayMul;
    
    UPROPERTY(EditAnywhere)
    float _AggroGainMul;
    
    FMaiAggroDifficulty();
};

