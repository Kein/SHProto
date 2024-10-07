#include "LostPadWidget.h"
#include "EAskDialogType.h"

ULostPadWidget::ULostPadWidget() {
    this->Type = EAskDialogType::YesNo;
    this->AcceptKeys.AddDefaulted(3);
    this->DeclineKeys.AddDefaulted(2);
    this->CancelKeys.AddDefaulted(2);
    this->SwitchUser_info = NULL;
    this->Cancel_info = NULL;
}

bool ULostPadWidget::IsInfoTypeDisconnected() const {
    return false;
}


