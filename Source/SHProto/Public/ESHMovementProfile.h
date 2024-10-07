#pragma once
#include "CoreMinimal.h"
#include "ESHMovementProfile.generated.h"

UENUM(BlueprintType)
enum class ESHMovementProfile : uint8 {
    Invalid,
    Weapon,
    WeaponLowHealth,
    Exterior,
    ExteriorInDanger,
    ExteriorLowHealth,
    ExteriorSprint,
    Interior,
    InteriorInDanger,
    InteriorLowHealth,
    InteriorSprint,
};

