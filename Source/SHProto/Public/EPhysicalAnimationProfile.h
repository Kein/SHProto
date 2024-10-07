#pragma once
#include "CoreMinimal.h"
#include "EPhysicalAnimationProfile.generated.h"

UENUM()
enum class EPhysicalAnimationProfile : int32 {
    Invalid,
    Disabled,
    Default,
    Death,
    TakeHit,
    LostBalance,
    ReturnFromHit,
    Walk,
    PistolAim,
    GunRecoil,
    Melee1HAim,
    Melee1HAttack,
    MeleeHitSth,
};

