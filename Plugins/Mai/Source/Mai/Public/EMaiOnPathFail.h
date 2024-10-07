#pragma once
#include "CoreMinimal.h"
#include "EMaiOnPathFail.generated.h"

UENUM(BlueprintType)
enum class EMaiOnPathFail : uint8 {
    Nothing,
    Teleport,
    MoveDirect,
};

