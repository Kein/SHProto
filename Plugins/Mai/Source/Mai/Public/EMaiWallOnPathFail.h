#pragma once
#include "CoreMinimal.h"
#include "EMaiWallOnPathFail.generated.h"

UENUM(BlueprintType)
enum class EMaiWallOnPathFail : uint8 {
    Nothing,
    Teleport,
    MoveDirect,
};

