#pragma once
#include "CoreMinimal.h"
#include "EMovementLegOnGround.generated.h"

UENUM(BlueprintType)
enum class EMovementLegOnGround : uint8 {
    LeftOnGround,
    LeftClosing,
    RightClosing,
    RightOnGround,
};

