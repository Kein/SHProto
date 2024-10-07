#include "SHCharacterPlayCameraComponent.h"

USHCharacterPlayCameraComponent::USHCharacterPlayCameraComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->TargetFOV = 90.00f;
    this->FOVInterpSpeed = 7.50f;
    this->bEnableHideOwnerIfTooClose = true;
    this->OwnerCharacter = NULL;
}

void USHCharacterPlayCameraComponent::SHDebug_Character_CameraComponent_ValuesDebug() {
}

bool USHCharacterPlayCameraComponent::RemoveFOVBlend(const UObject* Object, const bool Instant) {
    return false;
}

UMaterialInstanceDynamic* USHCharacterPlayCameraComponent::PlaySimpleBlendableEffect(const UObject* Object, UMaterialInterface* InPostprocessMaterial, FName InEffectMaterialParamName, float InEffectTime) {
    return NULL;
}

bool USHCharacterPlayCameraComponent::IsLookingAt(const FVector InWorldLoc, float PitchAngleTolerance, float YawAngleTolerance) {
    return false;
}

bool USHCharacterPlayCameraComponent::HasFOVBlend(const UObject* Object) const {
    return false;
}

USHCameraFOVBlender* USHCharacterPlayCameraComponent::FindFOVBlender(const UObject* Object) const {
    return NULL;
}

FRotator USHCharacterPlayCameraComponent::CalcLookingAtDelta(const FVector InWorldLoc) {
    return FRotator{};
}

USHCameraFOVBlender* USHCharacterPlayCameraComponent::AddFOVBlend(const UObject* Object, const FString& BlendName, const FSHBlendData& BlendConfig, const float FOVValue) {
    return NULL;
}


