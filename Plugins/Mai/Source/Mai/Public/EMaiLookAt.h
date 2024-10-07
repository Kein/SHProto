#pragma once
#include "CoreMinimal.h"
#include "EMaiLookAt.generated.h"

UENUM(BlueprintType)
enum class EMaiLookAt : uint8 {
    ACTOR,
    COMPONENT,
    LOCATION,
    ROTATION,
    COUNT,
};

