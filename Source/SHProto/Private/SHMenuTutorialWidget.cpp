#include "SHMenuTutorialWidget.h"

USHMenuTutorialWidget::USHMenuTutorialWidget() {
    this->bIsFocusable = true;
    this->BackKeys.AddDefaulted(2);
    this->KeyTagText = TEXT("<twb id=\"key\">");
    this->SeparatorText = TEXT(", ");
    this->Healing_but = NULL;
    this->HealingAmount_but = NULL;
    this->Traversal_but = NULL;
    this->Window_but = NULL;
    this->Melee_but = NULL;
    this->RangedWeapons_but = NULL;
    this->Radio_but = NULL;
    this->Map_but = NULL;
    this->Healing_rtx = NULL;
    this->HealingAmount_rtx = NULL;
    this->Traversal_rtx = NULL;
    this->Window_rtx = NULL;
    this->Melee_rtx = NULL;
    this->RangedWeapons_rtx = NULL;
    this->Radio_rtx = NULL;
    this->Map_rtx = NULL;
}

void USHMenuTutorialWidget::Show() {
}



void USHMenuTutorialWidget::Hide() {
}


void USHMenuTutorialWidget::Back() {
}


