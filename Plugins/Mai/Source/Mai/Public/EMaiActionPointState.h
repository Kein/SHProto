#pragma once
#include "CoreMinimal.h"
#include "EMaiActionPointState.generated.h"

UENUM(BlueprintType)
enum class EMaiActionPointState : uint8 {
    None,
    Goto,
    Reached,
    Used,
};

