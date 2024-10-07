#pragma once
#include "CoreMinimal.h"
#include "EBInputRotationType.generated.h"

UENUM(BlueprintType)
enum class EBInputRotationType : uint8 {
    Scale,
    Delta,
};

