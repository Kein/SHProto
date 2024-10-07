#include "SHFogCutoutActor.h"
#include "Components/SceneComponent.h"

ASHFogCutoutActor::ASHFogCutoutActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    this->CutoutStencilNumber = 0;
    this->Opacity = 1.00f;
    this->EdgeFade = 50.00f;
}

void ASHFogCutoutActor::SetEnabled(const UObject* Enabler, bool InEnabled) {
}


