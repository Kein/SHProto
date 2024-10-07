#pragma once
#include "CoreMinimal.h"
#include "ESwarmFollowType.generated.h"

UENUM(BlueprintType)
enum class ESwarmFollowType : uint8 {
    CHOOSE_ONLY_CLOSEST,
    CHOOSE_ONLY_RANDOM,
    START_CLOSEST_FOLLOW_INDEX_ORDER,
    START_RANDOM_FOLLOW_INDEX_ORDER,
    START_CLOSEST_FOLLOW_INDEX_ORDER_REPEAT,
    START_RANDOM_FOLLOW_INDEX_ORDER_REPEAT,
};

