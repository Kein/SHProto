#pragma once
#include "CoreMinimal.h"
#include "EMaiDifficultyLevel.generated.h"

UENUM(BlueprintType)
enum class EMaiDifficultyLevel : uint8 {
    NONE,
    Story,
    VeryEasy,
    Easy,
    Easier,
    Default,
    Harder,
    Hard,
    VeryHard,
    Hell,
    COUNT,
};

