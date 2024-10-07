#include "BlooberAkVisualizationActor.h"
#include "Components/InstancedStaticMeshComponent.h"
#include "BlooberAkVisualizationComponent.h"

ABlooberAkVisualizationActor::ABlooberAkVisualizationActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UBlooberAkVisualizationComponent>(TEXT("VisComponent"));
    this->VisComponent = (UBlooberAkVisualizationComponent*)RootComponent;
    this->InstComponent = CreateDefaultSubobject<UInstancedStaticMeshComponent>(TEXT("InstMesh"));
    this->InstComponent->SetupAttachment(RootComponent);
}


