#include "AtmosphereVCloudsActor.h"
#include "Components/BoxComponent.h"
#include "Components/SceneComponent.h"
#include "Components/SplineComponent.h"

AAtmosphereVCloudsActor::AAtmosphereVCloudsActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    this->SplineComponent = CreateDefaultSubobject<USplineComponent>(TEXT("Spline"));
    this->BoxComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("Shape"));
    this->Volume = NULL;
    this->Density = 100.00f;
    this->OrientToSpline = true;
    this->AnimationSpeed = 1.00f;
    this->LoopAnimation = true;
    this->SequencerTime = -1.00f;
    this->BoxComponent->SetupAttachment(RootComponent);
    this->SplineComponent->SetupAttachment(RootComponent);
}


