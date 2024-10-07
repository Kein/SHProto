#include "SHRotateInPlaceAnimInstance.h"

USHRotateInPlaceAnimInstance::USHRotateInPlaceAnimInstance() {
    this->UseControllerRotationYaw = true;
}

void USHRotateInPlaceAnimInstance::SetUseControllerRotationYaw(bool Use) {
}

void USHRotateInPlaceAnimInstance::OnRotateInPlaceStopNative() {
}

void USHRotateInPlaceAnimInstance::OnRotateInPlaceStartNative() {
}

void USHRotateInPlaceAnimInstance::OnInitializeValues() {
}

bool USHRotateInPlaceAnimInstance::IsStopImmediatelyRequested() const {
    return false;
}

bool USHRotateInPlaceAnimInstance::IsCutscenePlaying() const {
    return false;
}

bool USHRotateInPlaceAnimInstance::IsBlocked() const {
    return false;
}

bool USHRotateInPlaceAnimInstance::CanBeUsed() const {
    return false;
}


