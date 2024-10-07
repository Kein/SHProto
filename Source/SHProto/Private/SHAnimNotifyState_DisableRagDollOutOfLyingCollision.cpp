#include "SHAnimNotifyState_DisableRagDollOutOfLyingCollision.h"

USHAnimNotifyState_DisableRagDollOutOfLyingCollision::USHAnimNotifyState_DisableRagDollOutOfLyingCollision() {
    this->BlendOutTime = 0.25f;
    this->BlendOutCurveBend = 0.25f;
    this->bLyingOnBack = false;
    this->DisableAboveTopExtensionAlpha = 0.95f;
    this->DisableAboveBottomExtensionAlpha = 0.95f;
    this->bAlwaysDisableRagDollAtEnd = true;
}


