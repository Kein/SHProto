#include "SHGameplayHealingItemsNotificationWidget.h"

USHGameplayHealingItemsNotificationWidget::USHGameplayHealingItemsNotificationWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->MainContainer = NULL;
    this->TapHealingItemNotificationRowWidget = NULL;
    this->HoldHealingItemItemNotificationRowWidget = NULL;
    this->ShowAnim = NULL;
    this->HideAnim = NULL;
    this->HideWidgetDelayTime = 0.60f;
    this->OwnerCharacterPlay = NULL;
    this->CurrentShowHideAnimation = NULL;
}

void USHGameplayHealingItemsNotificationWidget::ProcessShowHideAnimationFinishedEvent() {
}


