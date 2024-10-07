#pragma once
#include "CoreMinimal.h"
#include "EInteractionIconSize.generated.h"

UENUM(BlueprintType)
enum class EInteractionIconSize : uint8 {
    Tiny,
    Small,
    Default,
    Big,
    Huge,
};

