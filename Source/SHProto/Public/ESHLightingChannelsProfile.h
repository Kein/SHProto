#pragma once
#include "CoreMinimal.h"
#include "ESHLightingChannelsProfile.generated.h"

UENUM(BlueprintType)
enum class ESHLightingChannelsProfile : uint8 {
    None,
    Everything,
    AllButCharacterPlay,
    OnlyCharacterPlay,
    AllButMaria,
    OnlyMaria,
};

