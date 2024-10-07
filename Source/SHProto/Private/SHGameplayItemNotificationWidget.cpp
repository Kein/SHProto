#include "SHGameplayItemNotificationWidget.h"

USHGameplayItemNotificationWidget::USHGameplayItemNotificationWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->NotificationText = NULL;
    this->ShowAnim = NULL;
    this->HideAnim = NULL;
    this->NotificationTime = 5.00f;
    this->NotificationAudioEvent = NULL;
    this->GameNotFullyInstalledRowName = TEXT("GameNotFullyInstalled");
}

void USHGameplayItemNotificationWidget::PlayGameNotFullyInstalledNotificationRequest() {
}

bool USHGameplayItemNotificationWidget::CanShowNotification() const {
    return false;
}


