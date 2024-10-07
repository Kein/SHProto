#include "UCADebugWidget.h"

UUCADebugWidget::UUCADebugWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->CounterItemWidgetClass = NULL;
    this->AchvItemWidgetClass = NULL;
    this->List_panel = NULL;
}


FText UUCADebugWidget::GetOnlineSystemInfo() const {
    return FText::GetEmpty();
}


