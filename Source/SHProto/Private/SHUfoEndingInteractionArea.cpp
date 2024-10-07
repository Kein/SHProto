#include "SHUfoEndingInteractionArea.h"
#include "Components/SceneComponent.h"

ASHUfoEndingInteractionArea::ASHUfoEndingInteractionArea(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    this->InteractionContext = ESHUfoEndingInteraction::Undefined;
}

void ASHUfoEndingInteractionArea::SetEnabled(const UObject* Enabler, bool InEnabled) {
}

bool ASHUfoEndingInteractionArea::IsCompleted() {
    return false;
}


