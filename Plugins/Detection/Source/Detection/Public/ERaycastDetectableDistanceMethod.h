#pragma once
#include "CoreMinimal.h"
#include "ERaycastDetectableDistanceMethod.generated.h"

UENUM(BlueprintType)
enum class ERaycastDetectableDistanceMethod : uint8 {
    Detector,
    HitLocation,
    DetectableLocation,
};

