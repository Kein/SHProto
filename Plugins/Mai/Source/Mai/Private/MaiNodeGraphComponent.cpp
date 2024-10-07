#include "MaiNodeGraphComponent.h"

UMaiNodeGraphComponent::UMaiNodeGraphComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->_Height = 24.00f;
    this->_Radius = 12.00f;
    this->_MaxDist = 4000.00f;
    this->_MaxConnectionsCount = 5;
    this->_CollisionChannel = ECC_Visibility;
}

void UMaiNodeGraphComponent::RegenerateGraph() {
}

void UMaiNodeGraphComponent::GetNodesInRange(TArray<FMaiNodeRef>& nodesList, const FVector& Pos, float Radius) const {
}

void UMaiNodeGraphComponent::GetAllNodes(TArray<FMaiNodeRef>& nodesList) const {
}

UMaiPathNodeComponent* UMaiNodeGraphComponent::FindNearestNode(const FVector& Location) const {
    return NULL;
}


