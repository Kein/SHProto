#include "SHAnimNPCMovementSubcomp.h"

USHAnimNPCMovementSubcomp::USHAnimNPCMovementSubcomp() {
    this->Speed = 0.00f;
    this->StrafeAngle = 0.00f;
    this->DesiredStrafeAngle = 0.00f;
    this->AdditionalRotation = 0.00f;
    this->bIsMovingHipsForward = false;
    this->CircularMovementRadius = 0.00f;
    this->CircularMovementDirection = 0.00f;
    this->AngleToDesiredRotation = 0.00f;
    this->TurnInPlaceAngle = 0.00f;
    this->OwnerController = NULL;
}

void USHAnimNPCMovementSubcomp::OnTurnOnSpotAnimationEnter() {
}

void USHAnimNPCMovementSubcomp::OnMoveStartExit() {
}

bool USHAnimNPCMovementSubcomp::IsPhysicRotationDuringAnimRootMotionAllowed() {
    return false;
}


