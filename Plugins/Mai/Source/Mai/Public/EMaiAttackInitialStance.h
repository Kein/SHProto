#pragma once
#include "CoreMinimal.h"
#include "EMaiAttackInitialStance.generated.h"

UENUM(BlueprintType)
enum class EMaiAttackInitialStance : uint8 {
    Any,
    InPlace,
    InMotion,
};

