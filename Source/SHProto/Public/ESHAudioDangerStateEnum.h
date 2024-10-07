#pragma once
#include "CoreMinimal.h"
#include "ESHAudioDangerStateEnum.generated.h"

UENUM(BlueprintType)
enum class ESHAudioDangerStateEnum : uint8 {
    NotSet,
    Calm,
    Danger,
    Combat,
};

