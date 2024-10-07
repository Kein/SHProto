#include "ActionKeysViewWidget.h"

UActionKeysViewWidget::UActionKeysViewWidget() {
    this->bPCKeysOnly = false;
    this->bGamepadKeysOnly = false;
    this->bShowSingleKey = false;
    this->bPlus1stForAxis = false;
    this->NoKeysText = FText::FromString(TEXT("-unbinded-"));
}



