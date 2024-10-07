#include "PlaneSideDetectionComponent.h"

UPlaneSideDetectionComponent::UPlaneSideDetectionComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

ESHDetectionSide UPlaneSideDetectionComponent::CalculateSide(const ESHDetectionPlaneType Plane, const FVector& Location) const {
    return ESHDetectionSide::Above;
}


