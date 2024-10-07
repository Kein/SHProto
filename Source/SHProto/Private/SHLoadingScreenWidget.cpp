#include "SHLoadingScreenWidget.h"

USHLoadingScreenWidget::USHLoadingScreenWidget() {
    this->BackgroundMovie_img = NULL;
    this->HintText_lbl = NULL;
    this->KeyTagText = TEXT("<twb id=\"key\">");
    this->SeparatorText = TEXT(", ");
    this->HintMaxTime = 5.00f;
}


bool USHLoadingScreenWidget::IsDeathReload() const {
    return false;
}

EGameOverCause USHLoadingScreenWidget::GetDeathReason() const {
    return EGameOverCause::CharacterDeath;
}


