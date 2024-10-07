#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "MaiSpawnedActor.generated.h"

class AActor;
class AController;

USTRUCT(BlueprintType)
struct MAI_API FMaiSpawnedActor {
    GENERATED_BODY()
public:
    UPROPERTY(SaveGame, VisibleInstanceOnly)
    FGuid _ActorGuid;
    
    UPROPERTY(VisibleInstanceOnly)
    TWeakObjectPtr<AActor> _Actor;
    
    UPROPERTY(SaveGame, VisibleInstanceOnly)
    FGuid _ControllerGuid;
    
    UPROPERTY(VisibleInstanceOnly)
    TWeakObjectPtr<AController> _Controller;
    
    UPROPERTY(SaveGame, VisibleInstanceOnly)
    FGuid _SpawnerGuid;
    
    UPROPERTY(SaveGame, VisibleInstanceOnly)
    uint8 _IsHidden: 1;
    
    UPROPERTY(SaveGame, VisibleInstanceOnly)
    uint8 _OnPersisent: 1;
    
    UPROPERTY(SaveGame, VisibleInstanceOnly)
    uint8 _ResetTransform: 1;
    
    UPROPERTY(VisibleInstanceOnly)
    uint8 _HasFloor: 1;
    
    UPROPERTY(VisibleInstanceOnly)
    uint8 _Restoring: 1;
    
    UPROPERTY(SaveGame, VisibleInstanceOnly)
    FVector _LastLocation;
    
    UPROPERTY(SaveGame, VisibleInstanceOnly)
    TSoftObjectPtr<AActor> _SoftOrigin;
    
    UPROPERTY(VisibleInstanceOnly)
    AActor* _OriginCache;
    
    FMaiSpawnedActor();
};

