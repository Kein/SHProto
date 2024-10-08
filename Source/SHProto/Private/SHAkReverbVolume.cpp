#include "SHAkReverbVolume.h"
#include "SHAkLateReverbComponent.h"

ASHAkReverbVolume::ASHAkReverbVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<USHAkLateReverbComponent>(TEXT("LateReverb"))) {
    // FIXME
    // this->LateReverbComponent->SetupAttachment(RootComponent);
}


