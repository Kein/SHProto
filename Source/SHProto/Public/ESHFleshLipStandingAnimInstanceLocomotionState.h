#pragma once
#include "CoreMinimal.h"
#include "ESHFleshLipStandingAnimInstanceLocomotionState.generated.h"

UENUM(BlueprintType)
enum class ESHFleshLipStandingAnimInstanceLocomotionState : uint8 {
    Idle,
    IdleRotation,
    MovementStrafing,
    MovementChargeStrafing,
};

