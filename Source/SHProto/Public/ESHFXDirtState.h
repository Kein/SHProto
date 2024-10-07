#pragma once
#include "CoreMinimal.h"
#include "ESHFXDirtState.generated.h"

UENUM(BlueprintType)
enum class ESHFXDirtState : uint8 {
    Clean,
    Dirty,
    Dirtiest,
    DirtyArm,
    GooeyHand,
};

