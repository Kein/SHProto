#pragma once
#include "CoreMinimal.h"
#include "EVPDataEvaluatorType.generated.h"

UENUM(BlueprintType)
enum class EVPDataEvaluatorType : uint8 {
    TwoChannels,
    ThreeChannels,
    FourChannels,
};

