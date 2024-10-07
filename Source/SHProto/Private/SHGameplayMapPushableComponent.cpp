#include "SHGameplayMapPushableComponent.h"
#include "ESHMapObjectTypeEnum.h"

USHGameplayMapPushableComponent::USHGameplayMapPushableComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bSaveGame = true;
    this->MapObjectType = ESHMapObjectTypeEnum::Pushable;
    this->CurrentValue = 0;
}

void USHGameplayMapPushableComponent::ProcessComponentMovementEvent(USHPushableComponent* PushableComponent) {
}

void USHGameplayMapPushableComponent::ProcessComponentBlockedChangedEvent(USHPushableComponent* PushableComponent) {
}


