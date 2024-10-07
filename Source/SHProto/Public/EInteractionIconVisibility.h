#pragma once
#include "CoreMinimal.h"
#include "EInteractionIconVisibility.generated.h"

UENUM(BlueprintType)
enum class EInteractionIconVisibility : uint8 {
    Off,
    Icon,
    ActionKey,
};

