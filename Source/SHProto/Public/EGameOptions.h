#pragma once
#include "CoreMinimal.h"
#include "EGameOptions.generated.h"

UENUM(BlueprintType)
enum class EGameOptions : uint8 {
    None,
    NewGameMode,
    CombatDifficulty,
    PuzzlesDifficulty,
    GameplayPreset,
    PlayerSkin,
    VisualMode,
};

