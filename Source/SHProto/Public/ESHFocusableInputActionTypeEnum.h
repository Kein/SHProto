#pragma once
#include "CoreMinimal.h"
#include "ESHFocusableInputActionTypeEnum.generated.h"

UENUM(BlueprintType)
enum class ESHFocusableInputActionTypeEnum : uint8 {
    Invalid,
    NavigateUp,
    NavigateDown,
    NavigateRight,
    NavigateLeft,
    NavigateLeftAnalogVertical,
    NavigateLeftAnalogHorizontal,
    PickUpPlace,
    Transcription,
    Rotate,
    ToggleMiniInv,
    Quit,
};

