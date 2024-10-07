#pragma once
#include "CoreMinimal.h"
#include "CutsceneBoostMaterialConfig.generated.h"

class UMaterialInterface;

USTRUCT(BlueprintType)
struct FCutsceneBoostMaterialConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<UMaterialInterface> Material;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float BoostTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool ForceAllMiplevelsToBeResident;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool FastResponse;
    
    CUTSCENES_API FCutsceneBoostMaterialConfig();
};

