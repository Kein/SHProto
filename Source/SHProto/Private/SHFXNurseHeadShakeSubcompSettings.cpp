#include "SHFXNurseHeadShakeSubcompSettings.h"

USHFXNurseHeadShakeSubcompSettings::USHFXNurseHeadShakeSubcompSettings() {
    this->EnableHeadShake = true;
    this->HeadSocketName = TEXT("head_bn");
    this->MaterialIndex = 0;
    this->OffsetScale = 1.00f;
    this->Magnitude = 3.00f;
    this->ClampMovement = 2.00f;
    this->LimitAccelerationMultiply = 80.00f;
}


