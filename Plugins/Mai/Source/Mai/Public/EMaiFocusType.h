#pragma once
#include "CoreMinimal.h"
#include "EMaiFocusType.generated.h"

UENUM(BlueprintType)
enum class EMaiFocusType : uint8 {
    HeadOnly,
    BodyOnly,
    Full,
};

