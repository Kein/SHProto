#include "SHMusicSwitchVolume.h"

ASHMusicSwitchVolume::ASHMusicSwitchVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bColored = true;
    this->bSetMusicSwitchOnLeave = false;
    this->bIsEnabledOnBegin = true;
}

void ASHMusicSwitchVolume::SetEnabled(const UObject* Enabler, bool InEnabled) {
}


