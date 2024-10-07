#pragma once
#include "CoreMinimal.h"
#include "ESHQueuedSpawnRequestPriority.generated.h"

UENUM(BlueprintType)
enum class ESHQueuedSpawnRequestPriority : uint8 {
    None,
    Low = 50,
    Medium = 100,
    High = 150,
    VeryHigh = 200,
    Must = 250,
};

