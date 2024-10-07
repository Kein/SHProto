#include "SHAkDoorComponent.h"

USHAkDoorComponent::USHAkDoorComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->VelocityRTPCParam = NULL;
    this->DoorMovementStateSwitch_Closed = NULL;
    this->DoorMovementStateSwitch_FakeClose = NULL;
    this->DoorMovementStateSwitch_Interupted = NULL;
    this->DoorMovementStateSwitch_MiddleOpened = NULL;
    this->DoorMovementStateSwitch_Opened = NULL;
    this->bDebugValue = false;
}

void USHAkDoorComponent::RequestBlockAudio(const bool bLock, const UObject* Object) {
}

void USHAkDoorComponent::ProcessOnDoorAngleChanged(USHDoorMovementComponent* MovementComponent) {
}

void USHAkDoorComponent::ProcessDoorSmashOpened(USHDoorMovementComponent* MovementComponent) {
}

void USHAkDoorComponent::ProcessDoorPhysicMovementStart(USHDoorMovementComponent* MovementComponent) {
}

void USHAkDoorComponent::ProcessDoorPhysicMovementInterupted(USHDoorMovementComponent* MovementComponent) {
}

void USHAkDoorComponent::ProcessDoorPhysicMovementComplete(USHDoorMovementComponent* MovementComponent) {
}

void USHAkDoorComponent::ProcessDoorFakeMovementStart(USHDoorMovementComponent* MovementComponent) {
}

void USHAkDoorComponent::ProcessDoorFakeMovementInterupted(USHDoorMovementComponent* MovementComponent) {
}

void USHAkDoorComponent::ProcessDoorFakeMovementComplete(USHDoorMovementComponent* MovementComponent) {
}

bool USHAkDoorComponent::IsAudioBlocked() const {
    return false;
}


