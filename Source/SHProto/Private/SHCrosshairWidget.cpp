#include "SHCrosshairWidget.h"

USHCrosshairWidget::USHCrosshairWidget() {
    this->CrosshairImage = NULL;
    this->FadeOutAnim = NULL;
    this->FadeInAnim = NULL;
    this->bCrosshairAtlasUseInterpolation = true;
    this->AimOpacity = 1.00f;
    this->FriendlyAimOpacity = 0.20f;
    this->CrosshairDynamicMaterial = NULL;
    this->CurrentPlayingAnimation = NULL;
}

void USHCrosshairWidget::OnAnimFinished() {
}


