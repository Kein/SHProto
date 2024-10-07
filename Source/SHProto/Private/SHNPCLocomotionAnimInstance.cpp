#include "SHNPCLocomotionAnimInstance.h"

USHNPCLocomotionAnimInstance::USHNPCLocomotionAnimInstance() {
    this->TurnInPlaceMinAngle = 30.00f;
    this->TurnInPlaceMinAngleInMovement = 30.00f;
    this->TurnInPlaceToMoveAngleTolerate = 30.00f;
    this->PelvisOffsetInterpSpeed = 10.00f;
    this->FeetIKLockIncrementInterpolationSpeed = 0.00f;
    this->FeetIKLockDecrementInterpolationSpeed = 4.00f;
    this->bWarpingEnable = false;
    this->StrideScale = 1.00f;
    this->p_AnimInstanceStateData = NULL;
}

void USHNPCLocomotionAnimInstance::OnMoveStartBegin() {
}




float USHNPCLocomotionAnimInstance::GetTurnInPlaceAngle() const {
    return 0.0f;
}

float USHNPCLocomotionAnimInstance::GetStrideWarpingSmooth() const {
    return 0.0f;
}

float USHNPCLocomotionAnimInstance::GetStrafeAngle() const {
    return 0.0f;
}

void USHNPCLocomotionAnimInstance::GetSpeedWarping(bool& OutWarpingEnabled, float& OutStrideScale, FVector& OutStrideDirection) const {
}

float USHNPCLocomotionAnimInstance::GetDesiredStrafeAngle() const {
    return 0.0f;
}

USHAnimComponent* USHNPCLocomotionAnimInstance::GetAnimComponent() {
    return NULL;
}


