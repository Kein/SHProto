#include "SHAkDoorBaseComponent.h"

USHAkDoorBaseComponent::USHAkDoorBaseComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DoorTypeSwitch = NULL;
    this->DoorLockState_Locked = NULL;
    this->DoorLockState_Unlocked = NULL;
    this->ManagedDoorMovement = NULL;
}

void USHAkDoorBaseComponent::ProcessOnLockAnimPlayed(USHDoorAnimationsComponent* DoorAnimComponent) {
}

void USHAkDoorBaseComponent::ProcessOnDoorLockStateChanged(USHDoorLockBaseComponent* LockComponent) {
}

void USHAkDoorBaseComponent::ProcessOnAutoLockedDoorCheckAnimPlayed(USHDoorAnimationsComponent* DoorAnimComponent) {
}


