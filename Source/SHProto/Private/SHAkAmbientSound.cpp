#include "SHAkAmbientSound.h"
#include "SHAkAmbientSoundComponent.h"

ASHAkAmbientSound::ASHAkAmbientSound(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    // FIXME
    // this->RootComponent = CreateDefaultSubobject<USHAkAmbientSoundComponent>(TEXT("AkAudioComponent0"));
    // this->AkComponent = (UAkComponent*)RootComponent;
    this->bEnableSoundCullDistance = true;
    this->SoundCullDistance = 3000.00f;
}


