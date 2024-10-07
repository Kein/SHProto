#pragma once
#include "CoreMinimal.h"
#include "GFXQuality.generated.h"

UENUM(BlueprintType)
enum class GFXQuality : uint8 {
    Low,
    Medium,
    High,
    Epic,
    Advanced,
    MAX,
    Autodetect = MAX,
};

