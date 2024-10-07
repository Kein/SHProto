#pragma once
#include "CoreMinimal.h"
#include "EMergeSamplesAction.generated.h"

UENUM(BlueprintType)
enum class EMergeSamplesAction : uint8 {
    Average,
    TakeMin,
    TakeMax,
};

