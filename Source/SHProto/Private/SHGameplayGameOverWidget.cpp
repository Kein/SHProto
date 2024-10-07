#include "SHGameplayGameOverWidget.h"

USHGameplayGameOverWidget::USHGameplayGameOverWidget() {
    this->bIsFocusable = true;
    this->FadeIn = NULL;
    this->FadeOut = NULL;
    this->AutoReloadOnDeath = false;
    this->ShowDelayValue = 0.01f;
    this->OwnerCharacter = NULL;
}

void USHGameplayGameOverWidget::ShowInternal() {
}

void USHGameplayGameOverWidget::RequestReload() {
}



