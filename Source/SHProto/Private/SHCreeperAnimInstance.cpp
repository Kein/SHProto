#include "SHCreeperAnimInstance.h"
#include "SHCreeperAnimInstanceStateData.h"

USHCreeperAnimInstance::USHCreeperAnimInstance() {
    this->AnimInstanceStateDataClass = USHCreeperAnimInstanceStateData::StaticClass();
    this->IsAttacking = false;
    this->AttackWalkingRate = 0.00f;
}

USHCreeperLocomotionAnimInstance* USHCreeperAnimInstance::GetCreeperLocomotionAnimInstance(int32 SlotIndex) const {
    return NULL;
}

USHCreeperAnimInstanceStateData* USHCreeperAnimInstance::GetCreeperAnimInstanceStateData() const {
    return NULL;
}


