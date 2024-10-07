#pragma once
#include "CoreMinimal.h"
#include "ESHFloatOperationType.generated.h"

UENUM(BlueprintType)
enum class ESHFloatOperationType : uint8 {
    Undefined,
    Equals,
    NotEquals,
    Lower,
    LowerOrEquals,
    Greater,
    GreaterOrEquals,
};

