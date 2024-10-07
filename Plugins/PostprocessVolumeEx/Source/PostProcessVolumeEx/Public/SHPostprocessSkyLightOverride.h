#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "Components/SkyLightComponent.h"
#include "ESkyLightCaptureFrequency.h"
#include "SHPostprocessSkyLightOverride.generated.h"

class UTextureCube;

USTRUCT(BlueprintType)
struct POSTPROCESSVOLUMEEX_API FSHPostprocessSkyLightOverride {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bOverride_Visible;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bOverride_SourceType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bOverride_Cubemap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bOverride_SourceCubemapAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bOverride_RecaptureFrequency;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bOverride_SkyDistanceThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bOverride_Intensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bOverride_IndirectLightIntensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bOverride_VolumetricScatteringIntensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bOverride_LightColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bOverride_LowerHemisphereColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bOverride_bLowerHemisphereIsBlack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bOverride_CastShadows;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bOverride_CastRayTracingShadows;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bOverride_RayTracingShadowsSamplesCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bOverride_bAffectTranslucentLighting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bOverride_bTransmission;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bOverride_OcclusionMaxDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bOverride_Contrast;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bOverride_OcclusionExponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bOverride_MinOcclusion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bOverride_OcclusionTint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bOverride_OcclusionCombineMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bOverride_AOScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bOverride_LumenBiasFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool Visible;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<ESkyLightSourceType> SourceType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UTextureCube* Cubemap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SourceCubemapAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<ESkyLightCaptureFrequency> RecaptureFrequency;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SkyDistanceThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float Intensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float IndirectLightIntensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float VolumetricScatteringIntensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    FLinearColor LightColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FLinearColor LowerHemisphereColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bLowerHemisphereIsBlack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 CastShadows: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    bool CastRayTracingShadows;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    int32 RayTracingShadowsSamplesCount;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    uint8 bAffectTranslucentLighting: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    uint8 bTransmission: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float OcclusionMaxDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Contrast;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float OcclusionExponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MinOcclusion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FColor OcclusionTint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<EOcclusionCombineMode> OcclusionCombineMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float AOScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float LumenBiasFactor;
    
    FSHPostprocessSkyLightOverride();
};

