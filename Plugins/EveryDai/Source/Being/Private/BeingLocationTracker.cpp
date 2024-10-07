#include "BeingLocationTracker.h"

UBeingLocationTracker::UBeingLocationTracker(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->_LocationCountLimit = 20;
    this->_LocationDistance = 50.00f;
}

TArray<FVector> UBeingLocationTracker::GetLocationHistory() const {
    return TArray<FVector>();
}


