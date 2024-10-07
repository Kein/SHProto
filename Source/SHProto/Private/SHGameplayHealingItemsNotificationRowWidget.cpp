#include "SHGameplayHealingItemsNotificationRowWidget.h"

USHGameplayHealingItemsNotificationRowWidget::USHGameplayHealingItemsNotificationRowWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->ItemDisplayNameText = NULL;
    this->ItemCountText = NULL;
    this->PrimaryAnim = NULL;
    this->SecondaryAnim = NULL;
    this->NoItemAnim = NULL;
    this->AudioEvent_ItemCollected = NULL;
    this->AudioEvent_ItemUsed = NULL;
    this->AudioEvent_NoItem = NULL;
    this->OwnerCharacterPlay = NULL;
    this->CurrentItemAnimation = NULL;
}

void USHGameplayHealingItemsNotificationRowWidget::UpdateItemsCountText() {
}

void USHGameplayHealingItemsNotificationRowWidget::ProcessHealthItemAnimationFinishedEvent() {
}


