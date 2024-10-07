#pragma once
#include "CoreMinimal.h"
#include "ETrophyType.generated.h"

UENUM(BlueprintType)
enum class ETrophyType : uint8 {
    Platinum,
    Gold,
    Silver,
    Bronze,
    NoTrophy,
};

