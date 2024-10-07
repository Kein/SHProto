#pragma once
#include "CoreMinimal.h"
#include "EVerticalStance.generated.h"

UENUM(BlueprintType)
enum class EVerticalStance : uint8 {
    ON_GROUND,
    ON_STAIRS,
    ON_LADDER,
};

