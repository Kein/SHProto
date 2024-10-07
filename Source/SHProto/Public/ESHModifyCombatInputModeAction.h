#pragma once
#include "CoreMinimal.h"
#include "ESHModifyCombatInputModeAction.generated.h"

UENUM(BlueprintType)
enum class ESHModifyCombatInputModeAction : uint8 {
    None,
    MeleeAttack,
    Dodge,
    RangedAim,
    UseHealItem,
    RangedReload,
    ChangeWeapon,
};

