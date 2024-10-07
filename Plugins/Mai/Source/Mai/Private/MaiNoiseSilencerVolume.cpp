#include "MaiNoiseSilencerVolume.h"
#include "MaiNoiseSilencerComponent.h"

AMaiNoiseSilencerVolume::AMaiNoiseSilencerVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bColored = true;
    this->NoiseSilencer = CreateDefaultSubobject<UMaiNoiseSilencerComponent>(TEXT("NoiseSilencer"));
}


