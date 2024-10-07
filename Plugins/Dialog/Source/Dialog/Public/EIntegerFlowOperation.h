#pragma once
#include "CoreMinimal.h"
#include "EIntegerFlowOperation.generated.h"

UENUM(BlueprintType)
enum class EIntegerFlowOperation : uint8 {
    IsEqual,
    IsNotEqual,
    IsGreater,
    IsGreaterOrEqual,
    IsLess,
    IsLessOrEqual,
};

