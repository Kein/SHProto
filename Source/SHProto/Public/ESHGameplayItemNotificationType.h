#pragma once
#include "CoreMinimal.h"
#include "ESHGameplayItemNotificationType.generated.h"

UENUM(BlueprintType)
enum class ESHGameplayItemNotificationType : uint8 {
    Consumed,
    Collected,
    Custom,
};

