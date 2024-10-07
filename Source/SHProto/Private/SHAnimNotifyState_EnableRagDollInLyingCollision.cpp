#include "SHAnimNotifyState_EnableRagDollInLyingCollision.h"

USHAnimNotifyState_EnableRagDollInLyingCollision::USHAnimNotifyState_EnableRagDollInLyingCollision() {
    this->bLyingOnBack = false;
    this->EnableBelowTopExtensionAlpha = 0.90f;
    this->EnableBelowBottomExtensionAlpha = 0.90f;
    this->bAlwaysEnableRagDollAtEnd = true;
    this->bRagDollIsOptionalWhenReducingPhysicsUse = true;
}


