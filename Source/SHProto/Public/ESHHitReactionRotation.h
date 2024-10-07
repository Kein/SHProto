#pragma once
#include "CoreMinimal.h"
#include "ESHHitReactionRotation.generated.h"

UENUM(BlueprintType)
enum class ESHHitReactionRotation : uint8 {
    None,
    FromCurrent,
    RotateTowardsAttacker,
    RotateTowardsHitLocation,
    RotateTowardsForce,
};

