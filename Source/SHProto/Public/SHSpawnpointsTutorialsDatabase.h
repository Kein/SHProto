#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "SHSpawnpointTutorialsDataSet.h"
#include "SHSpawnpointsTutorialsDatabase.generated.h"

UCLASS(BlueprintType)
class SHPROTO_API USHSpawnpointsTutorialsDatabase : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FSHSpawnpointTutorialsDataSet> CummulativeSpawnpoints;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FSHSpawnpointTutorialsDataSet> OthersSpawnpoints;
    
    USHSpawnpointsTutorialsDatabase();

};

