#include "SHAkElevatorFloorDoorComponent.h"

USHAkElevatorFloorDoorComponent::USHAkElevatorFloorDoorComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AudioEvent_ButtonClicked = NULL;
    this->AudioEvent_MoveStarted = NULL;
    this->AudioEvent_MoveFinished = NULL;
    this->AudioSwitch_DoorType = NULL;
    this->AudioSwitch_DoorState_Opened = NULL;
    this->AudioSwitch_DoorState_Middle = NULL;
    this->AudioSwitch_DoorState_Closed = NULL;
}

void USHAkElevatorFloorDoorComponent::PlayDoorMovementStartAudio() {
}

void USHAkElevatorFloorDoorComponent::PlayDoorMovementInteruptedAudio() {
}

void USHAkElevatorFloorDoorComponent::PlayDoorMovementFinishAudio(bool IsDoorOpened) {
}

void USHAkElevatorFloorDoorComponent::PlayButtonClickAudio(USceneComponent* ButtonClickedLocationSceneComponent) {
}


