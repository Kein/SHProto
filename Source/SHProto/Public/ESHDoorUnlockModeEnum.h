#pragma once
#include "CoreMinimal.h"
#include "ESHDoorUnlockModeEnum.generated.h"

UENUM(BlueprintType)
enum class ESHDoorUnlockModeEnum : uint8 {
    None,
    ItemUnlock,
    InteractToggle,
};

