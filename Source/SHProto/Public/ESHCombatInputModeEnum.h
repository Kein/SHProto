#pragma once
#include "CoreMinimal.h"
#include "ESHCombatInputModeEnum.generated.h"

UENUM(BlueprintType)
enum class ESHCombatInputModeEnum : uint8 {
    None,
    AnyAllowOverride,
    EquipWeapon,
    UnequipWeapon,
    ChangeWeapon,
    ReceiveDamage,
    ReceiveDamageAllowOverride,
    ReceiveSoftDamage,
    ReceiveContinuousDamage,
    ReceiveStunDamage,
    MeleeAttack,
    MeleeAttackComboReady,
    RangedAim,
    RangedFire,
    RangedReload,
    Dodge,
    SynchedAction,
    Struggle,
    FallToFloorTransition,
    UseItem,
    QuickTurn,
};

