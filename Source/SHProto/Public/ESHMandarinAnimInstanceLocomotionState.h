#pragma once
#include "CoreMinimal.h"
#include "ESHMandarinAnimInstanceLocomotionState.generated.h"

UENUM(BlueprintType)
enum class ESHMandarinAnimInstanceLocomotionState : uint8 {
    Idle,
    IdleRotation,
    Movement,
};

