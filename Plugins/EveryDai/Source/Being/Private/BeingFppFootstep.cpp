#include "BeingFppFootstep.h"

ABeingFppFootstep::ABeingFppFootstep(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->_PitchOffsetMul = 0.00f;
    this->_PitchBackOffsetMul = 0.00f;
    this->_VelocityOffsetMul = 0.00f;
    this->_MinVelocity = 8.00f;
}


