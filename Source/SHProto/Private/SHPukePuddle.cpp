#include "SHPukePuddle.h"

ASHPukePuddle::ASHPukePuddle(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->_SmokeDensity = 1.00f;
    this->_CloseDistFactor = 1.95f;
    this->_Damage = 5.00f;
}

bool ASHPukePuddle::IsPuddleDamageActive() const {
    return false;
}



