#pragma once
#include "CoreMinimal.h"
#include "SHMaterialPropertyControlHandler.h"
#include "SHReceiveDamagePostProcessConfig.h"
#include "SHDynamicPostProcessHandler.generated.h"

class UMaterialInstanceDynamic;

USTRUCT(BlueprintType)
struct FSHDynamicPostProcessHandler : public FSHReceiveDamagePostProcessConfig {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    UMaterialInstanceDynamic* MaterialDynamic;
    
    UPROPERTY(Transient)
    TArray<FSHMaterialPropertyControlHandler> MaterialPropertyControlHandlers;
    
public:
    SHPROTO_API FSHDynamicPostProcessHandler();
};

