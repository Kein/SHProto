#include "AnimatedProceduralMeshComponent.h"

UAnimatedProceduralMeshComponent::UAnimatedProceduralMeshComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAutoActivate = true;
    this->bUseAsOccluder = false;
    this->CastShadow = false;
    this->MaterialOverride = NULL;
    this->AutoFrame = true;
    this->AutoFrameFPS = 30.00f;
    this->AnimationFrame = 0.00f;
}

void UAnimatedProceduralMeshComponent::ImportMeshes() {
}

UMaterialInstanceDynamic* UAnimatedProceduralMeshComponent::GetDynamicMaterial() {
    return NULL;
}


