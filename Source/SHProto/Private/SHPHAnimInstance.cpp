#include "SHPHAnimInstance.h"
#include "SHPHAnimInstanceStateData.h"

USHPHAnimInstance::USHPHAnimInstance() {
    this->AnimInstanceStateDataClass = USHPHAnimInstanceStateData::StaticClass();
}

void USHPHAnimInstance::SetMovementSpeedMultiplier(float newSpeed, float Time, float BlendInTime, float BlendOutTime) {
}

void USHPHAnimInstance::SetLookAtEnable(bool NewLookAtEnable) {
}

USHPHAnimInstanceStateData* USHPHAnimInstance::GetPHAnimInstanceStateData() const {
    return NULL;
}


