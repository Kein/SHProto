#include "SHAbstractDaddyAnimInstance.h"
#include "SHAbstractDaddyAnimInstanceStateData.h"

USHAbstractDaddyAnimInstance::USHAbstractDaddyAnimInstance() {
    this->AnimInstanceStateDataClass = USHAbstractDaddyAnimInstanceStateData::StaticClass();
    this->HeadShakeAlpha = 0.00f;
    this->HeadShakeSnapshotPoseAlpha = 0.00f;
    this->LookRotationAlpha = 0.00f;
}

void USHAbstractDaddyAnimInstance::StopChargeMovement() {
}

void USHAbstractDaddyAnimInstance::StartChargeMovement() {
}

void USHAbstractDaddyAnimInstance::SetOutstretchedArmsActive(bool InOutstretchedArmsActive) {
}

void USHAbstractDaddyAnimInstance::SetBrakingPoint(FVector Location) {
}

FVector USHAbstractDaddyAnimInstance::GetBrakingPoint() const {
    return FVector{};
}

USHAbstractDaddyLocomotionAnimInstance* USHAbstractDaddyAnimInstance::GetAbstractDaddyLocomotionAnimInstance(int32 SlotIndex) const {
    return NULL;
}

USHAbstractDaddyAnimInstanceStateData* USHAbstractDaddyAnimInstance::GetAbstractDaddyAnimInstanceStateData() const {
    return NULL;
}


