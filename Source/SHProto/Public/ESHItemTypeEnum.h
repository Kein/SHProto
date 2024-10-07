#pragma once
#include "CoreMinimal.h"
#include "ESHItemTypeEnum.generated.h"

UENUM(BlueprintType)
enum class ESHItemTypeEnum : uint8 {
    None,
    Other,
    MeleeWeapon,
    RangedWeapon,
    Ammunition,
    MiscEquipment,
    KeyObject,
    Consumable,
    Map,
    Memo,
    Personal,
    Reflection,
};

