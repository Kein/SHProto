#include "SHFriendAnimInstance.h"
#include "SHFriendAnimInstanceStateData.h"

USHFriendAnimInstance::USHFriendAnimInstance() {
    this->AnimInstanceStateDataClass = USHFriendAnimInstanceStateData::StaticClass();
}

USHFriendLocomotionAnimInstance* USHFriendAnimInstance::GetFriendLocomotionAnimInstance(int32 SlotIndex) const {
    return NULL;
}

USHFriendAnimInstanceStateData* USHFriendAnimInstance::GetFriendAnimInstanceStateData() const {
    return NULL;
}


