#pragma once
#include "CoreMinimal.h"
#include "EDaiObjectStatus.generated.h"

UENUM(BlueprintType)
enum class EDaiObjectStatus : uint8 {
    Unknown,
    Running,
    Success,
    Failure,
    Aborted,
};

