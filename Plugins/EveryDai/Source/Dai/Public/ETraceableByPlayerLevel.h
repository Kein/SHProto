#pragma once
#include "CoreMinimal.h"
#include "ETraceableByPlayerLevel.generated.h"

UENUM(BlueprintType)
enum class ETraceableByPlayerLevel : uint8 {
    TRACE_MINIMAL,
    TRACE_NORMAL,
    TRACE_MEDIUM,
    TRACE_HIGH,
};

