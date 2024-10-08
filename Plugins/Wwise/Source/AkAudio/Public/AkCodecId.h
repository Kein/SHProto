#pragma once
#include "CoreMinimal.h"
#include "AkCodecId.generated.h"

UENUM(BlueprintType)
enum class AkCodecId : uint8 {
    None,
    PCM,
    ADPCM,
    XMA,
    Vorbis,
    ATRAC9 = 12,
    OpusNX = 17,
    AkOpus = 19,
    AkOpusWEM,
};

