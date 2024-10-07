#include "SHAkSpatialAudioVolume.h"
#include "SHAkLateReverbComponent.h"
#include "SHAkRoomComponent.h"

ASHAkSpatialAudioVolume::ASHAkSpatialAudioVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<USHAkLateReverbComponent>(TEXT("LateReverb"))) {
    this->Room = CreateDefaultSubobject<USHAkRoomComponent>(TEXT("Room"));
    this->IndoorOutdoorState = ESHAudioCubatureEnum::Indoor_Medium;
    this->AudioWorldState = ESHAudioWorldEnum::World_FW;
    this->LateReverb->SetupAttachment(RootComponent);
    this->Room->SetupAttachment(RootComponent);
}


