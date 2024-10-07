#pragma once
#include "CoreMinimal.h"
#include "EDaiFloatOperator.generated.h"

UENUM(BlueprintType)
enum class EDaiFloatOperator : uint8 {
    Mul,
    Add,
    Div,
    Sub,
    Set,
};

