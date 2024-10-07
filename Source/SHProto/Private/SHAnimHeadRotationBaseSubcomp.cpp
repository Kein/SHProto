#include "SHAnimHeadRotationBaseSubcomp.h"
#include "Templates/SubclassOf.h"

USHAnimHeadRotationBaseSubcomp::USHAnimHeadRotationBaseSubcomp() {
    this->AimOffsetAnimInstanceCurrent = NULL;
}

void USHAnimHeadRotationBaseSubcomp::SHDebug_Shared_Anim_HeadRotation_SetLookAtEnabled(bool bInEnabled) {
}

void USHAnimHeadRotationBaseSubcomp::SetNewAimOffsetAnimInstance(TSubclassOf<USHAimOffsetAnimInstance> NewAimOffset) {
}

void USHAnimHeadRotationBaseSubcomp::SetHeadRotationEnabled(const bool bInEnabled, float InBlendSpeed, const UObject* Object) {
}

void USHAnimHeadRotationBaseSubcomp::ManualLookAtTarget(USceneComponent* InTargetComponent, float InBlendInSpeed, float InBlendOutSpeed) {
}

bool USHAnimHeadRotationBaseSubcomp::IsHeadRotationEnabled() const {
    return false;
}

USceneComponent* USHAnimHeadRotationBaseSubcomp::GetCurrentLookAtTarget() const {
    return NULL;
}


