#pragma once
#include "CoreMinimal.h"
#include "ESuperResolution.generated.h"

UENUM(BlueprintType)
enum class ESuperResolution : uint8 {
    None,
    DLSS,
    FSR1,
    FSR3,
    TSR,
    XeSS,
};

