#include "SHFragileElevatorEngine.h"

ASHFragileElevatorEngine::ASHFragileElevatorEngine(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bIsMovementBroken = false;
    this->TargetFloorOnBroken = 0;
    this->MovementAlphaOnBroken = 0.00f;
    this->bIsDoorBroken = false;
    this->DoorAlphaOnBroken = 0.00f;
}

void ASHFragileElevatorEngine::RequestBreakMovement() {
}

void ASHFragileElevatorEngine::RequestBreakDoorAt(float InAlpha) {
}

void ASHFragileElevatorEngine::RequestBreakDoor() {
}


