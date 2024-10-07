#pragma once
#include "CoreMinimal.h"
#include "ESHSecondaryTargetType.generated.h"

UENUM(BlueprintType)
enum class ESHSecondaryTargetType : uint8 {
    Undefined,
    Glass,
    Wall,
};

