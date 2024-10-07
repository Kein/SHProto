#include "AnimatedProceduralMeshActor.h"
#include "AnimatedProceduralMeshComponent.h"

AAnimatedProceduralMeshActor::AAnimatedProceduralMeshActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UAnimatedProceduralMeshComponent>(TEXT("AnimatedProceduralMeshComponent0"));
    this->AnimatedProceduralMesh = (UAnimatedProceduralMeshComponent*)RootComponent;
}

void AAnimatedProceduralMeshActor::ImportMeshes() {
}


