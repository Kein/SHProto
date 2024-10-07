#include "StartGamePanel.h"

UStartGamePanel::UStartGamePanel() {
    this->TargetPlatform = EStartGamePanelPlatform::All;
    this->bCanBeOmittedInFastForward = true;
    this->MaxTimer = 1.50f;
    this->MinInputTimer = 0.50f;
}


