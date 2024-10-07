#pragma once
#include "CoreMinimal.h"
#include "ELogCustomVerbosity.generated.h"

UENUM(BlueprintType)
enum class ELogCustomVerbosity : uint8 {
    NoLogging,
    Fatal,
    Error,
    Warning,
    Display,
    Log,
    Verbose,
    VeryVerbose,
    All,
};

