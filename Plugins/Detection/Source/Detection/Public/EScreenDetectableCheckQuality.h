#pragma once
#include "CoreMinimal.h"
#include "EScreenDetectableCheckQuality.generated.h"

UENUM(BlueprintType)
enum class EScreenDetectableCheckQuality : uint8 {
    Center,
    Simple,
    Complex,
};

