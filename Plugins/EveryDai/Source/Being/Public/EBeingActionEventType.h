#pragma once
#include "CoreMinimal.h"
#include "EBeingActionEventType.generated.h"

UENUM(BlueprintType)
enum class EBeingActionEventType : uint8 {
    Unknown,
    FailedToStart,
    Started,
    Abort,
    Finished,
    Push,
    Pop,
};

