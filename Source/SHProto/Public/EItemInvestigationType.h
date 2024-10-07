#pragma once
#include "CoreMinimal.h"
#include "EItemInvestigationType.generated.h"

UENUM(BlueprintType)
enum class EItemInvestigationType : uint8 {
    InputRotation,
    InputWithFlip,
    NoInputIdle,
    NoInputFlipOnly,
};

