#pragma once
#include "CoreMinimal.h"
#include "ESHAnimActionExeStatus.generated.h"

UENUM(BlueprintType)
enum class ESHAnimActionExeStatus : uint8 {
    Invalid,
    Initialized,
    Pending,
    Finished,
};

