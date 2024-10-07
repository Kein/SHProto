#include "SHMannequinAnimInstance.h"
#include "SHMannequinAnimInstanceStateData.h"

USHMannequinAnimInstance::USHMannequinAnimInstance() {
    this->AnimInstanceStateDataClass = USHMannequinAnimInstanceStateData::StaticClass();
}

USHMannequinLocomotionAnimInstance* USHMannequinAnimInstance::GetMannequinLocomotionAnimInstance(int32 SlotIndex) const {
    return NULL;
}

USHMannequinAnimInstanceStateData* USHMannequinAnimInstance::GetMannequinAnimInstanceStateData() const {
    return NULL;
}


