#pragma once
#include "CoreMinimal.h"
#include "ESHDoorStateEnum.generated.h"

UENUM(BlueprintType)
enum class ESHDoorStateEnum : uint8 {
    Undefined,
    Close,
    Middle,
    Open,
};

