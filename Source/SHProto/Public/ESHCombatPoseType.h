#pragma once
#include "CoreMinimal.h"
#include "ESHCombatPoseType.generated.h"

UENUM(BlueprintType)
enum class ESHCombatPoseType : uint8 {
    None,
    Normal,
    Injured,
    InDanger = 5,
    InWater,
};

