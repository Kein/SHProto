#pragma once
#include "CoreMinimal.h"
#include "ESHAbstractDaddyAnimInstanceStandingLocomotionState.generated.h"

UENUM(BlueprintType)
enum class ESHAbstractDaddyAnimInstanceStandingLocomotionState : uint8 {
    Idle,
    IdleRotation,
    MovementStrafing,
    MovementCharging,
};

