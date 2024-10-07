#pragma once
#include "CoreMinimal.h"
#include "EHubType.generated.h"

UENUM(BlueprintType)
enum class EHubType : uint8 {
    MANUAL,
    RANDOM,
    SELECTOR,
    SEQUENCE,
    LOOP,
};

