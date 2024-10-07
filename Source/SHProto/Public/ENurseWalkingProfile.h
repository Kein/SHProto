#pragma once
#include "CoreMinimal.h"
#include "ENurseWalkingProfile.generated.h"

UENUM(BlueprintType)
enum class ENurseWalkingProfile : uint8 {
    SleepWalking,
    Attacking,
    Aggressive,
};

