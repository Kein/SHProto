#pragma once
#include "CoreMinimal.h"
#include "EBeingActionFailHandling.generated.h"

UENUM(BlueprintType)
namespace EBeingActionFailHandling {
    enum Type {
        RequireSuccess,
        IgnoreFailure,
    };
}

