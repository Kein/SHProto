#pragma once
#include "CoreMinimal.h"
#include "EMaiSyncRotationMode.generated.h"

UENUM(BlueprintType)
enum class EMaiSyncRotationMode : uint8 {
    TowardsTheOwner,
    TowardsTheOther,
    UseOwnerRotation,
    UseOtherRotation,
};

