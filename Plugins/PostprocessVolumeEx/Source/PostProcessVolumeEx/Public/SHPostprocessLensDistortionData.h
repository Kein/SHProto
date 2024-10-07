#pragma once
#include "CoreMinimal.h"
#include "SHPostprocessLensDistortionData.generated.h"

USTRUCT(BlueprintType)
struct FSHPostprocessLensDistortionData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float Intensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float IntensityX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float IntensityY;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float CenterX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float CenterY;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float Scale;
    
    POSTPROCESSVOLUMEEX_API FSHPostprocessLensDistortionData();
};

