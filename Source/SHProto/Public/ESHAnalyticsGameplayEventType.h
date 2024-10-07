#pragma once
#include "CoreMinimal.h"
#include "ESHAnalyticsGameplayEventType.generated.h"

UENUM(BlueprintType)
enum class ESHAnalyticsGameplayEventType : uint8 {
    Undefined,
    GameFlow,
    ItemCollected,
    RangedFire,
    MeleeAttack,
    PlayerReceivedDamage,
    AICharacterDied,
};

