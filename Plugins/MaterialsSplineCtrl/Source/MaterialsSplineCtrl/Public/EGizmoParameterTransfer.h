#pragma once
#include "CoreMinimal.h"
#include "EGizmoParameterTransfer.generated.h"

UENUM(BlueprintType)
enum class EGizmoParameterTransfer : uint8 {
    GPS_Sphere,
    GPS_Plane,
    GPS_Rotation,
};

