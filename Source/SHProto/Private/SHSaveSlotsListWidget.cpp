#include "SHSaveSlotsListWidget.h"

USHSaveSlotsListWidget::USHSaveSlotsListWidget() {
    this->DeleteKeys.AddDefaulted(3);
    this->Ask_Panel = NULL;
    this->SavePointInfos = NULL;
    this->bInAskPanelConfirmOnSaveKey = false;
}


void USHSaveSlotsListWidget::Filter(ESavePointFilterId FilterId) const {
}


