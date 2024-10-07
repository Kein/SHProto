#pragma once
#include "CoreMinimal.h"
#include "EActivityFlags.generated.h"

UENUM(BlueprintType)
enum class EActivityFlags : uint8 {
    Hidden,
    AvailableByDefault,
    IsRequiredForCompletion,
    IsOnlineMultiplay,
    IsTeamActivity,
};

