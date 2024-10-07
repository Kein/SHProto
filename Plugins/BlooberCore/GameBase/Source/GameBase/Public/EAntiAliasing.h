#pragma once
#include "CoreMinimal.h"
#include "EAntiAliasing.generated.h"

UENUM(BlueprintType)
enum class EAntiAliasing : uint8 {
    None,
    FXAA,
    TXAA,
    DLSS,
};

