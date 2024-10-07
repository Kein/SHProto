#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Components/SkyAtmosphereComponent.h"
#include "SHPostprocessEpicClouds.h"
#include "SHPostprocessAtmFog.generated.h"

USTRUCT(BlueprintType)
struct FSHPostprocessAtmFog {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool Visible;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float BottomRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    FColor GroundAlbedo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float AtmosphereHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float MultiScatteringFactor;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    float TraceSampleCountScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float RayleighScatteringScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    FLinearColor RayleighScattering;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float RayleighExponentialDistribution;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float MieScatteringScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    FLinearColor MieScattering;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float MieAbsorptionScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    FLinearColor MieAbsorption;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float MieAnisotropy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float MieExponentialDistribution;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float OtherAbsorptionScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    FLinearColor OtherAbsorption;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FTentDistribution OtherTentDistribution;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    FLinearColor SkyLuminanceFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float AerialPespectiveViewDistanceScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float HeightFogContribution;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float TransmittanceMinLightElevationAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float AerialPerspectiveStartDepth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool EnableVolumetricClouds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float LayerBottomAltitude;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float LayerHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float TracingStartMaxDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float TracingMaxDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bUsePerSampleAtmosphericLightTransmittance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SkyLightCloudBottomOcclusion;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    float ViewSampleCountScale;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    float ReflectionViewSampleCountScale;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    float ShadowViewSampleCountScale;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    float ShadowReflectionViewSampleCountScale;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    float ShadowTracingDistance;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    float StopTracingTransmittanceThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSHPostprocessEpicClouds VCloudsMaterialParams;
    
    POSTPROCESSVOLUMEEX_API FSHPostprocessAtmFog();
};

