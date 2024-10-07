#include "SHFXFrozenBreathSubcomp.h"

USHFXFrozenBreathSubcomp::USHFXFrozenBreathSubcomp() {
    this->Settings = NULL;
    this->FrozenBreathComponent = NULL;
}

void USHFXFrozenBreathSubcomp::SetFrozenBreathBlocked(const bool IsBlock, const UObject* Object) {
}

bool USHFXFrozenBreathSubcomp::IsInFreezingZone() const {
    return false;
}

bool USHFXFrozenBreathSubcomp::IsFrozenBreathBlockedBy(const UObject* Object) const {
    return false;
}

bool USHFXFrozenBreathSubcomp::IsFrozenBreathBlocked() const {
    return false;
}

int32 USHFXFrozenBreathSubcomp::GetFreezingVolumesCount() const {
    return 0;
}


