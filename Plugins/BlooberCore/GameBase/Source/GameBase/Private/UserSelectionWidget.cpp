#include "UserSelectionWidget.h"

UUserSelectionWidget::UUserSelectionWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->bIsFocusable = true;
    this->ClickedSound = NULL;
    this->WrongClickedSound = NULL;
}






void UUserSelectionWidget::FadedOut() {
}


