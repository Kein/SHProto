#pragma once
#include "CoreMinimal.h"
#include "ESHAnimEndType.generated.h"

UENUM(BlueprintType)
enum class ESHAnimEndType : uint8 {
    Undefined,
    Error,
    Success,
    Stop,
};

