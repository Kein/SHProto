#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "MaiSpawnerData.generated.h"

class AMaiSpawner;

USTRUCT(BlueprintType)
struct MAI_API FMaiSpawnerData {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleInstanceOnly)
    TWeakObjectPtr<AMaiSpawner> _Spawner;
    
    UPROPERTY(SaveGame, VisibleInstanceOnly)
    int8 _Active;
    
    UPROPERTY(SaveGame, VisibleInstanceOnly)
    int8 _AutoSpawn;
    
    UPROPERTY(SaveGame, VisibleInstanceOnly)
    int8 _Spawned;
    
    UPROPERTY(VisibleInstanceOnly)
    FName _SpawnerTag;
    
    UPROPERTY(SaveGame, VisibleInstanceOnly)
    FGameplayTag _ActorTag;
    
    UPROPERTY(SaveGame, VisibleInstanceOnly)
    TSoftObjectPtr<AMaiSpawner> _SoftRef;
    
    FMaiSpawnerData();
};

