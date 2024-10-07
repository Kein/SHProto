#pragma once
#include "CoreMinimal.h"
#include "ESHLyingFigureAnimInstanceStandingLocomotionState.generated.h"

UENUM(BlueprintType)
enum class ESHLyingFigureAnimInstanceStandingLocomotionState : uint8 {
    Idle,
    IdleRotation,
    MovementStrafing,
};

