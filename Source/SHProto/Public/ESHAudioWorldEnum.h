#pragma once
#include "CoreMinimal.h"
#include "ESHAudioWorldEnum.generated.h"

UENUM(BlueprintType)
enum class ESHAudioWorldEnum : uint8 {
    World_FW,
    World_OW,
    NotSet,
};

