#pragma once
#include "CoreMinimal.h"
#include "ESHSimpleDirectionType.generated.h"

UENUM(BlueprintType)
enum class ESHSimpleDirectionType : uint8 {
    Undefined,
    Front,
    Right,
    Left,
    Back,
};

