#pragma once
#include "CoreMinimal.h"
#include "SHMaterialPropertyControlHandler.generated.h"

class UMaterialInstanceDynamic;

USTRUCT(BlueprintType)
struct FSHMaterialPropertyControlHandler {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    UMaterialInstanceDynamic* DynamicMaterial;
    
public:
    SHPROTO_API FSHMaterialPropertyControlHandler();
};

