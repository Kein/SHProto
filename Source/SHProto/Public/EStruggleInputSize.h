#pragma once
#include "CoreMinimal.h"
#include "EStruggleInputSize.generated.h"

UENUM(BlueprintType)
enum class EStruggleInputSize : uint8 {
    Tiny,
    Small,
    Default,
    Big,
    Huge,
};

