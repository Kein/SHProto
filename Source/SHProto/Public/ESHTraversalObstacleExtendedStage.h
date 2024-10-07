#pragma once
#include "CoreMinimal.h"
#include "ESHTraversalObstacleExtendedStage.generated.h"

UENUM(BlueprintType)
enum class ESHTraversalObstacleExtendedStage : uint8 {
    None,
    Start,
    Fail,
    Success,
    End,
};

