#pragma once
#include "CoreMinimal.h"
#include "ELevelStreamingTaskWorkType.generated.h"

UENUM(BlueprintType)
enum class ELevelStreamingTaskWorkType : uint8 {
    None,
    LoadVisible,
    LoadHidden,
    Unload,
    Show,
    Hide,
};

