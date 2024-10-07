#pragma once
#include "CoreMinimal.h"
#include "EDetectableShapeDiscoveryScope.generated.h"

UENUM(BlueprintType)
enum class EDetectableShapeDiscoveryScope : uint8 {
    Children,
    Actor,
};

