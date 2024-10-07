#pragma once
#include "CoreMinimal.h"
#include "EMaiRestorePhase.generated.h"

UENUM(BlueprintType)
enum class EMaiRestorePhase : uint8 {
    None,
    RestoreActorDeffered,
    RestoreActorFinish,
    RestoreController,
    RestoreFinalize,
    RestoreFinished,
};

