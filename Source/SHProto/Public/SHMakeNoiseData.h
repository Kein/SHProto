#pragma once
#include "CoreMinimal.h"
#include "SHMakeNoiseData.generated.h"

USTRUCT(BlueprintType)
struct FSHMakeNoiseData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName NoiseTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Aggro;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float NoiseRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Loudness;
    
    SHPROTO_API FSHMakeNoiseData();
};

