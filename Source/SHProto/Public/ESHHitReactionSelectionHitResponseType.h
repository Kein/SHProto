#pragma once
#include "CoreMinimal.h"
#include "ESHHitReactionSelectionHitResponseType.generated.h"

UENUM(BlueprintType)
enum class ESHHitReactionSelectionHitResponseType : uint8 {
    Unknown,
    Twitch,
    Normal,
    Stagger,
    Falter,
    Knockdown,
    MAX,
};

