#include "SplineMeshExActor.h"
#include "Components/SplineComponent.h"
#include "SplineMeshExComponent.h"

ASplineMeshExActor::ASplineMeshExActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USplineComponent>(TEXT("SplineComponent0"));
    this->SplineMeshExComponent = CreateDefaultSubobject<USplineMeshExComponent>(TEXT("SplineMeshExComponent0"));
    this->SplineToFollow = (USplineComponent*)RootComponent;
    this->AllowToBeMerged = true;
    this->SplineMeshExComponent->SetupAttachment(RootComponent);
}


