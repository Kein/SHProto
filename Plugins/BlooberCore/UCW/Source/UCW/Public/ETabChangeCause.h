#pragma once
#include "CoreMinimal.h"
#include "ETabChangeCause.generated.h"

UENUM(BlueprintType)
enum class ETabChangeCause : uint8 {
    UserInteraction,
    UserClickedOnTab,
    SetDirectly,
};

