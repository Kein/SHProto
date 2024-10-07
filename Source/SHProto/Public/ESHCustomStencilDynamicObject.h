#pragma once
#include "CoreMinimal.h"
#include "ESHCustomStencilDynamicObject.generated.h"

UENUM(BlueprintType)
enum class ESHCustomStencilDynamicObject : uint8 {
    None,
    MiscMoveable,
    SingleDoor,
    DoubleDoor_LeftWing,
    DoubleDoor_RightWing,
    Pushable,
    RTVAGD,
    Savepoint,
    InvestigatedMapItem,
};

