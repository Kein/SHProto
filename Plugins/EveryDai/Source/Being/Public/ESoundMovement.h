#pragma once
#include "CoreMinimal.h"
#include "ESoundMovement.generated.h"

UENUM(BlueprintType)
enum class ESoundMovement : uint8 {
    SNEAK,
    WALK,
    RUN,
    FALL,
    IN_PLACE,
    COUNT,
};

