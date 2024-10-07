#pragma once
#include "CoreMinimal.h"
#include "ECombatDifficulty.generated.h"

UENUM(BlueprintType)
enum class ECombatDifficulty : uint8 {
    Easy,
    Medium,
    Hard,
};

