#include "SHAkSpatialAudioVolume.h"
#include "SHAkLateReverbComponent.h"
#include "SHAkRoomComponent.h"

ASHAkSpatialAudioVolume::ASHAkSpatialAudioVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<USHAkLateReverbComponent>(TEXT("LateReverb"))) {
    // FIXME
    // this->Room = CreateDefaultSubobject<USHAkRoomComponent>(TEXT("Room"));
    // this->Room->SetupAttachment(RootComponent);
    // this->LateReverb->SetupAttachment(RootComponent);
    this->IndoorOutdoorState = ESHAudioCubatureEnum::Indoor_Medium;
    this->AudioWorldState = ESHAudioWorldEnum::World_FW;
}


