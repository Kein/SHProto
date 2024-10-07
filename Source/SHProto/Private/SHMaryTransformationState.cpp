#include "SHMaryTransformationState.h"

USHMaryTransformationState::USHMaryTransformationState() {
    this->MaryTransformationState = ESHMaryTransformationState::Flying;
    this->bMaintainRotation = false;
    this->bUseOverrides = false;
}

void USHMaryTransformationState::GetTransformationOverrides(bool& OutShouldBeUsed, FSHMaryTransformationStateCurves& OutCurves) const {
}

bool USHMaryTransformationState::GetShouldRotationBeMaintained() const {
    return false;
}

ESHMaryTransformationState USHMaryTransformationState::GetMaryTransformationState() const {
    return ESHMaryTransformationState::Flying;
}

FVector USHMaryTransformationState::GetGrabPointSearchOffset() const {
    return FVector{};
}


