#pragma once
#include "CoreMinimal.h"
#include "EMaiSenseType.generated.h"

UENUM(BlueprintType)
enum class EMaiSenseType : uint8 {
    Any,
    Sight,
    Hearing,
    Pain,
    Smell,
    Touch,
    The6thSense,
    COUNT,
};

