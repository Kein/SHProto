#pragma once
#include "CoreMinimal.h"
#include "SHPostprocessSkyLightInterpolator.generated.h"

class UTextureCube;

USTRUCT()
struct FSHPostprocessSkyLightInterpolator {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    UTextureCube* Cubemap;
    
    UPROPERTY(Transient)
    float Weight;
    
    POSTPROCESSVOLUMEEX_API FSHPostprocessSkyLightInterpolator();
};

