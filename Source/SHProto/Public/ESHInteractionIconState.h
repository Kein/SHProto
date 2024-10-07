#pragma once
#include "CoreMinimal.h"
#include "ESHInteractionIconState.generated.h"

UENUM(BlueprintType)
enum class ESHInteractionIconState : uint8 {
    Hidden,
    Visible,
    Focused,
    Used,
};

