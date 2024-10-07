#include "SHMovementDataStruct.h"

FSHMovementDataStruct::FSHMovementDataStruct() {
    this->SpeedForward = 0.00f;
    this->SpeedSideway = 0.00f;
    this->SpeedBackward = 0.00f;
    this->ControlRotationInterpSpeed = 0.00f;
    this->AccelerationCurve = NULL;
    this->DecelerationCurve = NULL;
    this->SprintCameraShake = NULL;
}

