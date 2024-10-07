#pragma once
#include "CoreMinimal.h"
#include "ESHInputBufferAction.generated.h"

UENUM(BlueprintType)
enum class ESHInputBufferAction : uint8 {
    None,
    MeleeAttack,
    Dodge,
    RangedFire,
    RangedReload,
    ChangeWeapon,
    UseHealItem,
};

