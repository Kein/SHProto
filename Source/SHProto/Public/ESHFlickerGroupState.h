#pragma once
#include "CoreMinimal.h"
#include "ESHFlickerGroupState.generated.h"

UENUM(BlueprintType)
enum class ESHFlickerGroupState : uint8 {
    Enabled,
    Mixed,
    Disabled,
};

