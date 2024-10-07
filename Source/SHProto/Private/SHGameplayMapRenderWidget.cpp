#include "SHGameplayMapRenderWidget.h"

USHGameplayMapRenderWidget::USHGameplayMapRenderWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->MapsWidgetSwitcher = NULL;
    this->MapScaleBox = NULL;
    this->LocalizedFont = NULL;
    this->OwnerCharacter = NULL;
    this->CurrentMapWidget = NULL;
}



