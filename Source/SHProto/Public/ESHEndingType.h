#pragma once
#include "CoreMinimal.h"
#include "ESHEndingType.generated.h"

UENUM(BlueprintType)
enum class ESHEndingType : uint8 {
    Invalid,
    Leave,
    InWater,
    Maria,
    TrueLeave = 11,
    TrueInWater,
    Rebirth,
    DogEnding,
    UFOEnding,
};

