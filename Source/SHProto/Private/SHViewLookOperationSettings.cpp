#include "SHViewLookOperationSettings.h"

FSHViewLookOperationSettings::FSHViewLookOperationSettings() {
    this->bIsSoftOperation = false;
    this->SoftOperationBreakValue = 0.00f;
    this->bIsDynamicRotation = false;
    this->YawAngleOffset = 0.00f;
    this->bIsSecuredOperation = false;
    this->EaseCurve = NULL;
}

