#include "NiagaraDynamicComponent.h"

UNiagaraDynamicComponent::UNiagaraDynamicComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->oldMaterial = NULL;
}

UMaterialInstanceDynamic* UNiagaraDynamicComponent::GetDynamicMaterialInstance() {
    return NULL;
}


