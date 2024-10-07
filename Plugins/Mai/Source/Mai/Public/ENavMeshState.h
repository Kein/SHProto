#pragma once
#include "CoreMinimal.h"
#include "ENavMeshState.generated.h"

UENUM(BlueprintType)
enum class ENavMeshState : uint8 {
    None,
    Loaded,
    Built,
    Ready,
};

