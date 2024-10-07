#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SHPostprocessLevelDataCtrl.generated.h"

USTRUCT(BlueprintType)
struct FSHPostprocessLevelDataCtrl {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ForcedLastLODDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float HDRFinalExponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float HDRFinalMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool EnableGI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float RimLightIntensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FLinearColor RimLightColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float RimLightETA;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float RimLightBias;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float RimLightAngleMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float RimLightAngleMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CharacterLightIntensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FLinearColor CharacterLightColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ShadowTexelsPerPixel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ShadowTexelsPerPixelPointlight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ShadowTexelsPerPixelSpotlight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ShadowTexelsPerPixelRectlight;
    
    POSTPROCESSVOLUMEEX_API FSHPostprocessLevelDataCtrl();
};

