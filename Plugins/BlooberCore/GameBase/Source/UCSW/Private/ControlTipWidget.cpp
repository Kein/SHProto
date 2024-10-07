#include "ControlTipWidget.h"

UControlTipWidget::UControlTipWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->Key_rtx = NULL;
    this->Description_txt = NULL;
    this->KeyTagText = TEXT("<twb id=\"key\">");
    this->SeparatorText = TEXT(", ");
}



