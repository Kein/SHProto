#include "SHAIAction_Sync.h"

USHAIAction_Sync::USHAIAction_Sync() {
    this->_HideWeapon = false;
    this->_HardLockTokens = true;
    this->_ReleaseOtherOnFinish = false;
    this->_ChangeCamera = false;
    this->_RotationScale = 0.00f;
    this->_LookOperationZOffset = 0.00f;
    this->_LookOperationDuration = 0.00f;
    this->_BlendCameraFOV = false;
    this->_BlendCameraFOVValue = 90.00f;
}

void USHAIAction_Sync::StopCameraChange() {
}


