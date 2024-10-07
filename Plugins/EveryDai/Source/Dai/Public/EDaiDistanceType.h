#pragma once
#include "CoreMinimal.h"
#include "EDaiDistanceType.generated.h"

UENUM(BlueprintType)
enum class EDaiDistanceType : uint8 {
    Distance2D5,
    Distance3D,
    Distance2D,
    DistanceUp,
    MAX,
};

