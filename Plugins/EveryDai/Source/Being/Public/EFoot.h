#pragma once
#include "CoreMinimal.h"
#include "EFoot.generated.h"

UENUM(BlueprintType)
enum class EFoot : uint8 {
    LEFT,
    RIGHT,
    LEFT_BACK,
    RIGHT_BACK,
    ANY,
    COUNT,
};

