#include "SHDoorAnimationsComponent.h"

USHDoorAnimationsComponent::USHDoorAnimationsComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AnimationsSetData = NULL;
}

void USHDoorAnimationsComponent::SetPlayAutoLockedDoorCheckAnimBlocked(const bool bInBlocked, const UObject* Object) {
}

void USHDoorAnimationsComponent::OnPhysicMovementAppliedForceFromActor(USHDoorMovementComponent* DoorMovementComponent, AActor* ActorContext) {
}

void USHDoorAnimationsComponent::OnAutoLockedDoorCheckAnimEnd(UAnimMontage* Montage, ESHAnimEndType AnimEndType) {
}

bool USHDoorAnimationsComponent::IsPlayAutoLockedDoorCheckAnimBlocked() const {
    return false;
}


