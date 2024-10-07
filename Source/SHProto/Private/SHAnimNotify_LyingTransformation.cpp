#include "SHAnimNotify_LyingTransformation.h"

USHAnimNotify_LyingTransformation::USHAnimNotify_LyingTransformation() {
    this->TransformToLying = true;
    this->TransformationDuration = 1.00f;
    this->AwaitDelayedRootRotation = false;
    this->DisableAIDuringTransformation = true;
    this->LyingCapsuleAnchor = 0.00f;
    this->MaximumCapsuleExtensions = 1.00f;
}


