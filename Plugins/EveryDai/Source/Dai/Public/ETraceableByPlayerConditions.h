#pragma once
#include "CoreMinimal.h"
#include "ETraceableByPlayerConditions.generated.h"

UENUM(BlueprintType)
enum class ETraceableByPlayerConditions : uint8 {
    CONDITION_AT_LEAST_1,
    CONDITION_AT_LEAST_1_OF_4,
    CONDITION_AT_LEAST_1_OF_2,
};

