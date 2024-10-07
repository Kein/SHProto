#include "SHAkReverbVolume.h"
#include "SHAkLateReverbComponent.h"

ASHAkReverbVolume::ASHAkReverbVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<USHAkLateReverbComponent>(TEXT("LateReverb"))) {
    this->LateReverbComponent->SetupAttachment(RootComponent);
}


