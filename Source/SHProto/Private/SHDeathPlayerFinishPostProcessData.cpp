#include "SHDeathPlayerFinishPostProcessData.h"

FSHDeathPlayerFinishPostProcessData::FSHDeathPlayerFinishPostProcessData() {
    this->bUseFinishPostProcess = false;
    this->PostProcessAnimationLength = 0.00f;
    this->PostProcessAnimationHoldTime = 0.00f;
    this->PostProcessMaterial = NULL;
    this->MaterialPropertyControlSettings = NULL;
    this->bShowGameOverScreenOnFinish = false;
}

