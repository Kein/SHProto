#include "SHMusicRTPCVolume.h"

ASHMusicRTPCVolume::ASHMusicRTPCVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bColored = true;
    this->bIsEnabledOnBegin = true;
}

void ASHMusicRTPCVolume::SetEnabled(const UObject* Enabler, bool InEnabled) {
}


