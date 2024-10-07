#pragma once
#include "CoreMinimal.h"
#include "AtmospherePresetData.h"
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
#include "AtmospherePresetDataEx.generated.h"

USTRUCT(BlueprintType)
struct FAtmospherePresetDataEx : public FAtmospherePresetData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSHPostprocessExpFog ExponentialFogSettings;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSHPostprocessAtmFog AtmosphericFogSettings;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSHPostprocessSkyLight SkyLightSettings;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSHPostprocessDirectionalLight DirectionalLightSettings;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSHPostprocessSkyBox SkyBoxSettings;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSHPostprocessRoughnessMetalicityCtrl RoughnessMetallicityCtrl;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSHPostprocessLevelDataCtrl LevelDataCtrl;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSHPostprocessMagicLightData MagicLightCtrl;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSHPostprocessLensDistortionData LensDistortion;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSHPostprocessWindData Wind;
    
    POSTPROCESSVOLUMEEX_API FAtmospherePresetDataEx();
};

