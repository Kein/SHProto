#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Volume.h"
#include "SHPostprocessColorGradingOverride.h"
#include "SHPostprocessDOFOverride.h"
#include "SHPostprocessDirectionalLightOverride.h"
#include "SHPostprocessExpFogOverride.h"
#include "SHPostprocessExposureOverride.h"
#include "SHPostprocessFilmOverride.h"
#include "SHPostprocessRoughnessMetalicityCtrlOverride.h"
#include "SHPostprocessSkyLightOverride.h"
#include "SHPostprocessWindDataOverride.h"
#include "PostProcessChildVolume.generated.h"

UCLASS()
class POSTPROCESSVOLUMEEX_API APostProcessChildVolume : public AVolume {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    bool IsEnabled;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bOverride_DirectionalLightSettings: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bOverride_ExponentialFogSettings: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bOverride_SkyLightSettings: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bOverride_RoughnessAndMetallicity: 1;
    
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
    float BlendWeight;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float BlendRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSHPostprocessDirectionalLightOverride DirectionalLightSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSHPostprocessExpFogOverride ExponentialFogSettings;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSHPostprocessSkyLightOverride SkyLightSettings;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSHPostprocessRoughnessMetalicityCtrlOverride RoughnessMetallicityCtrl;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSHPostprocessWindDataOverride Wind;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSHPostprocessExposureOverride Exposure;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSHPostprocessColorGradingOverride ColorGrading;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSHPostprocessFilmOverride Film;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSHPostprocessDOFOverride DOF;
    
    APostProcessChildVolume(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetIsEnabled(bool C);
    
    UFUNCTION(BlueprintPure)
    bool GetIsEnabled() const;
    
};

