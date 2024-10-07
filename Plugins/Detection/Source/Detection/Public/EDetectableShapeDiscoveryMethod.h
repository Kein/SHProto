#pragma once
#include "CoreMinimal.h"
#include "EDetectableShapeDiscoveryMethod.generated.h"

UENUM(BlueprintType)
enum class EDetectableShapeDiscoveryMethod : uint8 {
    None,
    Manual,
    Automatic,
};

