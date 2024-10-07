#pragma once
#include "CoreMinimal.h"
#include "EPointSelection.generated.h"

UENUM(BlueprintType)
enum class EPointSelection : uint8 {
    PathOnly,
    Random,
    Nearest,
    Farthest,
};

