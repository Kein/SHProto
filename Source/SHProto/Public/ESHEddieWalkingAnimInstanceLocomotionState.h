#pragma once
#include "CoreMinimal.h"
#include "ESHEddieWalkingAnimInstanceLocomotionState.generated.h"

UENUM(BlueprintType)
enum class ESHEddieWalkingAnimInstanceLocomotionState : uint8 {
    Idle,
    IdleRotation,
    MovementStrafing,
};

