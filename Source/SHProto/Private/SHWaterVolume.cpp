#include "SHWaterVolume.h"

ASHWaterVolume::ASHWaterVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bColored = true;
}

bool ASHWaterVolume::IsRuntimeSimulationDisabledBy(const UObject* Object) const {
    return false;
}

bool ASHWaterVolume::IsRuntimeSimulationDisabled() const {
    return false;
}

bool ASHWaterVolume::IsPointWithin(FVector Point) const {
    return false;
}

void ASHWaterVolume::DisableRuntimeSimulation(const bool IsDisable, const UObject* Object) {
}


