#pragma once
#include "CoreMinimal.h"
#include "ESHGameplayMapDoorMode.generated.h"

UENUM(BlueprintType)
enum class ESHGameplayMapDoorMode : uint8 {
    NeverLocked,
    WasLocked,
};

