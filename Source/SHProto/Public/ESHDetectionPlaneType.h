#pragma once
#include "CoreMinimal.h"
#include "ESHDetectionPlaneType.generated.h"

UENUM(BlueprintType)
enum class ESHDetectionPlaneType : uint8 {
    Up,
    Right,
    Forward,
};

