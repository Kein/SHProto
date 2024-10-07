#pragma once
#include "CoreMinimal.h"
#include "ESHGameplayInputModeEnum.generated.h"

UENUM(BlueprintType)
enum class ESHGameplayInputModeEnum : uint8 {
    Default,
    Disabled,
    Combat,
    AnimAction,
    GameMenu,
};

