#pragma once
#include "CoreMinimal.h"
#include "ESHFleshLipAnimInstanceTransformationState.generated.h"

UENUM(BlueprintType)
enum class ESHFleshLipAnimInstanceTransformationState : uint8 {
    Flying,
    Hanging,
    Fallen,
    Standing,
};

