#pragma once
#include "CoreMinimal.h"
#include "EInputRebindingDevice.generated.h"

UENUM(BlueprintType)
enum class EInputRebindingDevice : uint8 {
    None,
    Any,
    MouseAndKeyboard,
    Pad,
};

