#pragma once
#include "CoreMinimal.h"
#include "EActivityOutcome.generated.h"

UENUM(BlueprintType)
enum class EActivityOutcome : uint8 {
    Completed,
    Failed,
    Cancelled,
};

