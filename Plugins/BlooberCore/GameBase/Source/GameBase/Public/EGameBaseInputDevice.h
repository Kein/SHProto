#pragma once
#include "CoreMinimal.h"
#include "EGameBaseInputDevice.generated.h"

UENUM(BlueprintType)
enum class EGameBaseInputDevice : uint8 {
    MouseOrKeyboard,
    Gamepad,
};

