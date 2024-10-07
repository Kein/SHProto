#pragma once
#include "CoreMinimal.h"
#include "ERange.generated.h"

UENUM(BlueprintType)
enum class ERange : uint8 {
    DEFAULT,
    IGNORED,
    OVERRIDEN,
    COUNT,
};

