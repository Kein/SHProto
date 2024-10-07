#pragma once
#include "CoreMinimal.h"
#include "EStreamableLevelStatus.generated.h"

UENUM(BlueprintType)
enum class EStreamableLevelStatus : uint8 {
    Unloaded,
    LoadedHidden,
    LoadedVisible,
};

