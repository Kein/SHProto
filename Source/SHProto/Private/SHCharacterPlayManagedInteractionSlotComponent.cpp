#include "SHCharacterPlayManagedInteractionSlotComponent.h"

USHCharacterPlayManagedInteractionSlotComponent::USHCharacterPlayManagedInteractionSlotComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MouseRotationMultiplier = 400.00f;
    this->PadRotationMultiplier = 800.00f;
    this->MovementMultiplier = 5.00f;
}


