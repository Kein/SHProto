#pragma once
#include "CoreMinimal.h"
#include "EConsumeAnalogEvent.generated.h"

UENUM(BlueprintType)
enum class EConsumeAnalogEvent : uint8 {
    WhenScrollingPossible,
    Always,
    Never,
};

