#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "LevelStreamingSaveData.h"
#include "StreamableLevelHandle.h"
#include "LevelStatus.h"
#include "SaveDataStreaming.generated.h"

USTRUCT()
struct FSaveDataStreaming {
    GENERATED_BODY()
public:
    UPROPERTY()
    bool HasPlayerLocation;
    
    UPROPERTY()
    FTransform PlayerLocation;
    
    UPROPERTY()
    FGuid SpawnpointGuid;
    
    UPROPERTY()
    FLevelStreamingSaveData LevelStreaming;
    
    UPROPERTY()
    TArray<FLevelStatus> TargetLevelsStates;
    
    UPROPERTY()
    FStreamableLevelHandle PersistentLevelHandle;
    
    GAMEBASE_API FSaveDataStreaming();
};

