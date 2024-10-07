#include "AtmosphereCtrlVolume.h"

AAtmosphereCtrlVolume::AAtmosphereCtrlVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AtmosphereInterpolationTarget = NULL;
    this->AtmosphereInterpolationFactor = 0.00f;
    this->EditorInterpolationMode = EAIM_FromParameter;
}


