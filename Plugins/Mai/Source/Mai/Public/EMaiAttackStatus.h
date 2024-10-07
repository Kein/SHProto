#pragma once
#include "CoreMinimal.h"
#include "EMaiAttackStatus.generated.h"

UENUM(BlueprintType)
enum class EMaiAttackStatus : uint8 {
    Undefined,
    InProgress,
    Aborted,
    Finished,
};

