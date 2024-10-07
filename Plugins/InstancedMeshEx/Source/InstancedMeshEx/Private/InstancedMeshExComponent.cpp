#include "InstancedMeshExComponent.h"

UInstancedMeshExComponent::UInstancedMeshExComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAutoActivate = true;
    this->bUseAsOccluder = false;
    this->CastShadow = false;
    this->MaterialOverride = NULL;
    this->Shape = NULL;
    this->NumberOfInstances = 0;
}

UMaterialInstanceDynamic* UInstancedMeshExComponent::GetDynamicMaterial() {
    return NULL;
}


