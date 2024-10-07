#pragma once
#include "CoreMinimal.h"
#include "ESHMannequinAnimInstanceStandingLocomotionState.generated.h"

UENUM(BlueprintType)
enum class ESHMannequinAnimInstanceStandingLocomotionState : uint8 {
    Idle,
    IdleRotation,
    MovementStrafing,
};

