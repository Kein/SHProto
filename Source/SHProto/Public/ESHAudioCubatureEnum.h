#pragma once
#include "CoreMinimal.h"
#include "ESHAudioCubatureEnum.generated.h"

UENUM(BlueprintType)
enum class ESHAudioCubatureEnum : uint8 {
    Indoor_Small,
    Indoor_Medium,
    Indoor_Large,
    Outdoor,
    NotSet,
};

