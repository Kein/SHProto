#pragma once
#include "CoreMinimal.h"
#include "EMaiAggroStance.generated.h"

UENUM(BlueprintType)
enum class EMaiAggroStance : uint8 {
    Neutral,
    Cautious,
    Aggressive,
    Max,
};

