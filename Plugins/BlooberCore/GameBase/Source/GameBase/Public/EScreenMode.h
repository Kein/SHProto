#pragma once
#include "CoreMinimal.h"
#include "EScreenMode.generated.h"

UENUM(BlueprintType)
enum class EScreenMode : uint8 {
    Fullscreen,
    Borderless,
    Windowed,
};

