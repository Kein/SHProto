#pragma once
#include "CoreMinimal.h"
#include "ESHNurseAnimInstanceLocomotionState.generated.h"

UENUM(BlueprintType)
enum class ESHNurseAnimInstanceLocomotionState : uint8 {
    Idle,
    IdleRotation,
    Movement,
    MovementRotation,
};

