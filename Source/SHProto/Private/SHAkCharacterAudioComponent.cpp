#include "SHAkCharacterAudioComponent.h"
#include "Templates/SubclassOf.h"

USHAkCharacterAudioComponent::USHAkCharacterAudioComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ReverbTestSoundEvent = NULL;
    this->AudioStatesSettings = NULL;
    this->EnvironmentSettings = NULL;
    this->AudioSpaceSettings = NULL;
    this->AudioBreathingSettings = NULL;
    this->AudioHealthSettings = NULL;
    this->AudioInteractionSettings = NULL;
    this->OwnerCharacter = NULL;
}

void USHAkCharacterAudioComponent::SHDebug_Character_Audio_ValuesDebug() {
}

void USHAkCharacterAudioComponent::SHDebug_Character_Audio_StatesDebug() {
}

void USHAkCharacterAudioComponent::SHDebug_Character_Audio_SetDangerState(int32 InDangerMode) {
}

void USHAkCharacterAudioComponent::SHDebug_Character_Audio_SetCutsceneState(bool bEnable) {
}

void USHAkCharacterAudioComponent::SHDebug_Character_Audio_SetBossState(bool bEnable) {
}

void USHAkCharacterAudioComponent::SHDebug_Character_Audio_ReverbTestSound() {
}

void USHAkCharacterAudioComponent::SHDebug_Character_Audio_PortalsDebug() {
}

void USHAkCharacterAudioComponent::SHDebug_Character_Audio_AVDebug() {
}

USHCharacterAudioSubcomponentBase* USHAkCharacterAudioComponent::FindSubcomponentByClass(const TSubclassOf<USHCharacterAudioSubcomponentBase> SubcomponentClass) const {
    return NULL;
}


