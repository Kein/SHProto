#pragma once
#include "CoreMinimal.h"
#include "Components/SphereComponent.h"
#include "SHPostprocessColorGradingOverride.h"
#include "SHPostprocessDOFOverride.h"
#include "SHPostprocessExpFog.h"
#include "SHPostprocessExposureOverride.h"
#include "SHPostprocessFilmOverride.h"
#include "SHPostprocessSkyLight.h"
#include "SHPostprocessWindData.h"
#include "FogCtrlSubVolumeComponent.generated.h"

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class POSTPROCESSVOLUMEEX_API UFogCtrlSubVolumeComponent : public USphereComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bOverride_ExponentialFogSettings: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bOverride_SkyLightSettings: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bOverride_Wind: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bOverride_Exposure: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bOverride_ColorGrading: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bOverride_Film: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bOverride_DOF: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float SphereFalloff;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSHPostprocessExpFog ExponentialFogSettings;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSHPostprocessSkyLight SkyLightSettings;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSHPostprocessWindData Wind;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSHPostprocessExposureOverride Exposure;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSHPostprocessColorGradingOverride ColorGrading;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSHPostprocessFilmOverride Film;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSHPostprocessDOFOverride DOF;
    
    UFogCtrlSubVolumeComponent(const FObjectInitializer& ObjectInitializer);

};

