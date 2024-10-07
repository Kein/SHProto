#pragma once
#include "CoreMinimal.h"
#include "ESwarmCreeperState.generated.h"

UENUM(BlueprintType)
enum class ESwarmCreeperState : uint8 {
    MOVE,
    IDLE,
    RUNOUT,
    DISTURBANCE,
    FOLLOWING,
};

