#pragma once
#include "CoreMinimal.h"
#include "EMaiWallFollowingStatus.generated.h"

UENUM(BlueprintType)
namespace EMaiWallFollowingStatus {
    enum Type {
        Idle,
        Waiting,
        Paused,
        Moving,
    };
}

