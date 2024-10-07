#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SHBuoyancyMimicWave.generated.h"

USTRUCT(BlueprintType)
struct FSHBuoyancyMimicWave {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector2D Direction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Steepness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float WaveLength;
    
    SHPROTO_API FSHBuoyancyMimicWave();
};

