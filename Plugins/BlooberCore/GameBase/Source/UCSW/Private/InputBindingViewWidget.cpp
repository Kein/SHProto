#include "InputBindingViewWidget.h"

UInputBindingViewWidget::UInputBindingViewWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->Keys_rtx = NULL;
    this->Actions_txt = NULL;
    this->KeyTagText = TEXT("<twb id=\"key\">");
    this->SeparatorText = TEXT(", ");
}


