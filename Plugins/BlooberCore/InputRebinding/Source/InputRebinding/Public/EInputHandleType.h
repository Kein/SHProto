#pragma once
#include "CoreMinimal.h"
#include "EInputHandleType.generated.h"

UENUM(BlueprintType)
enum class EInputHandleType : uint8 {
    Action,
    Axis,
    Axis_Plus,
    Axis_Minus,
    Axis_2D,
};

