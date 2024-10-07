#include "SHAkFakeDoorComponent.h"

USHAkFakeDoorComponent::USHAkFakeDoorComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DoorTypeSwitch = NULL;
    this->DoorLockState_Locked = NULL;
}


