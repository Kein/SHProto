#pragma once
#include "CoreMinimal.h"
#include "EMaiAttackRange.generated.h"

UENUM(BlueprintType)
enum class EMaiAttackRange : uint8 {
    InRange,
    TooClose,
    TooFar,
    Closer,
    Farther,
};

