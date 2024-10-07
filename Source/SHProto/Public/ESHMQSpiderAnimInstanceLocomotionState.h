#pragma once
#include "CoreMinimal.h"
#include "ESHMQSpiderAnimInstanceLocomotionState.generated.h"

UENUM(BlueprintType)
enum class ESHMQSpiderAnimInstanceLocomotionState : uint8 {
    Idle,
    IdleRotation,
    Movement,
};

