#include "SHCharacterPlayViewComponent.h"

USHCharacterPlayViewComponent::USHCharacterPlayViewComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bPitchLimitHalvedOnCollision = false;
    this->ScaleRotationScale = 110.00f;
    this->DeltaRotationScale = 3.00f;
    this->CharacterPlay = NULL;
}

void USHCharacterPlayViewComponent::SHDebug_Character_View_ValuesDebug() {
}

void USHCharacterPlayViewComponent::SHDebug_Character_View_LookOperationDrawDebug() {
}

void USHCharacterPlayViewComponent::SetRotationScale(const float Scale, const UObject* Object) {
}

void USHCharacterPlayViewComponent::SetRotationBlocked(const bool Blocked, const UObject* Object) {
}

bool USHCharacterPlayViewComponent::ResetLookOperation(const UObject* Object) {
    return false;
}

void USHCharacterPlayViewComponent::OverrideControlRotation(const FRotator& NewControlRotation, const UObject* Object) {
}

USHOperationEvents* USHCharacterPlayViewComponent::LookOperationRot(FRotator Rotation, float RotateDuration, const UObject* Object, const FSHViewLookOperationSettings& InSettings) {
    return NULL;
}

USHOperationEvents* USHCharacterPlayViewComponent::LookOperationLoc(FVector Location, float RotateDuration, const UObject* Object, const FSHViewLookOperationSettings& InSettings) {
    return NULL;
}

USHOperationEvents* USHCharacterPlayViewComponent::LookOperationComp(USceneComponent* InComponent, float RotateDuration, const UObject* Object, const FSHViewLookOperationSettings& InSettings) {
    return NULL;
}

USHOperationEvents* USHCharacterPlayViewComponent::LookAtRotationAbsolute(const FRotator Rotation, float RotateDuration, const UObject* Object, float OffsetAngle, UCurveFloat* InCurve) {
    return NULL;
}

USHOperationEvents* USHCharacterPlayViewComponent::LookAtLocationAbsolute(const FVector Location, float RotateDuration, const UObject* Object, float OffsetAngle, UCurveFloat* InCurve) {
    return NULL;
}

bool USHCharacterPlayViewComponent::IsRotationBlocked() const {
    return false;
}

FRotator USHCharacterPlayViewComponent::GetViewRotation() const {
    return FRotator{};
}

FVector USHCharacterPlayViewComponent::GetViewLocation() const {
    return FVector{};
}

FVector USHCharacterPlayViewComponent::GetViewDirection() const {
    return FVector{};
}

void USHCharacterPlayViewComponent::ClearRotationScale(const UObject* Object) {
}

void USHCharacterPlayViewComponent::AddToControlRotation(const FRotator& RotationToAdd, const UObject* Object) {
}


