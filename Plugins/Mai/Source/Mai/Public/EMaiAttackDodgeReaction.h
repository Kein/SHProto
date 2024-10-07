#pragma once
#include "CoreMinimal.h"
#include "EMaiAttackDodgeReaction.generated.h"

UENUM(BlueprintType)
enum class EMaiAttackDodgeReaction : uint8 {
    Off,
    On,
    Notify,
    TimeToHitEnemy,
};

