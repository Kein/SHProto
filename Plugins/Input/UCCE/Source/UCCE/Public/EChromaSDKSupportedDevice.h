#pragma once
#include "CoreMinimal.h"
#include "EChromaSDKSupportedDevice.generated.h"

UENUM(BlueprintType)
enum class EChromaSDKSupportedDevice : uint8 {
    Keyboard,
    Mouse,
    Headset,
    Mousepad,
    Keypad,
    ChromaLink,
};

