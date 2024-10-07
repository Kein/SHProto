#include "SHGameplayHudWidget.h"

USHGameplayHudWidget::USHGameplayHudWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->MainContainer = NULL;
    this->CrosshairContainer = NULL;
    this->TutorialWidget = NULL;
    this->ItemNotificationWidget = NULL;
    this->RangedWeaponDetailsWidget = NULL;
    this->HealingItemsNotificationWidget = NULL;
    this->GameplayFadeWidget = NULL;
    this->GameplayStruggleWidget = NULL;
    this->HealthIndicatorWidget = NULL;
    this->RadioIndicatorWidget = NULL;
    this->OwnerCharacter = NULL;
}


