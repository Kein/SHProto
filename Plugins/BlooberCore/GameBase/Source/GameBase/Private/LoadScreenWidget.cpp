#include "LoadScreenWidget.h"

ULoadScreenWidget::ULoadScreenWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->bIsFocusable = true;
    this->WaitForInput = true;
}

void ULoadScreenWidget::ReadyForPlay() {
}





void ULoadScreenWidget::OnFadedOut() {
}


