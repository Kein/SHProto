#pragma once
#include "CoreMinimal.h"
#include "Engine/Scene.h"
#include "Engine/DataTable.h"
#include "AtmospherePresetData.generated.h"

USTRUCT(BlueprintType)
struct FAtmospherePresetData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FPostProcessSettings Settings;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool AutoDOFEnable;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float AutoDOFLimitMin;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float AutoDOFLimitMax;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float AutoDOFInterpolationSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool LQAutoDOFEnable;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float LQAutoDOFLimitMin;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float LQAutoDOFLimitMax;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float LQAutoDOFInterpolationSpeed;
    
    POSTPROCESSVOLUMEEX_API FAtmospherePresetData();
};

