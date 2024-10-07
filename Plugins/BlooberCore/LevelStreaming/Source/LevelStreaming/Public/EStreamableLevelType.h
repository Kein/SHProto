#pragma once
#include "CoreMinimal.h"
#include "EStreamableLevelType.generated.h"

UENUM(BlueprintType)
enum class EStreamableLevelType : uint8 {
    Unknown,
    Normal,
    LightingScenario,
};

