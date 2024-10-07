#pragma once
#include "CoreMinimal.h"
#include "ETalkState.generated.h"

UENUM(BlueprintType)
enum class ETalkState : uint8 {
    INVALID,
    RUNNING,
    COMPLETED,
    BREAKED,
    PAUSED,
    PREPARED,
    SUSPENDED,
};

