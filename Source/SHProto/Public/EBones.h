#pragma once
#include "CoreMinimal.h"
#include "EBones.generated.h"

UENUM(BlueprintType)
enum class EBones : uint8 {
    Root,
    Pelvis,
    Spine_01,
    Spine_02,
    Spine_04,
    Chest,
    ThighL,
    ShinL,
    FootL,
    ThighR,
    ShinR,
    FootR,
    ClavicleL,
    UpperArmL,
    ForearmL,
    HandL,
    ClavicleR,
    UpperArmR,
    ForearmR,
    HandR,
    Neck_01,
    Neck_02,
    Head,
};

