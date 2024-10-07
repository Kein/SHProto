#pragma once
#include "CoreMinimal.h"
#include "ELogMessageSeverity.generated.h"

UENUM(BlueprintType)
enum class ELogMessageSeverity : uint8 {
    CriticalError,
    Error,
    PerformanceWarning,
    Warning,
    Info,
};

