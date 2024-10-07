#include "BlooberAkReverbVolume.h"
#include "BlooberAkLateReverbComponent.h"

ABlooberAkReverbVolume::ABlooberAkReverbVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<UBlooberAkLateReverbComponent>(TEXT("LateReverb"))) {
    this->LateReverbComponent->SetupAttachment(RootComponent);
}


