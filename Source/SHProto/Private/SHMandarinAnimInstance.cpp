#include "SHMandarinAnimInstance.h"
#include "SHMandarinAnimInstanceStateData.h"

USHMandarinAnimInstance::USHMandarinAnimInstance() {
    this->AnimInstanceStateDataClass = USHMandarinAnimInstanceStateData::StaticClass();
    this->IsHanging = true;
    this->TongueTransformationAlpha = 0.00f;
    this->TongueTransformationFadeInSpeed = 4.00f;
    this->TongueTransformationFadeOutSpeed = 4.00f;
    this->LookRotationAlpha = 0.00f;
}

void USHMandarinAnimInstance::IncrementAlphaTongueTransformationAlpha() {
}

USHMandarinLocomotionAnimInstance* USHMandarinAnimInstance::GetMandarinLocomotionAnimInstance(int32 SlotIndex) const {
    return NULL;
}

USHMandarinAnimInstanceStateData* USHMandarinAnimInstance::GetMandarinAnimInstanceStateData() const {
    return NULL;
}

void USHMandarinAnimInstance::DecrementAlphaTongueTransformationAlpha() {
}


