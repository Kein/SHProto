#pragma once
#include "CoreMinimal.h"
#include "EAudioProfile.generated.h"

UENUM(BlueprintType)
enum class EAudioProfile : uint8 {
    NighMode,
    Speakers,
    TVSpeakers,
    Headset,
};

