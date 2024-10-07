#include "SHEnvironmentSwitchVolume.h"

ASHEnvironmentSwitchVolume::ASHEnvironmentSwitchVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bColored = true;
    this->bSetEnviromentNoneSwitchOnLeave = false;
    this->bIsEnabledOnBegin = true;
}

void ASHEnvironmentSwitchVolume::SetEnabled(const UObject* Enabler, bool InEnabled) {
}


