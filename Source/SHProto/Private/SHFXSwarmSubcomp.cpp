#include "SHFXSwarmSubcomp.h"

USHFXSwarmSubcomp::USHFXSwarmSubcomp() {
    this->Settings = NULL;
}

bool USHFXSwarmSubcomp::IsInSwarmZone() const {
    return false;
}

TArray<ASHSwarmVolume*> USHFXSwarmSubcomp::GetRegisteredSwarmVolumes() const {
    return TArray<ASHSwarmVolume*>();
}

int32 USHFXSwarmSubcomp::GetRegisteredSwarmVolumeCount() const {
    return 0;
}

int32 USHFXSwarmSubcomp::GetCurrentZoneCount() const {
    return 0;
}


