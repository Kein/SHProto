#pragma once
#include "CoreMinimal.h"
#include "EDLCState.generated.h"

UENUM(BlueprintType)
enum class EDLCState : uint8 {
    Undefined,
    NotOwned,
    Owned,
    Unknown,
};

