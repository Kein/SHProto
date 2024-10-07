#pragma once
#include "CoreMinimal.h"
#include "EMoveDirection.generated.h"

UENUM(BlueprintType)
enum class EMoveDirection : uint8 {
    ANY,
    ONLY_FORWARD,
    ONLY_BACKWARD,
};

