#include "SHCharacterPlayBrainComponent.h"

USHCharacterPlayBrainComponent::USHCharacterPlayBrainComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->InventoryMapHoldValue = 0.20f;
    this->OwnerCharacter = NULL;
}

void USHCharacterPlayBrainComponent::SHDebug_Character_Input_ValuesDebug() {
}

void USHCharacterPlayBrainComponent::SHDebug_Character_Input_FreezeControlRotation() {
}

void USHCharacterPlayBrainComponent::SetUpdateControlRotationWhenIsNotMoving(const bool Update, const UObject* Object) {
}

void USHCharacterPlayBrainComponent::SetUpdateControlRotationBlocked(const bool Blocked, const UObject* Object) {
}

void USHCharacterPlayBrainComponent::SetGameplayMenuBlocked(const bool Blocked, const UObject* Object) {
}

void USHCharacterPlayBrainComponent::SetControlRotationInterpSpeed(const float Speed, const UObject* Object) {
}

bool USHCharacterPlayBrainComponent::IsUpdateControlRotationBlocked() const {
    return false;
}

bool USHCharacterPlayBrainComponent::IsGameplayMenuBlocked() const {
    return false;
}

bool USHCharacterPlayBrainComponent::GetUpdateControlRotationWhenIsNotMoving() const {
    return false;
}

void USHCharacterPlayBrainComponent::ClearControlRotationInterpSpeed(const UObject* Object) {
}


