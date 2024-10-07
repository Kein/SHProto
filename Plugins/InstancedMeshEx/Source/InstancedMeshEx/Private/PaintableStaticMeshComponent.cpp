#include "PaintableStaticMeshComponent.h"

UPaintableStaticMeshComponent::UPaintableStaticMeshComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ClearAtBeginPlay = false;
}

void UPaintableStaticMeshComponent::PaintSphere(FVector SphereCenter, float SphereRadius, FColor PaintColor, float AlphaMultiplier, float FalloffExponent, bool AdditivePainting) {
}

void UPaintableStaticMeshComponent::ClearPainting(FColor PaintColor, float AlphaMultiplier) {
}


