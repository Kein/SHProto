#pragma once
#include "CoreMinimal.h"
#include "ESHAnimNotifyEnableBonePhysicsForceApplicationTarget.generated.h"

UENUM(BlueprintType)
enum class ESHAnimNotifyEnableBonePhysicsForceApplicationTarget : uint8 {
    SpecifiedBone,
    SpecifiedBoneAndAllChildren,
    SpecifiedBoneAndDirectChildren,
    OnlyAllChildren,
    OnlyDirectChildren,
};

