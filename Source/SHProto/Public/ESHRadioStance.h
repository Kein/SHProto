#pragma once
#include "CoreMinimal.h"
#include "ESHRadioStance.generated.h"

UENUM(BlueprintType)
enum class ESHRadioStance : uint8 {
    Invalid,
    Calm,
    Danger,
    Aggressive,
};

