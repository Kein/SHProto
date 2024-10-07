#include "BeingSteering.h"

UBeingSteering::UBeingSteering(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->_EnableSliding = false;
    this->_UseCapsuleComponent = false;
    this->_TestChannel = ECC_Pawn;
    this->_ReduceRadius = 6.00f;
    this->_StandYaw = 18.00f;
    this->_DelayedStart = 0.00f;
    this->_DelayedStop = 0.00f;
    this->_ForceStop = false;
    this->_Character = NULL;
    this->_SteeringCapsule = NULL;
    this->_DetectStart = 0.00f;
    this->_DetectStop = 0.00f;
    this->_CurrentSpeed = 0.00f;
    this->_ForcedSpeed = 0.00f;
    this->_ForcedSpeedDeceleration = 0.00f;
    this->_InstantMove = false;
    this->_ForceDirection = false;
    this->_ForcedYaw = 0.00f;
    this->_ForcedYawTolerance = 0.00f;
    this->_CheckMoveVelocity = false;
}

void UBeingSteering::UpdateSteering(float DeltaTime) {
}

void UBeingSteering::SetFlag_ForceStop(bool flag) {
}

void UBeingSteering::SetFlag_DontStop(bool flag, uint8 Priority) {
}

void UBeingSteering::ForceYaw(float Yaw, float Tolerance) {
}

void UBeingSteering::ForceSpeed(float Speed, float Deceleration, bool instantMove) {
}

void UBeingSteering::ClearForcedVelocity(bool Speed, bool Yaw) {
}

void UBeingSteering::ClearFlag_DontStop(uint8 Priority) {
}


