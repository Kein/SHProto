#pragma once
#include "CoreMinimal.h"
#include "ESkeletonRagdollProfileTickResult.generated.h"

UENUM(BlueprintType)
enum class ESkeletonRagdollProfileTickResult : uint8 {
    Work,
    End,
    Paused,
    Inactive,
};

