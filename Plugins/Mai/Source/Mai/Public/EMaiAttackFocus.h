#pragma once
#include "CoreMinimal.h"
#include "EMaiAttackFocus.generated.h"

UENUM(BlueprintType)
enum class EMaiAttackFocus : uint8 {
    Manual,
    AllTime,
    TillLastHit,
    ToFirstBlow,
};

