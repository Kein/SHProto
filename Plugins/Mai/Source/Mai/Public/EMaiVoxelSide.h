#pragma once
#include "CoreMinimal.h"
#include "EMaiVoxelSide.generated.h"

UENUM(BlueprintType)
namespace EMaiVoxelSide {
    enum Type {
        TOP,
        BOTTOM,
        NORTH,
        SOUTH,
        WEST,
        EAST,
        COUNT,
    };
}

