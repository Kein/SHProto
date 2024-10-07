#pragma once
#include "CoreMinimal.h"
#include "SHItemAndQuantityHandle.h"
#include "SHSpawnpointItemsDataSet.generated.h"

USTRUCT(BlueprintType)
struct FSHSpawnpointItemsDataSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString SpawnPointName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FSHItemAndQuantityHandle> CummulativeItems;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FSHItemAndQuantityHandle> RemoveFromCummulativeItems;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FSHItemAndQuantityHandle> ThisSpawnpointOnlyItems;
    
    SHPROTO_API FSHSpawnpointItemsDataSet();
};

