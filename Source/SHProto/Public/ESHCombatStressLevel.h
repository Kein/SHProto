#pragma once
#include "CoreMinimal.h"
#include "ESHCombatStressLevel.generated.h"

UENUM(BlueprintType)
enum class ESHCombatStressLevel : uint8 {
    Undefined,
    None,
    Light,
    Medium,
    High,
};

