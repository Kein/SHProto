#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "SHPostprocessExpFog.generated.h"

USTRUCT(BlueprintType)
struct FSHPostprocessExpFog {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool Visible;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float FogDensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    FLinearColor FogInscatteringColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float FogHeightFalloff;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float FogMaxOpacity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float StartDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float FogCutoffDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float SecondFogDensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float SecondFogHeightFalloff;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float SecondFogHeightOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float DirectionalInscatteringExponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float DirectionalInscatteringStartDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    FLinearColor DirectionalInscatteringColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bEnableVolumetricFog;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float VolumetricFogScatteringDistribution;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    FColor VolumetricFogAlbedo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    FLinearColor VolumetricFogEmissive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float VolumetricFogExtinctionScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float VolumetricFogDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float VolumetricFogStaticLightingScatteringIntensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bOverrideLightColorsWithFogInscatteringColors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool HeightIsCameraRelative;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float WorldOriginHeightOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool FogDarkening;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    FLinearColor FogDarkeningTint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float FogDarkeningExponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float FogDarkeningDepthThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float FogDarkeningDepthThresholdFade;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float FogDarkeningFadeBias;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float FogDarkeningFadeExponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float FogDarkeningFadeScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float FogDistanceScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float FogContrast;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float FogNoiseScaleMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float FogSpeedMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float FogIntensityMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    FLinearColor FogTint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    bool ReflectionsFog;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float ReflectionsFogNearCutOut;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float ReflectionsFogDensityScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float ReflectionsFogAbsorbtionScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float ReflectionsFogBrightnessScale;
    
    POSTPROCESSVOLUMEEX_API FSHPostprocessExpFog();
};

