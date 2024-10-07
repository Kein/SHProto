#include "SHCharacterPlaySpringArmComponent.h"

USHCharacterPlaySpringArmComponent::USHCharacterPlaySpringArmComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ProfilesData = NULL;
    this->CollisionBlendOutDelay = 1.00f;
    this->ArmLengthMin = 40.00f;
    this->bEnableTargetOffsetExtraHeightFromPitch = true;
    this->TargetOffsetExtraHeightFromPitchLowInfluenceValue = 10.00f;
    this->OwnerCharacter = NULL;
    this->ExteriorSprintCameraBlender = NULL;
    this->InteriorCameraBlender = NULL;
    this->InteriorSprintCameraBlender = NULL;
}

void USHCharacterPlaySpringArmComponent::SHDebug_Character_Camera_ValuesDebug() {
}

void USHCharacterPlaySpringArmComponent::SHDebug_Character_Camera_DrawDebug() {
}

void USHCharacterPlaySpringArmComponent::SHDebug_Character_Camera_ContinousReadData() {
}

void USHCharacterPlaySpringArmComponent::SHDebug_Character_Camera_BlendsDebug() {
}

void USHCharacterPlaySpringArmComponent::SetCustomCameraData(const UObject* Object, const FString& InCustomCameraName, const FSHCameraDataStruct InCustomCameraData, const FSHCameraDataStruct InCustomCollisionData) {
}

void USHCharacterPlaySpringArmComponent::RequestRefreshState(const UObject* Requester) {
}

bool USHCharacterPlaySpringArmComponent::ReneableCustomCameraData(const UObject* Object, const FString& InCustomCameraName) {
    return false;
}

float USHCharacterPlaySpringArmComponent::GetCustomCameraBlendAlpha(const UObject* Object) const {
    return 0.0f;
}

void USHCharacterPlaySpringArmComponent::ClearCustomCameraData(const UObject* Object, const bool Instant) {
}


