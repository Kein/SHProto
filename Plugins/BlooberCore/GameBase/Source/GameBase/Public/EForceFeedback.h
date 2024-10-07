#pragma once
#include "CoreMinimal.h"
#include "EForceFeedback.generated.h"

UENUM(BlueprintType)
enum class EForceFeedback : uint8 {
    Off,
    Low,
    Medium,
    High,
};

