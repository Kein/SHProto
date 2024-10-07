#pragma once
#include "CoreMinimal.h"
#include "EMaiOnMeshState.generated.h"

UENUM(BlueprintType)
enum class EMaiOnMeshState : uint8 {
    Unknown,
    OnMesh,
    OffMesh,
};

