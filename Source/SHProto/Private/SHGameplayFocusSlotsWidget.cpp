#include "SHGameplayFocusSlotsWidget.h"

USHGameplayFocusSlotsWidget::USHGameplayFocusSlotsWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->MainCanvas = NULL;
    this->InputThrottleAcceleration = 1.00f;
    this->OwnerWidget = NULL;
}


