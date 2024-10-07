#include "MaiSplineActor.h"
#include "Components/SplineComponent.h"

AMaiSplineActor::AMaiSplineActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USplineComponent>(TEXT("SplineComponent"));
    this->Spline = (USplineComponent*)RootComponent;
    this->_DistanceThreshold = 3.00f;
    this->_MaxIterations = 15;
}

FVector AMaiSplineActor::ProjectOnSpline(FVector Location) const {
    return FVector{};
}


