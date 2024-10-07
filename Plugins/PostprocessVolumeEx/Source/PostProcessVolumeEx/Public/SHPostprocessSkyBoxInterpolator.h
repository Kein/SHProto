#pragma once
#include "CoreMinimal.h"
#include "SHPostprocessSkyBoxInterpolator.generated.h"

class UTexture;
class UTexture2D;

USTRUCT()
struct FSHPostprocessSkyBoxInterpolator {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    UTexture* Cubemap;
    
    UPROPERTY(Transient)
    UTexture2D* Clouds;
    
    UPROPERTY(Transient)
    float Weight;
    
    POSTPROCESSVOLUMEEX_API FSHPostprocessSkyBoxInterpolator();
};

