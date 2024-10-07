#include "CreditsWidget.h"

UCreditsWidget::UCreditsWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->Credits_srb = NULL;
    this->FadeIn_anim = NULL;
    this->FadeOut_anim = NULL;
    this->CreditMusic = NULL;
    this->SkipHoldTime = 2.00f;
    this->bUseExternalSkip = false;
    this->AutoScrollStartDelay = 0.10f;
    this->AutoScrollSpeed = 60.00f;
    this->FadeAfterScrollEndDelay = 30.00f;
    this->AutoStartPlay = true;
    this->AutoFadeOut = true;
    this->AutoDestroy = false;
    this->FadeOutTime = 1.00f;
}

void UCreditsWidget::Skip() {
}

void UCreditsWidget::Show() {
}

void UCreditsWidget::Reset() {
}

void UCreditsWidget::PlayScroll() {
}









void UCreditsWidget::OnFadedOutAnim() {
}

void UCreditsWidget::OnFadedInAnim() {
}

bool UCreditsWidget::IsFullyScrolled() const {
    return false;
}

void UCreditsWidget::FadeOut() {
}



