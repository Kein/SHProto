#include "MaiAreaComponent.h"

UMaiAreaComponent::UMaiAreaComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

bool UMaiAreaComponent::IsInArea(FVector Location, float Extent) const {
    return false;
}

FVector UMaiAreaComponent::GetRandomPoint(float Extent) const {
    return FVector{};
}

EMaiShapeType UMaiAreaComponent::GetAreaShape(FVector& Extents) {
    return EMaiShapeType::None;
}


