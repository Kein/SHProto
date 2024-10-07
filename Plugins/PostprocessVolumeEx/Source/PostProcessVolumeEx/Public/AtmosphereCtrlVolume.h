#pragma once
#include "CoreMinimal.h"
#include "EAtmosphereInterpolationMode.h"
#include "PostProcessVolumeEx.h"
#include "SHPostprocessAtmFog.h"
#include "SHPostprocessDirectionalLight.h"
#include "SHPostprocessExpFog.h"
#include "SHPostprocessLensDistortionData.h"
#include "SHPostprocessLevelDataCtrl.h"
#include "SHPostprocessMagicLightData.h"
#include "SHPostprocessRoughnessMetalicityCtrl.h"
#include "SHPostprocessSkyBox.h"
#include "SHPostprocessSkyLight.h"
#include "SHPostprocessWindData.h"
#include "AtmosphereCtrlVolume.generated.h"

class AAtmosphereCtrlVolume;

UCLASS()
class POSTPROCESSVOLUMEEX_API AAtmosphereCtrlVolume : public APostProcessVolumeEx {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSHPostprocessExpFog ExponentialFogSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSHPostprocessAtmFog AtmosphericFogSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSHPostprocessSkyLight SkyLightSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSHPostprocessDirectionalLight DirectionalLightSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSHPostprocessSkyBox SkyBoxSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSHPostprocessRoughnessMetalicityCtrl RoughnessMetallicityCtrl;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSHPostprocessLevelDataCtrl LevelDataCtrl;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSHPostprocessMagicLightData MagicLightCtrl;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSHPostprocessLensDistortionData LensDistortion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSHPostprocessWindData Wind;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    AAtmosphereCtrlVolume* AtmosphereInterpolationTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float AtmosphereInterpolationFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<EAtmosphereInterpolationMode> EditorInterpolationMode;
    
    AAtmosphereCtrlVolume(const FObjectInitializer& ObjectInitializer);

};

