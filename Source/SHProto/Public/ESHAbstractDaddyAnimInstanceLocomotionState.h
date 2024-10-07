#pragma once
#include "CoreMinimal.h"
#include "ESHAbstractDaddyAnimInstanceLocomotionState.generated.h"

UENUM(BlueprintType)
enum class ESHAbstractDaddyAnimInstanceLocomotionState : uint8 {
    Idle,
    IdleRotation,
    Movement,
    MovementRotation,
};

