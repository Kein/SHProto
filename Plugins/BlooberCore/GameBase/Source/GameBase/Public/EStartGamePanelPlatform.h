#pragma once
#include "CoreMinimal.h"
#include "EStartGamePanelPlatform.generated.h"

UENUM(BlueprintType)
enum class EStartGamePanelPlatform : uint8 {
    All,
    PcOnly,
    ConsoleOnly,
    Ps5Only,
    XboxOnly,
};

