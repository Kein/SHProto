#include "SHAskQuitDialogWidget.h"

USHAskQuitDialogWidget::USHAskQuitDialogWidget() {
    this->AcceptKeys.AddDefaulted(2);
    this->DeclineKeys.AddDefaulted(2);
    this->CancelKeys.AddDefaulted(2);
    this->Info_txt = NULL;
    this->bIsExitGame = true;
}


