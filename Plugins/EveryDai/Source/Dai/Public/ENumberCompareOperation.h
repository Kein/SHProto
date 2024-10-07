#pragma once
#include "CoreMinimal.h"
#include "ENumberCompareOperation.generated.h"

UENUM(BlueprintType)
enum class ENumberCompareOperation : uint8 {
    IsEqual,
    IsNotEqual,
    IsGreater,
    IsGreaterOrEqual,
    IsLess,
    IsLessOrEqual,
};

