#pragma once
#include "CoreMinimal.h"
#include "ESHEddieLimpingAnimInstanceLocomotionState.generated.h"

UENUM(BlueprintType)
enum class ESHEddieLimpingAnimInstanceLocomotionState : uint8 {
    Idle,
    IdleRotation,
    Movement,
    MovementRotation,
};

