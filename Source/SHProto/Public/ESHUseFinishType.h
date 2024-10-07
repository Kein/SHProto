#pragma once
#include "CoreMinimal.h"
#include "ESHUseFinishType.generated.h"

UENUM(BlueprintType)
enum class ESHUseFinishType : uint8 {
    None,
    Success,
    Abort,
    Error,
};

