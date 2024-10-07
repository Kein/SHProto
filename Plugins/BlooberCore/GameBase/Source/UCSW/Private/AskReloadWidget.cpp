#include "AskReloadWidget.h"
#include "EAskDialogType.h"

UAskReloadWidget::UAskReloadWidget() {
    this->Type = EAskDialogType::YesNo;
    this->AcceptKeys.AddDefaulted(2);
    this->DeclineKeys.AddDefaulted(3);
    this->CancelKeys.AddDefaulted(2);
    this->Ask_Panel = NULL;
    this->MaxTimeFromStartSec = 60.00f;
}


