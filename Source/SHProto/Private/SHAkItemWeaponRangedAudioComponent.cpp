#include "SHAkItemWeaponRangedAudioComponent.h"

USHAkItemWeaponRangedAudioComponent::USHAkItemWeaponRangedAudioComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->StopWhenOwnerDestroyed = false;
    this->ShootAudioEvent = NULL;
    this->OutOfAmmoAudioEvent = NULL;
    this->ReloadAudioEvent = NULL;
    this->AimStartActionAudioEvent = NULL;
    this->FireReadyAimStopActionAudioEvent = NULL;
    this->StopAnimAudioNotifiesAudioEvent_Reload = NULL;
    this->CharacterAudioComponent = NULL;
}

void USHAkItemWeaponRangedAudioComponent::ProcessOwnerCharacterCombatInputModeChanged(USHCharacterPlayCombatComponent* CombatComp) {
}


