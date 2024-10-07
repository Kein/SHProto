#pragma once
#include "CoreMinimal.h"
#include "ESHPyramidHeadBossFightOutcomeEndingFactorValue.generated.h"

UENUM(BlueprintType)
enum class ESHPyramidHeadBossFightOutcomeEndingFactorValue : uint8 {
    Undefined,
    Default,
    Denied,
    Forced,
};

