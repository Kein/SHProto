#pragma once
#include "CoreMinimal.h"
#include "ESHInteractionInputAxis.generated.h"

UENUM(BlueprintType)
enum class ESHInteractionInputAxis : uint8 {
    Horizontal,
    Vertical,
    Both,
};

