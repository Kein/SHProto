#pragma once
#include "CoreMinimal.h"
#include "SHMaterialPropertyControlData.h"
#include "SHReceiveDamagePostProcessConfig.generated.h"

class UMaterialInterface;

USTRUCT(BlueprintType)
struct FSHReceiveDamagePostProcessConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftObjectPtr<UMaterialInterface> Material;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float BlendInTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float KeepTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float BlendOutTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FSHMaterialPropertyControlData> MaterialPropertyControlConfigs;
    
    SHPROTO_API FSHReceiveDamagePostProcessConfig();
};

