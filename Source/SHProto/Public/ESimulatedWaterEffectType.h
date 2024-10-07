#pragma once
#include "CoreMinimal.h"
#include "ESimulatedWaterEffectType.generated.h"

UENUM(BlueprintType)
enum class ESimulatedWaterEffectType : uint8 {
    DEFAULT,
    BLOOD,
    PUKE_ACID,
};

