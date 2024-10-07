#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "EAtmosphereDLightVisLQ.h"
#include "ESunShadowsQuality.h"
#include "SHPostprocessDirectionalLight.generated.h"

USTRUCT(BlueprintType)
struct FSHPostprocessDirectionalLight {
    GENERATED_BODY()
public:
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
    
    POSTPROCESSVOLUMEEX_API FSHPostprocessDirectionalLight();
};

