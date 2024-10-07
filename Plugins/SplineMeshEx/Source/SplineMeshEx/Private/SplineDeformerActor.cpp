#include "SplineDeformerActor.h"
#include "Components/SplineComponent.h"
#include "SplineDeformerComponent.h"

ASplineDeformerActor::ASplineDeformerActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USplineComponent>(TEXT("SplineComponent0"));
    this->DeformerComponent = CreateDefaultSubobject<USplineDeformerComponent>(TEXT("DeformerComponent"));
    this->SplineToFollow = (USplineComponent*)RootComponent;
    this->DeformerComponent->SetupAttachment(RootComponent);
}


