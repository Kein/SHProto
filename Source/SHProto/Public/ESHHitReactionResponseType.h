#pragma once
#include "CoreMinimal.h"
#include "ESHHitReactionResponseType.generated.h"

UENUM(BlueprintType)
enum class ESHHitReactionResponseType : uint8 {
    Unknown,
    Twitch,
    Normal,
    Stagger,
    Falter,
    Knockdown,
    Death,
    MAX,
};

