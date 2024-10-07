#pragma once
#include "CoreMinimal.h"
#include "ESHCameraProfile.generated.h"

UENUM(BlueprintType)
enum class ESHCameraProfile : uint8 {
    Invalid,
    Exterior,
    Interior,
    MaxCollision,
    ExteriorSprint,
    InteriorSprint,
};

