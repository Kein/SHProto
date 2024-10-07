#include "SHBlenderBase.h"

USHBlenderBase::USHBlenderBase() {
    this->Requester = NULL;
    this->BlendInAlphaCurve = NULL;
    this->BlendOutAlphaCurve = NULL;
}

bool USHBlenderBase::IsBlendingInEnabled() const {
    return false;
}

float USHBlenderBase::GetBlendAlpha() const {
    return 0.0f;
}


