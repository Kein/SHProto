#pragma once
#include "CoreMinimal.h"
#include "EFpsCap.generated.h"

UENUM(BlueprintType)
enum class EFpsCap : uint8 {
    Unlimited,
    Fps30,
    Fps60,
};

