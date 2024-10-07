#include "SHCharacterPlayBreathNoiseComponent.h"

USHCharacterPlayBreathNoiseComponent::USHCharacterPlayBreathNoiseComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->OwnerCharacter = NULL;
}

bool USHCharacterPlayBreathNoiseComponent::IsHoldingBreath() const {
    return false;
}


