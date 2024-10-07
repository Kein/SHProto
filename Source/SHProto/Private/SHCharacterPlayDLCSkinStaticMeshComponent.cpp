#include "SHCharacterPlayDLCSkinStaticMeshComponent.h"

USHCharacterPlayDLCSkinStaticMeshComponent::USHCharacterPlayDLCSkinStaticMeshComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Settings = NULL;
}

bool USHCharacterPlayDLCSkinStaticMeshComponent::ShouldBeHidden() const {
    return false;
}

void USHCharacterPlayDLCSkinStaticMeshComponent::SetShouldBeHidden(const bool bInHidden, const UObject* Object) {
}


