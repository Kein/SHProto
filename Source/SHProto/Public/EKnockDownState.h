#pragma once
#include "CoreMinimal.h"
#include "EKnockDownState.generated.h"

UENUM(BlueprintType)
enum class EKnockDownState : uint8 {
    NotKnockDown,
    FallingDown,
    LayingDown,
    GettingUp,
    StandAfterKnockDown,
};

