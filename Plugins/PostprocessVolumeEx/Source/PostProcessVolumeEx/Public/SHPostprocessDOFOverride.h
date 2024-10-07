#pragma once
#include "CoreMinimal.h"
#include "SHPostprocessDOFOverride.generated.h"

USTRUCT(BlueprintType)
struct POSTPROCESSVOLUMEEX_API FSHPostprocessDOFOverride {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bOverride_DepthOfFieldSensorWidth: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bOverride_DepthOfFieldSqueezeFactor: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bOverride_DepthOfFieldFocalDistance: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bOverride_DepthOfFieldAnamorphism: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bOverride_DepthOfFieldDepthBlurAmount: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bOverride_DepthOfFieldDepthBlurRadius: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bOverride_DepthOfFieldVolumetricFogBias: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bOverride_DepthOfFieldVolumetricFogScale: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bOverride_DepthOfFieldVolumetricFogExponent: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bOverride_DepthOfFieldFocalRegion: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bOverride_DepthOfFieldNearTransitionRegion: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bOverride_DepthOfFieldFarTransitionRegion: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bOverride_DepthOfFieldScale: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bOverride_DepthOfFieldNearBlurSize: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bOverride_DepthOfFieldFarBlurSize: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bOverride_DepthOfFieldOcclusion: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bOverride_DepthOfFieldSkyFocusDistance: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bOverride_DepthOfFieldVignetteSize: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float DepthOfFieldSensorWidth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float DepthOfFieldSqueezeFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float DepthOfFieldFocalDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float DepthOfFieldAnamorphism;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float DepthOfFieldDepthBlurAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float DepthOfFieldDepthBlurRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float DepthOfFieldVolumetricFogBias;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float DepthOfFieldVolumetricFogScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float DepthOfFieldVolumetricFogExponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float DepthOfFieldFocalRegion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float DepthOfFieldNearTransitionRegion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float DepthOfFieldFarTransitionRegion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float DepthOfFieldScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float DepthOfFieldNearBlurSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float DepthOfFieldFarBlurSize;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Interp)
    float DepthOfFieldOcclusion;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Interp)
    float DepthOfFieldSkyFocusDistance;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Interp)
    float DepthOfFieldVignetteSize;
    
    FSHPostprocessDOFOverride();
};

