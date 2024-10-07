#pragma once
#include "CoreMinimal.h"
#include "WorldPartition/DataLayer/DataLayerInstance.h"
#include "DataLayerStatus.generated.h"

class UDataLayerAsset;

USTRUCT(BlueprintType)
struct LEVELSTREAMING_API FDataLayerStatus {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UDataLayerAsset> Handle;
    
    UPROPERTY(EditAnywhere)
    EDataLayerRuntimeState State;
    
    FDataLayerStatus();
};

