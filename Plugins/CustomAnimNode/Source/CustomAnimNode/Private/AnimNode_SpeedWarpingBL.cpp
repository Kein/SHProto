#include "AnimNode_SpeedWarpingBL.h"

FAnimNode_SpeedWarpingBL::FAnimNode_SpeedWarpingBL() {
    this->SpeedWarpingAxisMode = EIKFootRootLocalAxis::NONE;
    this->SpeedScaling = 0.00f;
    this->PelvisAdjustmentAlpha = 0.00f;
    this->MaxIter = 0.00f;
    this->ClampIKUsingFKLeg = false;
}

