#pragma once
#include "CoreMinimal.h"
#include "ESHMaterialPropertyControlType.generated.h"

UENUM(BlueprintType)
enum class ESHMaterialPropertyControlType : uint8 {
    ScalarValueDriven,
    ScalarCurveDriven,
    VectorValueDriven,
    VectorCurveDriven,
    TextureValueDriven,
    TextureCurveDriven,
};

