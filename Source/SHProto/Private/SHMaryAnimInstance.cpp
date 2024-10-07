#include "SHMaryAnimInstance.h"
#include "SHMaryAnimInstanceStateData.h"

USHMaryAnimInstance::USHMaryAnimInstance() {
    this->AnimInstanceStateDataClass = USHMaryAnimInstanceStateData::StaticClass();
    this->LookRotationAlpha = 0.00f;
    this->MovementState = ESHMaryAnimInstanceMovementState::Flying;
    this->CurrentFaceExpression = ESHMariaBossFaceExpression::Normal;
}

void USHMaryAnimInstance::SetFaceExpression(const ESHMariaBossFaceExpression Expression, const float Duration) {
}

void USHMaryAnimInstance::ResetFaceExpression() {
}


USHMarySpiderLocomotionAnimInstance* USHMaryAnimInstance::GetMarySpiderLocomotionAnimInstance(int32 SlotIndex) const {
    return NULL;
}

USHMaryLocomotionAnimInstance* USHMaryAnimInstance::GetMaryLocomotionAnimInstance(int32 SlotIndex) const {
    return NULL;
}

USHMaryAnimInstanceStateData* USHMaryAnimInstance::GetMaryAnimInstanceStateData() const {
    return NULL;
}

USHMaryLocomotionAnimInstance* USHMaryAnimInstance::GetActiveMaryLocomotionAnimInstance() const {
    return NULL;
}


