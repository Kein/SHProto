#pragma once
#include "CoreMinimal.h"
#include "ESHNavigationLoopOption.generated.h"

UENUM(BlueprintType)
enum class ESHNavigationLoopOption : uint8 {
    NoLoop,
    LoopBothAxis,
    LoopOnlyHorizontal,
    LoopOnlyVertical,
};

