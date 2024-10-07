#pragma once
#include "CoreMinimal.h"
#include "EIntegerFlowOperation2.generated.h"

UENUM(BlueprintType)
enum class EIntegerFlowOperation2 : uint8 {
    Set,
    Increment,
    Decrement,
};

