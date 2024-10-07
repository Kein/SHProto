#pragma once
#include "CoreMinimal.h"
#include "EBeingWalkType.generated.h"

UENUM(BlueprintType)
enum class EBeingWalkType : uint8 {
    WALK,
    RUN,
    CROUCH,
    NONE,
};

