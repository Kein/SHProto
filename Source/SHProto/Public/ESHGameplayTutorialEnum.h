#pragma once
#include "CoreMinimal.h"
#include "ESHGameplayTutorialEnum.generated.h"

UENUM(BlueprintType)
enum class ESHGameplayTutorialEnum : uint8 {
    Invalid,
    CombatMelee = 10,
    HealQuick,
    HealHold,
    CombatRanged,
    RangedReload,
    SwitchWeaponPistol,
    SwitchWeaponShotgun,
    SwitchWeaponRifle,
    StruggleWithMashInput,
    StruggleWithHoldInput = 20,
    Interaction = 100,
    Inventory,
    Map,
    Flashlight = 104,
    Sprint,
    BreakGlass,
    ItemsCombine,
    BreakWall = 109,
    ScribbleEvent,
    TraversalCrawl,
    TraversalSqueeze,
    TraversalVault,
    TraversalClimb,
    TraversalJumpDown,
    BoatNavigation_Keyboard = 120,
    BoatNavigation_Gamepad,
    Scripted_PreTraversal = 200,
    Scripted_BreakWall,
    Scripted_BreakGlass,
};

