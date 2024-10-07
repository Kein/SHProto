#include "SHCreeperLocomotionAnimInstance.h"

USHCreeperLocomotionAnimInstance::USHCreeperLocomotionAnimInstance() {
    this->LocomotionStateRequest = ESHCreeperAnimInstanceLocomotionState::Idle;
    this->MoveChangeLegOnGround = 0.00f;
    this->MoveChangeStrafeAngle = 0.00f;
    this->MovementSpeed = 1.00f;
    this->StrafeAngle = 0.00f;
    this->DesiredStrafeAngle = 0.00f;
    this->SubgoalDistanceForStraightMovement = 100.00f;
    this->TurnInPlaceMinAngleInFastMovement = 150.00f;
    this->TurnInPlaceAngle = 0.00f;
    this->MovementTypeFlipIntervalMin = 0.65f;
    this->MovementTypeFlipIntervalMax = 2.75f;
    this->IsWalkingStraight = false;
    this->IsNearSubgoal = false;
}

void USHCreeperLocomotionAnimInstance::GetDesiredVelocitySizeAndYaw(float& OutVectorSize, float& OutVectorYaw, float Smoothing) {
}

USHCreeperAnimInstanceStateData* USHCreeperLocomotionAnimInstance::GetCreeperAnimInstanceStateData() const {
    return NULL;
}

void USHCreeperLocomotionAnimInstance::CacheTurnInPlaceAngle() {
}


