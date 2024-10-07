#include "SHPushableObjectDragComponent.h"

USHPushableObjectDragComponent::USHPushableObjectDragComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MeshAttachSocketName = TEXT("hand_r_socket");
    this->bEnforceAttachedOwnerRelativeTransform = false;
}

void USHPushableObjectDragComponent::ProcessMovementStoppedEvent(USHPushingObjectAnimInstance* AnimInst) {
}

void USHPushableObjectDragComponent::ProcessMovementStartedEvent(USHPushingObjectAnimInstance* AnimInst) {
}


