#pragma once
#include "CoreMinimal.h"
#include "SHDeathPlayerFinishPostProcessData.generated.h"

class UMaterialInterface;
class USHMaterialPropertyControlSettings;

USTRUCT(BlueprintType)
struct SHPROTO_API FSHDeathPlayerFinishPostProcessData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bUseFinishPostProcess;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float PostProcessAnimationLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float PostProcessAnimationHoldTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UMaterialInterface* PostProcessMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USHMaterialPropertyControlSettings* MaterialPropertyControlSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bShowGameOverScreenOnFinish;
    
    FSHDeathPlayerFinishPostProcessData();
};

