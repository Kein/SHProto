#include "SHAkElevatorEngineComponent.h"

USHAkElevatorEngineComponent::USHAkElevatorEngineComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AudioEvent_MoveStarted = NULL;
    this->AudioEvent_MoveFinished = NULL;
    this->AudioSwitch_ElevatorType = NULL;
}

void USHAkElevatorEngineComponent::PlayMoveStartAudio() {
}

void USHAkElevatorEngineComponent::PlayMoveFinishAudio() {
}


