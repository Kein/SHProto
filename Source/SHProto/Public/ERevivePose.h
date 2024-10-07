#pragma once
#include "CoreMinimal.h"
#include "ERevivePose.generated.h"

UENUM(BlueprintType)
enum class ERevivePose : uint8 {
    Back,
    Front,
    SideLeft,
    SideRight,
    Knee,
    Sit,
};

