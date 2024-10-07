#pragma once
#include "CoreMinimal.h"
#include "EScreenWideMode.generated.h"

UENUM(BlueprintType)
enum class EScreenWideMode : uint8 {
    Undefined = 255,
    Normal = 0,
    UltraWide,
    SuperUltraWide,
};

