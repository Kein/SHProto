#include "StartGameWidget.h"

UStartGameWidget::UStartGameWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->SlideShow_switcher = NULL;
    this->FadeOut_anim = NULL;
    this->MaxTimer = 1.50f;
    this->MinInputTimer = 0.50f;
}



void UStartGameWidget::OnFadedOutAnim() {
}

void UStartGameWidget::Continue() {
}


