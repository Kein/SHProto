#include "SHCharacterPlayRaycastDetectorComponent.h"

USHCharacterPlayRaycastDetectorComponent::USHCharacterPlayRaycastDetectorComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->OwnerCharacter = NULL;
}

void USHCharacterPlayRaycastDetectorComponent::SetInteractBlocked(const bool Blocked, const UObject* Object) {
}

void USHCharacterPlayRaycastDetectorComponent::SetHoverBlocked(const bool Blocked, const UObject* Object) {
}

bool USHCharacterPlayRaycastDetectorComponent::IsInteractBlocked() const {
    return false;
}

bool USHCharacterPlayRaycastDetectorComponent::IsHoverBlocked() const {
    return false;
}


