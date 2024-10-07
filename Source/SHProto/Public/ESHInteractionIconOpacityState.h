#pragma once
#include "CoreMinimal.h"
#include "ESHInteractionIconOpacityState.generated.h"

UENUM(BlueprintType)
enum class ESHInteractionIconOpacityState : uint8 {
    Hidden,
    Covered,
    Visible,
    Hovered,
};

