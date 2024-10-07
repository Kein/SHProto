#include "SHFirearmAimOffsetAnimInstance.h"

USHFirearmAimOffsetAnimInstance::USHFirearmAimOffsetAnimInstance() {
    this->bIsAiming = false;
    this->bHasAmmo = false;
    this->NearWallAimPoseAnimation = NULL;
    this->AimObstacleTraceProfileName = TEXT("WS_BlockAllButProjectiles");
    this->Offset_NoHead_Vertical_Animation = NULL;
    this->Offset_Head_Vertical_Animation = NULL;
    this->Offset_Hands_Vertical_Animation = NULL;
    this->Offset_NoHead_Horizontal_Animation = NULL;
    this->Offset_Head_Horizontal_Animation = NULL;
    this->Offset_Hands_Horizontal_Animation = NULL;
}

float USHFirearmAimOffsetAnimInstance::MapRangeClampedWithZeroInTheMidle(float Value, float InRangeA, float InRangeB, float OutRangeA, float OutRangeB) {
    return 0.0f;
}

bool USHFirearmAimOffsetAnimInstance::LongWeaponAimObstacleSingleCheck(const FLongWeaponAimObstacleCheckPayload& Payload) const {
    return false;
}

bool USHFirearmAimOffsetAnimInstance::LongWeaponAimObstacleRangeCheck(const FLongWeaponAimObstacleCheckPayload& Payload) const {
    return false;
}

bool USHFirearmAimOffsetAnimInstance::IsAimOffsetEnabled() const {
    return false;
}

void USHFirearmAimOffsetAnimInstance::InterruptEquipToAim(float BlendOutTime) {
}

ASHItemWeapon* USHFirearmAimOffsetAnimInstance::GetWeapon() const {
    return NULL;
}


