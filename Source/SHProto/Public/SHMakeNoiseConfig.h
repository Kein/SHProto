#pragma once
#include "CoreMinimal.h"
#include "SHMakeNoiseData.h"
#include "SHMakeNoiseConfig.generated.h"

USTRUCT(BlueprintType)
struct FSHMakeNoiseConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bShouldMakeNoise;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSHMakeNoiseData NoiseData;
    
    SHPROTO_API FSHMakeNoiseConfig();
};

