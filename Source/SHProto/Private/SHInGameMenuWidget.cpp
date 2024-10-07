#include "SHInGameMenuWidget.h"

USHInGameMenuWidget::USHInGameMenuWidget() {
    this->SwitchUserKeys.AddDefaulted(2);
    this->ResumeKeys.AddDefaulted(4);
    this->Load_but = NULL;
    this->ToMainMenu_but = NULL;
    this->Quit_but = NULL;
    this->AskQuit_dialog = NULL;
    this->FadeIn_anim = NULL;
}



void USHInGameMenuWidget::FadeOut() {
}

void USHInGameMenuWidget::FadedOut() {
}

void USHInGameMenuWidget::AskQuit(TEnumAsByte<EInGameQuitTarget> _QuitTarget) {
}


