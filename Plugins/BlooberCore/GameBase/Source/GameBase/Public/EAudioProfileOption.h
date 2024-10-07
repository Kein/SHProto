#pragma once
#include "CoreMinimal.h"
#include "EAudioProfileOption.generated.h"

UENUM(BlueprintType)
enum class EAudioProfileOption : uint8 {
    Speakers,
    TVSpeakers,
    Headset,
};

