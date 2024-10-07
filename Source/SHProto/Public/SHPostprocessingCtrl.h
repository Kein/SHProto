#pragma once
#include "CoreMinimal.h"
#include "PostprocessingCtrlActor.h"
#include "EffectHandle.h"
#include "SHPostprocessingCtrl.generated.h"

class UAkRtpc;
class UMaterialInterface;
class URetroModeDataAsset;
class URetroModeDataListAsset;

UCLASS(NonTransient)
class SHPROTO_API ASHPostprocessingCtrl : public APostprocessingCtrlActor {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    URetroModeDataAsset* CurrentRetroMode;
    
    UPROPERTY(Transient)
    int32 CurrentRetroModeIndex;
    
    UPROPERTY(Transient)
    UMaterialInterface* HDRVis;
    
    UPROPERTY(Transient)
    UMaterialInterface* HCMat;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAkRtpc* RTPC_LeavesIntensity;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FEffectHandle MoodNeutral;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FEffectHandle MoodRoadToSilentHill;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FEffectHandle MoodCityFW;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FEffectHandle MoodCityOW;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FEffectHandle MoodInteriorFW;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FEffectHandle MoodInteriorOW;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FEffectHandle MoodHeavensNight;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FEffectHandle MoodCityNight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftObjectPtr<URetroModeDataListAsset> RetroModesNew;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftObjectPtr<UMaterialInterface> HDRVisMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftObjectPtr<UMaterialInterface> HighContrastModeMaterial;
    
    ASHPostprocessingCtrl(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void ShowHDRSettingsPP(bool State);
    
    UFUNCTION(BlueprintCallable)
    void ApplyHDRPreview(float MinLuminance, float MidLuminance, float MaxLuminance, float Brightness, float UIBrightness, float UIContrast);
    
};

