#pragma once
#include "CoreMinimal.h"
#include "ESHMaryAnimInstanceMovementState.generated.h"

UENUM(BlueprintType)
enum class ESHMaryAnimInstanceMovementState : uint8 {
    Flying,
    Spider,
    Caged,
    Hanging,
    Fallen,
    WallMount,
};

