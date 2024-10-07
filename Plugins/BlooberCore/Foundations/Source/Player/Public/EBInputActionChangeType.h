#pragma once
#include "CoreMinimal.h"
#include "EBInputActionChangeType.generated.h"

UENUM(BlueprintType)
enum class EBInputActionChangeType : uint8 {
    Press,
    Release,
    Repeat,
};

