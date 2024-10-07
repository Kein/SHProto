#include "SHFXWaterInteractionSubcomp.h"

USHFXWaterInteractionSubcomp::USHFXWaterInteractionSubcomp() {
    this->Settings = NULL;
}

void USHFXWaterInteractionSubcomp::SetWaterInteractionBlocked(const bool IsBlock, const UObject* Object) {
}

bool USHFXWaterInteractionSubcomp::IsWaterInteractionBlockedBy(const UObject* Object) const {
    return false;
}

bool USHFXWaterInteractionSubcomp::IsWaterInteractionBlocked() const {
    return false;
}

TArray<FSHXWaterIntersection> USHFXWaterInteractionSubcomp::GetCurrentIntersections() const {
    return TArray<FSHXWaterIntersection>();
}


