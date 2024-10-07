#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "EAtmosphereDLightVisLQ.h"
#include "ESunShadowsQuality.h"
#include "SHPostprocessDirectionalLightOverride.generated.h"

USTRUCT(BlueprintType)
struct POSTPROCESSVOLUMEEX_API FSHPostprocessDirectionalLightOverride {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bOverride_Visible;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bOverride_VisibleInLowQuality;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bOverride_Direction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bOverride_Intensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bOverride_IndirectLightingIntensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bOverride_VolumetricScatteringIntensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bOverride_LightColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bOverride_CastShadows;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bOverride_CastShadowsInLowQuality;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bOverride_CastRayTracingShadows;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bOverride_RayTracingShadowsSamplesCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bOverride_ShadowSharpen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bOverride_LightSourceAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bOverride_LightSourceSoftAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bOverride_ContactShadowLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bOverride_Temperature;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bOverride_bUseTemperature;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bOverride_SpecularScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bOverride_ShadowBias;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bOverride_ShadowsQuality;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bOverride_CascadeTransitionFraction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bOverride_CascadeDistributionExponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bOverride_DynamicShadowDistanceMovableLight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bOverride_bAffectDynamicIndirectLighting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bOverride_bEnableLightShaftOcclusion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bOverride_OcclusionMaskDarkness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bOverride_OcclusionDepthRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bOverride_bEnableLightShaftBloom;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bOverride_BloomScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bOverride_BloomThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bOverride_BloomMaxBrightness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bOverride_BloomTint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bOverride_LightShaftOverrideDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bOverride_bAtmosphereSunLight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bOverride_AtmosphereSunLightIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bOverride_AtmosphereSunDiskColorScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bOverride_bPerPixelAtmosphereTransmittance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bOverride_bCastShadowsOnClouds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bOverride_bCastShadowsOnAtmosphere;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bOverride_bCastCloudShadows;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bOverride_CloudShadowStrength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bOverride_CloudShadowOnAtmosphereStrength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bOverride_CloudShadowOnSurfaceStrength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bOverride_CloudShadowDepthBias;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bOverride_CloudShadowExtent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bOverride_CloudShadowMapResolutionScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bOverride_CloudShadowRaySampleCountScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bOverride_CloudScatteredLuminanceScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bOverride_FakeAmbientIntensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bOverride_FakeAmbientColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bOverride_FakeAmbientFromBottom;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bOverride_DayNightFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool Visible;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<EAtmosphereDLightVisLQ> VisibleInLowQuality;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    FRotator Direction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float Intensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float IndirectLightingIntensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float VolumetricScatteringIntensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    FColor LightColor;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    bool CastShadows;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<EAtmosphereDLightVisLQ> CastShadowsInLowQuality;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    bool CastRayTracingShadows;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    int32 RayTracingShadowsSamplesCount;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    float ShadowSharpen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float LightSourceAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float LightSourceSoftAngle;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Interp)
    float ContactShadowLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float Temperature;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bUseTemperature;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float SpecularScale;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Interp)
    float ShadowBias;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<ESunShadowsQuality> ShadowsQuality;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CascadeTransitionFraction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CascadeDistributionExponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float DynamicShadowDistanceMovableLight;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    bool bAffectDynamicIndirectLighting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bEnableLightShaftOcclusion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float OcclusionMaskDarkness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float OcclusionDepthRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bEnableLightShaftBloom;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float BloomScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float BloomThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float BloomMaxBrightness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    FColor BloomTint;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Interp)
    FVector LightShaftOverrideDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bAtmosphereSunLight;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    int32 AtmosphereSunLightIndex;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    FLinearColor AtmosphereSunDiskColorScale;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    bool bPerPixelAtmosphereTransmittance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bCastShadowsOnClouds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bCastShadowsOnAtmosphere;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bCastCloudShadows;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    float CloudShadowStrength;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    float CloudShadowOnAtmosphereStrength;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    float CloudShadowOnSurfaceStrength;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    float CloudShadowDepthBias;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    float CloudShadowExtent;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    float CloudShadowMapResolutionScale;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    float CloudShadowRaySampleCountScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    FLinearColor CloudScatteredLuminanceScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float FakeAmbientIntensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    FColor FakeAmbientColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    bool FakeAmbientFromBottom;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float DayNightFactor;
    
    FSHPostprocessDirectionalLightOverride();
};

