#include "InputBindingOptionWidget.h"

UInputBindingOptionWidget::UInputBindingOptionWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->bIsFocusable = true;
    this->bIs1stColumnPCOnly = true;
    this->bIs2ndColumnPCOnly = true;
    this->bIs3rdColumnPCOnly = false;
    this->Value_wdg = NULL;
    this->Value1_wdg = NULL;
    this->Value2_wdg = NULL;
    this->Toggle_ckb = NULL;
    this->Label_wdg = NULL;
    this->Conflict_img = NULL;
    this->bUseTag = true;
    this->bUseKeyTag = false;
}




