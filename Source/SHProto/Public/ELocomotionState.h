#pragma once
#include "CoreMinimal.h"
#include "ELocomotionState.generated.h"

UENUM(BlueprintType)
enum class ELocomotionState : uint8 {
    Idle,
    Move,
};

