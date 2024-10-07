#pragma once
#include "CoreMinimal.h"
#include "ESHFleshLipFlyingAnimInstanceLocomotionState.generated.h"

UENUM(BlueprintType)
enum class ESHFleshLipFlyingAnimInstanceLocomotionState : uint8 {
    Idle,
    IdleRotation,
    MovementStrafing,
};

