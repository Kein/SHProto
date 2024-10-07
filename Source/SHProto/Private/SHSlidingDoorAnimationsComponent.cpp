#include "SHSlidingDoorAnimationsComponent.h"

USHSlidingDoorAnimationsComponent::USHSlidingDoorAnimationsComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AnimationsSetData = NULL;
}

void USHSlidingDoorAnimationsComponent::PutCharacterOnSpotFinished(bool WasCompleted) {
}

void USHSlidingDoorAnimationsComponent::OnOpenAnimEnd(UAnimMontage* Montage, ESHAnimEndType AnimEndType) {
}

void USHSlidingDoorAnimationsComponent::OnLockedAnimEnd(UAnimMontage* Montage, ESHAnimEndType AnimEndType) {
}

void USHSlidingDoorAnimationsComponent::MovementSnapFinished(bool WasCompleted) {
}


