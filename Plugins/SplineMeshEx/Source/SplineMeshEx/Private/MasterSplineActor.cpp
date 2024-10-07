#include "MasterSplineActor.h"
#include "Components/SplineComponent.h"

AMasterSplineActor::AMasterSplineActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USplineComponent>(TEXT("SplineComponent0"));
    this->MasterSpline = (USplineComponent*)RootComponent;
    this->UpdateChildsTangents = false;
}


