#pragma once
#include "CoreMinimal.h"
#include "ESHWeaponTypeEnum.generated.h"

UENUM(BlueprintType)
enum class ESHWeaponTypeEnum : uint8 {
    Other,
    Shooting,
    Melee,
};

