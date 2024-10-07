#pragma once
#include "CoreMinimal.h"
#include "ESHFriendAnimInstanceLocomotionState.generated.h"

UENUM(BlueprintType)
enum class ESHFriendAnimInstanceLocomotionState : uint8 {
    Idle,
    IdleRotation,
    Movement,
};

