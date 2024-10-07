#pragma once
#include "CoreMinimal.h"
#include "EMaiShapeType.generated.h"

UENUM(BlueprintType)
enum class EMaiShapeType : uint8 {
    None,
    Sphere,
    Box,
    Cylinder,
};

