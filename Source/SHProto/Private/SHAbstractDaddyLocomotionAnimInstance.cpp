#include "SHAbstractDaddyLocomotionAnimInstance.h"

USHAbstractDaddyLocomotionAnimInstance::USHAbstractDaddyLocomotionAnimInstance() {
    this->LocomotionStateRequest = ESHAbstractDaddyAnimInstanceLocomotionState::Idle;
    this->MoveChangeLegOnGround = 0.00f;
    this->MoveChangeStrafeAngle = 0.00f;
    this->StrafeAngle = 0.00f;
    this->DesiredStrafeAngle = 0.00f;
    this->TurnInPlaceAngle = 0.00f;
    this->bOutstretchedArmsActive = false;
    this->bChargeMovementIsActive = false;
}

void USHAbstractDaddyLocomotionAnimInstance::SetChargeMovementIsActive(bool NewActive) {
}

USHAbstractDaddyAnimInstanceStateData* USHAbstractDaddyLocomotionAnimInstance::GetAbstractDaddyAnimInstanceStateData() const {
    return NULL;
}


