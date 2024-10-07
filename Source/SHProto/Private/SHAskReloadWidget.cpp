#include "SHAskReloadWidget.h"

USHAskReloadWidget::USHAskReloadWidget() {
    this->AcceptKeys.AddDefaulted(2);
    this->DeclineKeys.AddDefaulted(3);
    this->CancelKeys.AddDefaulted(2);
    this->Info_txt = NULL;
}


