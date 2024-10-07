#include "SaveSlotsListWidget.h"

USaveSlotsListWidget::USaveSlotsListWidget() {
    this->bSaveMode = false;
    this->bSaveModeNoAuto = false;
    this->bCustomSaveMethod = false;
    this->bAutoIsFocusable = false;
    this->bSortByDate = true;
    this->BackKeys.AddDefaulted(2);
    this->bAllowDelete = false;
    this->DeleteKeys.AddDefaulted(3);
    this->Slots_lv = NULL;
    this->SShot_img = NULL;
    this->ShowAsk_anim = NULL;
    this->ShowSaved_anim = NULL;
    this->ShowAskDelete_anim = NULL;
    this->ShowDeleted_anim = NULL;
}

void USaveSlotsListWidget::Override() {
}






void USaveSlotsListWidget::Delete() {
}

void USaveSlotsListWidget::Cancel() {
}




