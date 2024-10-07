#include "MaiFlyingGraphComponent.h"

UMaiFlyingGraphComponent::UMaiFlyingGraphComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->_Height = 24.00f;
    this->_Radius = 12.00f;
    this->_MaxDist = 5000.00f;
    this->_MaxConnectionsCount = 5;
}

AMaiFlyingPoint* UMaiFlyingGraphComponent::GetRandomPoint() const {
    return NULL;
}

void UMaiFlyingGraphComponent::GetPointsInRange(TArray<AMaiFlyingPoint*>& actionPoints, const FVector& Pos, float Radius) const {
}

void UMaiFlyingGraphComponent::GetPoints(TArray<AMaiFlyingPoint*>& actionPoints) const {
}

int32 UMaiFlyingGraphComponent::GetPointCount() const {
    return 0;
}

AMaiFlyingPoint* UMaiFlyingGraphComponent::FindNearestPoint(const FVector& Location) const {
    return NULL;
}


