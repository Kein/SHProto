#include "SHFleshLipTransformationState.h"

USHFleshLipTransformationState::USHFleshLipTransformationState() {
    this->FleshLipTransformationState = ESHFleshLipTransformationState::Flying;
    this->bMaintainRotation = false;
    this->bUseOverrides = false;
}

void USHFleshLipTransformationState::GetTransformationOverrides(bool& OutShouldBeUsed, FSHFleshLipTransformationStateCurves& OutCurves) const {
}

bool USHFleshLipTransformationState::GetShouldRotationBeMaintained() const {
    return false;
}

FVector USHFleshLipTransformationState::GetGrabPointSearchOffset() const {
    return FVector{};
}

ESHFleshLipTransformationState USHFleshLipTransformationState::GetFleshLipTransformationState() const {
    return ESHFleshLipTransformationState::Flying;
}


