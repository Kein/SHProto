#include "SHMonsterLocomotionAnimInstance.h"

USHMonsterLocomotionAnimInstance::USHMonsterLocomotionAnimInstance() {
    this->IdleStartTime = 0.00f;
    this->bWarpingEnableOW = false;
    this->StrideScaleOW = 1.00f;
    this->bIsOtherWorldEnemy = false;
}





bool USHMonsterLocomotionAnimInstance::GetIsOtherWorldEnemy() const {
    return false;
}


