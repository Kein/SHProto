#pragma once
#include "CoreMinimal.h"
#include "ESHReceivedDamageGrade.generated.h"

UENUM(BlueprintType)
enum class ESHReceivedDamageGrade : uint8 {
    Undefined,
    Normal,
    Stun,
    Continous,
    Soft,
};

