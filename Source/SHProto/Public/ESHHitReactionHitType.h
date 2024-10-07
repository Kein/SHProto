#pragma once
#include "CoreMinimal.h"
#include "ESHHitReactionHitType.generated.h"

UENUM(BlueprintType)
enum class ESHHitReactionHitType : uint8 {
    Directional,
    Surface,
    Radial,
};

