#pragma once
#include "CoreMinimal.h"
#include "EMaiNodePathExistanceQueryType.generated.h"

UENUM(BlueprintType)
namespace EMaiNodePathExistanceQueryType {
    enum Type {
        Raycast,
        PathFinding,
    };
}

