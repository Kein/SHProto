#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "SHSpawnpointItemsDataSet.h"
#include "SHSpawnpointsItemsDatabase.generated.h"

UCLASS(BlueprintType)
class SHPROTO_API USHSpawnpointsItemsDatabase : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FSHSpawnpointItemsDataSet> CummulativeSpawnpoints;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FSHSpawnpointItemsDataSet> OthersSpawnpoints;
    
    USHSpawnpointsItemsDatabase();

};

