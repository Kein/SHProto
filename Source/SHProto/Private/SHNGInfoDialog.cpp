#include "SHNGInfoDialog.h"
#include "EAskDialogType.h"

USHNGInfoDialog::USHNGInfoDialog() {
    this->Type = EAskDialogType::Message;
    this->AcceptKeys.AddDefaulted(2);
    this->DeclineKeys.AddDefaulted(2);
    this->CancelKeys.AddDefaulted(2);
}


