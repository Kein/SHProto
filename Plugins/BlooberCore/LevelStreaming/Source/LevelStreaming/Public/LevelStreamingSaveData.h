#pragma once
#include "CoreMinimal.h"
#include "DataLayerStatus.h"
#include "LevelStreamingActorData.h"
#include "LevelStreamingRuntimeActorData.h"
#include "LevelStreamingSaveData.generated.h"

USTRUCT()
struct LEVELSTREAMING_API FLevelStreamingSaveData {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FLevelStreamingActorData> Actors;
    
    UPROPERTY()
    TArray<FLevelStreamingRuntimeActorData> RuntimeActors;
    
    UPROPERTY()
    TArray<FDataLayerStatus> DataLayerStates;
    
    FLevelStreamingSaveData();
};

