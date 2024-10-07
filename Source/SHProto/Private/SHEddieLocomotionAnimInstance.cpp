#include "SHEddieLocomotionAnimInstance.h"

USHEddieLocomotionAnimInstance::USHEddieLocomotionAnimInstance() {
    this->MoveChangeLegOnGround = 0.00f;
    this->MoveChangeStrafeAngle = 0.00f;
    this->StrafeAngle = 0.00f;
    this->DesiredStrafeAngle = 0.00f;
    this->TurnInPlaceAngle = 0.00f;
    this->DesiredSpeed = 0.00f;
}

USHEddieAnimInstanceStateData* USHEddieLocomotionAnimInstance::GetEddieAnimInstanceStateData() const {
    return NULL;
}


