#include "SHGameplayMapDoorComponent.h"
#include "ESHMapObjectTypeEnum.h"

USHGameplayMapDoorComponent::USHGameplayMapDoorComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bSaveGame = true;
    this->MapObjectType = ESHMapObjectTypeEnum::Door;
    this->bEnforceMode = false;
    this->ModeToEnforce = ESHGameplayMapDoorMode::NeverLocked;
    this->bDisplayCannotBePassedAsObstacle = false;
}

void USHGameplayMapDoorComponent::OnPhysicMovementAppliedForceFromActor(USHDoorMovementComponent* DoorMovementComponent, AActor* ActorContext) {
}

void USHGameplayMapDoorComponent::OnOpenAnimationPlayed(USHSlidingDoorAnimationsComponent* SlidingDoorAnimationsComponent) {
}

void USHGameplayMapDoorComponent::OnLockedAnimationPlayed(USHSlidingDoorAnimationsComponent* SlidingDoorAnimationsComponent) {
}

void USHGameplayMapDoorComponent::OnDoorLockStateChanged(USHDoorLockBaseComponent* DoorLockBaseComponent) {
}

void USHGameplayMapDoorComponent::OnAutoLockedAnimationPlayed(USHDoorAnimationsComponent* DoorAnimationsComponent) {
}

void USHGameplayMapDoorComponent::OnAttachmentFocusableShown(USHFocusableComponent* FocusableComponent) {
}

void USHGameplayMapDoorComponent::DisplayCannotBePassedAsObstacle() {
}


