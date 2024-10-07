#pragma once
#include "CoreMinimal.h"
#include "EGsaOptionFlags.generated.h"

UENUM(BlueprintType)
enum class EGsaOptionFlags : uint8 {
    PCOnly,
    ConsoleOnly,
    CustomType,
    NonEditable,
    Advanced,
    PostApply,
    Preset,
};

