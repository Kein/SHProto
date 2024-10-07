#include "SHGameplaySaveMenuWidget.h"

USHGameplaySaveMenuWidget::USHGameplaySaveMenuWidget() {
    this->bIsFocusable = true;
    this->BackKeys.AddDefaulted(4);
    this->SaveKeys.AddDefaulted(1);
    this->bShowTooltips = false;
    this->MainCanvas = NULL;
    this->SlotsList_wdg = NULL;
    this->Back_but = NULL;
    this->Save_but = NULL;
    this->Setup = NULL;
    this->FadeIn = NULL;
    this->FadeOut = NULL;
    this->ShowSaved = NULL;
    this->OwnerCharacter = NULL;
    this->ActualSavePoint = NULL;
}

bool USHGameplaySaveMenuWidget::PlayShow() {
    return false;
}

bool USHGameplaySaveMenuWidget::PlaySetup(ASHSavePoint* SavePoint) {
    return false;
}

bool USHGameplaySaveMenuWidget::PlayHide() {
    return false;
}

bool USHGameplaySaveMenuWidget::IsAvailable() const {
    return false;
}

bool USHGameplaySaveMenuWidget::HideInstant() {
    return false;
}


