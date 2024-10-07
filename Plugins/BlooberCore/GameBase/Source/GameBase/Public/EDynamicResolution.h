#pragma once
#include "CoreMinimal.h"
#include "EDynamicResolution.generated.h"

UENUM(BlueprintType)
enum class EDynamicResolution : uint8 {
    Off,
    LockOn30,
    LockOn60,
};

