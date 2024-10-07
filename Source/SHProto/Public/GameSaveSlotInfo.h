#pragma once
#include "CoreMinimal.h"
#include "SaveSlotInfo.h"
#include "ECombatDifficulty.h"
#include "EPuzzlesDifficulty.h"
#include "ESavePointFilterId.h"
#include "GameSaveSlotInfo.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FGameSaveSlotInfo : public FSaveSlotInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    uint8 IsNewGamePlus: 1;
    
    UPROPERTY(BlueprintReadOnly)
    FName SavePointName;
    
    UPROPERTY(BlueprintReadOnly)
    TSoftObjectPtr<UTexture2D> SavePointImage;
    
    UPROPERTY(BlueprintReadOnly)
    ECombatDifficulty CombatDifficulty;
    
    UPROPERTY(BlueprintReadOnly)
    EPuzzlesDifficulty PuzzlesDifficulty;
    
    UPROPERTY(Transient)
    ESavePointFilterId Filter;
    
    SHPROTO_API FGameSaveSlotInfo();
};

