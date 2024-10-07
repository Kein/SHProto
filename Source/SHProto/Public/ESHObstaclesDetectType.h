#pragma once
#include "CoreMinimal.h"
#include "ESHObstaclesDetectType.generated.h"

UENUM(BlueprintType)
enum class ESHObstaclesDetectType : uint8 {
    None,
    AllBlock,
    CenterOnlyBlock,
    SidesOnlyBlock,
    LeftOnlyBlock,
    RightOnlyBlock,
};

