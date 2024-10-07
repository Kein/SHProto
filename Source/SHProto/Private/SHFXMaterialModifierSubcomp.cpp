#include "SHFXMaterialModifierSubcomp.h"

USHFXMaterialModifierSubcomp::USHFXMaterialModifierSubcomp() {
    this->Settings = NULL;
}

void USHFXMaterialModifierSubcomp::SetMaterialLayerBlocked(const bool IsBlock, const UObject* Object) {
}

bool USHFXMaterialModifierSubcomp::IsMaterialLayerBlockedBy(const UObject* Object) const {
    return false;
}

bool USHFXMaterialModifierSubcomp::IsMaterialLayerBlocked() const {
    return false;
}

int32 USHFXMaterialModifierSubcomp::GetDynamicMaterialsCount() const {
    return 0;
}


