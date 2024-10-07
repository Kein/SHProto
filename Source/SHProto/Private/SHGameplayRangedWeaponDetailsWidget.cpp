#include "SHGameplayRangedWeaponDetailsWidget.h"

USHGameplayRangedWeaponDetailsWidget::USHGameplayRangedWeaponDetailsWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->MainContainer = NULL;
    this->NotificationTextHorizontalBox = NULL;
    this->NotificationText_CurrentAmmo = NULL;
    this->NotificationText_InventoryAmmo = NULL;
    this->NotificationText_Separator = NULL;
    this->ShowAnim = NULL;
    this->HideAnim = NULL;
    this->NoCurrrentAmmoAnim = NULL;
    this->NoAnyAmmoAnim = NULL;
    this->NotificationTime = 2.00f;
    this->OwnerCharacterPlay = NULL;
}

void USHGameplayRangedWeaponDetailsWidget::ProcessRangedAimStateChangedEvent(USHRangedCmbSubcomp* RangedManagement) {
}

void USHGameplayRangedWeaponDetailsWidget::ProcessEquippedWeaponModifiedEvent(USHWeaponManageCmbSubcomp* WeaponManagement) {
}


