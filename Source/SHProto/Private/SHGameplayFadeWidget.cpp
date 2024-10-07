#include "SHGameplayFadeWidget.h"

USHGameplayFadeWidget::USHGameplayFadeWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->DefaultFadeInDurationSeconds = 1.00f;
    this->DefaultFadeOutDurationSeconds = 1.00f;
}

FLinearColor USHGameplayFadeWidget::GetCurrentColor() const {
    return FLinearColor{};
}



