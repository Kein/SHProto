#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "SpawnPointData.h"
#include "SpawnPointsConfig.generated.h"

UCLASS(BlueprintType)
class SIMPLESPAWNPOINTS_API USpawnPointsConfig : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FSpawnPointData> Spawnpoints;
    
    USpawnPointsConfig();

};

