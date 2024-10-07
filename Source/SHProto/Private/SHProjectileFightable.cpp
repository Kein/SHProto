#include "SHProjectileFightable.h"

ASHProjectileFightable::ASHProjectileFightable(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MaxAllowedHeightDelta = 50.00f;
    this->MaxAllowedDistanceToHitPoint2D = 250.00f;
}

void ASHProjectileFightable::SetDeactivated(const bool bDeactivated, const UObject* Object) {
}

bool ASHProjectileFightable::IsDeactivated() const {
    return false;
}


