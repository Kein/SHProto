#pragma once
#include "CoreMinimal.h"
#include "EVPDataSourceChannel.generated.h"

UENUM(BlueprintType)
enum class EVPDataSourceChannel : uint8 {
    Red,
    Green,
    Blue,
    Alpha,
};

