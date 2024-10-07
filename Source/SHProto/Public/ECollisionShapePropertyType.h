#pragma once
#include "CoreMinimal.h"
#include "ECollisionShapePropertyType.generated.h"

UENUM(BlueprintType)
enum class ECollisionShapePropertyType : uint8 {
    Line,
    Box,
    Sphere,
    Capsule,
};

