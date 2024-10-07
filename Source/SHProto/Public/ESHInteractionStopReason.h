#pragma once
#include "CoreMinimal.h"
#include "ESHInteractionStopReason.generated.h"

UENUM(BlueprintType)
enum class ESHInteractionStopReason : uint8 {
    Finished,
    NotVisible,
    Interrupted,
};

