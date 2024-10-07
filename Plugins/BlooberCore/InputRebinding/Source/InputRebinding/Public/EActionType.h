#pragma once
#include "CoreMinimal.h"
#include "EActionType.generated.h"

UENUM(BlueprintType)
enum class EActionType : uint8 {
    Action,
    Axis,
    Axis_Plus,
    Axis_Minus,
};

