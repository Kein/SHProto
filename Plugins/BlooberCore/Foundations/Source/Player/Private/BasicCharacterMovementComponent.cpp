#include "BasicCharacterMovementComponent.h"

UBasicCharacterMovementComponent::UBasicCharacterMovementComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MovementInputScale = 1.00f;
    this->RotationInputDeltaScale = 1.00f;
    this->RotationInputDeltaScaleOverTime = NULL;
    this->RotationInputScaleSpeed = 45.00f;
    this->RotationInputScaleSpeedOverTime = NULL;
    this->LimitScaleRotationSpeed = false;
    this->MaxScaleRotationSpeed = 180.00f;
}


