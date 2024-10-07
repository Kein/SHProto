#pragma once
#include "CoreMinimal.h"
#include "EReticleVisibility.generated.h"

UENUM(BlueprintType)
enum class EReticleVisibility : uint8 {
    Off,
    Minimal,
    Dynamic,
};

