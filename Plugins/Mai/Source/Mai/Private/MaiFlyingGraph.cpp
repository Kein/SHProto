#include "MaiFlyingGraph.h"
#include "MaiFlyingGraphComponent.h"

AMaiFlyingGraph::AMaiFlyingGraph(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UMaiFlyingGraphComponent>(TEXT("FlyingGraph"));
    this->_FlyingGraph = (UMaiFlyingGraphComponent*)RootComponent;
}

AMaiFlyingPoint* AMaiFlyingGraph::GetRandomPoint(const TArray<AMaiFlyingPoint*>& actionPoints) const {
    return NULL;
}

void AMaiFlyingGraph::GetPointsInRange(TArray<AMaiFlyingPoint*>& actionPoints, const FVector& Pos, float Radius) const {
}

void AMaiFlyingGraph::GetPoints(TArray<AMaiFlyingPoint*>& actionPoints) const {
}

int32 AMaiFlyingGraph::GetPointCount() const {
    return 0;
}

AMaiFlyingPoint* AMaiFlyingGraph::FindNearestPoint(const FVector& Location, float Radius, AMaiController* User) const {
    return NULL;
}


