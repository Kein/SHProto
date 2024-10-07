#include "SHBuoyancyMimicComponent.h"

USHBuoyancyMimicComponent::USHBuoyancyMimicComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RotationScale = 1.00f;
    this->DisplacementScale = 1.00f;
    this->bEnableDebug = false;
}

void USHBuoyancyMimicComponent::Initialize(USceneComponent* InManagedComp) {
}


