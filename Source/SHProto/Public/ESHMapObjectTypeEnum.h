#pragma once
#include "CoreMinimal.h"
#include "ESHMapObjectTypeEnum.generated.h"

UENUM(BlueprintType)
enum class ESHMapObjectTypeEnum : uint8 {
    None,
    Objective,
    Puzzle,
    Door,
    DoorAttachment,
    Collectable,
    Obstacle,
    Ladder,
    SavePoint,
    Pushable,
    TextHint,
    HintSign,
};

