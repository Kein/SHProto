#include "SHFXBleedingSubcomp.h"

USHFXBleedingSubcomp::USHFXBleedingSubcomp() {
    this->Settings = NULL;
}

void USHFXBleedingSubcomp::SetBleedingBlocked(const bool IsBlock, const UObject* Object) {
}

bool USHFXBleedingSubcomp::IsBleedingBlockedBy(const UObject* Object) const {
    return false;
}

bool USHFXBleedingSubcomp::IsBleedingBlocked() const {
    return false;
}


