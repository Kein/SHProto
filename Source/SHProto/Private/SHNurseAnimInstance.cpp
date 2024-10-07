#include "SHNurseAnimInstance.h"
#include "SHNurseAnimInstanceStateData.h"

USHNurseAnimInstance::USHNurseAnimInstance() {
    this->AnimInstanceStateDataClass = USHNurseAnimInstanceStateData::StaticClass();
    this->HeadShakeAlpha = 0.00f;
    this->HeadShakeSnapshotPoseAlpha = 0.00f;
    this->LookRotationAlpha = 0.00f;
    this->ThighRotationForSkirt = 0.00f;
}

USHNurseLocomotionAnimInstance* USHNurseAnimInstance::GetNurseLocomotionAnimInstance(int32 SlotIndex) const {
    return NULL;
}

USHNurseAnimInstanceStateData* USHNurseAnimInstance::GetNurseAnimInstanceStateData() const {
    return NULL;
}


