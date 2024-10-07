#include "BlooberAkSpatialAudioVolume.h"
#include "BlooberAkLateReverbComponent.h"

ABlooberAkSpatialAudioVolume::ABlooberAkSpatialAudioVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<UBlooberAkLateReverbComponent>(TEXT("LateReverb"))) {
    this->Room = NULL;
    this->LateReverb->SetupAttachment(RootComponent);
}


