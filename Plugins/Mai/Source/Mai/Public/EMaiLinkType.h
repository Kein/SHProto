#pragma once
#include "CoreMinimal.h"
#include "EMaiLinkType.generated.h"

UENUM(BlueprintType)
namespace EMaiLinkType {
    enum Type {
        Internal,
        External,
        BetweenSurfaces,
        PointLink,
    };
}

