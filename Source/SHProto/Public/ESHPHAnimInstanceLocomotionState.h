#pragma once
#include "CoreMinimal.h"
#include "ESHPHAnimInstanceLocomotionState.generated.h"

UENUM(BlueprintType)
enum class ESHPHAnimInstanceLocomotionState : uint8 {
    Idle,
    Movement,
    TurnInPlace,
};

