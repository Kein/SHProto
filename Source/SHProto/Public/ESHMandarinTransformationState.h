#pragma once
#include "CoreMinimal.h"
#include "ESHMandarinTransformationState.generated.h"

UENUM(BlueprintType)
enum class ESHMandarinTransformationState : uint8 {
    Hanging,
    Fallen,
    Climbing,
    Jumping,
    Dead,
};

