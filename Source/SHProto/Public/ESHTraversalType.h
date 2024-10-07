#pragma once
#include "CoreMinimal.h"
#include "ESHTraversalType.generated.h"

UENUM(BlueprintType)
enum class ESHTraversalType : uint8 {
    Undefined,
    Crawl,
    Squeeze,
    Vault,
    Climb,
};

