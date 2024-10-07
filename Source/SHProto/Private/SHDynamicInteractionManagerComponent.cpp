#include "SHDynamicInteractionManagerComponent.h"
#include "Templates/SubclassOf.h"

USHDynamicInteractionManagerComponent::USHDynamicInteractionManagerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SpawnedInteractionExe = NULL;
}

ASHDynamicInteractionExecutive* USHDynamicInteractionManagerComponent::SpawnInteractionExecutive(TSubclassOf<ASHDynamicInteractionExecutive> InteractionExeClass) {
    return NULL;
}

ASHDynamicInteractionExecutive* USHDynamicInteractionManagerComponent::GetSpawnedInteractionExecutive() const {
    return NULL;
}

void USHDynamicInteractionManagerComponent::DestroySpawnedInteractionExecutive() {
}


