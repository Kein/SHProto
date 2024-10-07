#include "SHSlidingDoorMovementComponent.h"

USHSlidingDoorMovementComponent::USHSlidingDoorMovementComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bSaveGame = true;
    this->BeginPlayDoorMovementAlpha = 0.00f;
    this->MovementRange = 100.00f;
    this->DefaultOpenMovementCurve = NULL;
    this->DoorMovementAlphaSave = 0.00f;
}

void USHSlidingDoorMovementComponent::StopCurveMovement() {
}

bool USHSlidingDoorMovementComponent::RequestPlayDefaultOpenMovement() {
    return false;
}

bool USHSlidingDoorMovementComponent::RequestPlayCurveMovement(UCurveFloat* InCurve) {
    return false;
}

void USHSlidingDoorMovementComponent::OverrideDoorAlpha(float InDoorAlpha) {
}


