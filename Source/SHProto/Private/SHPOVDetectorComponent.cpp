#include "SHPOVDetectorComponent.h"

USHPOVDetectorComponent::USHPOVDetectorComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DrawLineDebug = false;
    this->DrawProximityDebug = false;
    this->AngleThreshold = 3.50f;
    this->ProximityThreshold = 5.00f;
}

void USHPOVDetectorComponent::SetProximityPoints(const USceneComponent* Point0, const USceneComponent* Point1) {
}

void USHPOVDetectorComponent::SetManyProximityPoints(const TArray<USceneComponent*>& NewPoints) {
}

void USHPOVDetectorComponent::SetLinePoints(const USceneComponent* Point0, const USceneComponent* Point1, const USceneComponent* Point2) {
}

bool USHPOVDetectorComponent::ArePointsAligned() const {
    return false;
}


