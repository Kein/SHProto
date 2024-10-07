#include "SHPushableAudioComponent.h"

USHPushableAudioComponent::USHPushableAudioComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->GrabSoundEvent = NULL;
    this->ReleaseSoundEvent = NULL;
    this->StartPushSoundEvent = NULL;
    this->StopPushSoundEvent = NULL;
}


