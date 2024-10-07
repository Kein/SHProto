#include "CutsceneSkipWidget.h"

UCutsceneSkipWidget::UCutsceneSkipWidget() {
    this->bIsFocusable = true;
    this->SkipHoldTime = 5.00f;
    this->FadeOutTime = 1.00f;
    this->GameTextsConfig = NULL;
    this->UseKeyTag = false;
    this->Key_rtx = NULL;
    this->Debug_panel = NULL;
    this->FadeIn_anim = NULL;
    this->FadeOut_anim = NULL;
    this->SkipedFadeOut_anim = NULL;
    this->ButtonInfo_anim = NULL;
}

void UCutsceneSkipWidget::ResetApplied() {
}



void UCutsceneSkipWidget::OnSkipedFadeOutAnim() {
}








void UCutsceneSkipWidget::OnFadeInAnim() {
}

void UCutsceneSkipWidget::OnFadedOutAnim() {
}


bool UCutsceneSkipWidget::GetCanSkip() const {
    return false;
}

void UCutsceneSkipWidget::FadedOut() {
}


