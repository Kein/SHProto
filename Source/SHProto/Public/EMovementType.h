#pragma once
#include "CoreMinimal.h"
#include "EMovementType.generated.h"

UENUM(BlueprintType)
enum class EMovementType : uint8 {
    Stand,
    Walk,
    Jog,
    Run,
};

