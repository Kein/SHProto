#include "SHAimOffsetAnimInstance.h"

USHAimOffsetAnimInstance::USHAimOffsetAnimInstance() {
    this->LookAtAlpha = 1.00f;
    this->IsAiming = false;
    this->HasLookAtTarget = false;
}

ESHHealthStateEnum USHAimOffsetAnimInstance::GetHealthState() const {
    return ESHHealthStateEnum::Default;
}


