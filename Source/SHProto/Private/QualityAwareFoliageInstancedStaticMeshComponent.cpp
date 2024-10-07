#include "QualityAwareFoliageInstancedStaticMeshComponent.h"

UQualityAwareFoliageInstancedStaticMeshComponent::UQualityAwareFoliageInstancedStaticMeshComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ShadowsSignificance = ELightSignificanceLevel::Critical;
}


