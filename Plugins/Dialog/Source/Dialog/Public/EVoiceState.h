#pragma once
#include "CoreMinimal.h"
#include "EVoiceState.generated.h"

UENUM(BlueprintType)
enum class EVoiceState : uint8 {
    NONE,
    INVALID,
    LOADING,
    READY,
    PLAYING,
    FINISHED,
};

