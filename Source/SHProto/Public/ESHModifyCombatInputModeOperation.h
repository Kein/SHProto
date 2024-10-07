#pragma once
#include "CoreMinimal.h"
#include "ESHModifyCombatInputModeOperation.generated.h"

UENUM(BlueprintType)
enum class ESHModifyCombatInputModeOperation : uint8 {
    None,
    Block,
    Unblock,
};

