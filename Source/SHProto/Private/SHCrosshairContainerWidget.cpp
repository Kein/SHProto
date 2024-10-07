#include "SHCrosshairContainerWidget.h"

USHCrosshairContainerWidget::USHCrosshairContainerWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->ContainerPanel = NULL;
    this->GameplayCenterDotClass = NULL;
    this->OwnerCharacter = NULL;
    this->CurrentCrosshairWidget = NULL;
}

void USHCrosshairContainerWidget::ProcessEquippedWeaponModifiedEvent(USHWeaponManageCmbSubcomp* WeaponManagement) {
}


