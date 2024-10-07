#include "SHAkMusicComponent.h"

USHAkMusicComponent::USHAkMusicComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ComponentSettings = NULL;
}

void USHAkMusicComponent::SHDebug_Character_Music_ValuesDebug() {
}

void USHAkMusicComponent::SHDebug_Character_Music_StopMusic() {
}

void USHAkMusicComponent::SHDebug_Character_Music_DrawDebug() {
}

void USHAkMusicComponent::RequestMusicSwitch(UObject* InContext, UAkSwitchValue* InSwitch) {
}

void USHAkMusicComponent::ReleaseRequestedMusicSwitch(UObject* InContext) {
}


