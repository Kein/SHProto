#pragma once
#include "CoreMinimal.h"
#include "Engine/Scene.h"
#include "Engine/PostProcessVolume.h"
#include "AtmospherePreset.h"
#include "PresetOverride.h"
#include "PostProcessVolumeEx.generated.h"

class APostProcessVolumeEx;
class UPostProcessAutoDOFCtrl;

UCLASS()
class POSTPROCESSVOLUMEEX_API APostProcessVolumeEx : public APostProcessVolume {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    float _OldDOFValue;
    
    UPROPERTY()
    bool _OldDOFValueWasOverriden;
    
    UPROPERTY(Transient)
    float _NowDOFValue;
    
    UPROPERTY(Instanced, Transient)
    UPostProcessAutoDOFCtrl* _DOFCtrl;
    
    UPROPERTY(Transient)
    bool _IsDuringEditionOfBoundSettings;
    
    UPROPERTY(Transient)
    FPostProcessSettings OverrideSettings;
    
    UPROPERTY(Transient)
    bool HasOverrideSettings;
    
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FPresetOverride PresetOverride;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    APostProcessVolumeEx* ParentVolume;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool HardConnected;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FAtmospherePreset Preset;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool AutoDOFEnable;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float AutoDOFLimitMin;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float AutoDOFLimitMax;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float AutoDOFInterpolationSpeed;
    
    APostProcessVolumeEx(const FObjectInitializer& ObjectInitializer);

};

