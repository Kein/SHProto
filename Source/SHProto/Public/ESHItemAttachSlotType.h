#pragma once
#include "CoreMinimal.h"
#include "ESHItemAttachSlotType.generated.h"

UENUM(BlueprintType)
enum class ESHItemAttachSlotType : uint8 {
    None,
    RightHand,
    LeftHand,
};

