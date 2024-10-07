#pragma once
#include "CoreMinimal.h"
#include "ESHMenuTutorialEnum.generated.h"

UENUM(BlueprintType)
enum class ESHMenuTutorialEnum : uint8 {
    HealQuick,
    HealingAmount,
    TraversalVault,
    BreakGlass,
    CombatMelee,
    CombatRanged,
    Radio,
    Map,
};

