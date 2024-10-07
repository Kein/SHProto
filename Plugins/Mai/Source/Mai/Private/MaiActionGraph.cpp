#include "MaiActionGraph.h"
#include "MaiPointGraphComponent.h"

AMaiActionGraph::AMaiActionGraph(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UMaiPointGraphComponent>(TEXT("pointGraph"));
    this->_PointGraph = (UMaiPointGraphComponent*)RootComponent;
}

void AMaiActionGraph::GetSequenceActionPoints(TArray<AMaiActionPoint*>& actionPoints, FName sequenceTag) const {
}

AMaiActionPoint* AMaiActionGraph::GetNextActionPoint(AMaiActionPoint* ap, FName sequenceTag) const {
    return NULL;
}

void AMaiActionGraph::GetActionPointsWithQuery(TArray<AMaiActionPoint*>& actionPoints, const FMaiActionPointQuery& query) const {
}

void AMaiActionGraph::GetActionPoints(TArray<AMaiActionPoint*>& actionPoints) const {
}

int32 AMaiActionGraph::GetActionPointCount() const {
    return 0;
}

AMaiActionPoint* AMaiActionGraph::FindNearestPoint(const FVector& Location) const {
    return NULL;
}


