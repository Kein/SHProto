#include "SHFlashlightControlVolume.h"

ASHFlashlightControlVolume::ASHFlashlightControlVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bColored = true;
    this->BlendDistance = 0.00f;
    this->BlendDistanceOnly2D = true;
    this->VolumePriority = 0;
}

void ASHFlashlightControlVolume::SetDisabled(const bool bInDisabled, const UObject* Object) {
}

bool ASHFlashlightControlVolume::IsDisabled() const {
    return false;
}


