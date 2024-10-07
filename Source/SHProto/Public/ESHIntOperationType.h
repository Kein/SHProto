#pragma once
#include "CoreMinimal.h"
#include "ESHIntOperationType.generated.h"

UENUM(BlueprintType)
enum class ESHIntOperationType : uint8 {
    Undefined,
    Equals,
    NotEquals,
    Lower,
    LowerOrEquals,
    Greater,
    GreaterOrEquals,
};

