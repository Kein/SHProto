#pragma once
#include "CoreMinimal.h"
#include "ESHAIBehaviors.generated.h"

UENUM(BlueprintType)
enum class ESHAIBehaviors : uint8 {
    Unknown,
    Default,
    WalksOnGraph,
    KeepsClose,
    GoesTo,
    Leads,
    Interested,
    Waits,
    InDanger,
    InCombat,
    PassiveAction,
    CustomBehaviour,
};

