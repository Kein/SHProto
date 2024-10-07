#include "SHCineCameraComponent.h"

USHCineCameraComponent::USHCineCameraComponent() {
    this->RespectFilmbackAspectRatio = false;
    this->WideScreenAdjustFOV = true;
    this->DepthOfFieldAnamorphism = 0.00f;
    this->BloomShape = 1.00f;
    this->BloomStretch = 0.00f;
    this->LensDIntensity = 0.00f;
    this->LensDIntensityX = 1.00f;
    this->LensDIntensityY = 1.00f;
    this->LensDCenterX = 0.00f;
    this->LensDCenterY = 0.00f;
    this->LensDScale = 1.00f;
}

void USHCineCameraComponent::TrackSkeletalMeshBone(USkeletalMeshComponent* InComponent, FName InBoneName) {
}

void USHCineCameraComponent::TrackComponent(USceneComponent* InComponent) {
}

void USHCineCameraComponent::TrackCharacterBone(ACharacter* InCharacter, FName InCharacterBoneName) {
}


