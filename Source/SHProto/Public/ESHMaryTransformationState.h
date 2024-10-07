#pragma once
#include "CoreMinimal.h"
#include "ESHMaryTransformationState.generated.h"

UENUM(BlueprintType)
enum class ESHMaryTransformationState : uint8 {
    Flying,
    Hanging,
    Caged,
    CagedLow,
    Fallen,
    WallMount,
};

