#include "MaiPointGraphComponent.h"

UMaiPointGraphComponent::UMaiPointGraphComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->_SequenceConverted = false;
    this->_Indoor = true;
}

AMaiActionPoint* UMaiPointGraphComponent::GetRandomActionPoint() const {
    return NULL;
}

void UMaiPointGraphComponent::GetActionPointsWithQuery(TArray<AMaiActionPoint*>& actionPoints, const FMaiActionPointQuery& query) const {
}

void UMaiPointGraphComponent::GetActionPoints(TArray<AMaiActionPoint*>& actionPoints, FName withTag) const {
}

int32 UMaiPointGraphComponent::GetActionPointCount() const {
    return 0;
}

AMaiActionPoint* UMaiPointGraphComponent::FindNearestPoint(const FVector& Location) const {
    return NULL;
}


