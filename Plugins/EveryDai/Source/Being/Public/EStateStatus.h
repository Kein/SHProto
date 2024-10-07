#pragma once
#include "CoreMinimal.h"
#include "EStateStatus.generated.h"

UENUM(BlueprintType)
enum class EStateStatus : uint8 {
    NotStarted,
    InProgress,
    Success,
    Failed,
    Aborted,
};

