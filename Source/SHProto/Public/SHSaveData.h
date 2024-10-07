#pragma once
#include "CoreMinimal.h"
#include "SaveData.h"
#include "SaveDataStreaming.h"
#include "LevelStreamingActorData.h"
#include "ECombatDifficulty.h"
#include "EPuzzlesDifficulty.h"
#include "SHSaveData.generated.h"

USTRUCT(BlueprintType)
struct FSHSaveData : public FSaveData {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    FLevelStreamingActorData PlayerData;
    
    UPROPERTY(Transient)
    FSaveDataStreaming StreamingData;
    
    UPROPERTY(Transient)
    FName SavePointName;
    
    UPROPERTY(Transient)
    ECombatDifficulty CombatDifficulty;
    
    UPROPERTY(Transient)
    EPuzzlesDifficulty PuzzlesDifficulty;
    
    SHPROTO_API FSHSaveData();
};

