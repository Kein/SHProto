#pragma once
#include "CoreMinimal.h"
#include "ESHMaryAnimInstanceLocomotionState.generated.h"

UENUM(BlueprintType)
enum class ESHMaryAnimInstanceLocomotionState : uint8 {
    Idle,
    IdleRotation,
    Movement,
    MovementRotation,
};

