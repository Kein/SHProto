#pragma once
#include "CoreMinimal.h"
#include "EGameOverCause.generated.h"

UENUM(BlueprintType)
enum class EGameOverCause : uint8 {
    CharacterDeath,
    MariaDeath,
};

