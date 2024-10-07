#pragma once
#include "CoreMinimal.h"
#include "EHipsDirection.generated.h"

UENUM(BlueprintType)
enum class EHipsDirection : uint8 {
    Forward,
    ForwardLeft,
    ForwardRight,
    Back,
    BackLeft,
    BackRight,
};

