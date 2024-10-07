#pragma once
#include "CoreMinimal.h"
#include "EMaiSelectionMethod.generated.h"

UENUM(BlueprintType)
enum class EMaiSelectionMethod : uint8 {
    NEAREST,
    HIGHEST_WEIGHT,
    PERCENTAGE_CHANCE,
};

