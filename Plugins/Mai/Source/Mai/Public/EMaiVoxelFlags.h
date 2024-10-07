#pragma once
#include "CoreMinimal.h"
#include "EMaiVoxelFlags.generated.h"

UENUM(BlueprintType)
enum class EMaiVoxelFlags : uint8 {
    UNKNOWN,
    TOP,
    BOTTOM,
    NORTH = 4,
    SOUTH = 8,
    WEST = 16,
    EAST = 32,
    FILLED = 64,
    INVALID = 128,
};

