#pragma once
#include "CoreMinimal.h"
#include "ESHCreeperAnimInstanceLocomotionState.generated.h"

UENUM(BlueprintType)
enum class ESHCreeperAnimInstanceLocomotionState : uint8 {
    Idle,
    IdleRotation,
    Movement,
};

