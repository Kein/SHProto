#include "SHPukePuddleBase.h"

ASHPukePuddleBase::ASHPukePuddleBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->_CloseDistDecalFactor = 3.00f;
    this->_ActivePhaseDuration = 10.00f;
    this->_DeactivatePhaseDuration = 30.00f;
    this->_StaticDecalMaterial = NULL;
}



float ASHPukePuddleBase::GetPuddleRadius() const {
    return 0.0f;
}


