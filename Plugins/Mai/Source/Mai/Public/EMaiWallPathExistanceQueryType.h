#pragma once
#include "CoreMinimal.h"
#include "EMaiWallPathExistanceQueryType.generated.h"

UENUM(BlueprintType)
namespace EMaiWallPathExistanceQueryType {
    enum Type {
        Raycast,
        PathFinding,
    };
}

