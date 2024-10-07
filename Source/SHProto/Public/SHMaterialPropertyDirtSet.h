#pragma once
#include "CoreMinimal.h"
#include "ESHFXDirtState.h"
#include "SHMaterialPropertyControlHandler.h"
#include "SHMaterialPropertyDirtSet.generated.h"

class UMaterialInstanceDynamic;

USTRUCT(BlueprintType)
struct FSHMaterialPropertyDirtSet {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(SaveGame)
    ESHFXDirtState CurrentDirtState;
    
    UPROPERTY(Transient)
    UMaterialInstanceDynamic* MaterialDynamic;
    
    UPROPERTY(Transient)
    TArray<FSHMaterialPropertyControlHandler> MaterialPropertyHandlers;
    
public:
    SHPROTO_API FSHMaterialPropertyDirtSet();
};

