#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "SHPostprocessExpFogOverride.generated.h"

USTRUCT(BlueprintType)
struct POSTPROCESSVOLUMEEX_API FSHPostprocessExpFogOverride {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bOverride_Visible;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bOverride_FogDensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bOverride_FogInscatteringColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bOverride_FogHeightFalloff;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bOverride_FogMaxOpacity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bOverride_StartDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bOverride_FogCutoffDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bOverride_SecondFogDensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bOverride_SecondFogHeightFalloff;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bOverride_SecondFogHeightOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bOverride_DirectionalInscatteringExponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bOverride_DirectionalInscatteringStartDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bOverride_DirectionalInscatteringColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bOverride_bEnableVolumetricFog;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bOverride_VolumetricFogScatteringDistribution;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bOverride_VolumetricFogAlbedo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bOverride_VolumetricFogEmissive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bOverride_VolumetricFogExtinctionScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bOverride_VolumetricFogDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bOverride_VolumetricFogStaticLightingScatteringIntensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bOverride_bOverrideLightColorsWithFogInscatteringColors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bOverride_HeightIsCameraRelative;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bOverride_WorldOriginHeightOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bOverride_FogDarkening;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bOverride_FogDarkeningTint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bOverride_FogDarkeningExponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bOverride_FogDarkeningDepthThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bOverride_FogDarkeningDepthThresholdFade;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bOverride_FogDarkeningFadeBias;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bOverride_FogDarkeningFadeExponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bOverride_FogDarkeningFadeScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bOverride_FogDistanceScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bOverride_FogContrast;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bOverride_FogNoiseScaleMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bOverride_FogSpeedMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bOverride_FogIntensityMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bOverride_FogTint;
    
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
    
    FSHPostprocessExpFogOverride();
};

