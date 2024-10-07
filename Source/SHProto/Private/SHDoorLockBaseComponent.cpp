#include "SHDoorLockBaseComponent.h"

USHDoorLockBaseComponent::USHDoorLockBaseComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bSaveGame = true;
    this->bLockedOnBegin = false;
    this->ManagedInteractionGeneric = NULL;
    this->ManagedInteractionManager = NULL;
    this->InteractedCharacter = NULL;
    this->bIsDoorLocked = false;
}

void USHDoorLockBaseComponent::SetLocked(bool NewLocked, bool SkipDetectableManagement) {
}

void USHDoorLockBaseComponent::OnInteract(USHInteractionGenericComponent* Generic, ASHCharacterPlay* Character) {
}

bool USHDoorLockBaseComponent::IsLockedOnBegin() const {
    return false;
}

bool USHDoorLockBaseComponent::IsLocked() const {
    return false;
}


