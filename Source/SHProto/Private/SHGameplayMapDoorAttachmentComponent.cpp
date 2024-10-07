#include "SHGameplayMapDoorAttachmentComponent.h"
#include "ESHMapObjectTypeEnum.h"

USHGameplayMapDoorAttachmentComponent::USHGameplayMapDoorAttachmentComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MapObjectType = ESHMapObjectTypeEnum::DoorAttachment;
}

void USHGameplayMapDoorAttachmentComponent::OnFocusableSolved(USHFocusableComponent* FocusableComponent) {
}

void USHGameplayMapDoorAttachmentComponent::OnFocusableShown(USHFocusableComponent* FocusableComponent) {
}


