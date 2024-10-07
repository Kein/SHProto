#pragma once
#include "CoreMinimal.h"
#include "SHMeatHealthValues.generated.h"

USTRUCT(BlueprintType)
struct FSHMeatHealthValues {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    FName BoneName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ChunkHealth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CurrentHealth;
    
    SHPROTO_API FSHMeatHealthValues();
};

