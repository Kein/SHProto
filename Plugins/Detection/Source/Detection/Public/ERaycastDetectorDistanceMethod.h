#pragma once
#include "CoreMinimal.h"
#include "ERaycastDetectorDistanceMethod.generated.h"

UENUM(BlueprintType)
enum class ERaycastDetectorDistanceMethod : uint8 {
    HitLocation,
    DetectableLocation,
};

