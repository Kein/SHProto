#include "SHCameraDataStruct.h"

FSHCameraDataStruct::FSHCameraDataStruct() {
    this->ArmLengthFromPitchCurve = NULL;
    this->SocketOffsetFromPitchCurve = NULL;
    this->TargetOffsetExtraHeightFromPitchScale = 0.00f;
    this->MovementForwardCameraLag = 0.00f;
    this->MovementNonForwardCameraLag = 0.00f;
    this->RotationLag = 0.00f;
}

