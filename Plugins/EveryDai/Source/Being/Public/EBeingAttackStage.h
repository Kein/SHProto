#pragma once
#include "CoreMinimal.h"
#include "EBeingAttackStage.generated.h"

UENUM(BlueprintType)
enum class EBeingAttackStage : uint8 {
    UNKNOWN_STAGE,
    PREPARATION_STAGE,
    HIT_STAGE,
    RECOVERY_STAGE,
    COUNT,
};

