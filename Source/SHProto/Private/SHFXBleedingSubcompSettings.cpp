#include "SHFXBleedingSubcompSettings.h"

USHFXBleedingSubcompSettings::USHFXBleedingSubcompSettings() {
    this->EnableBleeding = true;
    this->BleedingShowBelowHP = 70;
    this->BleedingDelaySpawnWhenMaxHP = 5.00f;
    this->BleedingDelaySpawnWhenMinHP = 0.30f;
    this->BleedingDistanceToCount = 15.00f;
    this->BleedingParticleTemplate = NULL;
    this->BleedingRootSocketName = TEXT("pelvis_bn");
}


