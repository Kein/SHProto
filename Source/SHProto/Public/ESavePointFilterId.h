#pragma once
#include "CoreMinimal.h"
#include "ESavePointFilterId.generated.h"

UENUM(BlueprintType)
enum class ESavePointFilterId : uint8 {
    All,
    Hospital,
    Labyrinth,
    Prison,
    Hotel,
};

