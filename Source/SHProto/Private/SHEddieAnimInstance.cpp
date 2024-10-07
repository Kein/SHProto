#include "SHEddieAnimInstance.h"
#include "SHEddieAnimInstanceStateData.h"

USHEddieAnimInstance::USHEddieAnimInstance() {
    this->AnimInstanceStateDataClass = USHEddieAnimInstanceStateData::StaticClass();
    this->MovementState = ESHEddieAnimInstanceMovementState::Walking;
    this->CurrentFaceExpression = ESHEddieFaceExpression::Normal;
}

void USHEddieAnimInstance::SetFaceExpression(const ESHEddieFaceExpression Expression, const float Duration) {
}

void USHEddieAnimInstance::ResetFaceExpression() {
}


USHEddieWalkingLocomotionAnimInstance* USHEddieAnimInstance::GetEddieWalkingLocomotionAnimInstance() const {
    return NULL;
}

USHEddieLimpingLocomotionAnimInstance* USHEddieAnimInstance::GetEddieLimpingLocomotionAnimInstance() const {
    return NULL;
}

USHEddieAnimInstanceStateData* USHEddieAnimInstance::GetEddieAnimInstanceStateData() const {
    return NULL;
}

USHEddieLocomotionAnimInstance* USHEddieAnimInstance::GetActiveEddieLocomotionAnimInstance() const {
    return NULL;
}


