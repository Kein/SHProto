#pragma once
#include "CoreMinimal.h"
#include "ESHHealthStateEnum.generated.h"

UENUM(BlueprintType)
enum class ESHHealthStateEnum : uint8 {
    Default,
    LowInjury,
    HeavyInjury,
    Criticalnjury,
    Death,
};

