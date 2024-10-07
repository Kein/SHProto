#pragma once
#include "CoreMinimal.h"
#include "EMaiEnvTestPathfinding.generated.h"

UENUM(BlueprintType)
namespace EMaiEnvTestPathfinding {
    enum Type {
        PathExist,
        PathCost,
        PathLength,
    };
}

