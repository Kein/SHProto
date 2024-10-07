#pragma once
#include "CoreMinimal.h"
#include "ESHFleshLipTransformationState.generated.h"

UENUM(BlueprintType)
enum class ESHFleshLipTransformationState : uint8 {
    Flying,
    Hanging,
    Fallen,
    Standing,
};

