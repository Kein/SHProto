#pragma once
#include "CoreMinimal.h"
#include "AtmoCtrlMaterialInstanceDynamicCached.generated.h"

class UMaterialInstanceDynamic;

USTRUCT(BlueprintType)
struct FAtmoCtrlMaterialInstanceDynamicCached {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UMaterialInstanceDynamic* Material;
    
public:
    POSTPROCESSVOLUMEEX_API FAtmoCtrlMaterialInstanceDynamicCached();
};

