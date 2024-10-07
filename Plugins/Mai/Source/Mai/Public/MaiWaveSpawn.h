#pragma once
#include "CoreMinimal.h"
#include "MaiWaveSpawn.generated.h"

USTRUCT(BlueprintType)
struct MAI_API FMaiWaveSpawn {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    int32 _Limit;
    
    UPROPERTY(EditAnywhere)
    float _MinDelay;
    
    UPROPERTY(EditAnywhere)
    float _MaxDelay;
    
    UPROPERTY(EditAnywhere)
    float _NextSpawn;
    
    FMaiWaveSpawn();
};

