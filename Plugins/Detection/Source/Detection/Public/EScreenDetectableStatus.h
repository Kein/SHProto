#pragma once
#include "CoreMinimal.h"
#include "EScreenDetectableStatus.generated.h"

UENUM(BlueprintType)
enum class EScreenDetectableStatus : uint8 {
    NotDetected,
    ScreenDetected,
    TraceDetected,
};

