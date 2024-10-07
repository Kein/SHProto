#include "SHFleshLipAnimInstance.h"
#include "SHFleshLipAnimInstanceStateData.h"

USHFleshLipAnimInstance::USHFleshLipAnimInstance() {
    this->AnimInstanceStateDataClass = USHFleshLipAnimInstanceStateData::StaticClass();
    this->TransformationState = ESHFleshLipAnimInstanceTransformationState::Flying;
}

void USHFleshLipAnimInstance::StopChargeMovement() {
}

void USHFleshLipAnimInstance::StartChargeMovement() {
}


USHFleshLipStandingLocomotionAnimInstance* USHFleshLipAnimInstance::GetFleshLipStandingLocomotionAnimInstance() const {
    return NULL;
}

bool USHFleshLipAnimInstance::GetFleshLipRightArmIsReleased() const {
    return false;
}

bool USHFleshLipAnimInstance::GetFleshLipLegsAreReleased() const {
    return false;
}

bool USHFleshLipAnimInstance::GetFleshLipLeftArmIsReleased() const {
    return false;
}

USHFleshLipHangingLocomotionAnimInstance* USHFleshLipAnimInstance::GetFleshLipHangingLocomotionAnimInstance() const {
    return NULL;
}

USHFleshLipFlyingLocomotionAnimInstance* USHFleshLipAnimInstance::GetFleshLipFlyingLocomotionAnimInstance() const {
    return NULL;
}

USHFleshLipFallenLocomotionAnimInstance* USHFleshLipAnimInstance::GetFleshLipFallenLocomotionAnimInstance() const {
    return NULL;
}

USHFleshLipAnimInstanceStateData* USHFleshLipAnimInstance::GetFleshLipAnimInstanceStateData() const {
    return NULL;
}

USHFleshLipLocomotionAnimInstance* USHFleshLipAnimInstance::GetActiveFleshLipLocomotionAnimInstance() const {
    return NULL;
}


