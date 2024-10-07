#include "SHCharacterPlayAnimComponent.h"

USHCharacterPlayAnimComponent::USHCharacterPlayAnimComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PhysicalAnimationProfilesDA = NULL;
    this->OwnerCharacter = NULL;
}

void USHCharacterPlayAnimComponent::SHDebug_Character_Animation_DrawDebug() {
}

void USHCharacterPlayAnimComponent::SHDebug_Character_AimOffset_Enabled(bool Enabled) {
}

bool USHCharacterPlayAnimComponent::IsAlive() const {
    return false;
}

FVector USHCharacterPlayAnimComponent::GetHealthStateAsMontageBlendspaceInput() const {
    return FVector{};
}

FVector2D USHCharacterPlayAnimComponent::GetCurrentRotationSpeed() const {
    return FVector2D{};
}

FRotator USHCharacterPlayAnimComponent::GetAimRotation() const {
    return FRotator{};
}

bool USHCharacterPlayAnimComponent::ForceTposeDebug() const {
    return false;
}


