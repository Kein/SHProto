#pragma once
#include "CoreMinimal.h"
#include "EWidgetState.generated.h"

UENUM(BlueprintType)
enum class EWidgetState : uint8 {
    Normal,
    Disabled,
    Hovered,
    Pressed,
};

