#include "SHBoatMovementProcessor.h"

USHBoatMovementProcessor::USHBoatMovementProcessor() {
    this->bRootMotionMovementOnlyXY = true;
    this->bRootMotionRotationOnlyYaw = true;
    this->RootMotionMovementScale = 1.00f;
    this->RootMotionRotationScale = 1.00f;
    this->MovementDragFactor = 0.00f;
    this->RotationDragValue = 7.50f;
    this->bPrintDebug = false;
}


