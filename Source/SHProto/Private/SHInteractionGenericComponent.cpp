#include "SHInteractionGenericComponent.h"

USHInteractionGenericComponent::USHInteractionGenericComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Behaviour = ESHInteractionGenericBehaviour::Clickable;
    this->MaintainInteractionOnVisibilityLost = false;
    this->OverrideCleanupConfig = false;
    this->ActiveCharacter = NULL;
}

bool USHInteractionGenericComponent::IsUsed() const {
    return false;
}

bool USHInteractionGenericComponent::IsHoldable() const {
    return false;
}

bool USHInteractionGenericComponent::IsHeldByCharacter() const {
    return false;
}

bool USHInteractionGenericComponent::IsClickable() const {
    return false;
}

ESHInteractionGenericBehaviour USHInteractionGenericComponent::GetBehaviour() const {
    return ESHInteractionGenericBehaviour::Clickable;
}


