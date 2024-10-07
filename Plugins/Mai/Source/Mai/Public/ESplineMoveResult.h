#pragma once
#include "CoreMinimal.h"
#include "ESplineMoveResult.generated.h"

UENUM(BlueprintType)
enum class ESplineMoveResult : uint8 {
    UNKNOWN,
    COMPLETED,
    BREAKED,
    FAILED,
};

