#pragma once
#include "CoreMinimal.h"
#include "EActionStopReason.generated.h"

UENUM(BlueprintType)
enum class EActionStopReason : uint8 {
    ABORT,
    EXIT,
    SKIP,
};

