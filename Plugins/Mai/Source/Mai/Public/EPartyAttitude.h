#pragma once
#include "CoreMinimal.h"
#include "EPartyAttitude.generated.h"

UENUM(BlueprintType)
enum class EPartyAttitude : uint8 {
    Unknown,
    Friendly,
    Neutral,
    Hostile,
};

