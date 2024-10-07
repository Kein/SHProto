#include "PhysicalAnimationBlender.h"

FPhysicalAnimationBlender::FPhysicalAnimationBlender() {
    this->PhysicWeightCurrent = 0.00f;
    this->PhysicWeightTarget = 0.00f;
    this->PhysicWeightSpeed = 0.00f;
    this->CurveTime = 0.00f;
    this->BlendToCurve = 0.00f;
    this->BlendToCurveSpeed = 0.00f;
}

