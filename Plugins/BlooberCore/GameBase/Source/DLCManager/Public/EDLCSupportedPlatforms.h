#pragma once
#include "CoreMinimal.h"
#include "EDLCSupportedPlatforms.generated.h"

UENUM(BlueprintType)
enum class EDLCSupportedPlatforms : uint8 {
    Ps5,
    XOne,
    Steam,
    Eos,
    Gog,
    MacOS,
    Linux,
};

